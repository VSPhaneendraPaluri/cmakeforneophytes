# ------------------ PvsSoftToolsSystemC CMake MODULE ------------------------
# 
# If this module is found, then
#   - SHLWAPI_FOUND is set to true
# 
# Once this CMake MODULE is found by the parent CMakeLists.txt, then the following other
# paths must also be include wherever necessary to use SystemC package
#
# - SHLWAPI_LIBRARY_DIR
# ------------------------------------------------------------------------------

message(STATUS "Searching for SHLWAPI (DLL) ...")

set(SHLWAPI_FOUND true)
set(SOFTTOOLS_NAME Vanara.PInvoke.ShlwApi.3.3.15)

if(SHLWAPI_FOUND)
  set(SHLWAPI_LIBRARY_DIR "${PVS_NUGET_PACKAGES}/${SOFTTOOLS_NAME}/lib/net5.0")
endif()
