add_executable(LettersTests
        LettersTests.cpp)

target_link_libraries (LettersTests PUBLIC Letters gtest_main)

add_test(NAME Letters
        COMMAND LettersTests --gtest_output=xml:${CMAKE_BINARY_DIR}/junit/exercise2.junit.xml)
