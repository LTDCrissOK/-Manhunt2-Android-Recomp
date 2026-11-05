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

// Function: entry_002b62cc
// Address: 0x2b62cc - 0x2b62da
void entry_002b62cc_0x2b62cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b62cc_0x2b62cc");
#endif

    ctx->pc = 0x2b62ccu;

    // 0x2b62cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b62ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b62d0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b62d4: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b62d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b62d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x2b62dau;
}
