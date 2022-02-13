# Set minimum CMake version for this project
cmake_minimum_required(VERSION 3.1.0)

# Define our top-level project and its name, description and homepage
project(WinAPI
        DESCRIPTION "Collection of different WinAPI programs to demonstrate WinAPI functionalities."
        HOMEPAGE_URL "https://www.github.com/z01a/winapi"
        LANGUAGES NONE
)

# Set our CMAKE_CXX_STANDARD to use C++14
set(CMAKE_CXX_STANDARD 14)

# Force our CMAKE_CXX_STANDARD to be required for this project
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectory for our MessageBox project
add_subdirectory(MessageBox)

# Add subdirectory for our SimpleWindow project
add_subdirectory(SimpleWindow)