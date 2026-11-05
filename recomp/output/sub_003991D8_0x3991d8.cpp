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

// Function: sub_003991D8
// Address: 0x3991d8 - 0x3991f0
void sub_003991D8_0x3991d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003991D8_0x3991d8");
#endif

    ctx->pc = 0x3991d8u;

    // 0x3991d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3991d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3991dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3991dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3991e0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x3991e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3991e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3991e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3991e8: 0x80eb892  j           func_3AE248
    ctx->pc = 0x3991E8u;
    ctx->pc = 0x3991ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3991E8u;
    // 0x3991ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE248u;
    sub_003AE248_0x3ae248(rdram, ctx, runtime); return;
    ctx->pc = 0x3991F0u;
}
