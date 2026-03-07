#include "raindrops.h"


namespace raindrops {

// TODO: add your solution here

std::string convert(int numb)
{
    std::string str= "";
    if(numb%3==0)
        str+="Pling";
    if(numb%5==0)
        str+="Plang";
    if(numb%7==0)
        str+="Plong";
    else if ((numb%3!=0) && (numb%5!=0) && (numb%7!=0))
        str = std::to_string(numb);

    return str;
}
    
}  // namespace raindrops
