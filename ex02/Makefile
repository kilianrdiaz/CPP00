# Variables
NAME        := account_test
CXX         := c++
CXXFLAGS    := -Wall -Wextra -Werror -std=c++98 -Iinc

SRC_DIR     := src
OBJ_DIR     := obj
INC_DIR     := inc

SRCS        := $(SRC_DIR)/Account.cpp $(SRC_DIR)/tests.cpp
OBJS        := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS        := $(OBJS:.o=.d)

# All Target
all: $(NAME)

# Linking
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compiling with dependency generation
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Create obj directory if it doesn't exist
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Clean object files and obj folder
clean:
	rm -rf $(OBJ_DIR)

# Full clean
fclean: clean
	rm -f $(NAME)

# Rebuild
re: fclean all

# Include dependencies (optional; won't fail if missing)
-include $(DEPS)

# Phony targets
.PHONY: all clean fclean re