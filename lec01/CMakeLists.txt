project(lec01)
set(SRC_MAIN_FILES src/main/cpp/main.cpp)
add_executable(main ${SRC_MAIN_FILES})
target_include_directories(main PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include ${CMAKE_CURRENT_LIST_DIR}/src/main/cpp)
