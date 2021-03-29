IDIR =include/
CC=gcc
CFLAGS=-I$(IDIR) -Wall -Wextra -pedantic -std=c99 -O3

# Object files
ODIR=src
_OBJ = gram.o languages.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

# Libraries
LDIR =../lib
LIBS= 

# Dependencies
_DEPS = languages.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

# Make object files from their corresponding source files including their
# dependencies
$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

# Make the main executable and clean up afterwards
gram: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
	make clean
	make test

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
	rm -f ./a.out
