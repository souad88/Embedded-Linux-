#!/bin/bash
select name in $(ls)
  do
  echo $name
  break
done