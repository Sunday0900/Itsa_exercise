#include<iostream>
using namespace std;
/*問題描述：
試撰寫一個程式，宣告一個 1 維的整數陣列，並計算元素中所有元素的立方和。
輸入說明：
任意輸入六個整數。
輸出說明：
輸出所有元素的立方和。*/
int main()
{
    int a = 0, total = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> a;
        total += a * a * a;
    }
    cout << total << endl;
    return 0;
}