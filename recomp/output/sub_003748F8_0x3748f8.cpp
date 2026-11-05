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

// Function: sub_003748F8
// Address: 0x3748f8 - 0x374978
void sub_003748F8_0x3748f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003748F8_0x3748f8");
#endif

    ctx->pc = 0x3748f8u;

    // 0x3748f8: 0x460c6b41  sub.s       $f13, $f13, $f12
    ctx->pc = 0x3748f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
    // 0x3748fc: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x3748fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x374900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x374900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x374904: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x374904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x374908: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x374908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37490c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x37490cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x374910: 0x24446050  addiu       $a0, $v0, 0x6050
    ctx->pc = 0x374910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x374914: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x374914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x374918: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x374918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37491c: 0x460d6303  div.s       $f12, $f12, $f13
    ctx->pc = 0x37491cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x374920: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x374920u;
    { uint32_t bits = FAST_READ32(0x6C609Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374924: 0x0  nop
    ctx->pc = 0x374924u;
    // NOP
    // 0x374928: 0x0  nop
    ctx->pc = 0x374928u;
    // NOP
    // 0x37492c: 0x460d1083  div.s       $f2, $f2, $f13
    ctx->pc = 0x37492cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[13]); }
    // 0x374930: 0x46036300  add.s       $f12, $f12, $f3
    ctx->pc = 0x374930u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
    // 0x374934: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x374934u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374938: 0x0  nop
    ctx->pc = 0x374938u;
    // NOP
    // 0x37493c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x37493Cu;
    {
        const bool branch_taken_0x37493c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x374940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37493Cu;
        // 0x374940: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37493c) {
            ctx->pc = 0x374958u;
            goto label_374958;
        }
    }
    ctx->pc = 0x374944u;
    // 0x374944: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x374944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374948: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x374948u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37494c: 0x0  nop
    ctx->pc = 0x37494cu;
    // NOP
    // 0x374950: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x374950u;
    {
        const bool branch_taken_0x374950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374950) {
            ctx->pc = 0x374970u;
            goto label_374970;
        }
    }
    ctx->pc = 0x374958u;
label_374958:
    // 0x374958: 0xe48c0048  swc1        $f12, 0x48($a0)
    ctx->pc = 0x374958u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x37495c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x37495cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x374960: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x374960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x374964: 0xe482004c  swc1        $f2, 0x4C($a0)
    ctx->pc = 0x374964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x374968: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x374968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x37496c: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x37496cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
label_374970:
    // 0x374970: 0x3e00008  jr          $ra
    ctx->pc = 0x374970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374978u;
}
