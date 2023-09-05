# edit the FILE name as per your c program file
FILE = string_digits_sum
CC = gcc
C_FLAGS = -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf
