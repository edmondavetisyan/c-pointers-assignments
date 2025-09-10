static void swap(int *a, int *b) {
	if (a == NULL || b == NULL) return; // defensive
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


int main(void) {
	int u = 7, v = 13;
	printf("Before swap: u=%d, v=%d\n", u, v);
	swap(&u, &v); // pass addresses so the function can mutate caller variables
	printf("After swap: u=%d, v=%d\n", u, v);
	return 0;
}