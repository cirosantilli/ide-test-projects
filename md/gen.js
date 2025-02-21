#!/usr/bin/env bash
printf '# not-readme 1\n\n' > not-readme.md
i=0
while [ $i -lt 1000 ]; do
  printf "## not-readme 1 $i\n\n" >> not-readme.md
  i=$((i+1))
done
