# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic

# Directories
BUILD_DIR = build

# Source and object files
SRCS = main.cpp Appetizer.cpp Customer.cpp Dessert.cpp Dish.cpp Entree.cpp Menu.cpp Order.cpp Restaurant.cpp
OBJS = $(SRCS:%.cpp=$(BUILD_DIR)/%.o)

# Final executable
TARGET = $(BUILD_DIR)/restaurant_app

# Default rule
all: $(TARGET)

# Create build/ directory if needed, then compile
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Link all object files
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Clean rule
clean:
	rm -rf $(BUILD_DIR)
