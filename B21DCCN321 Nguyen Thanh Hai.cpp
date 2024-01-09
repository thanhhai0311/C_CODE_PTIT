#include <stdio.h>

typedef struct Student
{
    int id;
    char name[100];
    float a, b, c, sum;
} STD;

void add(STD sv[], int *stt);
void update(STD sv[], int k);
void calculate(STD sv[], int stt, int result[], int *count);

int main()
{
    int n;
    STD sv[100];
    int stt = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 1)
        {
            int k;
            scanf("%d", &k);
            for (int i = 0; i < k; i++)
                add(sv, &stt);
            printf("%d\n", k);
        }
        if (n == 2)
        {
            int k;
            scanf("%d", &k);
            update(sv, k);
            printf("%d\n", k);
        }
        if (n == 3)
            break;
    }

    int result[100];
    int count = 0;
    calculate(sv, stt, result, &count);

    for (int i = 0; i < count; i++)
    {
        int index = result[i];
        printf("%d %s %.1f %.1f %.1f\n", sv[index].id, sv[index].name, sv[index].a, sv[index].b, sv[index].c);
    }

    return 0;
}

void add(STD sv[], int *stt)
{
    sv[*stt].id = *stt + 1;
    scanf("\n%[^\n]s", sv[*stt].name);
    scanf("%f %f %f", &sv[*stt].a, &sv[*stt].b, &sv[*stt].c);
    sv[*stt].sum = sv[*stt].a + sv[*stt].b + sv[*stt].c;
    *stt += 1;
}

void update(STD sv[], int k)
{
    scanf("\n%[^\n]s", sv[k - 1].name);
    scanf("%f %f %f", &sv[k - 1].a, &sv[k - 1].b, &sv[k - 1].c);
    sv[k - 1].sum = sv[k - 1].a + sv[k - 1].b + sv[k - 1].c;
}

void calculate(STD sv[], int stt, int result[], int *count)
{
    for (int i = 0; i < stt; i++)
    {
        if (sv[i].a < sv[i].b && sv[i].b < sv[i].c)
        {
            result[*count] = i;
            *count += 1;
        }
    }
}

