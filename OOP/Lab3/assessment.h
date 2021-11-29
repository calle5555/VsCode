#pragma once
#include <string>

using namespace std;
class Assessment{
    protected:
        int score;
        string deadline;

    public:
        Assessment(int score, string deadline);
};