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

// Function: entry_0015608e
// Address: 0x15608e - 0x156098
void entry_0015608e_0x15608e(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015608e_0x15608e");
#endif

    ctx->pc = 0x15608eu;

    // 0x15608e: 0x10200  sll         $zero, $at, 8
    ctx->pc = 0x15608eu;
    
    // 0x156092: 0x2402  srl         $a0, $zero, 16
    ctx->pc = 0x156092u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 0), 16));
    // 0x156096: 0x8dfb0  tge         $zero, $t0, 894
    ctx->pc = 0x156096u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 8)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x156098u;
}
