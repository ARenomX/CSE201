//pi estimator

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

int main()
{
    srand(time(NULL));
    int N = 100000000;
    int in = 0;
    for (int i; i<N;i++){
        float x = (float) rand() / RAND_MAX;
        float y = (float) rand() / RAND_MAX;
        x = x-0.5;
        y = y-0.5;
        if (sqrt((x*x)+(y*y))<0.5){
            in=in+1;
        }
    }
    float ans = (float) in/N;
    std::cout<<4*ans<<std::endl;
}