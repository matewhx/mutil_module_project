project(planing_main)

add_subdirectory(pnc_map)
add_subdirectory(process)

add_executable(${PROJECT_NAME} planing_main.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${PROCESS_DIR}
)

# 指定要链接的库
target_link_libraries(${PROJECT_NAME}
PUBLIC
process
)
