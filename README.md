# MiniProject - Password Based Gate Unlocking System
This is a simple password based door locking system circuit designed using 8051 microcontroller. It provides control to the actuating the load. It is a simple embedded system with input from the keyboard and the output being actuated accordingly.

## Overview
This circuit operates on the principle of microcontroller interfacing. 
- A keypad interfaced to the microcontroller is used to enter the password and store it. 
- A LCD is interfaced to the microcontroller to display the status and a motor is interfaced to the microcontroller via the motor driver. The motor is rotated forward or backward, depending on the authenticity of the entered password.
- The main component in the circuit is 8051 controller. 
- In this project 4×3 keypad is used to enter the password. The password which is entered is compared with the predefined password. 
- If the entered password is correct then the system opens the door by rotating door motor and displays the status of door on LCD. 
- If the password is wrong then door is remain closed and displays “pwd is wrong” on LCD.

## Circuit and Block Diagram

![MES13](https://user-images.githubusercontent.com/87115795/205324452-3b67d3d9-12e9-4549-b0f7-3dd88333c668.JPG)  ![Screenshot (36)](https://user-images.githubusercontent.com/87115795/205324490-355d7093-e62f-485c-b124-7a9d11b72695.png)

## Circuit Design
Password based door lock circuit design uses five major components – a Microcontroller, a Relay, a DC motor, a 4×3 matrix keypad and a LCD. Here AT89C51 microcontroller is used and it is an 8-bit controller. This controller requires a supply voltage of +5V DC. In order to provide regulated 5V DC voltage to the controller we need to use 7805 power supply circuit. We can use 9V DC battery or 12V, 1A adaptor as a power source.

## Hardware Requirements

- [AT89S52 - Microchip](https://www.microchip.com/en-us/product/AT89S52)
- Programming cable
- [DC battery or 12V,1A adaptor](https://en.wikipedia.org/wiki/Electric_battery)
- [5V Relay](https://www.elprocus.com/5v-relay-module/)
- 10k, 330 Ω resistor (1/4 watt)
- [4×3 matrix keypad](https://electropeak.com/learn/interfacing-4x3-membrane-matrix-keypad-with-arduino/)
- 10uF electrolytic capacitor
- DC motor
- 33pF capacitors – 1
- 16×2 LCD
- connecting wires

## Software Requirements
- Keil compiler
- Proteus

## Advantages
- This project provides security
- Power consumption is less
- Used commonly available components
- Project is simple and easy

## Applications 
- This simple circuit can be used at residential places to ensure better safety.
- It can be used at organizations to ensure authorized access to highly secured places.
- With a slight modification this Project can be used to control the switching of loads through password.

## Limitations
- It is a low range circuit, i.e. it is not possible to operate the circuit remotely.
- If you forget the password it is not possible to open the door.



