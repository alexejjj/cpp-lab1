#include <iostream>

template <class T>
void bubbleSort(int n, T *a) {
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                std::swap(a[j], a[j + 1]);
            }
        }
    }

    std::cout << "Your sorted array is\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }
}

template <class T>
void insertionSort(int n, T *a) {
    int x;
    for(int i = 1; i < n; i++) {
        x = a[i];
        int j = i - 1;
        while(x < a[j]){
            a[j + 1] = a[j];
            j--;
        }
        a[j+1] = x;
    }

    std::cout << "Your sorted array is\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }
}


template <class T>
void selectionSort(int n, T *a) {
    int k;
    int x;
    for(int  i = 0; i < n; i++) {
        k = i;
        x = a[i];
        for(int j = i + 1; j < n; j++) {
            if(a[j] < x) {
                k = j;
                x = a[j];
            }
        }
        a[k] = a[i];
        a[i] = x;
    }

    std::cout << "Your sorted array is\n";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }
}



#define TASK1 //edit num of TASK

int main() {
#ifdef TASK1
    float *a;
    int n;
    std::cout << "Enter the array size\n";
    std::cin >> n;
    std::cout << "Enter array elements(one by one)\n";
    a = new float[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    std::cout << "Your array is\n";

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }

    bubbleSort(n, a);
#endif

#ifdef TASK2
    float *a;
    int n;
    std::cout << "Enter the array size\n";
    std::cin >> n;
    std::cout << "Enter array elements(one by one)\n";
    a = new float[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    std::cout << "Your array is\n";

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }

    insertionSort(n, a);
#endif

#ifdef TASK3
    float *a;
    int n;
    std::cout << "Enter the array size\n";
    std::cin >> n;
    std::cout << "Enter array elements(one by one)\n";
    a = new float[n];
    for (int i = 0; i < n; i++)
        std::cin >> a[i];

    std::cout << "Your array is\n";

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " " << std::endl;
    }

    selectionSort(n, a);
#endif

}
