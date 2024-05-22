#include <iostream>
#include <iomanip>
using namespace std;

void tambah(float *a,float *b)
    {
    cout<<"Hasil penjumlahan : "<<*a + *b<<endl;
    }

void kurang(float *a,float *b)
    {
    cout<<"Hasil pengurangan : "<<*a - *b<<endl;
    }

void kali(float *a,float *b)
    {
    cout<<"Hasil perkalian : "<<*a * *b<<endl;
    }

void bagi(float *a,float *b)
    {
    cout<<"Hasil pembagian : "<<fixed<<setprecision(2)<<*a / *b<<endl;
    }
    
int main()
{
    float a,b;
    char o;
    cout<<"Masukkan bilangan 1 : ";
    cin>>a;
    cout<<"Masukkan bilangan 2 : ";
    cin>>b;
    cout <<"Masukkan operator (+, -, *, /): ";
    cin>>o;
    
    switch (o) 
    {
        case '+':
            tambah(&a, &b);
            break;
        case '-':
            kurang(&a, &b);
            break;
        case '*':
            kali(&a, &b);
            break;
        case '/':
            bagi(&a, &b);
            break;
        default:
            cout << "Operator tidak tersedia" <<endl;
            break;
    return 0;
    }
}