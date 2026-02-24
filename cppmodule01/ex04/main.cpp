#include "sed.hpp"

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
    return 1;
  }

  Sed sed(argv[1]);
  if (!sed.replace(argv[2], argv[3])) {
    return 1;
  }

  return 0;
}
