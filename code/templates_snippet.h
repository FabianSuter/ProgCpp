//Deklaration
template<typename T>
T sumOfElements(T* array, size_t size);

//Implementierung
template<typename T>
T sumOfElements(T* array, size_t size) {
    T sum{};
    for (size_t i = 0; i < size ; i++) {
        sum += array[i];
    } 
    return sum; 
}