#ifndef _SOL_PERUANO_
#define _SOL_PERUANO_

#include <iostream>

class SolPeruano {
        int soles;
        int centimos;
    public:
        SolPeruano(int _s, int _c) : soles(_s), centimos(_c) {}

        /*SolPeruano operator+(const SolPeruano &o) {
            SolPeruano tmp(0, 0);
            tmp.soles = soles + o.soles;
            tmp.centimos = centimos + o.centimos;
            if(tmp.centimos >= 100) {
                tmp.soles++;
                tmp.centimos -= 100;
            }
            return tmp;
        }*/
        friend SolPeruano operator+(const SolPeruano &m, const SolPeruano &o);
        friend std::ostream& operator<<(std::ostream& output, const SolPeruano& o);
};

SolPeruano operator+(const SolPeruano &m,  const SolPeruano &o) {
    SolPeruano tmp(0, 0);
    tmp.soles = m.soles + o.soles;
    tmp.centimos = m.centimos + o.centimos;
    if(tmp.centimos >= 100) {
        tmp.soles++;
        tmp.centimos -= 100;
    }
    return tmp;
}

std::ostream& operator<<(std::ostream& output, const SolPeruano& o) {
    output << "S/." << o.soles << "." << o.centimos;
    return output;
}

#endif