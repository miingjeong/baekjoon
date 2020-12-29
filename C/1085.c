#include <stdio.h>
int main() {


	int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (w - x > h - y) {
		if (h - y > x)printf("%d", (x > y) ? y : x);
		else if (h - y > y)printf("%d", (y > x) ? x : y);
		else printf("%d", h - y);
	}
	else
	{
		if (w - x > x)printf("%d", (x > y) ? y : x);
		else if (w - x > y) printf("%d", (y > x) ? x : y);
		else printf("%d", w - x);
	}
	return 0;
}
	
#include <stdio.h>
int main() {


	int x, y, w, h;

	scanf("%d %d %d %d", &x, &y, &w, &h);

	if (x > w / 2) {
		if (y < h / 2) {
			if ((w - x) < y)
				printf("%d\n", (w - x));
			else
				printf("%d\n", y);
		}
		else {
			if ((w - x) < (h-y))
				printf("%d\n", (w - x));
			else
				printf("%d\n", (h-y));
		}
	}


	else {
		if (y < h / 2) {
			if ((w - x) < y)
				printf("%d\n", (w - x));
			else
				printf("%d\n", y);
		}
		else {
			if ((w - x) < (h-y))
				printf("%d\n", (w - x));
			else
				printf("%d\n", (h-y));

		}
	}

	return 0;
}