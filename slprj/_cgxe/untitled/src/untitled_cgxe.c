/* Include files */

#include "untitled_cgxe.h"
#include "m_HRSnKqASy1HqzVM7hVjGeC.h"

unsigned int cgxe_untitled_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 3373043103 &&
      ssGetChecksum1(S) == 2721594136 &&
      ssGetChecksum2(S) == 510208455 &&
      ssGetChecksum3(S) == 154025246) {
    method_dispatcher_HRSnKqASy1HqzVM7hVjGeC(S, method, data);
    return 1;
  }

  return 0;
}
