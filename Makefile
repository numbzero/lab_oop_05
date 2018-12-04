CC = g++

CCFLAGS = -Wall -Wextra -Werror

CLEAN = rm

CLEAN_FLAGS = -f

SRC = main.cpp \
	  program_errors.cpp \
	  rule_1.cpp \
	  rule_2.cpp \
	  rule_3.cpp \
	  rule_4.cpp

OBJ = main.o \
	  program_errors.o \
	  rule_1.o \
	  rule_2.o \
	  rule_3.o \
	  rule_4.o

NAME = test

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CCFLAGS) $^ -o $@

$(OBJ): $(SRC)
	$(CC) $(CCFLAGS) -c $^

re: fclean all

clean:
	$(CLEAN) $(CLEAN_FLAGS) $(OBJ)
	$(CLEAN) $(CLEAN_FLAGS) *~

fclean: clean
	$(CLEAN) $(CLEAN_FLAGS) $(NAME)