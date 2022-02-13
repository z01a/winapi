# Create SimpleWindow project that will use CXX as project language
project(SimpleWindow LANGUAGES CXX)

# Adding SimpleWindow executable with WIN32 option
add_executable(SimpleWindow WIN32)

# Adding PRIVATE include files for SimpleWindow target
target_include_directories(SimpleWindow 
        PRIVATE 
                "${PROJECT_SOURCE_DIR}/include"
)

# Adding PRIVATE source files for SimpleWindow target
target_sources(SimpleWindow
        PRIVATE
                "${PROJECT_SOURCE_DIR}/src/Main.cpp"
)