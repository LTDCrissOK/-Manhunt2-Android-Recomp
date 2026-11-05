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

// Function: sub_00269320
// Address: 0x269320 - 0x269408
void sub_00269320_0x269320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269320_0x269320");
#endif

    switch (ctx->pc) {
        case 0x269378u: goto label_269378;
        case 0x269390u: goto label_269390;
        default: break;
    }

    ctx->pc = 0x269320u;

    // 0x269320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269324: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x269324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x269328: 0x1065001d  beq         $v1, $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x269328u;
    {
        const bool branch_taken_0x269328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x26932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269328u;
        // 0x26932c: 0xac85022c  sw          $a1, 0x22C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269328) {
            ctx->pc = 0x2693A0u;
            goto label_2693a0;
        }
    }
    ctx->pc = 0x269330u;
    // 0x269330: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x269330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x269334: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269334u;
    {
        const bool branch_taken_0x269334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x269334) {
            ctx->pc = 0x269338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269334u;
            // 0x269338: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26934Cu;
            goto label_26934c;
        }
    }
    ctx->pc = 0x26933Cu;
    // 0x26933c: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26933Cu;
    {
        const bool branch_taken_0x26933c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26933c) {
            ctx->pc = 0x269340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26933Cu;
            // 0x269340: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26935Cu;
            goto label_26935c;
        }
    }
    ctx->pc = 0x269344u;
    // 0x269344: 0x3e00008  jr          $ra
    ctx->pc = 0x269344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26934Cu;
label_26934c:
    // 0x26934c: 0x5062001e  beql        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x26934Cu;
    {
        const bool branch_taken_0x26934c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26934c) {
            ctx->pc = 0x269350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26934Cu;
            // 0x269350: 0x8c830104  lw          $v1, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2693C8u;
            goto label_2693c8;
        }
    }
    ctx->pc = 0x269354u;
    // 0x269354: 0x3e00008  jr          $ra
    ctx->pc = 0x269354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26935Cu;
label_26935c:
    // 0x26935c: 0xc4810228  lwc1        $f1, 0x228($a0)
    ctx->pc = 0x26935cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x269360: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x269364: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x269364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x269368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x269368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26936c: 0x0  nop
    ctx->pc = 0x26936cu;
    // NOP
    // 0x269370: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x269370u;
    {
        const bool branch_taken_0x269370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x269374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269370u;
        // 0x269374: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269370) {
            ctx->pc = 0x269380u;
            goto label_269380;
        }
    }
    ctx->pc = 0x269378u;
label_269378:
    // 0x269378: 0x3e00008  jr          $ra
    ctx->pc = 0x269378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269378u;
        // 0x26937c: 0xac820220  sw          $v0, 0x220($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269380u;
label_269380:
    // 0x269380: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x269380u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x269384: 0x0  nop
    ctx->pc = 0x269384u;
    // NOP
    // 0x269388: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x269388u;
    {
        const bool branch_taken_0x269388 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x269388) {
            ctx->pc = 0x269398u;
            goto label_269398;
        }
    }
    ctx->pc = 0x269390u;
label_269390:
    // 0x269390: 0x3e00008  jr          $ra
    ctx->pc = 0x269390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269390u;
        // 0x269394: 0xac850220  sw          $a1, 0x220($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269398u;
label_269398:
    // 0x269398: 0x3e00008  jr          $ra
    ctx->pc = 0x269398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269398u;
        // 0x26939c: 0xac80022c  sw          $zero, 0x22C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2693A0u;
label_2693a0:
    // 0x2693a0: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x2693a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2693a4: 0xc4810228  lwc1        $f1, 0x228($a0)
    ctx->pc = 0x2693a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2693a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2693a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2693ac: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2693acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2693b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2693b4: 0x0  nop
    ctx->pc = 0x2693b4u;
    // NOP
    // 0x2693b8: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x2693B8u;
    {
        const bool branch_taken_0x2693b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2693BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693B8u;
        // 0x2693bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693b8) {
            ctx->pc = 0x269378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269378;
        }
    }
    ctx->pc = 0x2693C0u;
    // 0x2693c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2693C0u;
    {
        const bool branch_taken_0x2693c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693c0) {
            ctx->pc = 0x2693E4u;
            goto label_2693e4;
        }
    }
    ctx->pc = 0x2693C8u;
label_2693c8:
    // 0x2693c8: 0xc4810228  lwc1        $f1, 0x228($a0)
    ctx->pc = 0x2693c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2693cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2693ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2693d0: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x2693d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2693d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2693d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2693d8: 0x0  nop
    ctx->pc = 0x2693d8u;
    // NOP
    // 0x2693dc: 0x4501ffec  bc1t        . + 4 + (-0x14 << 2)
    ctx->pc = 0x2693DCu;
    {
        const bool branch_taken_0x2693dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2693dc) {
            ctx->pc = 0x269390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269390;
        }
    }
    ctx->pc = 0x2693E4u;
label_2693e4:
    // 0x2693e4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2693e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2693e8: 0x0  nop
    ctx->pc = 0x2693e8u;
    // NOP
    // 0x2693ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2693ECu;
    {
        const bool branch_taken_0x2693ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2693ec) {
            ctx->pc = 0x2693FCu;
            goto label_2693fc;
        }
    }
    ctx->pc = 0x2693F4u;
    // 0x2693f4: 0xac80022c  sw          $zero, 0x22C($a0)
    ctx->pc = 0x2693f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 556), GPR_U32(ctx, 0));
    // 0x2693f8: 0xac800220  sw          $zero, 0x220($a0)
    ctx->pc = 0x2693f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 544), GPR_U32(ctx, 0));
label_2693fc:
    // 0x2693fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2693FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2693FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269404u;
    // 0x269404: 0x0  nop
    ctx->pc = 0x269404u;
    // NOP
    ctx->pc = 0x269408u;
}
