cmake_minimum_required(VERSION 3.22.3)

project(solitaire)

add_subdirectory(src)
add_subdirectory(ext/raylib)

target_include_directories(${PROJECT_NAME} PUBLIC ext/raylib/src)

target_link_directories(${PROJECT_NAME} 
    PRIVATE ext/raylib/raylib
)

target_link_libraries(${PROJECT_NAME}
    raylib
)