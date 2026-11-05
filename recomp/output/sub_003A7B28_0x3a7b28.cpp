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

// Function: sub_003A7B28
// Address: 0x3a7b28 - 0x3a7b40
void sub_003A7B28_0x3a7b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7B28_0x3a7b28");
#endif

    ctx->pc = 0x3a7b28u;

    // 0x3a7b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7b34: 0x80f0a7c  j           func_3C29F0
    ctx->pc = 0x3A7B34u;
    ctx->pc = 0x3A7B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7B34u;
    // 0x3a7b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C29F0u;
    sub_003C29F0_0x3c29f0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7B3Cu;
    // 0x3a7b3c: 0x0  nop
    ctx->pc = 0x3a7b3cu;
    // NOP
    ctx->pc = 0x3a7b40u;
}
