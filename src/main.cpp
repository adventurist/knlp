#include <iostream>
#include "nlp/nlp.hpp"

int main(int argc, char** argv) {
  const std::string username{"Person"};
  conversation::NLP nlp{username};

  return 0;
}
