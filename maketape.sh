#!/bin/bash

PROJECT="7.7.7.7"
TAPE="${PWD}/7777.tap"
ROM="${PWD}/bin/main.c.rom"
CODE="${PWD}/bin/main.bin"
INTRO="${PWD}/assets/intro.scr"
SKIP=536

read -r END REST < <(hexdump -C ${ROM} | tail -n 3 | head -n 1)
dd if=${ROM} of=${CODE} bs=1 skip=${SKIP} count=$((0x${END}-${SKIP}))

zmakebas -i 1 -a 10 -l -o ${TAPE} -n ${PROJECT} loader.bas

# Install dependencies
[ -d node_modules ] || npm install jsbin2tap

node_modules/.bin/jsbin2tap -p -o ${TAPE} ${INTRO} ${CODE}
