# C compiler
CC = gcc


# CCOPTS and CFLAGS is similar (maybe...)
# CFLAGS is more generally used
# Option : -Wall (print most compiler warnings)
#          -g (add debuging information)
#          -std=c11 (use c11 standard)
CFLAGS = -g -Wall -std=c11


# LIBS = link external library
# SRCS = specify source iles to compile


# build target
TARGET = primenum_recursive

# set default target
all: $(TARGET)


# automize compile
$(TARGET): $(TARGET).c
	     $(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c


# Clean up directory (rm executable fils, .o object)
# $(RM) and rm -f is similar (maybe...)
# $(RM) is more generally used
# $(TARGETS) : last compiled file
# *.o : all object file created during build process
clean:
	rm - $(TARGET)
