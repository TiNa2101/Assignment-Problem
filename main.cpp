// Copyright 2021 "Assignment problem" Titova Nina
#include "naznach.h"

#include <fstream>
#include <iostream>
#include <string>
#include <ctime>

int main() {
    
  clock_t start, end;
  start = clock();

  MyMatrix *M = new MyMatrix("matrix.txt");
  
  M->Run();

  // delete M;

  end = clock();
  double seconds = (double)(end - start) / CLOCKS_PER_SEC;
  std::cout << "Time = " << seconds << " sec" << std::endl;

  return 0;
}
