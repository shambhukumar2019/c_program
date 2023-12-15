FILE = adv_stc_pntr
CC = gcc
C_FLAGS = -Wall

target: $(FILE).elf

$(FILE).elf: $(FILE).c
	$(CC) $(C_FLAGS) $^ -o $@

clean:
	rm -rf *.elf *.out
