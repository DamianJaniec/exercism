#include "hexadecimal.h"
#include <string>
namespace hexadecimal {

// TODO: add your solution here
int convert(std::string hex)
{
    int i=0;
    int ans = 0;
    while(hex[i]!='\0')
    {
        int base = 0;
        if     (hex[i]=='F' || hex[i]=='f') base = 15;
        else if(hex[i]=='E' || hex[i]=='e') base = 14;
        else if(hex[i]=='D' || hex[i]=='d') base = 13;
        else if(hex[i]=='C' || hex[i]=='c') base = 12;
        else if(hex[i]=='B' || hex[i]=='b') base = 11;
        else if(hex[i]=='A' || hex[i]=='a') base = 10;
        else if(hex[i]>=48 && hex[i]<=57) base = hex[i]-48;
        else return 0;
        ans= ans*16 + base;
        i++;
    }
    return ans;
}
}  // namespace hexadecimal
