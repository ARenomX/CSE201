/* 
#include <iostream>

int main() {
    int* a;
    int* b = new int[5];

    *b = 0;
    a = b;

    for (int i = *a; i < 4; i = i + 1) {
        *(b+i) = *a + 1;
        a = (b+i);
    }

    std::cout << a << std::endl;

    delete[] b;
}


#include <iostream>

void init(int* &a, int size) {
    a = new int[size];
    for (int i = 0; i < size; i = i + 1)
        a[i] = size - i;
}

int main() {
    int *m1 = NULL;
    init(m1, 5);
    std::cout << m1[4] << std::endl;
    delete[] m1;
}
*/

#include <iostream>

void init(int* a, int size) {
    a = new int[size];
    for (int i = 0; i < size; i = i + 1)
        a[i] = i;
}

int main() {
    int *m1 = new int[5];
    for (int i = 0; i < 5; i = i + 1) {
        *(m1+i) = i;
    }

    init(m1, 5);
    std::cout << m1[4] << std::endl;
    delete[] m1;
}