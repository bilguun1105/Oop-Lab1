#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    long urj = 1;
    int a;
    for(int i=0; i<n; i++)
    {
        cin >> a;   // Гараас n тоогоо авж байна
        sum += a;   // Тухайн тоог өмнөх тоонуудын нийлбэр дээр нэмж байна
        urj *= a;   // Тухайн тоог өмнөх тоонуудын үржвэр дээр үржүүлж өгч байна
    }
    cout << "Niilber = " << sum << endl;
    cout << "Urjver = " << urj << endl;
}