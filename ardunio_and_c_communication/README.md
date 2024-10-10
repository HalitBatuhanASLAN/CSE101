                                        GTU Arduino Lab - C and Arduino Communication Project

This project demonstrates serial communication between a C program running on a PC and an Arduino. The PC program communicates with the Arduino to perform various tasks, including controlling LEDs, computing factorials, and reading button presses.

                                        Project Overview

The task is to implement a C program that interacts with an Arduino board over a serial connection. The program allows the user to select options from a menu to control the Arduino, which responds accordingly.

                                        Menu Features

(1) Turn on the LED on Arduino: Sends a command to Arduino to turn on the onboard LED.

(2) Turn off the LED on Arduino: Sends a command to Arduino to turn off the onboard LED.

(3) Flash Arduino LED 5 times: Sends a command to flash the onboard LED 5 times.

(4) Send a number to Arduino to compute the factorial: The user inputs a number, and Arduino computes the factorial, returning the result to the PC.

(5) Button press counter: Tracks the number of times a button connected to the Arduino is pressed and displays it on the PC.

(6) Turn on external LED: Controls an external LED connected to the Arduino.

Bonus Features:

Button press counter: This feature requires hardware integration with a button that is connected to a digital input pin on the Arduino.

                                    How It Works   
    C Program (PC Side):

The C program running on the PC presents a menu to the user. Based on the selected option, the program sends a corresponding command to the Arduino via a serial connection. The program is written using standard libraries (<stdio.h>, <windows.h>, and <stdlib.h>) for serial communication on Windows.

Key components include:

Serial Communication Setup: The program opens a COM port (COM3 by default) to communicate with the Arduino.

Menu Handling: The user can select from multiple actions, which are then sent as commands to the Arduino.

Error Handling: The program provides feedback on the success or failure of the communication process.

Factorial Computation: When the user selects option 4, they can send a number to the Arduino, which calculates the factorial and sends it back to the PC for display.

    Arduino Program:
The Arduino program listens for commands from the PC via the serial interface. Based on the received command, it performs the corresponding action, such as controlling LEDs or computing factorials.

Key components include:

Command Handling: The Arduino listens for numeric commands from the PC and executes predefined tasks based on the received value.

Factorial Calculation: Arduino computes the factorial of a number received from the PC and sends the result back.

Button Press Counter: For the bonus feature, the Arduino monitors a button press, increments a counter, and sends the count to the PC.
