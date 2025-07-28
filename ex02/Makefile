NAME 		= accounts_manager

CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -Iinc -MMD -MP

SRC_DIR		= src
INC_DIR 	= inc

SRC_FILES 	= tests.cpp Account.cpp
INC_FILES	= Account.hpp

all: $(NAME)

$(NAME): $(SRC_DIR)/$(SRC) $(INC_DIR)/$(INC)
	$(CXX) $(CXXFLAGS) -I$(INC_DIR) -o $@ $^

clean: 
	rm -rf $(NAME)

fclean: clean
	rm -f $(NAME)

