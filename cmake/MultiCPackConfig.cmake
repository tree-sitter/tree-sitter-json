include("release/CPackConfig.cmake")

set(CPACK_INSTALL_CMAKE_PROJECTS
        "debug;tree_sitter_json;ALL;/"
        "release;tree_sitter_json;ALL;/"
)
