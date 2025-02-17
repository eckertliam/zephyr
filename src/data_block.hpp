#ifndef DATA_BLOCK_HPP
#define DATA_BLOCK_HPP

#include <cstdint>
class DataBlock {
public:
    static const int BLOCK_SIZE = 4096;
private:
    uint8_t data[BLOCK_SIZE];
    uint32_t block_number;
}

#endif
