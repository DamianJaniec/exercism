#pragma once

#include <string>
#include <vector>
#include <unordered_set>

namespace allergies {

// TODO: add your solution here
    class allergy_test
    {
        int score;
        const std::vector <std::string> items = {
                                "eggs",
                                "peanuts",
                                "shellfish", 
                                "strawberries",
                                "tomatoes",
                                "chocolate",
                                "pollen",
                                "cats"
        };
        public:
        allergy_test(int a) : score(a) {}
        bool is_allergic_to(std::string str);
        std::unordered_set <std::string> get_allergies();
    };
}  // namespace allergies
