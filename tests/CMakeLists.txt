Include(FetchContent)

FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG        v3.0.1 # or a later release
)

FetchContent_MakeAvailable(Catch2)

add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain caller)

#add_compile_options(--coverage)
#add_link_options(--coverage)
add_compile_options(-fprofile-arcs -ftest-coverage)
link_libraries(gcov)
