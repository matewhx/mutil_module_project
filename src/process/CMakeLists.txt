project(process)

#添加动态库
add_library( ${PROJECT_NAME} 
SHARED
process.cpp
)

#包含目录
target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_MAP_DIR}
)

#链接依赖库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)

target_link_libraries(${PROJECT_NAME} 
PUBLIC
Eigen3::Eigen
)