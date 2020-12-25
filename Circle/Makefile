# Reference0: https://makefiletutorial.com/#makefile-cookbook
# Reference1: http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# Reference2: https://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/ 
# Reference3: http://www.partow.net/programming/makefile/index.html

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
LDFLAGS := -L/usr/lib -Llib

TARGET = $(BINDIR)/circle.app

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@ 

clean:
	-@rm -rvf $(OBJDIR)
	-@rm -rvf $(TARGET)

.PHONY: clean
