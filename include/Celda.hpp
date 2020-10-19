#ifndef CELDA
#define CELDA
#include <iostream>

class Celda {
    private:
     char valor;

    public:
      Celda(char);
      void set(char val);
      char get(void) const;
      bool empty(void) const;
      friend std::ostream& operator<<(std::ostream&, const Celda&);
};
#endif
