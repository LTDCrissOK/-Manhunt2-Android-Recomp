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

// Function: sub_0024CFF0
// Address: 0x24cff0 - 0x24d070
void sub_0024CFF0_0x24cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CFF0_0x24cff0");
#endif

    ctx->pc = 0x24cff0u;

    // 0x24cff0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x24cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x24cff4: 0xc4820134  lwc1        $f2, 0x134($a0)
    ctx->pc = 0x24cff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24cff8: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x24cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x24cffc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x24cffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x24d000: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x24d000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x24d004: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24d004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24d008: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x24d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d00c: 0xc48100f4  lwc1        $f1, 0xF4($a0)
    ctx->pc = 0x24d00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d010: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x24d010u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x24d014: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x24d014u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x24d018: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x24d018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d01c: 0x0  nop
    ctx->pc = 0x24d01cu;
    // NOP
    // 0x24d020: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x24D020u;
    {
        const bool branch_taken_0x24d020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D020u;
        // 0x24d024: 0x46000906  mov.s       $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d020) {
            ctx->pc = 0x24D02Cu;
            goto label_24d02c;
        }
    }
    ctx->pc = 0x24D028u;
    // 0x24d028: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x24d028u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_24d02c:
    // 0x24d02c: 0xe48400f4  swc1        $f4, 0xF4($a0)
    ctx->pc = 0x24d02cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x24d030: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x24d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24d034: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x24d034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24d038: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24d038u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d03c: 0x0  nop
    ctx->pc = 0x24d03cu;
    // NOP
    // 0x24d040: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x24D040u;
    {
        const bool branch_taken_0x24d040 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x24d040) {
            ctx->pc = 0x24D044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D040u;
            // 0x24d044: 0xe48100fc  swc1        $f1, 0xFC($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D048u;
            goto label_24d048;
        }
    }
    ctx->pc = 0x24D048u;
label_24d048:
    // 0x24d048: 0x3c014030  lui         $at, 0x4030
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16432 << 16));
    // 0x24d04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24d04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24d050: 0x0  nop
    ctx->pc = 0x24d050u;
    // NOP
    // 0x24d054: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x24d054u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24d058: 0x0  nop
    ctx->pc = 0x24d058u;
    // NOP
    // 0x24d05c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x24D05Cu;
    {
        const bool branch_taken_0x24d05c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D05Cu;
        // 0x24d060: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d05c) {
            ctx->pc = 0x24D068u;
            goto label_24d068;
        }
    }
    ctx->pc = 0x24D064u;
    // 0x24d064: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d068:
    // 0x24d068: 0x3e00008  jr          $ra
    ctx->pc = 0x24D068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D070u;
}
