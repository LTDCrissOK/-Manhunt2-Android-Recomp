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

// Function: sub_001D3628
// Address: 0x1d3628 - 0x1d3760
void sub_001D3628_0x1d3628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3628_0x1d3628");
#endif

    switch (ctx->pc) {
        case 0x1d3644u: goto label_1d3644;
        default: break;
    }

    ctx->pc = 0x1d3628u;

    // 0x1d3628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d362c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d362cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3630: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3634: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3634u;
    {
        const bool branch_taken_0x1d3634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3634u;
        // 0x1d3638: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3634) {
            ctx->pc = 0x1D364Cu;
            goto label_1d364c;
        }
    }
    ctx->pc = 0x1D363Cu;
    // 0x1d363c: 0xc074d14  jal         func_1D3450
    ctx->pc = 0x1D363Cu;
    SET_GPR_U32(ctx, 31, 0x1D3644u);
    ctx->pc = 0x1D3640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D363Cu;
    // 0x1d3640: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3450u, 0x1D363Cu, 0x1D3644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3644u;
label_1d3644:
    // 0x1d3644: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D3644u;
    {
        const bool branch_taken_0x1d3644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3644u;
        // 0x1d3648: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3644) {
            ctx->pc = 0x1D3754u;
            goto label_1d3754;
        }
    }
    ctx->pc = 0x1D364Cu;
label_1d364c:
    // 0x1d364c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1d364cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d3650: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d3650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1d3654: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1d3654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d3658: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d3658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d365c: 0x25250010  addiu       $a1, $t1, 0x10
    ctx->pc = 0x1d365cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d3660: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1d3660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x1d3664: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x1d3664u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x1d3668: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x1d3668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1d366c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1d366cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1d3670: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1d3670u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3674: 0x24470008  addiu       $a3, $v0, 0x8
    ctx->pc = 0x1d3674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d3678: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3678u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d367c: 0x0  nop
    ctx->pc = 0x1d367cu;
    // NOP
    // 0x1d3680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3684: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3688: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x1d3688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1d368c: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x1d368cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1d3690: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d3690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3694: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d3694u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3698: 0x0  nop
    ctx->pc = 0x1d3698u;
    // NOP
    // 0x1d369c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d369cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d36a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d36a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d36a4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1d36a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x1d36a8: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1d36a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1d36ac: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d36acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d36b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d36b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d36b4: 0x0  nop
    ctx->pc = 0x1d36b4u;
    // NOP
    // 0x1d36b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d36b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d36bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d36bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d36c0: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x1d36c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x1d36c4: 0x84430006  lh          $v1, 0x6($v0)
    ctx->pc = 0x1d36c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1d36c8: 0xc481d568  lwc1        $f1, -0x2A98($a0)
    ctx->pc = 0x1d36c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294956392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d36cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d36ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d36d0: 0x0  nop
    ctx->pc = 0x1d36d0u;
    // NOP
    // 0x1d36d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d36d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d36d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d36d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d36dc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1d36dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1d36e0: 0x84430008  lh          $v1, 0x8($v0)
    ctx->pc = 0x1d36e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d36e4: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d36e4u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d36e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d36e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d36ec: 0x0  nop
    ctx->pc = 0x1d36ecu;
    // NOP
    // 0x1d36f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d36f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d36f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d36f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d36f8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1d36f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1d36fc: 0x84e20002  lh          $v0, 0x2($a3)
    ctx->pc = 0x1d36fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1d3700: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d3700u;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3708: 0x0  nop
    ctx->pc = 0x1d3708u;
    // NOP
    // 0x1d370c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d370cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3714: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x1d3714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1d3718: 0x84e20004  lh          $v0, 0x4($a3)
    ctx->pc = 0x1d3718u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d371c: 0xc4c1f2f0  lwc1        $f1, -0xD10($a2)
    ctx->pc = 0x1d371cu;
    { uint32_t bits = FAST_READ32(0x48F2F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3720: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3724: 0x0  nop
    ctx->pc = 0x1d3724u;
    // NOP
    // 0x1d3728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d372c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d372cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3730: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1d3730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1d3734: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x1d3734u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3738: 0xc501d56c  lwc1        $f1, -0x2A94($t0)
    ctx->pc = 0x1d3738u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d373c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d373cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3740: 0x0  nop
    ctx->pc = 0x1d3740u;
    // NOP
    // 0x1d3744: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3744u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3748: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d374c: 0xe5200020  swc1        $f0, 0x20($t1)
    ctx->pc = 0x1d374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
    // 0x1d3750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3754:
    // 0x1d3754: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3754u;
        // 0x1d3758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D375Cu;
    // 0x1d375c: 0x0  nop
    ctx->pc = 0x1d375cu;
    // NOP
    ctx->pc = 0x1d3760u;
}
