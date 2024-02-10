#include<iostream>
using namespace std;
int Square(int a,int b) // int төрлийн утга буцаадаг хэрэглэгчийн функц зохиосон
{
    int s;
    s = a*b;    // s-ийг гараас авсан утгуудаар олсон
    return s;
}
int main()
{
    int a,b;
    cin >> a >> b;
    int s;
    s = Square(a,b);    // өөрийн үүсгэсэн функцийг ашигласан
    cout << "Talbai = " << s << endl; 
}