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

// Function: sub_002D2F18
// Address: 0x2d2f18 - 0x2d2fa8
void sub_002D2F18_0x2d2f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2F18_0x2d2f18");
#endif

    ctx->pc = 0x2d2f18u;

    // 0x2d2f18: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d2f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2f1c: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x2d2f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2f20: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x2d2f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2f24: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x2d2f24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2d2f28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d2f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d2f2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2f2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2f30: 0x0  nop
    ctx->pc = 0x2d2f30u;
    // NOP
    // 0x2d2f34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2d2f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d2f38: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2d2f38u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2d2f3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2d2f3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2f40: 0x0  nop
    ctx->pc = 0x2d2f40u;
    // NOP
    // 0x2d2f44: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D2F44u;
    {
        const bool branch_taken_0x2d2f44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F44u;
        // 0x2d2f48: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f44) {
            ctx->pc = 0x2D2F54u;
            goto label_2d2f54;
        }
    }
    ctx->pc = 0x2D2F4Cu;
    // 0x2d2f4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D2F4Cu;
    {
        const bool branch_taken_0x2d2f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F4Cu;
        // 0x2d2f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f4c) {
            ctx->pc = 0x2D2F9Cu;
            goto label_2d2f9c;
        }
    }
    ctx->pc = 0x2D2F54u;
label_2d2f54:
    // 0x2d2f54: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x2d2f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d2f58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d2f58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2f5c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2d2f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d2f60: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2d2f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2f64: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2d2f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2f68: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x2d2f68u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x2d2f6c: 0xc4820010  lwc1        $f2, 0x10($a0)
    ctx->pc = 0x2d2f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d2f70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d2f70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d2f74: 0x46031902  mul.s       $f4, $f3, $f3
    ctx->pc = 0x2d2f74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2d2f78: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2d2f78u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d2f7c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2d2f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2d2f80: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2d2f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2d2f84: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2d2f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2d2f88: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2d2f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d2f8c: 0x0  nop
    ctx->pc = 0x2d2f8cu;
    // NOP
    // 0x2d2f90: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2F90u;
    {
        const bool branch_taken_0x2d2f90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D2F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F90u;
        // 0x2d2f94: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2f90) {
            ctx->pc = 0x2D2F9Cu;
            goto label_2d2f9c;
        }
    }
    ctx->pc = 0x2D2F98u;
    // 0x2d2f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d2f9c:
    // 0x2d2f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2F9Cu;
        // 0x2d2fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2FA4u;
    // 0x2d2fa4: 0x0  nop
    ctx->pc = 0x2d2fa4u;
    // NOP
    ctx->pc = 0x2d2fa8u;
}
