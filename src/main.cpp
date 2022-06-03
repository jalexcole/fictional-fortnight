#include <cstdint>

#include "common.h"
#include "chunk.h"

#include <cstdio>

int main(int argc, char **argv) {
  printf("Adding Chunk to stack\n");
  Chunk chunk;
  
  //  int constant = addConstant(&chunk, 1.2);
  printf("Initializing Chunk to %p\n", &chunk);
  initChunk(&chunk);

  printf("Writing to chunk\n");
  writeChunk(&chunk, OP_CONSTANT, 123);
  // writeChunk(&chunk, constant, 123);
  writeChunk(&chunk, OP_RETURN, 123);

  printf("Freeing chunk");
  freeChunk(&chunk);
  return 0;
}
