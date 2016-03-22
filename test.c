#include <stdio.h>

int main(int argc, char * argv[])
{
	int a, b, c, d, e, f;
	float x, y;
	printf("input a,b,c of equation ax+by+c=0\n");
	scanf("%d %d %d", &a, &b, &c);
	printf("input d,e,f of equation dx+ey+f=0\n");
	scanf("%d %d %d", &d, &e, &f);

	printf("The two linear equations are:");
	printf("%dx+%dy+%c\n", a, b, c);
	printf("%dx+%dy+%c\n", d, e, f);

	y = (float)((a * f - d * c) / (d * b - a * e));
	x = (float)((-b * y - c) / a);

	printf("Intersection point is <%.2f, %.2f>\n", x, y);


	return 0;
}