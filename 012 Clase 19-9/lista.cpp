#include "lista.h"

template<typename T>

bool lista<T>::insert(Lista &ls, unsigned &pos, T &val)
{
  for(unsigned i=ls.ocup; i>pos; --i)
  {
    ls.val.at(i+1) = ls.val.at(i);
  }
  ls.val.at(pos) = val;
  ls.ocup += 1;
}
bool lista<T>::remove(Lista &, unsigned &)
{
  if(ls.ocup == 0) return false;
  for(unsigned i=pos; i<ls.ocup; ++i)
  {
    ls.val.at(i) = ls.val.at(i+1);
  }
  ls.ocup -= 1;
  return true;
}
