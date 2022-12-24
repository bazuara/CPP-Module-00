NAME = megaphone

# Source files
SOURCE_FILES = megaphone.cpp

# Flags and output
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

# Rule to build your object files and link them into a binary
$(NAME):
	@g++ $(SOURCE_FILES) $(CFLAGS) -o $(NAME)

# Rule to remove object files
clean:
	@rm -f *.o
# Rule to remove binary, calls the 'clean' rule first
fclean: clean
	@rm -f $(NAME)
	@echo "Deleted binary $(NAME)"

# Rule to remove object files and binary, then re-build everything
re:	fclean all

# Rule to test norminette
normi:	
	@norminette $(SOURCE) $(HEADERS)

# Rule to debug, include norminette and similars
test: re
	./$(NAME) hello this is a test
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME)
