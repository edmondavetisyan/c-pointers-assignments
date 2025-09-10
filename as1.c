int main(void) {
	int x = 42; // an integer variable with an initial value
	int *px = &x; // pointer to int, initialized to the address of x


	printf("x value: %d\n", x);
	printf("address of x (&x): %p\n", (void*)&x);
	printf("value of px (address stored): %p\n", (void*)px);


	// modify x through the pointer (dereference)
	*px = 99;
	printf("new x value after *px=99: %d\n", x);


	// double‑check: dereferencing yields the same value as x
	printf("*px reads: %d\n", *px);
	return 0;
}