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

// Function: sub_0012F170
// Address: 0x12f170 - 0x12f1a8
void sub_0012F170_0x12f170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F170_0x12f170");
#endif

    ctx->pc = 0x12f170u;

    // 0x12f170: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x12f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12f174: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F174u;
    {
        const bool branch_taken_0x12f174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f174) {
            ctx->pc = 0x12F178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F174u;
            // 0x12f178: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F184u;
            goto label_12f184;
        }
    }
    ctx->pc = 0x12F17Cu;
    // 0x12f17c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F17Cu;
        // 0x12f180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F184u;
label_12f184:
    // 0x12f184: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F184u;
    {
        const bool branch_taken_0x12f184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x12f184) {
            ctx->pc = 0x12F19Cu;
            goto label_12f19c;
        }
    }
    ctx->pc = 0x12F18Cu;
    // 0x12f18c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12f18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12f190: 0x461026  xor         $v0, $v0, $a2
    ctx->pc = 0x12f190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 6));
    // 0x12f194: 0x3e00008  jr          $ra
    ctx->pc = 0x12F194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F194u;
        // 0x12f198: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F19Cu;
label_12f19c:
    // 0x12f19c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F19Cu;
        // 0x12f1a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F1A4u;
    // 0x12f1a4: 0x0  nop
    ctx->pc = 0x12f1a4u;
    // NOP
    ctx->pc = 0x12f1a8u;
}
