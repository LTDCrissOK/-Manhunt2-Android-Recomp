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

// Function: sub_002FE3A8
// Address: 0x2fe3a8 - 0x2fe448
void sub_002FE3A8_0x2fe3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE3A8_0x2fe3a8");
#endif

    ctx->pc = 0x2fe3a8u;

    // 0x2fe3a8: 0xc48111c8  lwc1        $f1, 0x11C8($a0)
    ctx->pc = 0x2fe3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fe3ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe3b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fe3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fe3b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fe3b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fe3b8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fe3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2fe3bc: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x2fe3bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2fe3c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fe3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fe3c4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2fe3c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2fe3c8: 0xc485bad4  lwc1        $f5, -0x452C($a0)
    ctx->pc = 0x2fe3c8u;
    { uint32_t bits = FAST_READ32(0x3FBAD4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fe3cc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2fe3ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fe3d0: 0x0  nop
    ctx->pc = 0x2fe3d0u;
    // NOP
    // 0x2fe3d4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2fe3d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2fe3d8: 0xc444bad8  lwc1        $f4, -0x4528($v0)
    ctx->pc = 0x2fe3d8u;
    { uint32_t bits = FAST_READ32(0x3FBAD8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fe3dc: 0xc466bad0  lwc1        $f6, -0x4530($v1)
    ctx->pc = 0x2fe3dcu;
    { uint32_t bits = FAST_READ32(0x3FBAD0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fe3e0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x2fe3e0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fe3e4: 0x0  nop
    ctx->pc = 0x2fe3e4u;
    // NOP
    // 0x2fe3e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fe3e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fe3ec: 0x46070028  max.s       $f0, $f0, $f7
    ctx->pc = 0x2fe3ecu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[7]);
    // 0x2fe3f0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fe3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fe3f4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2fe3f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2fe3f8: 0xc442badc  lwc1        $f2, -0x4524($v0)
    ctx->pc = 0x2fe3f8u;
    { uint32_t bits = FAST_READ32(0x3FBADCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fe3fc: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2fe3fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2fe400: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fe400u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fe404: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2fe408: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2fe408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2fe40c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2fe40cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2fe410: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2fe410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2fe414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fe414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fe418: 0x46070034  c.lt.s      $f0, $f7
    ctx->pc = 0x2fe418u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe41c: 0x0  nop
    ctx->pc = 0x2fe41cu;
    // NOP
    // 0x2fe420: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2FE420u;
    {
        const bool branch_taken_0x2fe420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe420) {
            ctx->pc = 0x2FE430u;
            goto label_2fe430;
        }
    }
    ctx->pc = 0x2FE428u;
    // 0x2fe428: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE428u;
        // 0x2fe42c: 0x46003806  mov.s       $f0, $f7 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE430u;
label_2fe430:
    // 0x2fe430: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x2fe430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fe434: 0x0  nop
    ctx->pc = 0x2fe434u;
    // NOP
    // 0x2fe438: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FE438u;
    {
        const bool branch_taken_0x2fe438 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fe438) {
            ctx->pc = 0x2FE43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FE438u;
            // 0x2fe43c: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FE440u;
            goto label_2fe440;
        }
    }
    ctx->pc = 0x2FE440u;
label_2fe440:
    // 0x2fe440: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE448u;
}
