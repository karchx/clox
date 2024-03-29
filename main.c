#include "chunk.h"
#include "common.h"
#include "debug.h"
#include "vm.h"

int main(int argc, const char *argv[]) {
  initVM();
  Chunk chunk;
  initChunk(&chunk);

  int constant = addConstant(&chunk, 1121212121.2);
  writeChunk(&chunk, OP_CONSTANT, 123);
  writeChunk(&chunk, constant, 123);
  writeConstant(&chunk, constant, 12);

  writeChunk(&chunk, OP_RETURN, 123);
  disassembleChunk(&chunk, "test chuck");
  interpret(&chunk);
  freeVM();
  freeChunk(&chunk);
  return 0;
}
