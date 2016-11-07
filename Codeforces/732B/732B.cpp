/*
	Codeforces
	Cormen - The Best Friend of a Man
*/

#include <cstdio>

using namespace std;

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int a[n], sum = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; i++) {
		if (k - (a[i-1] + a[i]) > 0) {
			sum += k - (a[i-1] + a[i]);
			a[i] += k - (a[i-1] + a[i]);
		}
	}
	printf("%d\n", sum);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}