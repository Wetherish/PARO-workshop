add_library(Letters SHARED
  src/Letters_lib.cpp
)

target_include_directories (Letters PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


add_subdirectory(ut)
