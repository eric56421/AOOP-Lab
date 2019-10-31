#include "mymath.h"

MyMath::MyMath()
{

}

vector<int> MyMath::stringToVectorInt(string s){
    stringstream in;
    int n;
    vector<int> tmp;
    in<<s;
    while(in>>n){
        tmp.push_back(n);
    }
    return tmp;
}

string MyMath::vectorIntToString(vector<int> in){
    string tmp="";
    for(int i=0;i<in.size();i++){
        tmp+=to_string(in[i]);
        if(i!=in.size()-1)
            tmp+=" ";
    }
    return tmp;
}
