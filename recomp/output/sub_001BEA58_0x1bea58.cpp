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

// Function: sub_001BEA58
// Address: 0x1bea58 - 0x1bead0
void sub_001BEA58_0x1bea58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEA58_0x1bea58");
#endif

    ctx->pc = 0x1bea58u;

    // 0x1bea58: 0x8c820310  lw          $v0, 0x310($a0)
    ctx->pc = 0x1bea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1bea5c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1BEA5Cu;
    {
        const bool branch_taken_0x1bea5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA5Cu;
        // 0x1bea60: 0x24830310  addiu       $v1, $a0, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea5c) {
            ctx->pc = 0x1BEAB4u;
            goto label_1beab4;
        }
    }
    ctx->pc = 0x1BEA64u;
    // 0x1bea64: 0x248300d0  addiu       $v1, $a0, 0xD0
    ctx->pc = 0x1bea64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x1bea68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bea68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1bea6c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bea6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1bea70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEA70u;
    {
        const bool branch_taken_0x1bea70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA70u;
        // 0x1bea74: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea70) {
            ctx->pc = 0x1BEA80u;
            goto label_1bea80;
        }
    }
    ctx->pc = 0x1BEA78u;
    // 0x1bea78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEA78u;
    {
        const bool branch_taken_0x1bea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA78u;
        // 0x1bea7c: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bea78) {
            ctx->pc = 0x1BEA84u;
            goto label_1bea84;
        }
    }
    ctx->pc = 0x1BEA80u;
label_1bea80:
    // 0x1bea80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bea80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bea84:
    // 0x1bea84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEA84u;
    {
        const bool branch_taken_0x1bea84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea84) {
            ctx->pc = 0x1BEAACu;
            goto label_1beaac;
        }
    }
    ctx->pc = 0x1BEA8Cu;
    // 0x1bea8c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1bea90: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bea90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1bea94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEA94u;
    {
        const bool branch_taken_0x1bea94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bea94) {
            ctx->pc = 0x1BEAA4u;
            goto label_1beaa4;
        }
    }
    ctx->pc = 0x1BEA9Cu;
    // 0x1bea9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEA9Cu;
        // 0x1beaa0: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAA4u;
label_1beaa4:
    // 0x1beaa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAA4u;
        // 0x1beaa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAACu;
label_1beaac:
    // 0x1beaac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAACu;
        // 0x1beab0: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEAB4u;
label_1beab4:
    // 0x1beab4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1beab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1beab8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEAB8u;
    {
        const bool branch_taken_0x1beab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEAB8u;
        // 0x1beabc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beab8) {
            ctx->pc = 0x1BEAC4u;
            goto label_1beac4;
        }
    }
    ctx->pc = 0x1BEAC0u;
    // 0x1beac0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1beac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1beac4:
    // 0x1beac4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEACCu;
    // 0x1beacc: 0x0  nop
    ctx->pc = 0x1beaccu;
    // NOP
    ctx->pc = 0x1bead0u;
}
