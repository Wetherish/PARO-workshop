add_executable(${PROJECT_NAME} main.cpp ../exercise2/src/Letters_lib.cpp)
target_link_libraries (${PROJECT_NAME} PUBLIC DayOfYear)
