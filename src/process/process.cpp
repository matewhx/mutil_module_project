#include <iostream>
#include "process.h"
#include <Eigen/Dense>


void process::planProcess()
{
    std::cout << "this is planProcess"<<std::endl;
    my_map.mapInfo();
    std::cout << "plan success"<<std::endl;
}