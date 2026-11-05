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

// Function: entry_0015637a
// Address: 0x15637a - 0x156384
void entry_0015637a_0x15637a(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015637a_0x15637a");
#endif

    ctx->pc = 0x15637au;

    // 0x15637a: 0x1003e0  .word       0x001003E0                   # add         $zero, $zero, $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x15637au;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x15637e: 0x827bd  .word       0x000827BD                   # INVALID     $zero, $t0, 0x27BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x15637eu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x15637E raw=0x000827BD");
    // 0x156382: 0x3e0  .word       0x000003E0                   # add         $zero, $zero, $zero # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x156382u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    ctx->pc = 0x156384u;
}
