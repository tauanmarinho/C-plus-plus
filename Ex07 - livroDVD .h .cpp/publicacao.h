#ifndef publicacao_h
#define publicacao_h

#include<string>

using namespace std;

class publicacao // classe base
{
    protected:
        string title;
        float price;
    public:
        void GetData();
        void DisplayData();
};

#endif
