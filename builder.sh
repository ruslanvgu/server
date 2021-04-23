#!/bin/bash

full_current_dir=$PWD
full_path_build=$full_current_dir/build/

#clean
echo -e "\e[41m Clean... \e[0m "
if [ -d "$full_path_build" ]; then
	echo -e "\e[31m rm dir build $full_path_build \e[0m"
	rm -rf $full_path_build
fi
sleep 1

#build
echo -e "\e[42m Build... \e[0m"
#makefile
mkdir $full_path_build
cd $full_path_build
cmake .. 
sleep 1 

#build bin
make


