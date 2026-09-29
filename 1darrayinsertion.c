#include <stdio.h>

int main() {
    int arr[100]; 
    int size, i, element, pos;

    printf("Enter the current number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);
    
    printf("Enter the position (0 to %d) where you want to insert: ", size);
    scanf("%d", &pos);

    if (pos < 0 || pos > size || size >= 100) {
        printf("Invalid position or array is full!\n");
        return 1;
    }

    for (i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;

    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
