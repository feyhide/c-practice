int main()
{
	int end = 5;

	printf("Pattern Printing using Nested While loop");

	int i = 1;

	while (i <= end) {
		printf("\n");
		int j = 1;
		while (j <= end) {
			printf("*");
			j = j + 1;
		}
		i = i + 1;
	}
	return 0;
}
