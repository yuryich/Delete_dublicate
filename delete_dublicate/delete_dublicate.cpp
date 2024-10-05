#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

int main() {
	int n;

	std::cin >> n;

	std::set<int> unique_numbers;
	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;
		unique_numbers.insert(x);
	}

	std::vector<int> sorted_numbers(unique_numbers.begin(), unique_numbers.end());
	std::sort(sorted_numbers.rbegin(), sorted_numbers.rend());

	for (int num : sorted_numbers) {
		std::cout << num << std::endl;
	}

}