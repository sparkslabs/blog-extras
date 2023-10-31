// NOTE: cpp03generators.h

class StopIteration { };

class Generator {
  protected:
    int __generator_state;
  public:
    Generator()  {     };
    ~Generator() {     };
};

#define GENERATOR_CODE_START  if (__generator_state == -1)      \
                     { throw StopIteration(); }         \
                     switch(__generator_state)         \
                     { default:
#define YIELD(v)         __generator_state = __LINE__; \
                         return (v);                         \
                         case __LINE__:
#define GENERATOR_CODE_END     };                                      \
                     __generator_state = -1; throw StopIteration();
