#include<iostream>
#define max(a,b) (a) > (b) ? a : b  //  2 тооны ихийг нь авдаг macro функц 
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c; 
    int k = max(a,b); // a, b 2-ийн ихийг нь k-д хадгална
    k = max(k,c); // k,c 2 -ийн ихийг нь k-д хадгална
    cout << "Hamgiin ih element = "<< k << endl; // олсон k тоо буюу хамгийн их тоог хэвлэв
}