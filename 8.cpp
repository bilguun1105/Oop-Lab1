#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    double arif;
    int a;
    for(int i=0; i<n; i++)
    {
        cin >> a;   // Гараас n тоогоо авж байна
        sum += a;   // Тухайн тоог өмнөх тоонуудын нийлбэр дээр нэмж байна
    }
    arif = sum * 1.0 / n; // Нийт нийлбэрийг нийт тооны тоонд хуваана ингэхдээ 1.0-д үржүүлж өгснөөр float төрлийнх болгосон
    cout << "Aripmetik dundaj = " << arif << endl;
}