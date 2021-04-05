cmake_minimum_required(VERSION 3.10)
project (gyro)

add_executable(gyro $src/gyro.c)

install (TARGETS gyro DESTINATION sbin)