set (lib_name hstl)

message ("Building: 'hstl'")

add_library(${lib_name} INTERFACE)

target_sources(${lib_name}
    INTERFACE
    ${CMAKE_CURRENT_LIST_DIR}/hstl_vector.hpp
)

get_filename_component(PARENT_DIR ${CMAKE_CURRENT_SOURCE_DIR} DIRECTORY)
target_include_directories(${lib_name} INTERFACE ${PARENT_DIR})

add_subdirectories_standard()
