#include "allergies.h"
#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {

// TODO: add your solution here

bool allergy_test::is_allergic_to(std::string str)
    {
        int k = 0;
        for(size_t i=0; i<items.size(); i++)
            if(str==items[i])
                k=i;
        return score&(1<<k);
    }
std::unordered_set <std::string> allergy_test::get_allergies()
    {
        std::unordered_set <std::string> ans;
        for(size_t i=0; i<items.size(); i++)
            if(score&1<<i)
                ans.insert(items[i]);
        return ans;
    }
}  // namespace allergies
