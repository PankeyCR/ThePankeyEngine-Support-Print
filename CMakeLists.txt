cmake_minimum_required(VERSION 3.15)

project(ThePankeyEngine_Support_Print)

if(NOT TARGET ThePankeyEngine_Support_Print)

    add_library(ThePankeyEngine_Support_Print INTERFACE)

    target_include_directories(
        ThePankeyEngine_Support_Print
          INTERFACE
            ${CMAKE_CURRENT_SOURCE_DIR}
    )

endif()

