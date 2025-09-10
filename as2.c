int main(void) {
	int a[5] = {10, 20, 30, 40, 50};
	int *p = a; // points to the first element; arrays decay to pointer to first element


	// traverse and print via pointer
	printf("Original array via pointer: ");
	for (size_t i = 0; i < 5; ++i) {
	printf("%d ", *(p + i)); // equivalent to a[i]
	}
	printf("\n");


	// modify values using pointer arithmetic (e.g., add 1*i)
	for (size_t i = 0; i < 5; ++i) {
	*(p + i) += (int)i; // mutate the actual array storage
	}


	// print using both the pointer and the array name
	printf("Modified via pointer: ");
	for (size_t i = 0; i < 5; ++i) printf("%d ", *(p + i));
	printf("\n");


	printf("Modified via array name: ");
	for (size_t i = 0; i < 5; ++i) printf("%d ", a[i]);
	printf("\n");


	// demonstrate pointer increment traversal (common idiom)
	p = a; // reset
	printf("Walk with p++: ");
	for (size_t i = 0; i < 5; ++i) {
	printf("%d ", *p);
	p++; // jumps by sizeof(int) bytes
	}
	printf("\n");
	return 0;
}v