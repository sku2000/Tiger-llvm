create_subdirectory_options(TIGERLANG TOOL)

set(LLVM_LINK_COMPONENTS
#   ${LLVM_TARGETS_TO_BUILD}
#   Analysis
#   CodeGen
#   Core
#   IPO
#   AggressiveInstCombine
#   InstCombine
#   Instrumentation
#   MC
#   MCParser
#   ObjCARCOpts
#   Option
#   ScalarOpts
  Support
#   TransformUtils
#   Vectorize
)

add_tigerlang_tool(tigerlang
  Driver.cpp
  )

target_link_libraries(tigerlang
  PRIVATE
  tigerlangBasic
  )