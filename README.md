# HDF5 light

## HDF5 version 1.10.1 
## A mirror of HDF5 library from https://support.hdfgroup.org/HDF5/ , with the following modifications:

* Simplified CMakelist. Intended to be used through add_subdirectory from parent project.
* No autotools, no config files generated by CMake. Provided preconfigured [H5pubconf.h](https://github.com/podgorskiy/hdf5_light/blob/master/src/H5pubconf.h) that can be used on
  * Windows (64bit and 32 bit) with MSVC
  * GNU Linux with GCC
  * OS X with clang
 * Provided pregenerated *H5Tinit.c* *H5lib_settings.c*
 * Compiled as static library
 
 For more information read [H5pubconf.h](https://github.com/podgorskiy/hdf5_light/blob/master/README.txt) and visit https://support.hdfgroup.org/HDF5/
 
