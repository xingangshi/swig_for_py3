#include "child.hpp"

child::child(double size_of_head):
  m_size_of_head(size_of_head)
{}

uint8_t child::get_number_of_legs() const
{
  return 2;
}

double child::get_size_of_head() const
{
  return m_size_of_head;
}

void child::set_size_of_head(double size_of_head)
{
  m_size_of_head = size_of_head;
}
