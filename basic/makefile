# edit the FILE name as per your c program file
FILE = cnt_file_params
CC = gcc
C_FLAGS = -Wall -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf
