CXX := g++
SRCEXT := cpp

BINDIR := bin
SRCDIR := src
OBJDIR := obj
INCDIR := include
SRC := $(wildcard $(SRCDIR)/*.$(SRCEXT))
OBJ := $(patsubst $(SRCDIR)/%,$(OBJDIR)/%,$(SRC:.$(SRCEXT)=.o))
INC := -I $(INCDIR)
CXXFLAGS := -g -Wall -Wextra -Werror `pkg-config gtkmm-3.0 --cflags`
LDFLAGS := -L/usr/lib -Llib `pkg-config gtkmm-3.0 --libs`

TARGET = $(BINDIR)/clock.app

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
