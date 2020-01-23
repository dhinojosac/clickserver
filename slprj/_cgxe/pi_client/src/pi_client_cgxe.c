/* Include files */

#include "pi_client_cgxe.h"
#include "m_0o5JYPayH46aOhaMDQPSgH.h"

unsigned int cgxe_pi_client_method_dispatcher(SimStruct* S, int_T method, void
  * data)
{
  if (ssGetChecksum0(S) == 4021555347 &&
      ssGetChecksum1(S) == 789886190 &&
      ssGetChecksum2(S) == 2116147895 &&
      ssGetChecksum3(S) == 569786529) {
    method_dispatcher_0o5JYPayH46aOhaMDQPSgH(S, method, data);
    return 1;
  }

  return 0;
}
