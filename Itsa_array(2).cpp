﻿#include <iostream>
#include<algorithm>
using namespace std;

/*
問題描述 ：
某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？
輸入說明 ：
程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。
輸出說明 ：
輸出最少車輛需求數。
3
1 6 3 12 6 18
*/
int main()
{
	int  a, b, m=0,n=0, t[25];
	cin >> n;
	fill(t, t + 25, 0);
	for (int i = 0; i < n; i++)
	{
		cin >> a>>b;
		for (int j = a; j < b; j++)
		{
			t[j]++;
		}
	}
	for (int k = 0; k <= 24; k++) {
		if (t[k] > m)
			m = t[k];
	}
	cout << m << endl;
}
