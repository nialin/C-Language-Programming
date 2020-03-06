void reverse(int a[], int n) {
	int i, tmp;

	for(i = 0; i < n / 2; ++i) {
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

int ArrayShift( int a[], int n, int m )
{
	reverse(a, n - m % n);
	reverse(a + n - m % n, m % n);
	reverse(a, n);
}