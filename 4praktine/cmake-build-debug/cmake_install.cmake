<<<<<<< HEAD
# Install script for directory: C:/Users/s057496/Documents/Strukturinis-programavimas/4praktine
=======
# Install script for directory: D:/Strukturinis/Strukturinis-programavimas/4praktine
>>>>>>> 1ba13c172c4e2dec6b913b2b169a7d8102c533c3

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/4praktine")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
<<<<<<< HEAD
  set(CMAKE_OBJDUMP "C:/Program Files/JetBrains/CLion 2024.2.0.1/bin/mingw/bin/objdump.exe")
=======
  set(CMAKE_OBJDUMP "D:/Games/CLion 2024.2.2/bin/mingw/bin/objdump.exe")
>>>>>>> 1ba13c172c4e2dec6b913b2b169a7d8102c533c3
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "C:/Users/s057496/Documents/Strukturinis-programavimas/4praktine/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "D:/Strukturinis/Strukturinis-programavimas/4praktine/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> 1ba13c172c4e2dec6b913b2b169a7d8102c533c3
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
