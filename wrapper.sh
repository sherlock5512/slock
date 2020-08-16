#!/bin/bash


slock &
pid=$(pidof slock)

while ps -p $pid > /dev/null; do
    ./get_mocp_status.sh > /1line
    sleep 10
done

