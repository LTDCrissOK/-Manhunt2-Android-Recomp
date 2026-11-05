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

// Function: sub_003B0E78
// Address: 0x3b0e78 - 0x3b0ea8
void sub_003B0E78_0x3b0e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0E78_0x3b0e78");
#endif

    ctx->pc = 0x3b0e78u;

    // 0x3b0e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0e7c: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3b0e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3b0e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b0e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0e88: 0x24844890  addiu       $a0, $a0, 0x4890
    ctx->pc = 0x3b0e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18576));
    // 0x3b0e8c: 0x240603c0  addiu       $a2, $zero, 0x3C0
    ctx->pc = 0x3b0e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x3b0e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0e94: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B0E94u;
    ctx->pc = 0x3B0E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0E94u;
    // 0x3b0e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B0E9Cu;
    // 0x3b0e9c: 0x0  nop
    ctx->pc = 0x3b0e9cu;
    // NOP
    // 0x3b0ea0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3b0ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b0ea4: 0x0  nop
    ctx->pc = 0x3b0ea4u;
    // NOP
    ctx->pc = 0x3b0ea8u;
}
