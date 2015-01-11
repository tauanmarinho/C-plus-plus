#ifndef vendas_h
#define vendas_h


class vendas
{
    protected:
        enum {MONTHS = 3};
        float salesArr[MONTHS];
    public:
        void GetData();
        void DisplayData();
};

#endif
