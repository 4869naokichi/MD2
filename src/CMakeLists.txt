add_library(md2 SHARED)
target_sources(md2 PRIVATE md2.cpp)
target_include_directories(md2 PUBLIC ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(md2 serialport speak)

add_library(serialport SHARED IMPORTED GLOBAL)
set_target_properties(serialport
    PROPERTIES
        IMPORTED_LOCATION ${PROJECT_BINARY_DIR}/out/libserialport.dll
        IMPORTED_IMPLIB ${PROJECT_BINARY_DIR}/out/libserialport.dll.a
        INTERFACE_INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}/include)

add_library(speak SHARED IMPORTED GLOBAL)
set_target_properties(speak
    PROPERTIES
        IMPORTED_LOCATION ${PROJECT_BINARY_DIR}/out/libspeak.dll
        IMPORTED_IMPLIB ${PROJECT_BINARY_DIR}/out/libspeak.dll.a
        INTERFACE_INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}/include)