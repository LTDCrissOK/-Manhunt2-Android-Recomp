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

// Function: FUN_00155b6e
// Address: 0x155b6e - 0x155b78
void FUN_00155b6e_0x155b6e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155b6e_0x155b6e");
#endif

    ctx->pc = 0x155b6eu;

    // 0x155b6e: 0x8dfb0  tge         $zero, $t0, 894
    ctx->pc = 0x155b6eu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    // 0x155b72: 0x1003e0  .word       0x001003E0                   # add         $zero, $zero, $s0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155b72u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 0, (int32_t)result);     } }
    // 0x155b76: 0xffe027bd  sd          $zero, 0x27BD($ra)
    ctx->pc = 0x155b76u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 10173), GPR_U64(ctx, 0));
    ctx->pc = 0x155b78u;
}
