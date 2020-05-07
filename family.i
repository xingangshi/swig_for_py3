%module family
%{
#include "lib/parent.hpp"
#include "lib/child.hpp"
%}

// Import standard types
%include "std_vector.i"
%include "stdint.i"

%include "lib/parent.hpp"
%include "lib/child.hpp"

namespace std {
    %template(vector_child) vector<child>;
};
