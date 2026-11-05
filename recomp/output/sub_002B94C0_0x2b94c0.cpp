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

// Function: sub_002B94C0
// Address: 0x2b94c0 - 0x2b95b8
void sub_002B94C0_0x2b94c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B94C0_0x2b94c0");
#endif

    switch (ctx->pc) {
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9578u: goto label_2b9578;
        case 0x2b9590u: goto label_2b9590;
        case 0x2b95acu: goto label_2b95ac;
        default: break;
    }

    ctx->pc = 0x2b94c0u;

    // 0x2b94c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b94c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b94c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b94c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b94cc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b94d0: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2B94D0u;
    {
        const bool branch_taken_0x2b94d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b94d0) {
            ctx->pc = 0x2B94D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B94D0u;
            // 0x2b94d4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B950Cu;
            goto label_2b950c;
        }
    }
    ctx->pc = 0x2B94D8u;
    // 0x2b94d8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b94dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B94DCu;
    {
        const bool branch_taken_0x2b94dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B94E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94DCu;
        // 0x2b94e0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94dc) {
            ctx->pc = 0x2B94F8u;
            goto label_2b94f8;
        }
    }
    ctx->pc = 0x2B94E4u;
    // 0x2b94e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2b94e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2b94e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b94e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b94ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b94ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b94f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B94F0u;
    {
        const bool branch_taken_0x2b94f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B94F0u;
        // 0x2b94f4: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b94f0) {
            ctx->pc = 0x2B9504u;
            goto label_2b9504;
        }
    }
    ctx->pc = 0x2B94F8u;
label_2b94f8:
    // 0x2b94f8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x2b94f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b94fc: 0xc4412b4c  lwc1        $f1, 0x2B4C($v0)
    ctx->pc = 0x2b94fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11084)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9500: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b9500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2b9504:
    // 0x2b9504: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x2b9504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2b9508: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b950c:
    // 0x2b950c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9510: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B9510u;
    {
        const bool branch_taken_0x2b9510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9510) {
            ctx->pc = 0x2B9558u;
            goto label_2b9558;
        }
    }
    ctx->pc = 0x2B9518u;
    // 0x2b9518: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2b951c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B951Cu;
    {
        const bool branch_taken_0x2b951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B951Cu;
        // 0x2b9520: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b951c) {
            ctx->pc = 0x2B9540u;
            goto label_2b9540;
        }
    }
    ctx->pc = 0x2B9524u;
    // 0x2b9524: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x2b9524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b9528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b9528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b952c: 0x0  nop
    ctx->pc = 0x2b952cu;
    // NOP
    // 0x2b9530: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2b9530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b9534: 0x0  nop
    ctx->pc = 0x2b9534u;
    // NOP
    // 0x2b9538: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9538u;
    {
        const bool branch_taken_0x2b9538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b9538) {
            ctx->pc = 0x2B953Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9538u;
            // 0x2b953c: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B954Cu;
            goto label_2b954c;
        }
    }
    ctx->pc = 0x2B9540u;
label_2b9540:
    // 0x2b9540: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x2b9540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x2b9544: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2b9544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2b9548: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b9548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b954c:
    // 0x2b954c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b954cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9550: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9550u;
    {
        const bool branch_taken_0x2b9550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9550u;
        // 0x2b9554: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9550) {
            ctx->pc = 0x2B9568u;
            goto label_2b9568;
        }
    }
    ctx->pc = 0x2B9558u;
label_2b9558:
    // 0x2b9558: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B9558u;
    SET_GPR_U32(ctx, 31, 0x2B9560u);
    ctx->pc = 0x2B955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9558u;
    // 0x2b955c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B9558u, 0x2B9560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9560u;
label_2b9560:
    // 0x2b9560: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B9560u;
    {
        const bool branch_taken_0x2b9560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9560u;
        // 0x2b9564: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9560) {
            ctx->pc = 0x2B9594u;
            goto label_2b9594;
        }
    }
    ctx->pc = 0x2B9568u;
label_2b9568:
    // 0x2b9568: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B9568u;
    {
        const bool branch_taken_0x2b9568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9568u;
        // 0x2b956c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9568) {
            ctx->pc = 0x2B9580u;
            goto label_2b9580;
        }
    }
    ctx->pc = 0x2B9570u;
    // 0x2b9570: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B9570u;
    SET_GPR_U32(ctx, 31, 0x2B9578u);
    ctx->pc = 0x2B9574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9570u;
    // 0x2b9574: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B9570u, 0x2B9578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9578u;
label_2b9578:
    // 0x2b9578: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B9578u;
    {
        const bool branch_taken_0x2b9578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9578u;
        // 0x2b957c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9578) {
            ctx->pc = 0x2B9594u;
            goto label_2b9594;
        }
    }
    ctx->pc = 0x2B9580u;
label_2b9580:
    // 0x2b9580: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9580u;
    {
        const bool branch_taken_0x2b9580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9580u;
        // 0x2b9584: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9580) {
            ctx->pc = 0x2B9594u;
            goto label_2b9594;
        }
    }
    ctx->pc = 0x2B9588u;
    // 0x2b9588: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B9588u;
    SET_GPR_U32(ctx, 31, 0x2B9590u);
    ctx->pc = 0x2B958Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9588u;
    // 0x2b958c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B9588u, 0x2B9590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9590u;
label_2b9590:
    // 0x2b9590: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b9594:
    // 0x2b9594: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2b9594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b9598: 0x8c438ec8  lw          $v1, -0x7138($v0)
    ctx->pc = 0x2b9598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938312)));
    // 0x2b959c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B959Cu;
    {
        const bool branch_taken_0x2b959c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B95A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B959Cu;
        // 0x2b95a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b959c) {
            ctx->pc = 0x2B95B0u;
            goto label_2b95b0;
        }
    }
    ctx->pc = 0x2B95A4u;
    // 0x2b95a4: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x2B95A4u;
    SET_GPR_U32(ctx, 31, 0x2B95ACu);
    ctx->pc = 0x2B95A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B95A4u;
    // 0x2b95a8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x2B95A4u, 0x2B95ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B95ACu;
label_2b95ac:
    // 0x2b95ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b95acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b95b0:
    // 0x2b95b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B95B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B95B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B95B0u;
        // 0x2b95b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B95B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B95B8u;
}
