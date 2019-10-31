#include "judge.h"
#include <QElapsedTimer>
#include <QtGlobal>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <QDebug>

using namespace std;

Judge::Judge()
{
    timer.start();
}

string Judge::getData(int question)
{
    string tmp;
    vector<string> dataV, ansV;

    timer.restart();

    in.open(to_string(question)+".txt");  // to_string(question)+".txt"
    if (!in)
        qDebug()<<"open fail"<<endl;
    else {
        qDebug()<<"open"<<endl;
    }

    while (getline(in, tmp)) {
        dataV.push_back(tmp);
        getline(in, tmp);
        ansV.push_back(tmp);
    }
    in.close();

    srand(time(NULL));
    int n = rand() % dataV.size();

    ans = ansV.at(n);
    return dataV.at(n);
}

bool Judge::submitData(string ans)
{
    this->costtime = this->timer.nsecsElapsed();
    return ans == this->ans;
}
