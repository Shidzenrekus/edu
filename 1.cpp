// Дано число 2. Трижды возвести его в квадрат и вывести stdout.

#include <iostream>
using namespace std;
int main(void) {
     int n = 2;
     for (int k = 1; k < 4; k++) 
          n = n * n;
     cout << n << "\n";
     return 0;
}
