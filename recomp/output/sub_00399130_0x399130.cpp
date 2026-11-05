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

// Function: sub_00399130
// Address: 0x399130 - 0x399148
void sub_00399130_0x399130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399130_0x399130");
#endif

    ctx->pc = 0x399130u;

    // 0x399130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x399134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x399138: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x399138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39913c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39913cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399140: 0x80eb85c  j           func_3AE170
    ctx->pc = 0x399140u;
    ctx->pc = 0x399144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399140u;
    // 0x399144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE170u;
    sub_003AE170_0x3ae170(rdram, ctx, runtime); return;
    ctx->pc = 0x399148u;
}
