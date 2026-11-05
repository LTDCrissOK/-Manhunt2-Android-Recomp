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

// Function: sub_002C3310
// Address: 0x2c3310 - 0x2c34b0
void sub_002C3310_0x2c3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3310_0x2c3310");
#endif

    ctx->pc = 0x2c3310u;

    // 0x2c3310: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3314: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C3314u;
    {
        const bool branch_taken_0x2c3314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3314) {
            ctx->pc = 0x2C3318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3314u;
            // 0x2c3318: 0x84420000  lh          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3358u;
            goto label_2c3358;
        }
    }
    ctx->pc = 0x2C331Cu;
    // 0x2c331c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c3320: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c3320u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3324: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x2c3324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x2c3328: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2c3328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2c332c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c332cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c3330: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2c3330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2c3334: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2c3334u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2c3338: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2c3338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2c333c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2c333cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2c3340: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x2c3340u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x2c3344: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x2c3344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x2c3348: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x2c3348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x2c334c: 0xaca00030  sw          $zero, 0x30($a1)
    ctx->pc = 0x2c334cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 0));
    // 0x2c3350: 0x3e00008  jr          $ra
    ctx->pc = 0x2C3350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3350u;
        // 0x2c3354: 0xaca00034  sw          $zero, 0x34($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3358u;
label_2c3358:
    // 0x2c3358: 0x3c013800  lui         $at, 0x3800
    ctx->pc = 0x2c3358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14336 << 16));
    // 0x2c335c: 0x34210100  ori         $at, $at, 0x100
    ctx->pc = 0x2c335cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)256);
    // 0x2c3360: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c3360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c3364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c3364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3368: 0x0  nop
    ctx->pc = 0x2c3368u;
    // NOP
    // 0x2c336c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c336cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3374: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2c3374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2c3378: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c337c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x2c337cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c3380: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3384: 0x0  nop
    ctx->pc = 0x2c3384u;
    // NOP
    // 0x2c3388: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c338c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c338cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3390: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2c3390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2c3394: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3398: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x2c3398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c339c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c339cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33a0: 0x0  nop
    ctx->pc = 0x2c33a0u;
    // NOP
    // 0x2c33a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c33a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c33a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c33a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c33ac: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2c33acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2c33b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c33b4: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x2c33b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2c33b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c33b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33bc: 0x0  nop
    ctx->pc = 0x2c33bcu;
    // NOP
    // 0x2c33c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c33c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c33c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c33c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c33c8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x2c33c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x2c33cc: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c33ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c33d0: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x2c33d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c33d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c33d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33d8: 0x0  nop
    ctx->pc = 0x2c33d8u;
    // NOP
    // 0x2c33dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c33dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c33e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c33e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c33e4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x2c33e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x2c33e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c33ec: 0x8443000a  lh          $v1, 0xA($v0)
    ctx->pc = 0x2c33ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2c33f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c33f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c33f4: 0x0  nop
    ctx->pc = 0x2c33f4u;
    // NOP
    // 0x2c33f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c33f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c33fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c33fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3400: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2c3400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2c3404: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3408: 0x8443000c  lh          $v1, 0xC($v0)
    ctx->pc = 0x2c3408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2c340c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c340cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3410: 0x0  nop
    ctx->pc = 0x2c3410u;
    // NOP
    // 0x2c3414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3418: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c341c: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x2c341cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x2c3420: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3424: 0x8443000e  lh          $v1, 0xE($v0)
    ctx->pc = 0x2c3424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2c3428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c342c: 0x0  nop
    ctx->pc = 0x2c342cu;
    // NOP
    // 0x2c3430: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3430u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3434: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3438: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x2c3438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x2c343c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3440: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x2c3440u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2c3444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3448: 0x0  nop
    ctx->pc = 0x2c3448u;
    // NOP
    // 0x2c344c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c344cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3450: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3450u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3454: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x2c3454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x2c3458: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c345c: 0x84430012  lh          $v1, 0x12($v0)
    ctx->pc = 0x2c345cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x2c3460: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3460u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3464: 0x0  nop
    ctx->pc = 0x2c3464u;
    // NOP
    // 0x2c3468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c346c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c346cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3470: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x2c3470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x2c3474: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3478: 0x84430014  lh          $v1, 0x14($v0)
    ctx->pc = 0x2c3478u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c347c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c347cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c3480: 0x0  nop
    ctx->pc = 0x2c3480u;
    // NOP
    // 0x2c3484: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c3484u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c3488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c3488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c348c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2c348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x2c3490: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2c3490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c3494: 0x84430016  lh          $v1, 0x16($v0)
    ctx->pc = 0x2c3494u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2c3498: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c3498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c349c: 0x0  nop
    ctx->pc = 0x2c349cu;
    // NOP
    // 0x2c34a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c34a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c34a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c34a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c34a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C34A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C34A8u;
        // 0x2c34ac: 0xe4a00038  swc1        $f0, 0x38($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C34A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C34B0u;
}
