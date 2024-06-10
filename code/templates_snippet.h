template<typename T>
T sumOfElements(T* array, size_t size);

template<typename T>
T sumOfElements(T* array, size_t size) {
    T sum{};
    for (size_t i = 0; i < size ; i++) {
        sum += array[i];
    } 
    return sum; 
}