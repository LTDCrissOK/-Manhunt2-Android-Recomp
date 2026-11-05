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

// Function: sub_002D5BD8
// Address: 0x2d5bd8 - 0x2d5c68
void sub_002D5BD8_0x2d5bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D5BD8_0x2d5bd8");
#endif

    switch (ctx->pc) {
        case 0x2d5c08u: goto label_2d5c08;
        default: break;
    }

    ctx->pc = 0x2d5bd8u;

    // 0x2d5bd8: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x2d5bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5bdc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2d5bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5be0: 0xa25018  mult        $t2, $a1, $v0
    ctx->pc = 0x2d5be0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x2d5be4: 0x8d270014  lw          $a3, 0x14($t1)
    ctx->pc = 0x2d5be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5be8: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2d5be8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5bec: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x2d5becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2d5bf0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2d5bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2d5bf4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D5BF4u;
    {
        const bool branch_taken_0x2d5bf4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D5BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BF4u;
        // 0x2d5bf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5bf4) {
            ctx->pc = 0x2D5C28u;
            goto label_2d5c28;
        }
    }
    ctx->pc = 0x2D5BFCu;
    // 0x2d5bfc: 0x24e20098  addiu       $v0, $a3, 0x98
    ctx->pc = 0x2d5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 152));
    // 0x2d5c00: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d5c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5c04: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x2d5c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2d5c08:
    // 0x2d5c08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d5c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d5c0c: 0x14480003  bne         $v0, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5C0Cu;
    {
        const bool branch_taken_0x2d5c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2D5C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C0Cu;
        // 0x2d5c10: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c0c) {
            ctx->pc = 0x2D5C1Cu;
            goto label_2d5c1c;
        }
    }
    ctx->pc = 0x2D5C14u;
    // 0x2d5c14: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C14u;
        // 0x2d5c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C1Cu;
label_2d5c1c:
    // 0x2d5c1c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x2d5c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d5c20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D5C20u;
    {
        const bool branch_taken_0x2d5c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C20u;
        // 0x2d5c24: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5c20) {
            ctx->pc = 0x2D5C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5c08;
        }
    }
    ctx->pc = 0x2D5C28u;
label_2d5c28:
    // 0x2d5c28: 0x24060118  addiu       $a2, $zero, 0x118
    ctx->pc = 0x2d5c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x2d5c2c: 0x8d240014  lw          $a0, 0x14($t1)
    ctx->pc = 0x2d5c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5c30: 0xa63018  mult        $a2, $a1, $a2
    ctx->pc = 0x2d5c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2d5c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d5c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d5c38: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2d5c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2d5c3c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2d5c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2d5c40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d5c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d5c44: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2d5c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2d5c48: 0xac880098  sw          $t0, 0x98($a0)
    ctx->pc = 0x2d5c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 8));
    // 0x2d5c4c: 0x8d250014  lw          $a1, 0x14($t1)
    ctx->pc = 0x2d5c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2d5c50: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x2d5c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2d5c54: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x2d5c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2d5c58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d5c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d5c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5C5Cu;
        // 0x2d5c60: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5C64u;
    // 0x2d5c64: 0x0  nop
    ctx->pc = 0x2d5c64u;
    // NOP
    ctx->pc = 0x2d5c68u;
}
