#include <cstdint>

#include "common.h"
#include "chunk.h"


int main(int argc, char **argv) {
  struct Chunk chunk;
  
  int constant = addConstant(&chunk, 1.2);
  initChunk(&chunk);
  // writeChunk(&chunk, OP_RETURN);
  freeChunk(&chunk);
  return 0;
}
