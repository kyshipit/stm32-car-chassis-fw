# STM32 Mobile Robot Chassis Firmware

FreeRTOS-based STM32 firmware for differential mobile robot chassis.

## Features
- Motor PWM drive and speed control
- Quadrature encoder reading for odometry
- Serial port communication with upper computer
- IMU data acquisition
- Multi-task scheduling by FreeRTOS
- Designed to work with ROS/ROS2 upper layer

## Build
1. Use Keil MDK to open the project file `rosmaster.uvprojx`
2. Select target chip and compile
3. Get compiled firmware `.hex` / `.bin` from `output/` folder
4. Flash binary to STM32 MCU

## Communication Protocol
Serial port used for data exchange between STM32 and upper computer.
- Receive velocity command from upper PC
- Publish encoder odometry and IMU feedback

## Project Structure
```
├── CMSIS              # ARM CMSIS core library
├── FreeRTOS           # Real-time operating system
├── FWlib              # STM32 peripheral library
├── Source             # Application source code
├── output             # Compiled firmware output
└── rosmaster.uvprojx  # Keil MDK project
```

## License
This project is for personal learning purpose.
