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

// Function: sub_00383D98
// Address: 0x383d98 - 0x383e20
void sub_00383D98_0x383d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383D98_0x383d98");
#endif

    switch (ctx->pc) {
        case 0x383dc0u: goto label_383dc0;
        case 0x383decu: goto label_383dec;
        default: break;
    }

    ctx->pc = 0x383d98u;

    // 0x383d98: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x383d98u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x383d9c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x383d9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x383da0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x383da0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x383da4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x383da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x383da8: 0x354a9000  ori         $t2, $t2, 0x9000
    ctx->pc = 0x383da8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)36864);
    // 0x383dac: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x383dacu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383db0: 0x3529a000  ori         $t1, $t1, 0xA000
    ctx->pc = 0x383db0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)40960);
    // 0x383db4: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x383db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x383db8: 0x34e73020  ori         $a3, $a3, 0x3020
    ctx->pc = 0x383db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
    // 0x383dbc: 0x0  nop
    ctx->pc = 0x383dbcu;
    // NOP
label_383dc0:
    // 0x383dc0: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x383dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 10), 0))); // MMIO: 0x10009000
    // 0x383dc4: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x383dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383dc8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x383dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 9), 0))); // MMIO: 0x1000a000
    // 0x383dcc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x383dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x383dd0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x383dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 8), 0))); // MMIO: 0x10003c00
    // 0x383dd4: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x383dd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x383dd8: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x383dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x383ddc: 0x34440002  ori         $a0, $v0, 0x2
    ctx->pc = 0x383ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x383de0: 0x30c60003  andi        $a2, $a2, 0x3
    ctx->pc = 0x383de0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x383de4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x383de4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x383de8: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x383de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_383dec:
    // 0x383dec: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x383decu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x383df0: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x383df0u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x383df4: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x383df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x383df8: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x383df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x383dfc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x383dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x383e00: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x383e00u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x383e04: 0x34460010  ori         $a2, $v0, 0x10
    ctx->pc = 0x383e04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x383e08: 0x30630c00  andi        $v1, $v1, 0xC00
    ctx->pc = 0x383e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3072);
    // 0x383e0c: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x383e0cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x383e10: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x383E10u;
    {
        const bool branch_taken_0x383e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E10u;
        // 0x383e14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383e10) {
            ctx->pc = 0x383DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383dc0;
        }
    }
    ctx->pc = 0x383E18u;
    // 0x383e18: 0x3e00008  jr          $ra
    ctx->pc = 0x383E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383E20u;
}
