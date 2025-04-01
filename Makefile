CPP = g++ -std=c++11 -Wall
SRCDIR = src
INCDIR = include
TESTDIR = tests
BUILDDIR = bin

# make all command
all: $(BUILDDIR)/test_help
	./$<

# make test command
test_1: $(BUILDDIR)/test_1
	./$<
test_2: $(BUILDDIR)/test_2
	./$<

# Executable files

# Object files

# Test files

# make clean command
clean:
	rm -f $(BUILDDIR)/*.o

# Create build directory if doesn't exist
$(shell mkdir -p $(BUILDDIR))
