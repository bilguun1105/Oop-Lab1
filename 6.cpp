#include<iostream>
#define max(a,b) (a>b) ? a : b // 2 тооны ихийг нь авдаг macro функц 
#define min(a,b) (a<b) ? a : b // 2 тооны багыг нь авдаг macro funkts 
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mx = INT_MIN; // mx дээр анхны утга болгож int төрлийн хамгийн бага утгыг өгсөн
    int mn = INT_MAX; // mn дээр анхны утга болгож int төрлийн хамгийн их утгыг өгсөн
    int a;
    for(int i=0; i<n; i++)
    {
        cin >> a;   // Гараас n тоогоо авж байна
        mx = max(mx, a);    // Тухайн элемэнтийг mx элемэнттэйгээ жишиж ихийг нь mx-д хадгална
        mn = min(mn, a);    // Тухайн элемэнтийг mn элемэнттэйгээ жишиж багийг нь mn-д хадгална
    }
    cout << "Max Element = " << mx<< endl;
    cout << "Min Element = " << mn << endl;
}