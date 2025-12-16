#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void main() {
	int data[11] = { 12,17,10,5,15,25,11,7,25,16,19 };

	vector <int> myvector(data, data + 11);

	auto cetakVector = [](const vector<int> vec, const string& judul)
		{
			cout << judul << endl;
			for (int val : vec)
			{
				cout << val << " | ";
			}
			cout << "\n====================================================\n";
		};
	cetakVector(myvector, "isi vector awal :");
	//asc (ascending)
	sort(myvector.begin(), myvector.end());
	cetakVector(myvector, "isi vector setelah asc :");

	//desc (descending)
	sort(myvector.rbegin(), myvector.rend());
	cetakVector(myvector, "isi vector setelah desc :");

}