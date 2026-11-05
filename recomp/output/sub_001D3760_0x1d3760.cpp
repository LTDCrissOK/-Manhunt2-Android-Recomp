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

// Function: sub_001D3760
// Address: 0x1d3760 - 0x1d3898
void sub_001D3760_0x1d3760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3760_0x1d3760");
#endif

    switch (ctx->pc) {
        case 0x1d377cu: goto label_1d377c;
        default: break;
    }

    ctx->pc = 0x1d3760u;

    // 0x1d3760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3764: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1d3764u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d376c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D376Cu;
    {
        const bool branch_taken_0x1d376c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D376Cu;
        // 0x1d3770: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d376c) {
            ctx->pc = 0x1D3784u;
            goto label_1d3784;
        }
    }
    ctx->pc = 0x1D3774u;
    // 0x1d3774: 0xc074d14  jal         func_1D3450
    ctx->pc = 0x1D3774u;
    SET_GPR_U32(ctx, 31, 0x1D377Cu);
    ctx->pc = 0x1D3778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3774u;
    // 0x1d3778: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3450u, 0x1D3774u, 0x1D377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D377Cu;
label_1d377c:
    // 0x1d377c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1D377Cu;
    {
        const bool branch_taken_0x1d377c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D377Cu;
        // 0x1d3780: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d377c) {
            ctx->pc = 0x1D388Cu;
            goto label_1d388c;
        }
    }
    ctx->pc = 0x1D3784u;
label_1d3784:
    // 0x1d3784: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d3784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1d3788: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1d3788u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1d378c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x1d378cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3790: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d3790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3794: 0x3c080046  lui         $t0, 0x46
    ctx->pc = 0x1d3794u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)70 << 16));
    // 0x1d3798: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d3798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d379c: 0x25460002  addiu       $a2, $t2, 0x2
    ctx->pc = 0x1d379cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x1d37a0: 0x25270010  addiu       $a3, $t1, 0x10
    ctx->pc = 0x1d37a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d37a4: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x1d37a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1d37a8: 0x2463000a  addiu       $v1, $v1, 0xA
    ctx->pc = 0x1d37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10));
    // 0x1d37ac: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1d37acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d37b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d37b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d37b4: 0x0  nop
    ctx->pc = 0x1d37b4u;
    // NOP
    // 0x1d37b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d37b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d37bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d37bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d37c0: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1d37c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1d37c4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1d37c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1d37c8: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d37c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d37cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d37ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d37d0: 0x0  nop
    ctx->pc = 0x1d37d0u;
    // NOP
    // 0x1d37d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d37d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d37d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d37d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d37dc: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x1d37dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x1d37e0: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1d37e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d37e4: 0xc481f2f0  lwc1        $f1, -0xD10($a0)
    ctx->pc = 0x1d37e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294963952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d37e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d37e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d37ec: 0x0  nop
    ctx->pc = 0x1d37ecu;
    // NOP
    // 0x1d37f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d37f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d37f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d37f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d37f8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x1d37f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x1d37fc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x1d37fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1d3800: 0xc501d56c  lwc1        $f1, -0x2A94($t0)
    ctx->pc = 0x1d3800u;
    { uint32_t bits = FAST_READ32(0x45D56Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3808: 0x0  nop
    ctx->pc = 0x1d3808u;
    // NOP
    // 0x1d380c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d380cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3810: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3814: 0xe5200020  swc1        $f0, 0x20($t1)
    ctx->pc = 0x1d3814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 32), bits); }
    // 0x1d3818: 0x85420002  lh          $v0, 0x2($t2)
    ctx->pc = 0x1d3818u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1d381c: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d381cu;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3824: 0x0  nop
    ctx->pc = 0x1d3824u;
    // NOP
    // 0x1d3828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d382c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3830: 0xe5200010  swc1        $f0, 0x10($t1)
    ctx->pc = 0x1d3830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
    // 0x1d3834: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x1d3834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1d3838: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3838u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d383c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d383cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3840: 0x0  nop
    ctx->pc = 0x1d3840u;
    // NOP
    // 0x1d3844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3848: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d384c: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1d384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1d3850: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x1d3850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d3854: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3854u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d385c: 0x0  nop
    ctx->pc = 0x1d385cu;
    // NOP
    // 0x1d3860: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3860u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3864: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3868: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x1d3868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x1d386c: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x1d386cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x1d3870: 0xc4a1d568  lwc1        $f1, -0x2A98($a1)
    ctx->pc = 0x1d3870u;
    { uint32_t bits = FAST_READ32(0x45D568u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3874: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d3874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d3878: 0x0  nop
    ctx->pc = 0x1d3878u;
    // NOP
    // 0x1d387c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d387cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d3880: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3884: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1d3884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x1d3888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d388c:
    // 0x1d388c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D388Cu;
        // 0x1d3890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3894u;
    // 0x1d3894: 0x0  nop
    ctx->pc = 0x1d3894u;
    // NOP
    ctx->pc = 0x1d3898u;
}
