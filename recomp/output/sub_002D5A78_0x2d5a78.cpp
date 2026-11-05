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

// Function: sub_002D5A78
// Address: 0x2d5a78 - 0x2d5b08
void sub_002D5A78_0x2d5a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5A78_0x2d5a78");
#endif

    switch (ctx->pc) {
        case 0x2d5aa8u: goto label_2d5aa8;
        default: break;
    }

    ctx->pc = 0x2d5a78u;

    // 0x2d5a78: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5a7c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d5a7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a80: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x2d5a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2d5a84: 0x8d270014  lw          $a3, 0x14($t1)
    ctx->pc = 0x2d5a84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5a88: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d5a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5a8c: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x2d5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2d5a90: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2d5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2d5a94: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D5A94u;
    {
        const bool branch_taken_0x2d5a94 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5A94u;
        // 0x2d5a98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5a94) {
            ctx->pc = 0x2D5AC8u;
            goto label_2d5ac8;
        }
    }
    ctx->pc = 0x2D5A9Cu;
    // 0x2d5a9c: 0x24e20018  addiu       $v0, $a3, 0x18
    ctx->pc = 0x2d5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x2d5aa0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d5aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5aa4: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x2d5aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2d5aa8:
    // 0x2d5aa8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5aac: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5AACu;
    {
        const bool branch_taken_0x2d5aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D5AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AACu;
        // 0x2d5ab0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5aac) {
            ctx->pc = 0x2D5ABCu;
            goto label_2d5abc;
        }
    }
    ctx->pc = 0x2D5AB4u;
    // 0x2d5ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AB4u;
        // 0x2d5ab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5ABCu;
label_2d5abc:
    // 0x2d5abc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2d5abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d5ac0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D5AC0u;
    {
        const bool branch_taken_0x2d5ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AC0u;
        // 0x2d5ac4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ac0) {
            ctx->pc = 0x2D5AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5aa8;
        }
    }
    ctx->pc = 0x2D5AC8u;
label_2d5ac8:
    // 0x2d5ac8: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x2d5ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5acc: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x2d5accu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5ad0: 0xa63018  mult        $a2, $a1, $a2
    ctx->pc = 0x2d5ad0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d5ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5ad8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2d5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d5adc: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2d5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2d5ae0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5ae4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d5ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d5ae8: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x2d5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x2d5aec: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x2d5aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5af0: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2d5af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2d5af4: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2d5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2d5af8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5afc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5AFCu;
        // 0x2d5b00: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5B04u;
    // 0x2d5b04: 0x0  nop
    ctx->pc = 0x2d5b04u;
    // NOP
    ctx->pc = 0x2d5b08u;
}
