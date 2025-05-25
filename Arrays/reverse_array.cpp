#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> original_arr;
	original_arr = {1, 2, 3};
	int size = original_arr.size(); 
	
	for (int i = 0; i < size / 2; i++) {
		int x = original_arr[i];
		original_arr[i] = original_arr[size-1-i];
		original_arr[size-1-i] = x;
	}

	for (int a : original_arr) {
		cout << a << endl;
	}
}
