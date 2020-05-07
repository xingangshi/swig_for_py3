#include "parent.hpp"

std::vector<child> parent::get_children() const
{
  return m_children;
}

void parent::add_child(child child)
{
  m_children.emplace_back(child);
}
