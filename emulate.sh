#!/bin/bash

fuse -m 128 -g 2x --auto-load --no-confirm-actions --no-traps --loading-sound --sound $@ --tape 7777.tap
