#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_R_LENGTH 11  // 10 digits + 1 for null terminator
#define MAX_M_LENGTH 21  // 20 characters + 1 for null terminator

struct Student {
    char identification[MAX_R_LENGTH];
    char name[MAX_M_LENGTH];
};

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return strcmp(((struct Student *)a)->identification, ((struct Student *)b)->identification);
}

// Function to partition the array for quicksort
int partition(struct Student arr[], int low, int high) {
    struct Student pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (compare(&arr[j], &pivot) < 0) {
            i++;
            // Swap arr[i] and arr[j]
            struct Student temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[i+1] and arr[high] (pivot)
    struct Student temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Quicksort algorithm
void quicksort(struct Student arr[], int low, int high) {
    if (low < high) {
        // Find the partitioning index
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after the partition
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

int main() {
    FILE *fp = fopen("testdata.in", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int N;
    if (fscanf(fp, "%d", &N) != 1) {
        printf("Error reading N.\n");
        fclose(fp);
        return 1;
    }

    struct Student *students = (struct Student *)malloc(N * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation error.\n");
        fclose(fp);
        return 1;
    }

    for (int i = 0; i < N; i++) {
        if (fscanf(fp, "%10s %20[^\n]", students[i].identification, students[i].name) != 2) {
            printf("Error reading student data.\n");
            free(students);
            fclose(fp);
            return 1;
        }
    }

    fclose(fp);

    // Sorting the array in ascending order based on the 'identification' field using quicksort
    quicksort(students, 0, N - 1);

    // Output the sorted student records
    for (int j = 0; j < N; j++) {
        printf("%s %s\n", students[j].identification, students[j].name);
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}

