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

// Function: sub_003A7AB0
// Address: 0x3a7ab0 - 0x3a7ac8
void sub_003A7AB0_0x3a7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7AB0_0x3a7ab0");
#endif

    ctx->pc = 0x3a7ab0u;

    // 0x3a7ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a7ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a7ab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7abc: 0x80eb26e  j           func_3AC9B8
    ctx->pc = 0x3A7ABCu;
    ctx->pc = 0x3A7AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7ABCu;
    // 0x3a7ac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    sub_003AC9B8_0x3ac9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A7AC4u;
    // 0x3a7ac4: 0x0  nop
    ctx->pc = 0x3a7ac4u;
    // NOP
    ctx->pc = 0x3a7ac8u;
}
