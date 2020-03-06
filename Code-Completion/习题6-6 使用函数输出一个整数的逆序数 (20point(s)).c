int reverse( int number )
{
	int i, stack[10], top = 0, rslt = 0, sign = 1;

	if(number < 0) {
		sign = -1;

		number = abs(number);
	}

	for( ; number; number /= 10)
		stack[top++] = number % 10;

	for(i = 0; i < top; ++i) {
		rslt *= 10;
		rslt += stack[i];
	}

	return rslt * sign;
}