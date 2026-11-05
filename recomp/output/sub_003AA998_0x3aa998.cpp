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

// Function: sub_003AA998
// Address: 0x3aa998 - 0x3aa9b8
void sub_003AA998_0x3aa998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA998_0x3aa998");
#endif

    ctx->pc = 0x3aa998u;

    // 0x3aa998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aa998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aa99c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aa99cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aa9a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3aa9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3aa9a4: 0x2484eed0  addiu       $a0, $a0, -0x1130
    ctx->pc = 0x3aa9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962896));
    // 0x3aa9a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aa9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa9ac: 0x80ecf82  j           func_3B3E08
    ctx->pc = 0x3AA9ACu;
    ctx->pc = 0x3AA9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA9ACu;
    // 0x3aa9b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3E08u;
    sub_003B3E08_0x3b3e08(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA9B4u;
    // 0x3aa9b4: 0x0  nop
    ctx->pc = 0x3aa9b4u;
    // NOP
    ctx->pc = 0x3aa9b8u;
}
