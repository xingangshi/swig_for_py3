#ifndef __PARENT_HPP
#define __PARENT_HPP

#include "child.hpp"

#include <vector>

class parent
{
  public:
    void add_child(child child);
    std::vector<child> get_children() const;
  private:
    std::vector<child> m_children;
};

#endif //__PARENT_HPP
