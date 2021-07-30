#!/bin/sh
cat /etc/passwd | grep -v '^#' | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort -r | sed -n -e "$FT_LINE1"','"$FT_LINE2"'p' | sed s/\n/", "/g | sed s/,$/./ | tr -d '\n'
