set(SOURCE_LIB_MENU menu.cpp)

add_library(menu STATIC ${SOURCE_LIB_MENU})
target_link_libraries(menu caller)
target_include_directories(menu PUBLIC .)