# Reference0: https://makefiletutorial.com/#makefile-cookbook
# Reference1: http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
# Reference2: https://hiltmon.com/blog/2013/07/03/a-simple-c-plus-plus-project-structure/ 
# Reference3: http://www.partow.net/programming/makefile/index.html
# Reference4: https://www.gnu.org/software/make/manual/make.html#toc-Overview-of-make

SRCEXT := cpp

BINDIR := bin
SRCDIR := src
OBJDIR := obj
INCDIR := include
SRC := $(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJ := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRC:.$(SRCEXT)=.o))
INC := -I $(INCDIR)
LIBS := -L/usr/lib -Llib 
CXXFLAGS := -g -Wall -Wextra -Werror `pkg-config gtkmm-3.0 --cflags`
LDFLAGS := `pkg-config gtkmm-3.0 --libs`

TARGET = $(BINDIR)/hello-world.app

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $^ $(LIBS) $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@ 

clean:
	-@rm -rvf $(OBJDIR)
	-@rm -rvf $(TARGET)

.PHONY: clean
