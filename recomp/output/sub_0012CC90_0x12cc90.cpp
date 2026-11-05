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

// Function: sub_0012CC90
// Address: 0x12cc90 - 0x12ccf0
void sub_0012CC90_0x12cc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CC90_0x12cc90");
#endif

    switch (ctx->pc) {
        case 0x12cca0u: goto label_12cca0;
        default: break;
    }

    ctx->pc = 0x12cc90u;

    // 0x12cc90: 0x24880004  addiu       $t0, $a0, 0x4
    ctx->pc = 0x12cc90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12cc94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12cc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12cc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc9c: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_12cca0:
    // 0x12cca0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x12cca4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12cca8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12CCA8u;
    {
        const bool branch_taken_0x12cca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cca8) {
            ctx->pc = 0x12CCACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CCA8u;
            // 0x12ccac: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CCD8u;
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCB0u;
    // 0x12ccb0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CCB0u;
    {
        const bool branch_taken_0x12ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x12CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCB0u;
        // 0x12ccb4: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccb0) {
            ctx->pc = 0x12CCC0u;
            goto label_12ccc0;
        }
    }
    ctx->pc = 0x12CCB8u;
    // 0x12ccb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CCB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCB8u;
        // 0x12ccbc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CCB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CCC0u;
label_12ccc0:
    // 0x12ccc0: 0x908307fc  lbu         $v1, 0x7FC($a0)
    ctx->pc = 0x12ccc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2044)));
    // 0x12ccc4: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x12ccc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ccc8: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CCC8u;
    {
        const bool branch_taken_0x12ccc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x12CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCC8u;
        // 0x12cccc: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ccc8) {
            ctx->pc = 0x12CCD8u;
            goto label_12ccd8;
        }
    }
    ctx->pc = 0x12CCD0u;
    // 0x12ccd0: 0x3e00008  jr          $ra
    ctx->pc = 0x12CCD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCD0u;
        // 0x12ccd4: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CCD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CCD8u;
label_12ccd8:
    // 0x12ccd8: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x12ccd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12ccdc: 0x2cc300ff  sltiu       $v1, $a2, 0xFF
    ctx->pc = 0x12ccdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
    // 0x12cce0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x12CCE0u;
    {
        const bool branch_taken_0x12cce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCE0u;
        // 0x12cce4: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cce0) {
            ctx->pc = 0x12CCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cca0;
        }
    }
    ctx->pc = 0x12CCE8u;
    // 0x12cce8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CCE8u;
        // 0x12ccec: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CCF0u;
}
