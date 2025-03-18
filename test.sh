#!/bin/bash
for i in {1..100000}; do
  echo "$i"
  ./gen > ex.in
  if ! diff -qZ <(./main < ex.in) <(./std < ex.in); then
    echo 'Error'
    exit 1
  fi
done
