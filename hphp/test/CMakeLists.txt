set(CXX_SOURCES)

set(RECURSIVE_SOURCE_SUBDIRS vm)
foreach (dir ${RECURSIVE_SOURCE_SUBDIRS})
	auto_sources(files "*.cpp" "RECURSE" "${CMAKE_CURRENT_SOURCE_DIR}/${dir}")
	list(APPEND CXX_SOURCES ${files})
endforeach(dir ${RECURSIVE_SOURCE_SUBDIRS})

auto_sources(files "*.cpp" "")
list(APPEND CXX_SOURCES ${files})
list(APPEND CXX_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../hhvm/process_init.cpp")
list(APPEND CXX_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/../hhvm/global_variables.cpp")

add_executable(test ${CXX_SOURCES})
target_link_libraries(test hphp_analysis hphp_runtime_static ext_hhvm_static
                      -Wl,-uregister_libevent_server)
