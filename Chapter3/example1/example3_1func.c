int max(int a, int b) {
	return a > b ? a : b;
}

int max_3(int a, int b, int c) {
	int tmp = a > b ? a : b;
	return tmp > c ? tmp : c;
	// return a > b ? (a > c ? a : c) : (b > c ? : b : c);
}