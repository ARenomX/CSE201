#include <iostream>

int** readMatrix(int& n, int& m)
{
    std::cout << "Insert the number of rows: ";
    std::cin >> n;
    std::cout << "Insert the number of columns: ";
    std::cin >> m;

    int** myMatrix;

    myMatrix = new int*[n];

    int i;
    for (i=0;i<n;i++){
        *(myMatrix+i) = new int[m];
    }

    std::cout << "Set the values: "<<std::endl;

    int j;

    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            int input;
            std::cout << "Row ";
            std::cout << (i+1);
            std::cout << " Column ";
            std::cout << (j+1);
            std::cout << ": ";
            std::cin >> input;
            myMatrix[i][j]=input;
        }
    } 

    return myMatrix;
}

int main()
{
    int nA, mA;
    int** A = readMatrix(nA, mA);

    std::cout << "Your matrix is: "<<std::endl;
    int i;
    int j;
    for (i=0;i<nA;i++){
        for (j=0;j<mA;j++){
            std::cout << A[i][j];
            std::cout << " ";
        }
        std::cout<<std::endl;
    }
  return 0;
}