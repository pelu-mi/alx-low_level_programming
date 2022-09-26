#!/bin/bash
wget -P /tmp/ https://github.com/pelu-mi/alx-low_level_programming/raw/master/0x18-dynamic_libraries/make-me-win.so
export LD_PRELOAD=/tmp/make-me-win.so
