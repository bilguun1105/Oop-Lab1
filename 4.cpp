#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = n*(n+1)/2; // 1 ээс n хүртэлх тооны нийлбэрийг олдог томъёог ашигласан
    float arif = sum*1.0/n; // 1.0 ээр үржүүлж бутархай төрлийнх болгосон
    cout << "Niilber = " << sum << endl;
    cout << "Aripmetik dundaj = " << arif << endl;
}