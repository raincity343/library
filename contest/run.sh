#!/bin/bash
for i in *.in; do
  echo "$i"
  if ! diff -Z <(./main < $i) ${i%.*}.ans; then
    echo 'Error'
    exit 1
  fi
done
