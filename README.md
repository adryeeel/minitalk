# minitalk

![C Language](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
![Ubuntu OS](https://img.shields.io/badge/Ubuntu-E95420?style=for-the-badge&logo=ubuntu&logoColor=white)

This repository houses an implementation of a minimalistic communication protocol leveraging UNIX signals to efficiently transmit messages between two processes.

Delving into the core of system-level programming, this project offers a comprehensive exploration of inter-process communication, providing a solid foundation for understanding the intricacies of UNIX systems.

This project is a fundamental part of the curriculum at 42 school, designed to strengthen your understanding in UNIX signals, inter process communication and characters enconding in C.

## Project Overview

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

This project was assigned as a ⭐ outstanding project by three 42 school peers and has received the maximum evaluation score – **125%**, including a bonus of 25 points.

![Score 125%](README/evaluation-score.png)

## Feedback and Support

If you encounter any issues or have suggestions for improving the project, please open an issue on GitHub. I'm very glad to receive feedbacks on my projects!

## License

This project is licensed under the [MIT License](LICENSE).
