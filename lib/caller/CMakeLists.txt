set(SOURCE_LIB_CLR caller.cpp)

add_library(caller STATIC ${SOURCE_LIB_CLR})
target_include_directories(caller PUBLIC .)