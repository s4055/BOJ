#include <stdio.h>
#include<math.h>

int main() {
	double line, h, w;
	scanf("%lf %lf %lf", &line, &w, &h);

	double r = line * line / (w * w + h * h);
	//printf("%lf\n", r);
	double rate = sqrt(r);
	//printf("%lf\n", rate);
	//printf("w : %lf\nh : %lf\n", rate * w, rate * h);
	//printf("\nw : %d\nh : %d\n", (int)(rate * w), (int)(rate * h));
	printf("%d %d\n", (int)(rate * w), (int)(rate * h));
}