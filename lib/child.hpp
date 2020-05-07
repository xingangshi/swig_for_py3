#ifndef __CHILD_HPP
#define __CHILD_HPP

#include <cstdint>

class child
{
  public:
    child() = default;
    explicit child(double size_of_head);
    uint8_t get_number_of_legs() const;
    double get_size_of_head() const;
    void set_size_of_head(double size_of_head);
  private:
    double m_size_of_head;
};

#endif //__CHILD_HPP
