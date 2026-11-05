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

// Function: sub_003A2790
// Address: 0x3a2790 - 0x3a27c0
void sub_003A2790_0x3a2790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2790_0x3a2790");
#endif

    ctx->pc = 0x3a2790u;

    // 0x3a2790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a2790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a2794: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a2798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a2798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a279c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x3a279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x3a27a0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a27a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a27a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a27a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a27a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a27a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x411E00u));
    // 0x3a27ac: 0x24841dc8  addiu       $a0, $a0, 0x1DC8
    ctx->pc = 0x3a27acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
    // 0x3a27b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a27b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a27b4: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x3a27b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3a27b8: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3A27B8u;
    ctx->pc = 0x3A27BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A27B8u;
    // 0x3a27bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3A27C0u;
}
