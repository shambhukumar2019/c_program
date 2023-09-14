# edit the FILE name as per your c program file
FILE = matrix_rc_sum
CC = gcc
C_FLAGS = -o -Wall

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf
