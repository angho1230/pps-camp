#!/bin/sh

for var in $(seq -f "%03g" 100)
do
    mkdir "C${var}"
done



