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
    Car(){
        brand = "Generic";
        name = "Model";
        engine = "Generic";
        seats = "Generic";
        wheels = "Generic";
        steering = "Generic";
    }
    Car(string a, string b, string c, string d, string e, string f){
        brand = a;
        name = b;
        engine = c;
        seats = d;
        wheels = e;
        steering = f;
    }

    void print(){
        cout << "This car is a " << brand << ' ' << name << " that is composed by:" << endl;
        cout << "An engine of type: " << engine << endl;
        int i;
        for (i=0;i<4;i=i+1){
            cout << "A seat of type " << seats << endl;
        }
        for (i=0;i<4;i++){
            cout << "A wheel of type " << wheels << endl;
        }
        cout << "A steering wheel of type: " << steering << endl;
    }
};

int main() {

    Car c;      
    c.print();  
    
    Car c2("Peugeot","205 Gti", "four cylinders in line", "Konig","Recaro", "Momo");        
    c2.print(); 

}