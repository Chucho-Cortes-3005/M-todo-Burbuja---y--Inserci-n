#include <iostream>

void bubbleSortAscending(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            comparisons++; // Incrementar el contador de comparaciones
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swaps++; // Incrementar el contador de intercambios
            }
        }
    }
}

void bubbleSortDescending(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            comparisons++; // Incrementar el contador de comparaciones
            if (arr[j] < arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swaps++; // Incrementar el contador de intercambios
            }
        }
    }
}

void insertionSort(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            comparisons++; // Incrementar el contador de comparaciones
            arr[j + 1] = arr[j];
            swaps++; // Incrementar el contador de intercambios
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {4,21,56,-4,456,98,76,76};
    int n = sizeof(arr) / sizeof(arr[0]);
    int comparisons_asc = 0, swaps_asc = 0;
    int comparisons_desc = 0, swaps_desc = 0;
    int comparisons_ins = 0, swaps_ins = 0;
    
    std::cout << "Metodo de Ordenamiento Burbuja - Ascendente" << std::endl;
     std::cout << "" << std::endl;
    
    // Ordenamiento ascendente (Bubble Sort)
    int arr_asc_bubble[n];

    std::copy(arr, arr + n, arr_asc_bubble);
    std::cout << "\Lista Original:" << std::endl;
   
    printArray(arr_asc_bubble, n);
     std::cout << "" << std::endl;
    bubbleSortAscending(arr_asc_bubble, n, comparisons_asc, swaps_asc);
     std::cout << "" << std::endl;
    std::cout << "Lista ordenada  (Ascendente):" << std::endl;
     
    printArray(arr_asc_bubble, n);
     std::cout << "" << std::endl;
    std::cout << "Numero de comparaciones (ascendente ): " << comparisons_asc << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Numero de intercambios (ascendente ): " << swaps_asc << std::endl;

    // Línea de separación
    std::cout << "----------------------------------" << std::endl;

    std::cout << "\nMetodo de Ordenamiento Burbuja - Descendente" << std::endl;
    
    // Ordenamiento descendente (Bubble Sort)
    int arr_desc_bubble[n];
    std::copy(arr, arr + n, arr_desc_bubble);
    std::cout << "" << std::endl;
    std::cout << "\Lista Original:" << std::endl;
    printArray(arr_desc_bubble, n);
    std::cout << "" << std::endl;
    bubbleSortDescending(arr_desc_bubble, n, comparisons_desc, swaps_desc);
    std::cout << "Lista Ordenada de Forma  (Descendente):" << std::endl;
    printArray(arr_desc_bubble, n);
    std::cout << "" << std::endl;
    std::cout << "Numero de comparaciones (Descendente): " << comparisons_desc << std::endl;
    std::cout << "" << std::endl;
    
    std::cout << "Numero de intercambios (Descendente): " << swaps_desc << std::endl;

   
    // Línea de separación
    std::cout << "----------------------------------" << std::endl;

    std::cout << "\nMétodo de Ordenamiento por Insercion" << std::endl;

    // Ordenamiento ascendente (Insertion Sort)
    int arr_asc_insertion[n];
    std::copy(arr, arr + n, arr_asc_insertion);
    std::cout << "\nLista Original:" << std::endl;

    printArray(arr_asc_insertion, n);
    std::cout << "" << std::endl;
         insertionSort(arr_asc_insertion,n, comparisons_ins, swaps_ins);
    std::cout << "Lista Ordenada de Forma  (Ascendente - insertion sort):" << std::endl;
    
    printArray(arr_asc_insertion, n);
    std::cout << "" << std::endl;
    std::cout << "Número de comparaciones (Ascendente - insertion sort): " << comparisons_ins << std::endl;
    std::cout << "Número de intercambios (Ascendente - insertion sort): " << swaps_ins << std::endl;
    
    std::copy(arr, arr + n, arr_asc_insertion);
    std::cout << "\nLista Original:" << std::endl;
    
    printArray(arr_asc_insertion, n);
    std::cout << "" << std::endl;
         insertionSort(arr_asc_insertion,n, comparisons_ins, swaps_ins);
    std::cout << "Lista Ordenada de Forma  (Descendente - insertion sort):" << std::endl;
    
      printArray(arr_asc_insertion, n);
    std::cout << "" << std::endl;
    std::cout << "Número de comparaciones (Descendente - insertion sort): " << swaps_ins << std::endl;
    std::cout << "Número de intercambios (Descendente - insertion sort): " << swaps_ins << std::endl;
    
    
    
    
     // Ordenamiento ascendente (Insertion Sort)
    
	

   
   return 0;
}


