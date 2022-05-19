set(LIBRARY_NAME "${PROJECT_NAME}")

set(Source_Files "parser.c")
source_group("Header Files" FILES "${Header_Files}")

add_library("${LIBRARY_NAME}" "${Source_Files}")

include(GNUInstallDirs)
target_include_directories(
        "${LIBRARY_NAME}"
        PUBLIC
        "$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>"
        "$<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>"
)

target_link_libraries("${LIBRARY_NAME}" PRIVATE "${PROJECT_NAME}_compiler_flags")

add_subdirectory("tree_sitter")
target_link_libraries("${LIBRARY_NAME}" PUBLIC "${PROJECT_NAME}-tree_sitter")

#=========#
# Install #
#=========#

# setup the version numbering
set_property(TARGET "${LIBRARY_NAME}" PROPERTY VERSION "${${PROJECT_NAME}_VERSION}")
set_property(TARGET "${LIBRARY_NAME}" PROPERTY SOVERSION "${${PROJECT_NAME}_VERSION_MAJOR}")

#====================#
# Package to install #
#====================#

set(installable_libs "${LIBRARY_NAME}" "${PROJECT_NAME}-tree_sitter" "${PROJECT_NAME}_compiler_flags")
if (TARGET "${DEPENDANT_LIBRARY}")
    list(APPEND installable_libs "${DEPENDANT_LIBRARY}")
endif ()
install(TARGETS ${installable_libs}
        EXPORT "${LIBRARY_NAME}Targets"
        ARCHIVE DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        LIBRARY DESTINATION "${CMAKE_INSTALL_LIBDIR}"
        RUNTIME DESTINATION "${CMAKE_INSTALL_BINDIR}")
install(EXPORT "${LIBRARY_NAME}Targets"
        DESTINATION "${CMAKE_INSTALL_DATADIR}/${PROJECT_NAME}")
