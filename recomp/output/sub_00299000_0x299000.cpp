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

// Function: sub_00299000
// Address: 0x299000 - 0x299098
void sub_00299000_0x299000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299000_0x299000");
#endif

    ctx->pc = 0x299000u;

    // 0x299000: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x299000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x299004: 0x3c014382  lui         $at, 0x4382
    ctx->pc = 0x299004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17282 << 16));
    // 0x299008: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299008u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29900c: 0xc4402b4c  lwc1        $f0, 0x2B4C($v0)
    ctx->pc = 0x29900cu;
    { uint32_t bits = FAST_READ32(0x482B4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299010: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x299010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x299014: 0x9062a933  lbu         $v0, -0x56CD($v1)
    ctx->pc = 0x299014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA933u));
    // 0x299018: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x299018u;
    {
        const bool branch_taken_0x299018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299018u;
        // 0x29901c: 0x46010042  mul.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299018) {
            ctx->pc = 0x29904Cu;
            goto label_29904c;
        }
    }
    ctx->pc = 0x299020u;
    // 0x299020: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x299020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299024: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x299024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x299028: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x299028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29902c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29902cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x299030: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x299030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299034: 0x0  nop
    ctx->pc = 0x299034u;
    // NOP
    // 0x299038: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x299038u;
    {
        const bool branch_taken_0x299038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x299038) {
            ctx->pc = 0x29903Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299038u;
            // 0x29903c: 0xe480007c  swc1        $f0, 0x7C($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x299080u;
            goto label_299080;
        }
    }
    ctx->pc = 0x299040u;
    // 0x299040: 0xe482007c  swc1        $f2, 0x7C($a0)
    ctx->pc = 0x299040u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x299044: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x299044u;
    {
        const bool branch_taken_0x299044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299044u;
        // 0x299048: 0xa060a933  sb          $zero, -0x56CD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945075), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299044) {
            ctx->pc = 0x299080u;
            goto label_299080;
        }
    }
    ctx->pc = 0x29904Cu;
label_29904c:
    // 0x29904c: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x29904cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299050: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x299050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x299054: 0x0  nop
    ctx->pc = 0x299054u;
    // NOP
    // 0x299058: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x299058u;
    {
        const bool branch_taken_0x299058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299058u;
        // 0x29905c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299058) {
            ctx->pc = 0x299078u;
            goto label_299078;
        }
    }
    ctx->pc = 0x299060u;
    // 0x299060: 0x3c0142fa  lui         $at, 0x42FA
    ctx->pc = 0x299060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17146 << 16));
    // 0x299064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299068: 0x0  nop
    ctx->pc = 0x299068u;
    // NOP
    // 0x29906c: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x29906cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x299070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299070u;
    {
        const bool branch_taken_0x299070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299070u;
        // 0x299074: 0xa062a933  sb          $v0, -0x56CD($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945075), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299070) {
            ctx->pc = 0x299080u;
            goto label_299080;
        }
    }
    ctx->pc = 0x299078u;
label_299078:
    // 0x299078: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x299078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29907c: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x29907cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_299080:
    // 0x299080: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x299080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299084: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x299084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x299088: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x299088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x29908c: 0x3e00008  jr          $ra
    ctx->pc = 0x29908Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29908Cu;
        // 0x299090: 0xa0820017  sb          $v0, 0x17($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 23), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29908Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299094u;
    // 0x299094: 0x0  nop
    ctx->pc = 0x299094u;
    // NOP
    ctx->pc = 0x299098u;
}
