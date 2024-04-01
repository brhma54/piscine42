#!/bin/sh

cat /etc/passwd | grep -v '\#' | sed -n '0~2p' | cut -d ':' -f1 | rev | sort -r | sed -n '$FT_LINE1,$FT_LINE2'


