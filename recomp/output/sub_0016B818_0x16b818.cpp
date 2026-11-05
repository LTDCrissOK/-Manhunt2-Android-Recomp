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

// Function: sub_0016B818
// Address: 0x16b818 - 0x16b8a0
void sub_0016B818_0x16b818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B818_0x16b818");
#endif

    switch (ctx->pc) {
        case 0x16b848u: goto label_16b848;
        default: break;
    }

    ctx->pc = 0x16b818u;

    // 0x16b818: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16b818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b81c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16b81cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b820: 0x8d030144  lw          $v1, 0x144($t0)
    ctx->pc = 0x16b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 324)));
    // 0x16b824: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x16b824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16b828: 0x8d02014c  lw          $v0, 0x14C($t0)
    ctx->pc = 0x16b828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 332)));
    // 0x16b82c: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x16b82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b830: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16b830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16b834: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x16b834u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b838: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B838u;
    {
        const bool branch_taken_0x16b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B838u;
        // 0x16b83c: 0x8ca90000  lw          $t1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b838) {
            ctx->pc = 0x16B87Cu;
            goto label_16b87c;
        }
    }
    ctx->pc = 0x16B840u;
    // 0x16b840: 0x8d040144  lw          $a0, 0x144($t0)
    ctx->pc = 0x16b840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 324)));
    // 0x16b844: 0x0  nop
    ctx->pc = 0x16b844u;
    // NOP
label_16b848:
    // 0x16b848: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x16b848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16b84c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x16b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16b850: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16b850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16b854: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x16b854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16b858: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16b858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b85c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x16b85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b860: 0x24e60001  addiu       $a2, $a3, 0x1
    ctx->pc = 0x16b860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x16b864: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16b864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16b868: 0x8d02014c  lw          $v0, 0x14C($t0)
    ctx->pc = 0x16b868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 332)));
    // 0x16b86c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x16b86cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16b870: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x16B870u;
    {
        const bool branch_taken_0x16b870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b870) {
            ctx->pc = 0x16B874u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B870u;
            // 0x16b874: 0x8d040144  lw          $a0, 0x144($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 324)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b848;
        }
    }
    ctx->pc = 0x16B878u;
    // 0x16b878: 0x8d030144  lw          $v1, 0x144($t0)
    ctx->pc = 0x16b878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 324)));
label_16b87c:
    // 0x16b87c: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x16b87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16b880: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x16b880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b884: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16b884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16b888: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x16b888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x16b88c: 0x8d03014c  lw          $v1, 0x14C($t0)
    ctx->pc = 0x16b88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 332)));
    // 0x16b890: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16b890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16b894: 0x3e00008  jr          $ra
    ctx->pc = 0x16B894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B894u;
        // 0x16b898: 0xad03014c  sw          $v1, 0x14C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B89Cu;
    // 0x16b89c: 0x0  nop
    ctx->pc = 0x16b89cu;
    // NOP
    ctx->pc = 0x16b8a0u;
}
