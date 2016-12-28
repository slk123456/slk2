#include<iostream>
using namespace std;
int main() {
	int n, num, temp;
	while ((cin >> n) && n != 0) {
		int sum = 0;
		cin >> num;
		sum += num * 6 + 5;
		n--;
		while (n--) {
			temp = num;
			cin >> num;
			if (temp>num)
				sum += (temp - num) * 4 + 5;
			else if (temp<num)
				sum += (num - temp) * 6 + 5;
			else
				sum += 5;
		}
		cout << sum << endl;
		cout << endl;
	}
	return 0;
}
