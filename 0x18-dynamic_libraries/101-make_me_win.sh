#!/bin/bash
wget -P .. https://raw.githubusercontent.com/Dayvid0063/alx-low_level_programming/master/0x18-dynamic_libraries/liboutput.so
export LD_PRELOAD="$PWD/../liboutput.so"
