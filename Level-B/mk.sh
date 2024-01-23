#!/bin/sh

for var in $(seq -f "%03g" 150)
do
    mkdir "B${var}"
done



