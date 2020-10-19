#include "../include/Celda.hpp"

Celda::Celda(char val = ' ') {
    set(val);
}

void Celda::set(char val) {
    val = valor;
}
char Celda::get(void) const {
    return valor;
}
bool Celda::empty(void) const{
    return valor == ' ';
}

std::ostream& operator<<(std::ostream& os, const Celda& celda) {
    os << celda.get();
    return os;
}