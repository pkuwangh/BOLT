add_executable(simple_example
  dummy_funcs.cc
  simple_example.cc
  utils.cc
)

target_compile_options(simple_example PUBLIC -Wall -m64 -O2)
target_link_options(simple_example PUBLIC -Wl,--emit-relocs)

target_include_directories(simple_example PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
