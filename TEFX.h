#ifndef IOINT_H
#define IOINT_H
#if (ARDUINO <  100)
#include <WProgram.h>
#else
#include <Arduino.h>
#endif

class TEFX {
  protected:
    String Stringa;
    int lenScroll;
    String stToPrnt;
    int ppos;
    String padD(String sstt, int lens, String charsub);

  public:
    TEFX(String Line, int lenScroll);

    String ScrollT(int stepS);
    String ScrollT();
    void NewString(String newstring);
    void NewLen(int newlen) ;

};
#endif
