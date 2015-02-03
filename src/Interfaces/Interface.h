/*
 * Copyright 2014 Adam Chyła, adam@chyla.org
 * All rights reserved. Distributed under the terms of the MIT License.
 */

#include <cstddef>


namespace Interfaces
{

class Interface
{
public:
  virtual ~Interface() = default;

  virtual size_t Read(void *destination, const size_t &bufferLength) = 0;
  virtual void Write(const void *source, const size_t &bufferLength) = 0;
};

}