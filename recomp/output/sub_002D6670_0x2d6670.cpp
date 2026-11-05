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

// Function: sub_002D6670
// Address: 0x2d6670 - 0x2d66e8
void sub_002D6670_0x2d6670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6670_0x2d6670");
#endif

    switch (ctx->pc) {
        case 0x2d6688u: goto label_2d6688;
        default: break;
    }

    ctx->pc = 0x2d6670u;

    // 0x2d6670: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d6670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d6674: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D6674u;
    {
        const bool branch_taken_0x2d6674 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6674u;
        // 0x2d6678: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6674) {
            ctx->pc = 0x2D66DCu;
            goto label_2d66dc;
        }
    }
    ctx->pc = 0x2D667Cu;
    // 0x2d667c: 0x24860008  addiu       $a2, $a0, 0x8
    ctx->pc = 0x2d667cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2d6680: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d6680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6684: 0x0  nop
    ctx->pc = 0x2d6684u;
    // NOP
label_2d6688:
    // 0x2d6688: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d6688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d668c: 0x5445000f  bnel        $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x2D668Cu;
    {
        const bool branch_taken_0x2d668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2d668c) {
            ctx->pc = 0x2D6690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D668Cu;
            // 0x2d6690: 0x8c830018  lw          $v1, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D66CCu;
            goto label_2d66cc;
        }
    }
    ctx->pc = 0x2D6694u;
    // 0x2d6694: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2d6694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d6698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d669c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d66a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d66a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d66a4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2d66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d66a8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2d66a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d66ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d66acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d66b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d66b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x2d66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2d66b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d66b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d66bc: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d66bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d66c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d66c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d66c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D66C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D66C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66C4u;
        // 0x2d66c8: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D66C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D66CCu;
label_2d66cc:
    // 0x2d66cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2d66ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2d66d0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2d66d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d66d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D66D4u;
    {
        const bool branch_taken_0x2d66d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D66D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D66D4u;
        // 0x2d66d8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d66d4) {
            ctx->pc = 0x2D6688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6688;
        }
    }
    ctx->pc = 0x2D66DCu;
label_2d66dc:
    // 0x2d66dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D66DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D66DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D66E4u;
    // 0x2d66e4: 0x0  nop
    ctx->pc = 0x2d66e4u;
    // NOP
    ctx->pc = 0x2d66e8u;
}
