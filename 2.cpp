//Дан массив из 10 чисел: 12, 15, 17, 15, 14, 12, 10, 13, 14, 15. Вывести число массивов, содержащих 15.

#include <iostream>
using namespace std;
int main(void) {
    int d[10] = {12, 15, 17, 15, 14, 12, 10, 13, 14, 15};
    int m = 0;
    for (int k = 0; k < 10; k++)
        if (d[k] == 15) m = m + 1;
    cout << m << "\n";
    return 0;
}
