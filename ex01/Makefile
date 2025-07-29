# Nombre del ejecutable
NAME        = phonebook

# Compilador y flags
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98 -Iinc -MMD -MP

# Directorios
SRC_DIR     = src
INC_DIR     = inc
OBJ_DIR     = obj

# Archivos fuente y objetos
SRCS        = $(wildcard $(SRC_DIR)/*.cpp)
OBJS        = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
DEPS        = $(OBJS:.o=.d)

# Comando para borrar archivos
RM          = rm -f

# Regla principal
all: $(NAME)

# Regla para construir el ejecutable
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compilar .cpp a .o en obj/, y generar archivos .d
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp Makefile | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crear directorio de objetos si no existe
$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

# Limpiar objetos y archivos de dependencia
clean:
	rm -rf $(OBJ_DIR)

# Limpiar todo
fclean: clean
	$(RM) $(NAME)

# Recompilar completamente
re: fclean all

# Incluir automáticamente dependencias generadas por -MMD
-include $(DEPS)

.PHONY: all clean fclean re