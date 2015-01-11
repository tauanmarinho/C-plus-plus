#ifndef livro_h
#define livro_h

#include "publicacao.h"
#include "vendas.h"

class livro : public publicacao, public vendas // classe derivada
{
    private:
        int pages;
    public:
        void GetData();
        void DisplayData();
};

#endif
