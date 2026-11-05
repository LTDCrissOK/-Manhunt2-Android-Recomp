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

// Function: sub_003B0F78
// Address: 0x3b0f78 - 0x3b0fa0
void sub_003B0F78_0x3b0f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0F78_0x3b0f78");
#endif

    ctx->pc = 0x3b0f78u;

    // 0x3b0f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0f7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b0f7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0f84: 0x24470032  addiu       $a3, $v0, 0x32
    ctx->pc = 0x3b0f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
    // 0x3b0f88: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3b0f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0f8c: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x3b0f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3b0f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0f94: 0x80ebe60  j           func_3AF980
    ctx->pc = 0x3B0F94u;
    ctx->pc = 0x3B0F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0F94u;
    // 0x3b0f98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF980u;
    sub_003AF980_0x3af980(rdram, ctx, runtime); return;
    ctx->pc = 0x3B0F9Cu;
    // 0x3b0f9c: 0x0  nop
    ctx->pc = 0x3b0f9cu;
    // NOP
    ctx->pc = 0x3b0fa0u;
}
