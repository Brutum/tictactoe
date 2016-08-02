# include directory

This is the `include` directory where header files (`.hpp`) live.

Every header files should have a header guard to prevent dependency cycle. For
example,

```c++
// what_is_this.hpp
#ifndef WHAT_IS_THIS_HPP
#define WHAT_IS_THIS_HPP

...

#endif
```
