#include <stdio.h>
int main() {
	int c, m, q = 0, d = 0, n = 0, p = 0;

	//쿼터(Quarter, $0.25)의 개수, 다임(Dime, $0.10)의 개수, 니켈(Nickel, $0.05)의 개수, 페니(Penny, $0.01)
	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%d", &m);

		q = m / 25;
		d = m % 25 / 10;
		n = m % 25 % 10 / 5;
		p = m % 25 % 10 % 5;

		printf("%d %d %d %d\n", q, d, n, p);
	}


	return 0;
}