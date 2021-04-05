#include <stdio.h>
#include <stdlib.h>
 
#define SHELLSCRIPT "\
for i in `seq 1 5`;\n\
do\n\
    PATH_X=$(cat /sys/bus/iio/devices/iio\:device1/in_anglvel_x_raw) \n\
    PATH_Y=$(cat /sys/bus/iio/devices/iio\:device1/in_anglvel_y_raw) \n\
    PATH_Z=$(cat /sys/bus/iio/devices/iio\:device1/in_anglvel_z_raw) \n\
    echo "x = $PATH_X : y = $PATH_Y : z = $PATH_Z" >>/home/gyro.txt \n\
    sleep 1 \n\
done \n\"
 
int main()
{
    puts("Will execute sh with the following script :");
    puts(SHELLSCRIPT);
    puts("Starting now:");
    system(SHELLSCRIPT);
    return 0;
}