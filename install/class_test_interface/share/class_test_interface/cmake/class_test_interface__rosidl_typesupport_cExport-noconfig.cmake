#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "class_test_interface::class_test_interface__rosidl_typesupport_c" for configuration ""
set_property(TARGET class_test_interface::class_test_interface__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(class_test_interface::class_test_interface__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libclass_test_interface__rosidl_typesupport_c.so"
  IMPORTED_SONAME_NOCONFIG "libclass_test_interface__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS class_test_interface::class_test_interface__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_class_test_interface::class_test_interface__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libclass_test_interface__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)