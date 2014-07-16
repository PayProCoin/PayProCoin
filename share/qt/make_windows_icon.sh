#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/payprocoin.png
ICON_DST=../../src/qt/res/icons/payprocoin.ico
convert ${ICON_SRC} -resize 16x16 payprocoin-16.png
convert ${ICON_SRC} -resize 32x32 payprocoin-32.png
convert ${ICON_SRC} -resize 48x48 payprocoin-48.png
convert payprocoin-16.png payprocoin-32.png payprocoin-48.png ${ICON_DST}

