#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;    // Тэгш тоог тоолох тоологч
    int a;
    for(int i=0; i<n; i++)
    {
        cin >> a;   // Гараас n тоогоо авж байна
        if(a%2 == 0) cnt += 1; // Хэрвээ тухайн тоо 2-д хуваагдаж байвал тоологчийг 1 ээр нэмэгдүүлнэ.
    }
    cout << "Tegsh toonii too = " << cnt << endl;

}