#!/bin/bash

#x = $(xdotool getmouselocation | cut -d ":" -f 2 |cut -d " " -f 1)
#y = $(xdotool getmouselocation | cut -d ":" -f 3 |cut -d " " -f 1)
minutes=1
seconds=$minutes*60*10
time=$seconds*100
while :; do
if [[ $(xprintidle) -gt $time ]]; then
echo "testing"
fi
echo "$(xprintidle) of  $(( $time))"
sleep 10
done

