#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m = sqrt(n);
    bool div = false; // тоонд хуваагдаж байгаа эсэхийг шалгах хувьсагч анх false утгатай байна
    if(n == 1) // 1 анхны тоо биш учир хариуг шууд гаргана.
    {
        cout << "Anhnii too bish\n";
    }
    else {
        for(int i=2; i<=m; i++)
        {
            if(n % i == 0) // хэрвээ n тоо хуваагдчихвал
            {
                div = true; // тоонд хуваагдаж буй учир div хувьсагчийг true утгатай болгоно
                break;  // тоонд хуваагдсан учир цааш хуваагдаж байгаа эсэхийг шалгах шаардлагагүй болно тиймээс зогсоно.
            }
        }
        // div- ээс хамаарж хариуг гаргана.
        if(div) cout << "Anhnii too bish\n";    
        else cout << "Anhnii too mon\n";
    }
}