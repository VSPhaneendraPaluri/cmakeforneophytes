# ------------------ PvsSoftToolsSystemC CMake MODULE ------------------------
# 
# If this module is found, then
#   - PVS_SOFTTOOLS_SYSTEMC_FOUND is set to true
# 
# Once this CMake MODULE is found by the parent CMakeLists.txt, then the following other
# paths must also be include wherever necessary to use SystemC package
#
# - PVS_SOFTTOOLS_SYSTEMC_INCLUDE_DIR
# - PVS_SOFTTOOLS_SYSTEMC_SOURCES_DIR
# - PVS_SOFTTOOLS_SYSTEMC_LIBRARY_DIR
# - PVS_SOFTTOOLS_DOCUMENTATION_DIR
# ------------------------------------------------------------------------------

message(STATUS "Searching for Pvs.SoftTools.SystemC ...")

set(PVS_SOFTTOOLS_SYSTEMC_FOUND true)
set(SOFTTOOLS_NAME Pvs.SoftTools.SystemC.0.1.0)

if(PVS_SOFTTOOLS_SYSTEMC_FOUND)
  set(PVS_SOFTTOOLS_SYSTEMC_INCLUDE_DIR "${PVS_NUGET_PACKAGES}/${SOFTTOOLS_NAME}/build/native/include")
  set(PVS_SOFTTOOLS_SYSTEMC_SOURCES_DIR "")
  set(PVS_SOFTTOOLS_SYSTEMC_LIBRARY_DIR "${PVS_NUGET_PACKAGES}/${SOFTTOOLS_NAME}/build/native/lib/Win32/v100/Debug")
endif()
