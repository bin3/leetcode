/*
 * Copyright (c) 2012 Binson Zhang. All rights reserved.
 *
 * @author	Binson Zhang <bin183cs@gmail.com>
 * @date		2012-12-11
 */

#ifndef UTIL_H_
#define UTIL_H_

#include <iostream>
#include <vector>

static void Output(const std::vector<int>& vec, std::ostream& os = std::cout) {
  os << "[";
  for (size_t i = 0; i < vec.size(); ++i) {
    os << vec[i] << " ";
  }
  os << "]\n";
}

static void Output(const std::vector<std::vector<int> >& triples, std::ostream& os = std::cout) {
  for (size_t i = 0; i < triples.size(); ++i) {
    os << "(";
    if (triples[i].size() > 0) {
      os << triples[i][0];
    }
    for (size_t j = 1; j < triples[i].size(); ++j) {
      os << ", " << triples[i][j];
    }
    os << ")\n";
  }
}

#endif /* UTIL_H_ */
