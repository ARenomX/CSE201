//Eratosthenes//

#include <iostream>

int eratosthenes (int N){
    int numbers[N-1];
    for (int i=1;i<N;i++){
        numbers[i-1]=i+1;
    }:cout<<"step 1"<<std::endl;

    int a = 2;
    while(a<N){
        for (int i=2*a;i<N+1;i=i+a){
            numbers[i-2]=0;
        }
        a=a+1;
        while (numbers[a-2]==0)
        {
            a=a+1;
        }
    }
    for (int i=0;i<N-1;i++){
        if (numbers[i]>0){
            std::cout<<numbers[i]<<std::endl;
        }
    }
}

int main() {
    std::cout<< "Up to what N do you want the primes: ";
    int max;
    std::cin >> max;
    eratosthenes(max);
    return 0;
}


//test
