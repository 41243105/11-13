#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

template<typename t>//可以替換資料型態

int BinarySearch(t data[], int n, t target) {//2分法
	int x = 0, y = n - 1;
	while (x <= y) {//如果最大值<=最小值 就會一直執行
		int mid = (x + y)/2;//找中間值
		if (data[mid] == target)return mid;//如果target=中間值 直接輸出中間數
		if (data[mid] < target) {
			x = mid + 1;//如果target>中間值 最小值=中間值+1
		}
		if (data[mid] > target) {
			y = mid - 1;//如果target<中間值 最大值=中間值-1
		}
	}
	return -1;
}

int main() {
	int q, n;
	char T;
	cin >> T >> n >> q;

	if (T == 'i') {//如果T是數字的時候
		int data[30];//最多30個整數
		for (int i = 0; i< n; i++) {
			cin >> data[i];//輸入整數資料
		}
		for (int j = 1; j <= q; j++) {
			int target;
			cin >> target; // 輸入要找的數字
			cout << BinarySearch(data,n, target) << endl;//帶到2分法的函式找到target
		}
	}
	if (T == 's') {//如果T是字串的時候
		string data[100];//長度不超過100
		for (int i = 0; i < n; i++) {
			cin >> data[i];//輸入字串資料
		}
		for (int j = 1; j <= q; j++) {
			string target;
			cin >> target;//輸入要找的字串
			cout << BinarySearch(data, n, target) << endl;//帶到2分法的函式找到target
		}
	}
	return 0;
}
