#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;

template<typename t>//�i�H������ƫ��A

int BinarySearch(t data[], int n, t target) {//2���k
	int x = 0, y = n - 1;
	while (x <= y) {//�p�G�̤j��<=�̤p�� �N�|�@������
		int mid = (x + y)/2;//�䤤����
		if (data[mid] == target)return mid;//�p�Gtarget=������ ������X������
		if (data[mid] < target) {
			x = mid + 1;//�p�Gtarget>������ �̤p��=������+1
		}
		if (data[mid] > target) {
			y = mid - 1;//�p�Gtarget<������ �̤j��=������-1
		}
	}
	return -1;
}

int main() {
	int q, n;
	char T;
	cin >> T >> n >> q;

	if (T == 'i') {//�p�GT�O�Ʀr���ɭ�
		int data[30];//�̦h30�Ӿ��
		for (int i = 0; i< n; i++) {
			cin >> data[i];//��J��Ƹ��
		}
		for (int j = 1; j <= q; j++) {
			int target;
			cin >> target; // ��J�n�䪺�Ʀr
			cout << BinarySearch(data,n, target) << endl;//�a��2���k���禡���target
		}
	}
	if (T == 's') {//�p�GT�O�r�ꪺ�ɭ�
		string data[100];//���פ��W�L100
		for (int i = 0; i < n; i++) {
			cin >> data[i];//��J�r����
		}
		for (int j = 1; j <= q; j++) {
			string target;
			cin >> target;//��J�n�䪺�r��
			cout << BinarySearch(data, n, target) << endl;//�a��2���k���禡���target
		}
	}
	return 0;
}