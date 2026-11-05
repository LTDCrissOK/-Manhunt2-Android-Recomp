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

// Function: sub_001D27B8
// Address: 0x1d27b8 - 0x1d27f0
void sub_001D27B8_0x1d27b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D27B8_0x1d27b8");
#endif

    ctx->pc = 0x1d27b8u;

    // 0x1d27b8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1d27bc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D27BCu;
    {
        const bool branch_taken_0x1d27bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d27bc) {
            ctx->pc = 0x1D27C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D27BCu;
            // 0x1d27c0: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D27CCu;
            goto label_1d27cc;
        }
    }
    ctx->pc = 0x1D27C4u;
    // 0x1d27c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27C4u;
        // 0x1d27c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27CCu;
label_1d27cc:
    // 0x1d27cc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d27ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d27d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D27D0u;
    {
        const bool branch_taken_0x1d27d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27D0u;
        // 0x1d27d4: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27d0) {
            ctx->pc = 0x1D27E8u;
            goto label_1d27e8;
        }
    }
    ctx->pc = 0x1D27D8u;
    // 0x1d27d8: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x1d27d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1d27dc: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1d27dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d27e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27E0u;
        // 0x1d27e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27E8u;
label_1d27e8:
    // 0x1d27e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27E8u;
        // 0x1d27ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27F0u;
}
