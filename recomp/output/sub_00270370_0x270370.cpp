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

// Function: sub_00270370
// Address: 0x270370 - 0x2703f0
void sub_00270370_0x270370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270370_0x270370");
#endif

    switch (ctx->pc) {
        case 0x2703b8u: goto label_2703b8;
        default: break;
    }

    ctx->pc = 0x270370u;

    // 0x270370: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x270370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x270374: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x270374u;
    {
        const bool branch_taken_0x270374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270374) {
            ctx->pc = 0x2703DCu;
            goto label_2703dc;
        }
    }
    ctx->pc = 0x27037Cu;
    // 0x27037c: 0xc4620024  lwc1        $f2, 0x24($v1)
    ctx->pc = 0x27037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270384: 0x0  nop
    ctx->pc = 0x270384u;
    // NOP
    // 0x270388: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x270388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27038c: 0x0  nop
    ctx->pc = 0x27038cu;
    // NOP
    // 0x270390: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x270390u;
    {
        const bool branch_taken_0x270390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270390) {
            ctx->pc = 0x270394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270390u;
            // 0x270394: 0x9462002a  lhu         $v0, 0x2A($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703A8u;
            goto label_2703a8;
        }
    }
    ctx->pc = 0x270398u;
    // 0x270398: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x27039c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27039cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2703a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2703A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703A8u;
label_2703a8:
    // 0x2703a8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2703a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2703ac: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2703ACu;
    {
        const bool branch_taken_0x2703ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703ac) {
            ctx->pc = 0x2703B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703ACu;
            // 0x2703b0: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703CCu;
            goto label_2703cc;
        }
    }
    ctx->pc = 0x2703B4u;
    // 0x2703b4: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2703b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2703b8:
    // 0x2703b8: 0x0  nop
    ctx->pc = 0x2703b8u;
    // NOP
    // 0x2703bc: 0x0  nop
    ctx->pc = 0x2703bcu;
    // NOP
    // 0x2703c0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2703c0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2703c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2703C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x46000005  abs.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703CCu;
label_2703cc:
    // 0x2703cc: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2703ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2703d0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2703d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2703d4: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x2703D4u;
    {
        const bool branch_taken_0x2703d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703D4u;
        // 0x2703d8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703d4) {
            ctx->pc = 0x2703B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2703b8;
        }
    }
    ctx->pc = 0x2703DCu;
label_2703dc:
    // 0x2703dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2703dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2703e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2703e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2703e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2703E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2703ECu;
    // 0x2703ec: 0x0  nop
    ctx->pc = 0x2703ecu;
    // NOP
    ctx->pc = 0x2703f0u;
}
