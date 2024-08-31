# ATMEGA328P-Baremetal

ATMEGA328P Baremetal project using AVR-GCC, AVRDude, a USBasp programmer, and the ATMEGA328P microcontroller on an Arduino Uno board.

---

# ATMEGA328P Baremetal Project

Welcome to the **ATMEGA328P Baremetal Project**! This project is an exploration into programming the ATMEGA328P microcontroller directly with no high-level libraries or frameworks. Leveraging AVR-GCC, AVRDude, and a USBasp programmer, we will dive deep into the world of bare-metal programming.

**Note:** This project is designed for those interested in understanding the low-level workings of microcontrollers and hands-on programming without abstractions.

## 📜 Project Overview

This project uses the ATMEGA328P microcontroller, found on the Arduino Uno, for bare-metal programming. We utilize the AVR-GCC toolchain for compiling code and AVRDude for programming the microcontroller via a USBasp programmer.

### Why Bare-metal?

- **Learn Low-level Programming**: Understand how microcontrollers work at the hardware level.
- **Fine-tuned Performance**: Achieve optimized performance with direct hardware access.
- **No Abstractions**: Get hands-on experience without Arduino libraries or frameworks.

## 🛠️ Setup Instructions

### 1. **Hardware Requirements**

- **ATMEGA328P Microcontroller**: The same chip used in Arduino Uno.
- **USBasp Programmer**: For flashing the microcontroller.
- **Arduino Uno Board**: To house the ATMEGA328P (if you are not using it as an Arduino).
- **Breadboard and Jumper Wires**: For connections (if necessary).

### 2. **Software Requirements**

- **AVR-GCC**: The GNU Compiler Collection for AVR microcontrollers.
- **AVRDude**: A utility for programming AVR microcontrollers.
- **Make**: Recommended for automating builds.

### 3. **Install Tools**

- **AVR-GCC**: Install via your package manager or from [AVR Toolchain](https://www.microchip.com/en-us/tools-resources/develop/microchip-studio/gcc-compilers).

  ```bash
  sudo apt-get install avr-gcc avr-libc
  ```

- **AVRDude**: Install via Arduino software [AVRDude](https://www.arduino.cc/en/software).

  ```bash
  sudo apt-get install avrdude
  ```

- **USBasp Driver**: Make sure you have the appropriate drivers for your USBasp programmer.

### 4. **Setup Your Environment**

1. **Connect the ATMEGA328P**: Place the ATMEGA328P on the Arduino Uno or your breadboard.
2. **Wire Up the USBasp Programmer**: Connect it to the ATMEGA328P using the appropriate pins.

### 5. **Build and Flash Your Code**

1. **Clone the Repository**

   ```bash
   git clone https://github.com/yourusername/atmega328p-baremetal.git
   cd atmega328p-baremetal
   ```

2. **Compile Your Code**

   Create a Makefile or use the provided one:

   ```bash
   make
   ```

3. **Flash the Firmware**

   Use AVRDude to upload the compiled code to the microcontroller:

   ```bash
   avrdude -c usbasp -p m328p -U flash:w:your_firmware.hex:i
   ```

   Replace `your_firmware.hex` with the path to your compiled hex file.

## 🧑‍💻 Usage

After flashing, your ATMEGA328P will be running the bare-metal firmware you’ve programmed. You can test functionality by connecting peripherals or LEDs as per your code’s requirements.

## 🔧 Example Projects

- **Blinking LED**: A simple project to blink an LED at a regular interval.
- **UART Communication**: Setting up serial communication with another device.
- **PWM Control**: Using PWM to control motor speed or LED brightness.

## 🤝 Contributing

Contributions are welcome! Please fork the repository, make your changes, and create a pull request. Ensure that your code adheres to the project’s coding standards and includes adequate documentation.

## 📜 License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

---
