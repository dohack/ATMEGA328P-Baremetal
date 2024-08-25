# Define the microcontroller, clock frequency, and programmer
MCU = atmega328p
F_CPU = 16000000UL
PROGRAMMER = usbasp
BAUDRATE = 115200
PORT = COM3 # Adjust if necessary for your system

# Define the toolchain paths (adjust if necessary)
CC = avr-gcc
OBJCOPY = avr-objcopy
AVRDUDE = avrdude
AVRDUDE_CONF = "C:/Program Files (x86)/Arduino/hardware/tools/avr/etc/avrdude.conf"

# Define the file names
TARGET = blinky
SRC = blinky.c
OBJ = $(TARGET).o
ELF = $(TARGET).elf
HEX = $(TARGET).hex

# Define the compilation flags
CFLAGS = -mmcu=$(MCU) -DF_CPU=$(F_CPU) -Os -std=c11
LDFLAGS = -mmcu=$(MCU)

# Default target
all: $(HEX)

# Compile the source code
$(ELF): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(ELF)

# Convert ELF to HEX
$(HEX): $(ELF)
	$(OBJCOPY) -O ihex $(ELF) $(HEX)

# Upload the HEX file using avrdude
upload: $(HEX)
	$(AVRDUDE) -C $(AVRDUDE_CONF) -c $(PROGRAMMER) -p $(MCU) -P $(PORT) -b $(BAUDRATE) -U flash:w:$(HEX):i

# Clean build files
clean:
	rm -f $(OBJ) $(ELF) $(HEX)

# Phony targets
.PHONY: all clean upload
