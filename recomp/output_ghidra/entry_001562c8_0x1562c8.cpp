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

// Function: entry_001562c8
// Address: 0x1562c8 - 0x1562d0
void entry_001562c8_0x1562c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001562c8_0x1562c8");
#endif

    ctx->pc = 0x1562c8u;

    // 0x1562c8: 0x26120530  addiu       $s2, $s0, 0x530
    ctx->pc = 0x1562c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    // 0x1562cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1562ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1562d0u;
}
