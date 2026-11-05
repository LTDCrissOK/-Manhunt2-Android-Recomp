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

// Function: sub_00399160
// Address: 0x399160 - 0x399178
void sub_00399160_0x399160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399160_0x399160");
#endif

    ctx->pc = 0x399160u;

    // 0x399160: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399168: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x399168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39916c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39916cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399170: 0x80eb860  j           func_3AE180
    ctx->pc = 0x399170u;
    ctx->pc = 0x399174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399170u;
    // 0x399174: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE180u;
    sub_003AE180_0x3ae180(rdram, ctx, runtime); return;
    ctx->pc = 0x399178u;
}
