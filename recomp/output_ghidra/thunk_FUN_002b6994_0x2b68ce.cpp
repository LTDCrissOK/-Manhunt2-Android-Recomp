#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: thunk_FUN_002b6994
// Address: 0x2b68ce - 0x2b68d0
void thunk_FUN_002b6994_0x2b68ce(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("thunk_FUN_002b6994_0x2b68ce");
#endif

    ctx->pc = 0x2b68ceu;

    // 0x2b68ce: 0x401062  .word       0x00401062                   # sub         $v0, $v0, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2b68ceu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 2), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    ctx->pc = 0x2b68d0u;
}
