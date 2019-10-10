#include<iostream>

int main(){
    int **p = new int*[2];  //
    int i;
    int j;
    for (i=0;i<2;i++){
        *(p+i) = new int[3];
    }
    
    p[0][0] = 0;
    p[0][1] = 1;
    p[0][2] = 2;

    p[1][0] = 3;
    p[1][1] = 4;

    for (int r = 0; r < 2; r++){
        for (int c = 0; c < 3; c++){
            std::cout << p[r][c] << " ";
        }
        std::cout << std::endl;
    }

    for (i=0;i<2;i++){
        delete[] p[i];
    }
    
}