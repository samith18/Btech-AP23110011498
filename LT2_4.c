#include <stdio.h>
#include <conio.h>

int main() 
{
// Write a program in C to count the total number of duplicate elements in an array.
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the Elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique Elements in the array are: ");

    for (int i = 0; i < size; i++) {
        int count = 0;  
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;  
            }
        }


        if (count == 1) {
            printf("%d ", arr[i]);  
        }
    }

    return 0;

}
