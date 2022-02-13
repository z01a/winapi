# Create MessageBox project that will use CXX as project language
project(MessageBox LANGUAGES CXX)

# Adding MessageBox executable with WIN32 option
add_executable(MessageBox WIN32)

# Adding PRIVATE include files for MessageBox target
target_include_directories(MessageBox 
        PRIVATE 
                "${PROJECT_SOURCE_DIR}/include"
)

# Adding PRIVATE source files for MessageBox target
target_sources(MessageBox
        PRIVATE
                "${PROJECT_SOURCE_DIR}/src/Main.cpp"
)