#ifndef MYMATH_H
#define MYMATH_H

#include<problemset.h>
#include<vector>
#include<sstream>
#include<algorithm>

using namespace std;

class MyMath : public ProblemSet
{
    public:
        MyMath();
        string solve(string){};
        vector<int>stringToVectorInt(string);
        string vectorIntToString(vector<int>);
};

#endif // MYMATH_H
