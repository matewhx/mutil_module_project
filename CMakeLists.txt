cmake_minimum_required(VERSION 3.29.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/matewhx/mutil_module_project.git"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)



#变量设置 动态库和可执行文件 可以传递给子目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(PROCESS_DIR ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${CMAKE_SOURCE_DIR}/src/pnc_map)

#添加子目录
add_subdirectory(src)