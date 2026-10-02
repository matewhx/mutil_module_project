#include <iostream>
#include "pnc_map.h"

void PNC_map::mapInfo()
{
    std::cout <<"this is pnc_map"<<std::endl;
}
void PNC_map::mapInfo2()
{
    double a = 1 == 1;
    std::cout <<"this is pnc_map2: a: " << a << std::endl;
}

void PNC_map::mapInfo3()
{
    bool flag = false;
    while (true)
    {
        std::cout <<"this is pnc_map3"<<std::endl;
        if (flag)
        {
            break;
        }
    }

    std::cout <<"this is pnc_map3 end"<<std::endl;
}

void PNC_map::mapInfo4()
{
    bool flag = false;
    while (true)
    {
        std::cout <<"this is pnc_map4"<<std::endl;
        if (flag)
        {
            break;
        }
    }

    std::cout <<"this is pnc_map4 end"<<std::endl;
}

void PNC_map::mapInfo5()
{
    if (true)
    {
        std::cout <<"this is pnc_map5"<<std::endl;

    }
    else
    {
        bool flag = false;
        while (true)
        {
            std::cout <<"this is pnc_map5 else while"<<std::endl;
            if (flag)
            {
                break;
            }
        }
        std::cout <<"this is pnc_map5 else"<<std::endl;
    }
}

void PNC_map::mapInfo6()
{
    if (true)
    {
        std::cout <<"this is pnc_map6"<<std::endl;

    }
    else
    {
        bool flag = false;
        while (true)
        {
            std::cout <<"this is pnc_map6 else while"<<std::endl;
            if (flag)
            {
                break;
            }
        }
        std::cout <<"this is pnc_map6 else"<<std::endl;
    }
}