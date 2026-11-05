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

// Function: sub_003B0698
// Address: 0x3b0698 - 0x3b06b8
void sub_003B0698_0x3b0698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0698_0x3b0698");
#endif

    ctx->pc = 0x3b0698u;

    // 0x3b0698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b069c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3b069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3b06a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b06a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b06a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b06a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b06a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b06a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b06ac: 0x80f28c4  j           func_3CA310
    ctx->pc = 0x3B06ACu;
    ctx->pc = 0x3B06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B06ACu;
    // 0x3b06b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    sub_003CA310_0x3ca310(rdram, ctx, runtime); return;
    ctx->pc = 0x3B06B4u;
    // 0x3b06b4: 0x0  nop
    ctx->pc = 0x3b06b4u;
    // NOP
    ctx->pc = 0x3b06b8u;
}
