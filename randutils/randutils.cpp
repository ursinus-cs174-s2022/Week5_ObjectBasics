/**
 * @file randutils.cpp
 * @author Chris Tralie (chris.tralie@gmail.com)
 * 
 * @copyright Copyright (c) 2022
 * 
 * Purpose: To create a random number generator seeded by
 * the system clock
 * 
 */

#include <sys/time.h>
#include <stdio.h>
#include "randutils.h"

/**
 * Return the number of microseconds currently on
 * the system clock
 */
int getMicroseconds() {
    struct timeval tv;
    gettimeofday(&tv,NULL);
    return (int)tv.tv_usec;
}

RandFloat::RandFloat() {
    startX = ((float)(getMicroseconds()%1000))/1000;
    x = startX;
    randA = 49;
    randC = 17;
    randM = 97;
}

/**
 * @brief Return a random number between 0 and 1
 * 
 * @return float 
 */
float RandFloat::nextFloat() {
    float ret = randA*x + randC;
    float fac = (float)((int)(ret/randM));
    x = ret - fac*randM;
    return x/100;
}
