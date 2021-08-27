
#include "cmsis_compiler.h"
#include "rtx_os.h"
 
// OS Idle Thread
__WEAK __NO_RETURN void osRtxIdleThread (void *argument) {
  (void)argument;

  for (;;) {}
}
 
// OS Error Callback function
__WEAK uint32_t osRtxErrorNotify (uint32_t code, void *object_id) {
  (void)object_id;

  switch (code) {
    case osRtxErrorStackUnderflow:
      // Stack overflow detected for thread (thread_id=object_id)
       for (;;) {}
      break;
    case osRtxErrorISRQueueOverflow:
      // ISR Queue overflow detected when inserting object (object_id)
      break;
    case osRtxErrorTimerQueueOverflow:
      // User Timer Callback Queue overflow detected for timer (timer_id=object_id)
      break;
    case osRtxErrorClibSpace:
      // Standard C/C++ library libspace not available: increase OS_THREAD_LIBSPACE_NUM
      break;
    case osRtxErrorClibMutex:
      // Standard C/C++ library mutex initialization failed
      break;
    default:
      // Reserved
      break;
  }
  for (;;) {}
//return 0U;
}
