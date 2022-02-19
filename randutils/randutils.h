#ifndef RANDUTILS_H
#define RANDUTILS_H

/** Return a random number between 0 and 1 **/
class RandFloat {
    private:
        float randA, randC, randM;
        float startX;
        float x;
    public:
        RandFloat();
        float nextFloat();
};

#endif