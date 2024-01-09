#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    int *x = (int*)a;
    int *y = (int*)b;
    return *x - *y;
}

int main() {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
   	int lights[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &lights[i]);
    }

    qsort(lights, m, sizeof(int), compare);
    int count = 0;
    int prev_light = 0;
    for (int i = 0; i < m; i++) {
        if (lights[i] - prev_light > 2 * k) {
            int new_light = lights[i] - k;
            if (new_light > prev_light) {
                count++;
                prev_light = new_light;
                i--;  // start over from the same light
            } else {
                prev_light = lights[i];
            }
        }
    }
    if (n - prev_light > k) {
        count++;
    }
    printf("%d\n", count);
    return 0;
