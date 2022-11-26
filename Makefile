SRC = get_next_line get_next_line_utils
CC = gcc

ALL: 
	$(CC) $(SRC)

CLEAN:
	rm -f .*