#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read number of elements

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Read array elements
    }

    int counted[n];  // To mark counted elements
    for (int i = 0; i < n; i++) {
        counted[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        if (counted[i])
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;  // Mark as counted
            }
        }
        printf("%d %d\n", arr[i], count);
    }

    return 0;
}
