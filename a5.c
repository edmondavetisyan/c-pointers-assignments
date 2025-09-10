int main(void) {
	char str[] = "Hello"; // NUL-terminated array: {'H','e','l','l','o','\0'}
	char *ps = str; // pointer to first character


	// print using pointer and a loop (no str[i])
	printf("String via pointer loop: ");
	while (*ps != '\0') {
		putchar(*ps);
		ps++; // move to next char
	}	
	putchar('\n');


	// count characters using pointer arithmetic
	size_t count = 0;
	for (char *p = str; *p != '\0'; ++p) {
		count++;
	}
	printf("Length counted by pointers: %zu\n", count);


	// demonstrate in-place modification via pointer
	for (char *p = str; *p; ++p) {
		if (*p >= 'a' && *p <= 'z') *p = (char)(*p - 'a' + 'A'); // to upper
	}
	printf("Uppercased in-place: %s\n", str);
	return 0;
}