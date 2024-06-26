#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;

void izanga1();
void izanga2();

int main() 
{
    string n1, n2;
    double suma1, suma2;
    izanga1();
    cin >> n1;
    cout<<"Iveskite suma: "<<endl;
    cin>>suma1;
    izanga2();
    cin >> n2;

    if(n1=="usd")
    {
        if(n2=="euro"){
            suma2=suma1*.92;   
            cout<<suma1<<" USD = "<<suma2<<" EUR"<<endl;
        }
        if(n2=="jpy"){
            suma2=suma1*115,39;
            cout<<suma1<<" USD = "<<suma2<<" JPY"<<endl;
        }
        if(n2=="rub"){
            suma2=suma1*140,75;
            cout<<suma1<<" USD = "<<suma2<<" RUB"<<endl;
        }
    }

    if(n1=="eur")
    {
        if(n2=="usd"){
            suma2=suma1*1.09;
            cout<<suma1<<" EUR = "<<suma2<<" USD"<<endl;
        }
        if(n2=="jpy"){
            suma2=suma1*125.40;
            cout<<suma1<<" EUR = "<<suma2<<" JPY"<<endl;
        }
        if(n2=="rub"){
            suma2=suma1*153.79;
            cout<<suma1<<" EUR = "<<suma2<<" RUB" <<endl;
        }
    }

    if(n1=="jpy")
    {
        if(n2=="usd"){
            suma2=suma1*0.0087;
            cout<<suma1<<" JPY = "<<suma2<<" USD"<<endl;
        }
        if(n2=="eur"){
            suma2=suma1*0.0080;
            cout<<suma1<<" JPY = "<<suma2<<" EUR"<<endl;
        }
        if(n2=="rub"){
            suma2=suma1*1.23;
            cout<<suma1<<" JPY = "<<suma2<<" RUB"<<endl;
        }
    }

    if(n1=="rub")
    {
        if(n2=="usd"){
            suma2=suma1*0.0071;
            cout<<suma1<<" RUB = "<<suma2<<" USD"<<endl;
        }
        if(n2=="eur"){
            suma2=suma1*0.0066;
            cout<<suma1<<" RUB = "<<suma2<<" EUR"<<endl;
        }
        if(n2=="jpy"){
            suma2=suma1*0.82;
            cout<<suma1<<" RUB = "<<suma2<<" JPY"<<endl;
        }
    }

    return 0;
}
 
void izanga1()
{
    cout << "                                          " << endl;
    cout << "Is kokios valiutos noretumete konvertuoti?" << endl;
    cout << "                                          " << endl;
    cout << "Galimos Valiutos: " << endl;
    cout << "                                          " << endl;
    cout << "1. USD - JAV doleris " << endl;
    cout << "2. EUR - euras " << endl;
    cout << "3. JPY - Japonijos jena " << endl;
    cout << "4. RUB - Rusijos Rublis " << endl;
    cout << "                                          " << endl;
    cout << "Iveskite norima valiuta." << endl;
}

void izanga2()
{
    cout << "                                          " << endl;
    cout << "I kokia valiuta noretume konvertuoti?" << endl;
    cout << "                                          " << endl;
    cout << "Galimos Valiutos: " << endl;
    cout << "                                          " << endl;
    cout << "1. USD - JAV doleris " << endl;
    cout << "2. EUR - euras " << endl;
    cout << "3. JPY - Japonijos jena " << endl;
    cout << "4. RUB - Rusijos Rublis " << endl;
    cout << "                                          " << endl;
    cout << "Iveskite norima valiuta." << endl;
}
