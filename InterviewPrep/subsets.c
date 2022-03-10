#include <stdio.h>

void getsubsets(int arr[], int n, int r, int current, int idx, int data[]){
    //printf("%d ", current);

    if (idx == r){
        for (int x = 0; x < r; x++){
            printf("%d ", data[x]);
        }
        printf("\n");
        return;
    }

    if (current >= n)
        return;

    data[idx] =  arr[current];
    getsubsets(arr, n, r, current+1, idx+1, data);
    getsubsets(arr, n, r, current+1, idx, data);

}

int main(){

    int n, r;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    const int size = r;
    int data[size];
    int arr[n];

    for (int i = 0; i < n; i++){
        arr[i] = i+1;
    }

    getsubsets(arr, n, r, 0, 0, data);

    return 0;
}