#include <stdio.h>

void print_segments(int start, int end, int segments)
{
    int delta = end - start + 1;
    int step = delta / segments;
    int err_step = delta % segments;
    int err = 0;
    int cur = start;
    int next = start;
    for (int c = 0; c < segments; c++) {
        next += step;
        err += err_step;
        if (err >= segments) {
            next++;
            err -= segments;
        }
		printf("(%d, %d)\n", cur, next - 1);
		cur = next;
    }
}

int main()
{
    int range;
    int segments;
    while (1) {
        printf("Range: ");
        scanf("%d", &range);
        printf("segments: ");
        scanf("%d", &segments);
        print_segments(1, range, segments);
    }
    return 0;
}
