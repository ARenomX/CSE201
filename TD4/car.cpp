#include<iostream>
#include<string>
using namespace std;

class Car{
    private:
        string brand;
        string name;
        string engine;
        string seats;
        string wheels;
        string steering;

    public:
    
    Car(string a, string b, string c, string d, string e, string f){
        brand = a;
        name = b;
        engine = c;
        seats = d;
        wheels = e;
        steering = f;
    }
    ~Car(){
        
    }
}

int main() {

    Car c;      
    c.print();  
    
    Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");        
    c2.print(); 

}