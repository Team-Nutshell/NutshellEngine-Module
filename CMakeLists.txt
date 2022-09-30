add_library(Module INTERFACE)
target_include_directories(Module INTERFACE .)
add_library(NutshellEngine::Module ALIAS Module)