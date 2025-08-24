CC = gcc
FLEX = flex
BISON = bison
SRC = src
INC = include
BUILD = build

LEXER = $(SRC)/parser/lexer.l
PARSER = $(SRC)/parser/parser.y
MAIN = $(SRC)/main.c
UI = $(SRC)/UI/ui.c

GTK_FLAGS = `pkg-config --cflags --libs gtk+-3.0`

all: $(BUILD)/parser.tab.c $(BUILD)/lexer.yy.c $(MAIN) $(UI)
	$(CC) -I$(INC) $(BUILD)/parser.tab.c $(BUILD)/lexer.yy.c $(MAIN) $(UI) -o $(BUILD)/main $(GTK_FLAGS)

$(BUILD)/parser.tab.c $(BUILD)/parser.tab.h: $(PARSER)
	$(BISON) -d -o $(BUILD)/parser.tab.c $(PARSER)
	cp $(BUILD)/parser.tab.h $(INC)/parser.tab.h

$(BUILD)/lexer.yy.c: $(LEXER)
	$(FLEX) -o $(BUILD)/lexer.yy.c $(LEXER)

clean:
	rm -f $(BUILD)/*
