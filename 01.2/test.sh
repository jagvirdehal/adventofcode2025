#!/bin/bash
for i in $(fd '\.in$'); do
	TESTNAME="$(dirname $i)/$(basename -s.in $i)"
	DIFFOUT=$(diff <(./exec <${TESTNAME}.in) ${TESTNAME}.out)
	if [ $? != 0 ]; then
		echo "=== $TESTNAME FAILED ==="
		echo "$DIFFOUT"
		echo
	fi
done
