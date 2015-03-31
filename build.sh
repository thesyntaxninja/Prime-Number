#!/bin/bash
echo "*********building************"
echo $WORKSPACE
cd $WORKSPACE/Makefile
echo $PWD
make clean
make
