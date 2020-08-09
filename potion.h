#ifndef _POTION_H_
#define _POTION_H_
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "item.h"

class Potion: public Item{
    int effect;
    int type;

    public:
    Potion(int, int, int, int);
    ~Potion() { }
    int getEffect();
    int getType();
};

#endif
