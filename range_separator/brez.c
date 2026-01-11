#include <stdio.h>

void print_segments(int start, int end, int segments)
{
    int delta = end - start;
    int step = delta / segments;
    int err_step = (delta % segments) * 2;
    int err = 0;
    int i = start;
    while (i < end) {
        printf("(%d, ", i);
        i += step;
        err += err_step;
        if (err >= segments) {
            i++;
            err -= 2 * segments;
        }
        if (i != end) {
            printf("%d)\n", i - 1);
        }
    }
    printf("%d)\n", i);
}

int main()
{
    int range;
    int segments;

    printf("Range: ");
    scanf("%d", &range);
    printf("segments: ");
    scanf("%d", &segments);

    print_segments(1, range, segments);

    return 0;
}
