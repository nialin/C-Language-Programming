int narcissistic( int number )
{
	int i, sum, stack[10], top = 0;

	for(i = number; i; i /= 10)
		stack[top++] = i % 10;

	for(sum = 0, i = 0; i < top; ++i)
		sum += pow(stack[i], top);

	return sum == number;
}

void PrintN( int m, int n ){
	int i;

	for(i = m + 1; i < n; ++i)
		if(narcissistic(i))
			printf("%d\n", i);
}