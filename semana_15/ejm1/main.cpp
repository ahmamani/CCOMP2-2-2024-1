#include <iostream>
#include "SolPeruano.h"

using namespace std;

int main() {
    SolPeruano s1(5, 50);
    SolPeruano s2(6, 70);

    SolPeruano s3 = s2 + s1;

    cout << s3 << endl;

    return 0;
}
