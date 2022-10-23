add_library(Module INTERFACE)
target_include_directories(Module INTERFACE utils)
add_library(NutshellEngine::Module ALIAS Module)