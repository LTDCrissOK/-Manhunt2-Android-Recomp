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

// Function: sub_0011B650
// Address: 0x11b650 - 0x11b6b0
void sub_0011B650_0x11b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B650_0x11b650");
#endif

    switch (ctx->pc) {
        case 0x11b670u: goto label_11b670;
        case 0x11b680u: goto label_11b680;
        default: break;
    }

    ctx->pc = 0x11b650u;

    // 0x11b650: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b650u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b654: 0x0  nop
    ctx->pc = 0x11b654u;
    // NOP
    // 0x11b658: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x11b658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b65c: 0x0  nop
    ctx->pc = 0x11b65cu;
    // NOP
    // 0x11b660: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x11B660u;
    {
        const bool branch_taken_0x11b660 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B660u;
        // 0x11b664: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b660) {
            ctx->pc = 0x11B678u;
            goto label_11b678;
        }
    }
    ctx->pc = 0x11B668u;
    // 0x11b668: 0x3e00008  jr          $ra
    ctx->pc = 0x11B668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B668u;
        // 0x11b66c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B670u;
label_11b670:
    // 0x11b670: 0x3e00008  jr          $ra
    ctx->pc = 0x11B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B670u;
        // 0x11b674: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B678u;
label_11b678:
    // 0x11b678: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11b678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b67c: 0x0  nop
    ctx->pc = 0x11b67cu;
    // NOP
label_11b680:
    // 0x11b680: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x11b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b684: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x11b684u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b688: 0x0  nop
    ctx->pc = 0x11b688u;
    // NOP
    // 0x11b68c: 0x4501fff8  bc1t        . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B68Cu;
    {
        const bool branch_taken_0x11b68c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b68c) {
            ctx->pc = 0x11B670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b670;
        }
    }
    ctx->pc = 0x11B694u;
    // 0x11b694: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x11b694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x11b698: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x11b698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x11b69c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11B69Cu;
    {
        const bool branch_taken_0x11b69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B69Cu;
        // 0x11b6a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b69c) {
            ctx->pc = 0x11B680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b680;
        }
    }
    ctx->pc = 0x11B6A4u;
    // 0x11b6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6A4u;
        // 0x11b6a8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6ACu;
    // 0x11b6ac: 0x0  nop
    ctx->pc = 0x11b6acu;
    // NOP
    ctx->pc = 0x11b6b0u;
}
