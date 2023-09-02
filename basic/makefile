FILE = swap_num
#SRC = posnum
#EXECUTABLE = posnum
#OBJ_FILE = posnum.o
CC = gcc
C_FLAGS = -o

target : $(FILE).elf

$(FILE).elf : $(FILE).c
	$(CC) $(C_FLAGS) $@ $^

clean :
	rm -rf *.elf
