# edit the FILE name as per your c program file
FILE = emi_calc
CC = gcc
C_FLAGS = -Wall -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf
