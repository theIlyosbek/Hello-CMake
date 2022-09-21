cmake_minimum_required(VERSION 3.24.2)

project(HelloWorld)

file(GLOB ALLHEADERS ${CMAKE_CURRENT_SOURCE_DIR}/*.h)
add_executable(${PROJECT_NAME} Main.cpp Log.cpp ${ALLHEADERS})

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
install(FILES Main.cpp DESTINATION src)

include(CTest)

add_test(test1 ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME})

include(CPack)