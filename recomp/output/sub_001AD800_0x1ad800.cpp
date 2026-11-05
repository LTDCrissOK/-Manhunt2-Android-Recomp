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

// Function: sub_001AD800
// Address: 0x1ad800 - 0x1ad8b8
void sub_001AD800_0x1ad800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD800_0x1ad800");
#endif

    ctx->pc = 0x1ad800u;

    // 0x1ad800: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x1ad800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ad804: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1ad804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1ad808: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AD808u;
    {
        const bool branch_taken_0x1ad808 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD808u;
        // 0x1ad80c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad808) {
            ctx->pc = 0x1AD820u;
            goto label_1ad820;
        }
    }
    ctx->pc = 0x1AD810u;
    // 0x1ad810: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x1ad810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1ad814: 0x24020577  addiu       $v0, $zero, 0x577
    ctx->pc = 0x1ad814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1399));
    // 0x1ad818: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1AD818u;
    {
        const bool branch_taken_0x1ad818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD818u;
        // 0x1ad81c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad818) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD820u;
label_1ad820:
    // 0x1ad820: 0x10a20021  beq         $a1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AD820u;
    {
        const bool branch_taken_0x1ad820 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD820u;
        // 0x1ad824: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad820) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD828u;
    // 0x1ad828: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AD828u;
    {
        const bool branch_taken_0x1ad828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD828u;
        // 0x1ad82c: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad828) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD830u;
    // 0x1ad830: 0x10a2001d  beq         $a1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AD830u;
    {
        const bool branch_taken_0x1ad830 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD830u;
        // 0x1ad834: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad830) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD838u;
    // 0x1ad838: 0x10a2001b  beq         $a1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1AD838u;
    {
        const bool branch_taken_0x1ad838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AD83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD838u;
        // 0x1ad83c: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad838) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD840u;
    // 0x1ad840: 0x54a20011  bnel        $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1AD840u;
    {
        const bool branch_taken_0x1ad840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad840) {
            ctx->pc = 0x1AD844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD840u;
            // 0x1ad844: 0x8c830150  lw          $v1, 0x150($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD848u;
    // 0x1ad848: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x1ad848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1ad84c: 0x24020680  addiu       $v0, $zero, 0x680
    ctx->pc = 0x1ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
    // 0x1ad850: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AD850u;
    {
        const bool branch_taken_0x1ad850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ad850) {
            ctx->pc = 0x1AD854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD850u;
            // 0x1ad854: 0x8c830150  lw          $v1, 0x150($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD888u;
            goto label_1ad888;
        }
    }
    ctx->pc = 0x1AD858u;
    // 0x1ad858: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ad85c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1ad85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1ad860: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ad860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ad864: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ad864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ad868: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1ad868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ad86c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1ad86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ad870: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ad870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ad874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ad874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ad878: 0x0  nop
    ctx->pc = 0x1ad878u;
    // NOP
    // 0x1ad87c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1AD87Cu;
    {
        const bool branch_taken_0x1ad87c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ad87c) {
            ctx->pc = 0x1AD8A8u;
            goto label_1ad8a8;
        }
    }
    ctx->pc = 0x1AD884u;
    // 0x1ad884: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1ad884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_1ad888:
    // 0x1ad888: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1ad888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1ad88c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD88Cu;
    {
        const bool branch_taken_0x1ad88c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ad88c) {
            ctx->pc = 0x1AD8B0u;
            goto label_1ad8b0;
        }
    }
    ctx->pc = 0x1AD894u;
    // 0x1ad894: 0x8c8301e4  lw          $v1, 0x1E4($a0)
    ctx->pc = 0x1ad894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ad898: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ad898u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ad89c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1ad89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1ad8a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD8A0u;
    {
        const bool branch_taken_0x1ad8a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad8a0) {
            ctx->pc = 0x1AD8B0u;
            goto label_1ad8b0;
        }
    }
    ctx->pc = 0x1AD8A8u;
label_1ad8a8:
    // 0x1ad8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8A8u;
        // 0x1ad8ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8B0u;
label_1ad8b0:
    // 0x1ad8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD8B0u;
        // 0x1ad8b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD8B8u;
}
