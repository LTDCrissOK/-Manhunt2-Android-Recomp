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

// Function: entry_0015645a
// Address: 0x15645a - 0x156464
void entry_0015645a_0x15645a(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015645a_0x15645a");
#endif

    ctx->pc = 0x15645au;

    // 0x15645a: 0x100080  sll         $zero, $s0, 2
    ctx->pc = 0x15645au;
    
    // 0x15645e: 0x6002ffbf  daddi       $v0, $zero, -0x41
    ctx->pc = 0x15645eu;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)4294967231; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x156462: 0x202d0c04  addi        $t5, $at, 0xC04
    ctx->pc = 0x156462u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3076, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    ctx->pc = 0x156464u;
}
