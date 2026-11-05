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

// Function: sub_003AB580
// Address: 0x3ab580 - 0x3ab5a0
void sub_003AB580_0x3ab580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB580_0x3ab580");
#endif

    ctx->pc = 0x3ab580u;

    // 0x3ab580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab584: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ab584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ab588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ab588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ab58c: 0x2484f078  addiu       $a0, $a0, -0xF88
    ctx->pc = 0x3ab58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963320));
    // 0x3ab590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab594: 0x80ecf82  j           func_3B3E08
    ctx->pc = 0x3AB594u;
    ctx->pc = 0x3AB598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB594u;
    // 0x3ab598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3E08u;
    sub_003B3E08_0x3b3e08(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB59Cu;
    // 0x3ab59c: 0x0  nop
    ctx->pc = 0x3ab59cu;
    // NOP
    ctx->pc = 0x3ab5a0u;
}
