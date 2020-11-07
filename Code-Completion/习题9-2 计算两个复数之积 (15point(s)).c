struct complex multiply(struct complex x, struct complex y)
{
	struct complex rslt;

	rslt.real = x.real * y.real - x.imag * y.imag;
	rslt.imag = x.real * y.imag + x.imag * y.real;

	return rslt;
}
