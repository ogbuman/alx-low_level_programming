#!/bin/bash
wget -P /tmp https://github.com/ogbuman/alx-low_level_programming/tree/master/0x18-dynamic_libraries/100-operations.so
export LD_PRELOAD=/tmp/100-operations.so
