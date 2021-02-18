// ННГУ, ВМК, Курс "Методы программирования-2", С++, ООП
//
// tset.h - Copyright (c) Гергель В.П. 07.05.2001
//   Переработано для Microsoft Visual Studio 2008 Сысоевым А.В. (19.04.2015)
//
// Множество

#ifndef __SET_H__
#define __SET_H__

#include "tbitfield.h"

class TSet
{
private:
  int MaxPower;
  TBitField BitField;
public:
  TSet(int mp);
  TSet(const TSet &s);
  TSet(const TBitField &bf);
  operator TBitField();
  int GetMaxPower(void) const;
  void InsElem(const int Elem);
  void DelElem(const int Elem);
  int IsMember(const int Elem) const;

  int operator== (const TSet &s) const;
  int operator!= (const TSet &s) const;
  TSet& operator=(const TSet &s);
  TSet operator+ (const int Elem);

  TSet operator- (const int Elem);

  TSet operator+ (const TSet &s);
  TSet operator* (const TSet &s);
  TSet operator~ (void);

  friend istream &operator>>(istream &istr, TSet &bf);
  friend ostream &operator<<(ostream &ostr, const TSet &bf);
};
#endif
