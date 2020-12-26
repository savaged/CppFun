# Reference0: https://www.oreilly.com/library/view/c-cookbook/0596007612/ch01s17.html
# Reference1: https://medium.com/@eightlimbed/how-to-create-and-use-a-c-static-library-eec33d502aeb

CXX := g++
SRCEXT := cpp

BINDIR := bin
SRCDIR := src
OBJDIR := obj
INCDIR := include
SRC := $(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJ := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRC:.$(SRCEXT)=.o))
INC := -I $(INCDIR)
CXXFLAGS := -g -Wall -Wextra -Werror

TARGET = $(BINDIR)/libCircle.a

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	ar -rc $(TARGET) $^

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@ 

clean:
	-@rm -rvf $(OBJDIR)
	-@rm -rvf $(TARGET)

.PHONY: clean
