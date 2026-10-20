#include "../../io_pricoles/args_reader.c"

const int STANDART_N = 10;

int comb_p(int n)
{
    int r = 1;
    for (int i = n; i > 1; i--)
    {
        r *= i;
    }
    return r;
}

int comb_a(int n, int m)
{
    int r = 1;
    for (int i = n; i > (n - m); i--)
    {
        r *= i;
    }
    return r;
}

int comb_c(int n, int m)
{
    return comb_a(n, m) / comb_p(m);
}

void read_argument(int *v, char *str) //
{
    sscanf(str, "%d", v);
}

void init(int argc, char **argv, int *n)
{
    if (argc > 1)
    {
        read_argument(n, argv[1]);
    }
    else
    {
        printf("else");
        *n = STANDART_N;
    }
}

void print_table(int size)
{
    printf("     |");
    for (int i = 1; i <= size; i++)
    {
        printf("%5d|", i);
    }
    printf("    n\n");
    for (int m = 1; m <= size; m++)
    {
        printf("%5d|", m);
        for (int n = 1; n <= size; n++)
        {
            if (m <= n)
            {
                printf("%5d|", comb_c(n, m));
            }
            else
            {
                printf("      ");
            }
        }
        printf("\n");
    }
    printf("    m\n");
}

int main(int argc, char **argv)
{
    int n;
    print_args(argc, argv);
    init(argc, argv, &n);
    printf("Table for:\n(n)\n(m)\n");
    printf("Table size: %d\n", n);
    print_table(n);
    return 0;
}
