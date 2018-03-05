cmake .
make
time ./pugixml_bench

rm CMakeCache.txt
rm cmake_install.cmake
rm pugixml_bench
rm -rf CMakeFiles/