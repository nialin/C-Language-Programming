#include <stdio.h>
#include <math.h>

int main()
{
	double x1, y1, x2, y2, x, y;

	scanf("%lf%lf%lf%lf", &x1, &y1, &x2, &y2);

	x = x1 + x2;
	y = y1 + y2;

	if(fabs(x) < 0.05)
		x = 0;

	if(fabs(y) < 0.05)
		y = 0;

	printf("(%.1lf, %.1lf)\n", x, y);

	return 0;
}
