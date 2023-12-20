# edit the FILE name as per your c program file
FILE = pallindrome_str
CC = gcc
C_FLAGS = -Wall -g -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf *.out
