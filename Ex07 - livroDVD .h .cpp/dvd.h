#ifndef dvd_h
#define dvd_h

#include "publicacao.h"
#include "vendas.h"

class dvd : public publicacao, public vendas // classe derivada
{
    private:
        float time;
    public:
        void GetData();
        void DisplayData();
};

#endif
