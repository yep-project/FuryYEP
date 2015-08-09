#!/bin/bash
# create multiresolution windows icon
ICON_DST=../../src/qt/res/icons/fury.ico

convert ../../src/qt/res/icons/fury-16.png ../../src/qt/res/icons/fury-32.png ../../src/qt/res/icons/fury-48.png ${ICON_DST}
