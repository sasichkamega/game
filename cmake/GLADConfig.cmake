message("----- CONFIGURING GLAD -----")

add_library(glad
  ${CMAKE_CURRENT_LIST_DIR}/../third_party/glad/src/glad.c
)
add_library(glad::glad ALIAS glad)

target_include_directories(glad PUBLIC
  ${CMAKE_CURRENT_LIST_DIR}/../third_party/glad/include
)


