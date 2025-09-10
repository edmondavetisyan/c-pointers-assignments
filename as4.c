int main(void) {
	int x = 5;
	int *p = &x; // pointer to int
	int **pp = &p; // pointer to pointer to int


	printf("x = %d\n", x);
	printf("*p = %d (via single pointer)\n", *p);
	printf("**pp= %d (via double pointer)\n", **pp);


	// mutate x through **pp
	**pp = 123;
	printf("x after **pp=123: %d\n", x);
	return 0;
}