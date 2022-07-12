#!/bin/bash
wget -q -O /tmp/cheatme.so https://github.com/rolandoquiroz/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/cheatme.so
export LD_PRELOAD=/tmp/cheatme.so
