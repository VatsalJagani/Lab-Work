#!/bin/bash

for i in {2..80..1}
do
	echo "user10702" | ssh "192.168.27." $i 
	exit
	
done