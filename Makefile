

#mmcu=atmega328p   cpu type
#std=gnu99         C version
#Os                highest optimisation level
#Wall              turn on all warnings
FLAGS=-mmcu=atmega328p -std=gnu99 -Wall -Os

all:
	@touch bin/monochron.hex
	@rm bin/monochron.hex
	@make bin/monochron.hex
	@echo "Done!"


bin/monochron.hex: bin/monochron.elf
	@cd bin && avr-objcopy -O ihex  -R .eeprom monochron.elf monochron.hex


bin/monochron.elf: bin/main.o bin/pacman.o
	@cd bin && avr-gcc $(FLAGS) main.o pacman.o -o monochron.elf

bin/main.o:
	@avr-gcc $(FLAGS) -c src/main.c -o bin/main.o

bin/pacman.o: src/pm-bitmaps.h
	@avr-gcc $(FLAGS) -c src/pacman.c -o bin/pacman.o

src/pm-bitmaps.h:
	@generators/pacman-bitmaps.py > src/pm-bitmaps.h


put:
	@cd bin && avrdude -c arduino -p m328p -P /dev/ttyUSB0 -b 57600 -U flash:w:monochron.hex


clean:
	@touch bin/tmp src/indented.c src/pm-bitmaps.h
	@rm bin/* src/indented.c src/pm-bitmaps.h
	@touch tmp~ && rm *~
	@cd src && touch tmp~ && rm *~
	@echo "Done!"


indent:
	@indent -npsl -npcs -brf -ce -nut -br -cbi4 -cli4 src/main.c -o src/indented.c

