#!/bin/bash

: '
This script can generate a complete list of folders including a main.c file inside, please use it wisely.
'

src_dir="ex01"
dest_dir="ex"
file_name="main.c"

for i in {2..170}; do
  dest="${dest_dir}$(printf "%02d" $i)"
  cp -r "${src_dir}" "${dest}"
  mv "${dest}/${file_name}" "${dest}/${file_name%.c}$(printf "%02d" $i).c"
done