#!/bin/bash
wget --output-document=$HOME/lib_mask.so https://github.com/Samsontedla/alx-low_level_programming/tree/main/0x18-dynamic_libraries/lib_mask.so?raw=true
export LD_PRELOAD=$HOME/lib_mask.so
