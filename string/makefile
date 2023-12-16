# edit the FILE name as per your c program file
FILE = word_len_str
CC = gcc
C_FLAGS = -Wall -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf *.out
