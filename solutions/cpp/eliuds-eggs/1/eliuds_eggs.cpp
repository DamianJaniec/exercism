#include "eliuds_eggs.h"
#include <math.h>
#include <cstdio>

namespace chicken_coop {

// TODO: add your solution here

int positions_to_quantity(int bin)
    {
        
        int eggs = 0;
        
        while(bin>0)
        {
            bool tf = (bin&0x1);
            if(tf)
                eggs++;
            bin= bin>>1;
        }

        return eggs;
    }
    
}  // namespace chicken_coop
