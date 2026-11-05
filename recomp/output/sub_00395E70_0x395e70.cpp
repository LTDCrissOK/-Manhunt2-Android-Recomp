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

// Function: sub_00395E70
// Address: 0x395e70 - 0x395e90
void sub_00395E70_0x395e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395E70_0x395e70");
#endif

    ctx->pc = 0x395e70u;

    // 0x395e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x395e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x395e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x395e78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x395e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395e7c: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x395E7Cu;
    ctx->pc = 0x395E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395E7Cu;
    // 0x395e80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x395E84u;
    // 0x395e84: 0x0  nop
    ctx->pc = 0x395e84u;
    // NOP
    // 0x395e88: 0xad270010  sw          $a3, 0x10($t1)
    ctx->pc = 0x395e88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
    // 0x395e8c: 0x0  nop
    ctx->pc = 0x395e8cu;
    // NOP
    ctx->pc = 0x395e90u;
}
