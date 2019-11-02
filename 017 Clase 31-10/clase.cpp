#include <iostream>

struct nodo
{
    double val;
    nodo *nxt;
};

struct Lista
{
    nodo *first{nullptr};
};

unsigned ContarDesde(const nodo *);
unsigned length(const Lista &);
unsigned iterative(const Lista &);
double getValue(const Lista &, unsigned index);
void insert(const Lista &, double, unsigned);

int main()
{
    Lista ls;

    ls.first = new nodo;

    nodo *n1 = ls.first;
    n1->val = 10;
    n1->nxt = new nodo;

    nodo *n2 = n1->nxt;
    n2->val = 20;
    n2->nxt = new nodo;

    nodo *n3 = n2->nxt;
    n3->val = 30;
    n3->nxt = nullptr;

    std::cout << getValue(ls, 2); //iterative(ls); //length(ls);

    delete n3->nxt;
    delete n2->nxt;
    delete n1->nxt;
    delete ls.first;
}

double getValue(const Lista &ls, unsigned index)
{
    unsigned i{1};
    for (nodo *p = ls.first; p != nullptr; i++)
    {
        if (i == index)
            return p->val;
        else
            p = p->nxt;
    }
    return 0;
}

unsigned iterative(const Lista &ls)
{
    unsigned cont{0};
    for (nodo *p = ls.first; p != nullptr; p = p->nxt)
        cont++;
    return cont;
}

void insert(const Lista &ls, double value, unsigned pos)
{
    unsigned i{0};
    for (nodo *p = ls.first; p != nullptr; p = p->nxt)
    {
        if (i == pos)
        {
            p->nxt = new nodo;
            nodo *n4 = p->nxt;
            n4->val = value;
            n4->nxt = nullptr;
        }
        else
            i++;
    }
}

unsigned length(const Lista &ls)
{
    return ContarDesde(ls.first);
}

unsigned ContarDesde(const nodo *p)
{
    return nullptr == p ? 0 : 1 + ContarDesde(p->nxt);
}