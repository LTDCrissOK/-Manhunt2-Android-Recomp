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

// Function: sub_001B2F40
// Address: 0x1b2f40 - 0x1b2fe0
void sub_001B2F40_0x1b2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2F40_0x1b2f40");
#endif

    ctx->pc = 0x1b2f40u;

    // 0x1b2f40: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1b2f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2f44: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x1b2f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b2f48: 0x460c0801  sub.s       $f0, $f1, $f12
    ctx->pc = 0x1b2f48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1b2f4c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1b2f4cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1b2f50: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b2f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2f54: 0x0  nop
    ctx->pc = 0x1b2f54u;
    // NOP
    // 0x1b2f58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2F58u;
    {
        const bool branch_taken_0x1b2f58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F58u;
        // 0x1b2f5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f58) {
            ctx->pc = 0x1B2F6Cu;
            goto label_1b2f6c;
        }
    }
    ctx->pc = 0x1B2F60u;
    // 0x1b2f60: 0xe4cc0000  swc1        $f12, 0x0($a2)
    ctx->pc = 0x1b2f60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1b2f64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B2F64u;
    {
        const bool branch_taken_0x1b2f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F64u;
        // 0x1b2f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f64) {
            ctx->pc = 0x1B2F9Cu;
            goto label_1b2f9c;
        }
    }
    ctx->pc = 0x1B2F6Cu;
label_1b2f6c:
    // 0x1b2f6c: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1b2f6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2f70: 0x0  nop
    ctx->pc = 0x1b2f70u;
    // NOP
    // 0x1b2f74: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2F74u;
    {
        const bool branch_taken_0x1b2f74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f74) {
            ctx->pc = 0x1B2F84u;
            goto label_1b2f84;
        }
    }
    ctx->pc = 0x1B2F7Cu;
    // 0x1b2f7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2F7Cu;
    {
        const bool branch_taken_0x1b2f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F7Cu;
        // 0x1b2f80: 0x46020800  add.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2f7c) {
            ctx->pc = 0x1B2F98u;
            goto label_1b2f98;
        }
    }
    ctx->pc = 0x1B2F84u;
label_1b2f84:
    // 0x1b2f84: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1b2f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2f88: 0x0  nop
    ctx->pc = 0x1b2f88u;
    // NOP
    // 0x1b2f8c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2F8Cu;
    {
        const bool branch_taken_0x1b2f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2f8c) {
            ctx->pc = 0x1B2F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2F8Cu;
            // 0x1b2f90: 0xc4c10000  lwc1        $f1, 0x0($a2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2FA0u;
            goto label_1b2fa0;
        }
    }
    ctx->pc = 0x1B2F94u;
    // 0x1b2f94: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x1b2f94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1b2f98:
    // 0x1b2f98: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1b2f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1b2f9c:
    // 0x1b2f9c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x1b2f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2fa0:
    // 0x1b2fa0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1b2fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2fa4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2fa4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fa8: 0x0  nop
    ctx->pc = 0x1b2fa8u;
    // NOP
    // 0x1b2fac: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2FACu;
    {
        const bool branch_taken_0x1b2fac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fac) {
            ctx->pc = 0x1B2FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2FACu;
            // 0x1b2fb0: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2FC0u;
            goto label_1b2fc0;
        }
    }
    ctx->pc = 0x1B2FB4u;
    // 0x1b2fb4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1b2fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1b2fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2FB8u;
        // 0x1b2fbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2FC0u;
label_1b2fc0:
    // 0x1b2fc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2fc4: 0x0  nop
    ctx->pc = 0x1b2fc4u;
    // NOP
    // 0x1b2fc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2FC8u;
    {
        const bool branch_taken_0x1b2fc8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2fc8) {
            ctx->pc = 0x1B2FD8u;
            goto label_1b2fd8;
        }
    }
    ctx->pc = 0x1B2FD0u;
    // 0x1b2fd0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1b2fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1b2fd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b2fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b2fd8:
    // 0x1b2fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2FE0u;
}
