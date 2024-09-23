#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "CycloneDDS::libidlc" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::libidlc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::libidlc PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "CycloneDDS::idl;CycloneDDS::ddsc"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libcycloneddsidlc.so.0.11.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libcycloneddsidlc.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::libidlc )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::libidlc "${_IMPORT_PREFIX}/lib/libcycloneddsidlc.so.0.11.0" )

# Import target "CycloneDDS::idlc" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::idlc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::idlc PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/idlc"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::idlc )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::idlc "${_IMPORT_PREFIX}/bin/idlc" )

# Import target "CycloneDDS::idl" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::idl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::idl PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libcycloneddsidl.so.0.11.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libcycloneddsidl.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::idl )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::idl "${_IMPORT_PREFIX}/lib/libcycloneddsidl.so.0.11.0" )

# Import target "CycloneDDS::dds_security_ac" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::dds_security_ac APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::dds_security_ac PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libdds_security_ac.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libdds_security_ac.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_ac )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_ac "${_IMPORT_PREFIX}/lib/libdds_security_ac.so" )

# Import target "CycloneDDS::dds_security_auth" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::dds_security_auth APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::dds_security_auth PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libdds_security_auth.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libdds_security_auth.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_auth )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_auth "${_IMPORT_PREFIX}/lib/libdds_security_auth.so" )

# Import target "CycloneDDS::dds_security_crypto" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::dds_security_crypto APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::dds_security_crypto PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libdds_security_crypto.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libdds_security_crypto.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::dds_security_crypto )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::dds_security_crypto "${_IMPORT_PREFIX}/lib/libdds_security_crypto.so" )

# Import target "CycloneDDS::psmx_iox" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::psmx_iox APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::psmx_iox PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELWITHDEBINFO "iceoryx_hoofs::iceoryx_hoofs;iceoryx_posh::iceoryx_posh;CycloneDDS::ddsc"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libpsmx_iox.so.0.11.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libpsmx_iox.so.0.11.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::psmx_iox )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::psmx_iox "${_IMPORT_PREFIX}/lib/libpsmx_iox.so.0.11.0" )

# Import target "CycloneDDS::ddsc" for configuration "RelWithDebInfo"
set_property(TARGET CycloneDDS::ddsc APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(CycloneDDS::ddsc PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libddsc.so.0.11.0"
  IMPORTED_SONAME_RELWITHDEBINFO "libddsc.so.0"
  )

list(APPEND _IMPORT_CHECK_TARGETS CycloneDDS::ddsc )
list(APPEND _IMPORT_CHECK_FILES_FOR_CycloneDDS::ddsc "${_IMPORT_PREFIX}/lib/libddsc.so.0.11.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
