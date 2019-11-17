#include "TEFX.h"


TEFX::TEFX(String _Stringa, int _lenScroll) {
  Stringa = _Stringa;
  lenScroll = _lenScroll;
  ppos = 0;
  stToPrnt = padD("",lenScroll," ");
}


String TEFX::ScrollT(int stepS) {
  //se la stringa e' dispari, un giro si e uno no, salta all'inizio un carattere nel caso in cui steps=2
  ppos = (ppos+Stringa.length()) % Stringa.length();
  stToPrnt = stToPrnt.substring(stepS) + padD(Stringa.substring(ppos ,ppos + stepS ),stepS," ");
  ppos=ppos+stepS;
  return stToPrnt;
}

String TEFX::ScrollT() {
  String stToP;
  stToP = ScrollT(1);
  return stToP;
}


void TEFX::NewString(String newstring) {
  Stringa=newstring;
  ppos = 0;
  stToPrnt = padD("",lenScroll," ");
}


void TEFX::NewLen(int newlen) {
  lenScroll=newlen;
  ppos = 0;
  stToPrnt = padD("",lenScroll," ");
}


//---------------- Funzioni interne
String TEFX::padD(String sstt, int lens, String charsub) {
  //pad a dx
  String spaces = "";
  for (int i = sstt.length(); i < lens; i++) spaces = spaces + charsub;
  return sstt + spaces;
}
