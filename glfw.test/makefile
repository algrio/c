APP_NAME = test.out
BUILD_DIR = .
C_FILES = test.c

APP_DEFINES :=
APP_INCLUDES := -I./include/GLFW -framework Cocoa -framework OpenGL -framework IOKit
APP_LINKERS := -L./lib-arm64 -lglfw3

build:
	clang $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES) $(APP_LINKERS)
#	gcc $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES) $(APP_LINKERS)
#	gcc-13 $(C_FILES) -o $(BUILD_DIR)/$(APP_NAME) $(APP_INCLUDES) $(APP_LINKERS)