# ------------------ PvsSoftToolsSystemC CMake MODULE ------------------------
# 
# If this module is found, then
#   - GOOGLE_BENCHMARK_FOUND is set to true
# 
# Once this CMake MODULE is found by the parent CMakeLists.txt, then the following other
# paths must also be include wherever necessary to use SystemC package
#
# - GOOGLE_BENCHMARK_INCLUDE_DIR
# - GOOGLE_BENCHMARK_SOURCES_DIR
# - GOOGLE_BENCHMARK_LIBRARY_DIR
# - GOOGLE_BENCHMARK_DOCUMENTATION_DIR
# ------------------------------------------------------------------------------

message(STATUS "Searching for Google Benchmarking ...")

set(GOOGLE_BENCHMARK_FOUND true)
set(SOFTTOOLS_NAME gbenchmark.1.5.1)

if(GOOGLE_BENCHMARK_FOUND)
  set(GOOGLE_BENCHMARK_INCLUDE_DIR "${PVS_NUGET_PACKAGES}/${SOFTTOOLS_NAME}/include")
  set(GOOGLE_BENCHMARK_SOURCES_DIR "")
  set(GOOGLE_BENCHMARK_LIBRARY_DIR "${PVS_NUGET_PACKAGES}/${SOFTTOOLS_NAME}/lib/native/lib/x64")
endif()
