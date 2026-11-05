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

// Function: sub_0011B6B0
// Address: 0x11b6b0 - 0x11b718
void sub_0011B6B0_0x11b6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B6B0_0x11b6b0");
#endif

    switch (ctx->pc) {
        case 0x11b6bcu: goto label_11b6bc;
        default: break;
    }

    ctx->pc = 0x11b6b0u;

    // 0x11b6b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x11b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x11b6b4: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B6B4u;
    {
        const bool branch_taken_0x11b6b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11b6b4) {
            ctx->pc = 0x11B6CCu;
            goto label_11b6cc;
        }
    }
    ctx->pc = 0x11B6BCu;
label_11b6bc:
    // 0x11b6bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11b6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B6CCu;
label_11b6cc:
    // 0x11b6cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b6ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b6d0: 0x0  nop
    ctx->pc = 0x11b6d0u;
    // NOP
    // 0x11b6d4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x11b6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b6d8: 0x0  nop
    ctx->pc = 0x11b6d8u;
    // NOP
    // 0x11b6dc: 0x4501fff7  bc1t        . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B6DCu;
    {
        const bool branch_taken_0x11b6dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6DCu;
        // 0x11b6e0: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6dc) {
            ctx->pc = 0x11B6BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b6bc;
        }
    }
    ctx->pc = 0x11B6E4u;
    // 0x11b6e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11b6e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x11b6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b6ec: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x11b6ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b6f0: 0x0  nop
    ctx->pc = 0x11b6f0u;
    // NOP
    // 0x11b6f4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x11B6F4u;
    {
        const bool branch_taken_0x11b6f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b6f4) {
            ctx->pc = 0x11B704u;
            goto label_11b704;
        }
    }
    ctx->pc = 0x11B6FCu;
    // 0x11b6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11B6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6FCu;
        // 0x11b700: 0x460c0001  sub.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B704u;
label_11b704:
    // 0x11b704: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11b704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11b708: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11b708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b70c: 0x3e00008  jr          $ra
    ctx->pc = 0x11B70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B714u;
    // 0x11b714: 0x0  nop
    ctx->pc = 0x11b714u;
    // NOP
    ctx->pc = 0x11b718u;
}
