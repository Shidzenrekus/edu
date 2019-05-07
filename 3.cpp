//Дано число 2. Из него можно или вычитать, или возводить в квадрат. Stdout - число 64.

#include <iostream>
using namespace std;
int main(void) {
    int m = 2;
    for (int k = 1; k < 3; k++)
    	m = m * m - 1;
    m = m * m;
    cout << m << "\n";
    return 0;
}
