cmake_minimum_required(VERSION 3.29.0)

project(planning
    VERSION 0.0.1
    DESCRIPTION "a demo of cmake planning"
    HOMEPAGE_URL "https://github.com/matewhx/mutil_module_project"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

#变量设置 动态库和可执行文件 可以传递给子目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(PROCESS_DIR ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_DIR ${CMAKE_SOURCE_DIR}/src/pnc_map)

#第三方库
#设置Eigen3路径
# set(Eigen3_Dir "D:/study_program/eigen-3.4.0") #Eigen3_Dir #EIGEN3_ROOT

# 手动创建Eigen3目标
# add_library(Eigen3::Eigen INTERFACE IMPORTED)
# set_target_properties(Eigen3::Eigen PROPERTIES
#     INTERFACE_INCLUDE_DIRECTORIES "${EIGEN3_ROOT}"
# )

# list(APPEND CMAKE_MODULE_PATH "${Eigen3_Dir}/cmake")
# message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")

find_package(Eigen3 3.4 REQUIRED)
if(TARGET Eigen3::Eigen)
    message(STATUS "******** Eigen3 3.4 found in ${Eigen3_Dir} **********")
endif()

#添加子目录
add_subdirectory(src)

