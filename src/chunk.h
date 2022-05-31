#ifndef clox_chunk_h
#define clox_chunk_h

#include "common.h"
#include "value.h"
#include <cstdint>

typedef enum OpCode {
    OP_CONSTANT,
    OP_RETURN,
} OpCode;

struct Chunk{
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
};

void initChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
void freeChunk(Chunk* chunk);
int addConstant(Chunk* chunk, Value value);

#endif