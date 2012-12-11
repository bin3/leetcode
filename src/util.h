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
  if (vec.size() > 0) {
    os << vec[0];
  }
  for (size_t i = 1; i < vec.size(); ++i) {
    os << ", " << vec[i];
  }
  os << "]\n";
}

static void Output(const std::vector<std::vector<int> >& vecs, std::ostream& os = std::cout) {
  for (size_t i = 0; i < vecs.size(); ++i) {
    os << "(";
    if (vecs[i].size() > 0) {
      os << vecs[i][0];
    }
    for (size_t j = 1; j < vecs[i].size(); ++j) {
      os << ", " << vecs[i][j];
    }
    os << ")\n";
  }
}

#endif /* UTIL_H_ */
