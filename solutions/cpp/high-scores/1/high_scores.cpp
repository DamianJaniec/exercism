#include "high_scores.h"

#include <algorithm>

namespace arcade {

std::vector<int> HighScores::list_scores() {
    // TODO: Return all scores for this session.
    return scores;
}

int HighScores::latest_score() {
    // TODO: Return the latest score for this session.
    return scores[scores.size()-1];
}

int HighScores::personal_best() {
    // TODO: Return the highest score for this session.

    std::vector<int> copy = scores;
    std::sort(copy.begin(),copy.end());
    return copy[copy.size()-1];
}

std::vector<int> HighScores::top_three() {
    // TODO: Return the top 3 scores for this session in descending order.
    
    if(scores.size()==1)
        return scores;
    
    std::vector<int> copy = scores;
    std::sort(copy.begin(),copy.end(),std::greater<int>());
    if(copy.size()==2)
        return {copy[0], copy[1]};
    return {copy[0], copy[1], copy[2]};
}

}  // namespace arcade
