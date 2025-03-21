#include <iostream>

int main() {
	int n;
	std::cout << "Размер массива: ";
	std::cin >> n;
	int* mas = new int[n] {0};
	for (int i = 0; i < n; i++) {
		mas[i] = i*i ;
		std::cout << "massive[" << i << "] = " << mas[i] << std::endl;
	}
}