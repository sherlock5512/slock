#!/bin/bash

if [ "$(mocp -Q %state)" = "STOP" ]; then
    echo "NOTHING PLAYING"
else
    if [ "$(mocp -Q %song)" = "" ]; then
        basename "$(mocp -Q "%file")"
    else
        mocp -Q "%song \(%artist\)"
    fi
fi