# minitalk

![C Language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Ubuntu OS](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)

This repository houses an implementation of a minimalistic communication protocol leveraging UNIX signals to efficiently transmit messages between two processes.

Delving into the core of system-level programming, this project offers a comprehensive exploration of inter-process communication, providing a solid foundation for understanding the intricacies of UNIX systems.

This project is a fundamental part of the 42 school curriculum, designed to strengthen your students' comprehension of UNIX signals, inter-process communication, and character encoding in C.

## Project Overview

This project begins with a comprehensive exploration of UNIX signals, delving into their purpose and the techniques for both reading and sending them within C programs.

Focusing specifically on the minitalk subject, the implementation restricts signal usage to just two types: `SIGUSR1` and `SIGUSR2`, thereby streamlining the communication process for simplicity and efficiency.

To effectively transmit the message, we must encode each character of the message into its binary form and send the binary to server using the allowed UNIX signals, ensuring efficient communication and data transfer.

The process of converting characters into their binary representation involves employing bitwise operators. Each character undergoes a right-shift operation (`>>`) from its most significant bit (MSB) to the least significant bit (LSB). Subsequently, the binary undergoes a masking process to precisely extract the desired bit value. This process is done by the `ft_ctob.c` function.

After the conversion, the binary is sent to the server based on 8-bit protocol, where each eight signals encodes a character. Each bit is sent represented by either `SIGUSR1` or `SIGUSR2`, depending on its value. In my solution, `SIGUSR1` corresponds to a binary value `0`, while `SIGUSR2` represents a binary `1`. Also, to ensure smooth signal handling and prevent overwhelming on the server, a throttling technique is implemented during transmission. This process is done by the `ft_send_char.c` function.

The server, in turn, receives the binary signals and encodes them back to a character. This process is also done with bitwise operations, but this time, with left-shift (`<<`) and OR (`|`) operators. If the received signal is a binary `0`, we just left-shift our binary by one position, inserting a zero; Otherwise, we left-shift as well but also flip the inserted zero with the OR `|` operator. The function responsible for this mission is `ft_btoc.c`.

After the signal has been processed, the server sends an "OK" signal to the sender process. This "OK" signal is used to ensure that our communication is being successful. The client awaits for this signal for a certain period of time. If the server was unable to send the OK signal or the client was unable to receive it, the client stops the communication and exits with a error message.

When the server successfully receives 8 bits without encountering any errors during signal processing or encoding, it proceeds to display the corresponding character on the terminal. This iterative process continues until the entire message has been accurately printed, ensuring seamless communication of the entire content.

The communication finishes when the client transmits a null `\0` character to the server. Upon detecting this character, the server dispatches a `SIGUSR2` signal to the client, meaning the successful completion of communication and its closure. Following this acknowledgment, the server resets its internal parameters, ensuring readiness to accommodate subsequent client interactions.

## Key Features

- Support for multiple clients.

- Support for unicode characters.

- Fast transmission with 38 miliseconds per 1000 characters message.

- Error handling for wrong arguments and communication problems.

## Usage

- Clone the repository: `git clone https://github.com/adryeeel/minitalk.git`.

- Enter the directory: `cd minitalk`

- Compile the binaries: `make`

- Start the server and copy its PID: `./server`

- Send the message through the client: `./client [SERVER_PID] [MESSAGE]`

## Evaluation

This project was assigned as a ⭐ outstanding project by three 42 school peers and has been awarded the maximum evaluation score of **125%**, including a bonus of 25 points.

![Score 125%](README/evaluation-score.png)

## Feedback and Support

If you encounter any issues or have suggestions for improving the project, please open an issue on GitHub. I'm very glad to receive feedbacks on my projects!

## License

This project is licensed under the [MIT License](LICENSE).
