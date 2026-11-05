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

// Function: sub_002254B0
// Address: 0x2254b0 - 0x2254e8
void sub_002254B0_0x2254b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002254B0_0x2254b0");
#endif

    ctx->pc = 0x2254b0u;

    // 0x2254b0: 0x8c830258  lw          $v1, 0x258($a0)
    ctx->pc = 0x2254b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 600)));
    // 0x2254b4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2254B4u;
    {
        const bool branch_taken_0x2254b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2254b4) {
            ctx->pc = 0x2254B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2254B4u;
            // 0x2254b8: 0x8c840254  lw          $a0, 0x254($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2254C4u;
            goto label_2254c4;
        }
    }
    ctx->pc = 0x2254BCu;
    // 0x2254bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2254BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2254C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254BCu;
        // 0x2254c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254C4u;
label_2254c4:
    // 0x2254c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2254c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2254c8: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2254C8u;
    {
        const bool branch_taken_0x2254c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2254CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254C8u;
        // 0x2254cc: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2254c8) {
            ctx->pc = 0x2254DCu;
            goto label_2254dc;
        }
    }
    ctx->pc = 0x2254D0u;
    // 0x2254d0: 0x8c630040  lw          $v1, 0x40($v1)
    ctx->pc = 0x2254d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2254d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2254D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2254D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254D4u;
        // 0x2254d8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254DCu;
label_2254dc:
    // 0x2254dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2254DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2254E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254DCu;
        // 0x2254e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254E4u;
    // 0x2254e4: 0x0  nop
    ctx->pc = 0x2254e4u;
    // NOP
    ctx->pc = 0x2254e8u;
}
