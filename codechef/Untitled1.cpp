#include <iostream>
#include <cstdlib>
using namespace std;
#define SIZE 10


int compare (const void *elem1, const void *elem2){
    return *(int*)elem1 - *(int*)elem2;
}

int main(){
    int i;
    int array[SIZE] = {9,1,3,7,0,5,2,6,8,4};

    qsort(array, SIZE, sizeof(int), compare);

    for (i=0;i<SIZE;i++)
        cout << array[i] << " ";

    return 0;

}
