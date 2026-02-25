	#include <iostream>
	#include <cmath>
	using namespace std;

	int main() {
		double x[5], y[5];

		for (int i = 0; i < 4; i++) {
			cin >> x[i] >> y[i];
		}

		x[4] = x[0];
		y[4] = y[0];

		double d[4];

		for (int i = 0; i < 4; i++) {
			d[i] = sqrt(pow(x[i+1] - x[i], 2) + pow(y[i + 1] - y[i], 2));
		}


		double sh = d[0];
		for (int i = 0; i < 4; i++) {
			if (d[i] < sh) {
				sh = d[i];
			}
		}

		cout << sh;
	}
