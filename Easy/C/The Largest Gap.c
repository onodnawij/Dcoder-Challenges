#include <inttypes.h>
#include <stdio.h>

int main() {
    uint16_t N;
    // Even though the problem states that the maximum value for any element is 10000, using uint16_t fails for TestCase#1 and TestCase#2
    uint32_t element, biggest = 0, smallest = UINT32_MAX;
    scanf("%hu", &N);
    for(uint16_t i = 0; i < N; ++i) {
        scanf("%" SCNu32, &element);
        if(element > biggest)
            biggest = element;

        if(element < smallest)
            smallest = element;
    }
    printf("%" PRIu32, biggest - smallest);
    return 0;
}
