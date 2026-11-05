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

// Function: FUN_00155ad0
// Address: 0x155ad0 - 0x155ada
void FUN_00155ad0_0x155ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155ad0_0x155ad0");
#endif

    ctx->pc = 0x155ad0u;

    // 0x155ad0: 0x8c690104  lw          $t1, 0x104($v1)
    ctx->pc = 0x155ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x155ad4: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x155ad8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    ctx->pc = 0x155adau;
}
