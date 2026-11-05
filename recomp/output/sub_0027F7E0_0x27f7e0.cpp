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

// Function: sub_0027F7E0
// Address: 0x27f7e0 - 0x27fa88
void sub_0027F7E0_0x27f7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F7E0_0x27f7e0");
#endif

    switch (ctx->pc) {
        case 0x27f820u: goto label_27f820;
        case 0x27f828u: goto label_27f828;
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27fa34u: goto label_27fa34;
        case 0x27fa60u: goto label_27fa60;
        default: break;
    }

    ctx->pc = 0x27f7e0u;

    // 0x27f7e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27f7e4: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x27f7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x27f7e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27f7ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27f7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x27f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x27f7f4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27f7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f7f8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x27f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x27f7fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27f7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f800: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x27f800u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x27f804: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27f804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f808: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x27f808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x27f80c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f810: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x27f810u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x27f814: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27f814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27f818: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x27F818u;
    SET_GPR_U32(ctx, 31, 0x27F820u);
    ctx->pc = 0x27F81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F818u;
    // 0x27f81c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x27F818u, 0x27F820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F820u;
label_27f820:
    // 0x27f820: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x27F820u;
    SET_GPR_U32(ctx, 31, 0x27F828u);
    ctx->pc = 0x27F824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F820u;
    // 0x27f824: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x27F820u, 0x27F828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F828u;
label_27f828:
    // 0x27f828: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x27f828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x27f82c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f830: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x27f830u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f834: 0x0  nop
    ctx->pc = 0x27f834u;
    // NOP
    // 0x27f838: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27f838u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27f83c: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x27f83cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27f840: 0x0  nop
    ctx->pc = 0x27f840u;
    // NOP
    // 0x27f844: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x27f844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x27f848: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x27f848u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27f84c: 0x0  nop
    ctx->pc = 0x27f84cu;
    // NOP
    // 0x27f850: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x27f850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x27f854: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27f854u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f858: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x27f858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27f85c: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x27f85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27f860: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27F860u;
    {
        const bool branch_taken_0x27f860 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27F864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F860u;
        // 0x27f864: 0xe7a30018  swc1        $f3, 0x18($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f860) {
            ctx->pc = 0x27F87Cu;
            goto label_27f87c;
        }
    }
    ctx->pc = 0x27F868u;
    // 0x27f868: 0x3c014059  lui         $at, 0x4059
    ctx->pc = 0x27f868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16473 << 16));
    // 0x27f86c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27f86cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x27f870: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27f870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x27f874: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27F874u;
    {
        const bool branch_taken_0x27f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F874u;
        // 0x27f878: 0x46140501  sub.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f874) {
            ctx->pc = 0x27F8A4u;
            goto label_27f8a4;
        }
    }
    ctx->pc = 0x27F87Cu;
label_27f87c:
    // 0x27f87c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x27f87cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x27f880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f884: 0x0  nop
    ctx->pc = 0x27f884u;
    // NOP
    // 0x27f888: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27f888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f88c: 0x0  nop
    ctx->pc = 0x27f88cu;
    // NOP
    // 0x27f890: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x27F890u;
    {
        const bool branch_taken_0x27f890 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f890) {
            ctx->pc = 0x27F9C4u;
            goto label_27f9c4;
        }
    }
    ctx->pc = 0x27F898u;
    // 0x27f898: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x27f898u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x27f89c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x27f89cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x27f8a0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27f8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27f8a4:
    // 0x27f8a4: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x27f8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f8a8: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x27f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27f8ac: 0x46142501  sub.s       $f20, $f4, $f20
    ctx->pc = 0x27f8acu;
    ctx->f[20] = FPU_SUB_S(ctx->f[4], ctx->f[20]);
    // 0x27f8b0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x27f8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x27f8b4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x27f8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x27f8b8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x27f8b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x27f8bc: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x27f8bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x27f8c0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x27f8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x27f8c4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x27f8c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27f8c8: 0x0  nop
    ctx->pc = 0x27f8c8u;
    // NOP
    // 0x27f8cc: 0x0  nop
    ctx->pc = 0x27f8ccu;
    // NOP
    // 0x27f8d0: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x27f8d0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x27f8d4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x27f8d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27f8d8: 0x0  nop
    ctx->pc = 0x27f8d8u;
    // NOP
    // 0x27f8dc: 0x0  nop
    ctx->pc = 0x27f8dcu;
    // NOP
    // 0x27f8e0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x27f8e0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x27f8e4: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x27f8e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27f8e8: 0x0  nop
    ctx->pc = 0x27f8e8u;
    // NOP
    // 0x27f8ec: 0x0  nop
    ctx->pc = 0x27f8ecu;
    // NOP
    // 0x27f8f0: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x27f8f0u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[4]); }
    // 0x27f8f4: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x27f8f4u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[4]); }
    // 0x27f8f8: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x27f8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27f8fc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x27f8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27f900: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x27f900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27f904: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x27f904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27f908: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x27f908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27f90c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27f90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27f910: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x27f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f914: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f918: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f918u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f91c: 0x0  nop
    ctx->pc = 0x27f91cu;
    // NOP
    // 0x27f920: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F920u;
    {
        const bool branch_taken_0x27f920 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f920) {
            ctx->pc = 0x27F924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F920u;
            // 0x27f924: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F928u;
label_27f928:
    // 0x27f928: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f92c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x27f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f930: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f930u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f934: 0x0  nop
    ctx->pc = 0x27f934u;
    // NOP
    // 0x27f938: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F938u;
    {
        const bool branch_taken_0x27f938 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f938) {
            ctx->pc = 0x27F93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F938u;
            // 0x27f93c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F940u;
            goto label_27f940;
        }
    }
    ctx->pc = 0x27F940u;
label_27f940:
    // 0x27f940: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27f940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f944: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x27f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27f948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f94c: 0x0  nop
    ctx->pc = 0x27f94cu;
    // NOP
    // 0x27f950: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F950u;
    {
        const bool branch_taken_0x27f950 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f950) {
            ctx->pc = 0x27F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F950u;
            // 0x27f954: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F958u;
            goto label_27f958;
        }
    }
    ctx->pc = 0x27F958u;
label_27f958:
    // 0x27f958: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f95c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f960: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f960u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f964: 0x0  nop
    ctx->pc = 0x27f964u;
    // NOP
    // 0x27f968: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f96c: 0x0  nop
    ctx->pc = 0x27f96cu;
    // NOP
    // 0x27f970: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F970u;
    {
        const bool branch_taken_0x27f970 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f970) {
            ctx->pc = 0x27F974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F970u;
            // 0x27f974: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F978u;
            goto label_27f978;
        }
    }
    ctx->pc = 0x27F978u;
label_27f978:
    // 0x27f978: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x27f978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f97c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f97cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f980: 0x0  nop
    ctx->pc = 0x27f980u;
    // NOP
    // 0x27f984: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F984u;
    {
        const bool branch_taken_0x27f984 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f984) {
            ctx->pc = 0x27F988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F984u;
            // 0x27f988: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F98Cu;
            goto label_27f98c;
        }
    }
    ctx->pc = 0x27F98Cu;
label_27f98c:
    // 0x27f98c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f990: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27f994: 0x0  nop
    ctx->pc = 0x27f994u;
    // NOP
    // 0x27f998: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27F998u;
    {
        const bool branch_taken_0x27f998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f998) {
            ctx->pc = 0x27F99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F998u;
            // 0x27f99c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27F9A0u;
            goto label_27f9a0;
        }
    }
    ctx->pc = 0x27F9A0u;
label_27f9a0:
    // 0x27f9a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f9a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27f9a8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27f9ac: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f9acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x27f9b0: 0x44121800  mfc1        $s2, $f3
    ctx->pc = 0x27f9b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x27f9b4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27f9b8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x27f9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x27f9bc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27f9bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x27f9c0: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x27f9c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_27f9c4:
    // 0x27f9c4: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F9C4u;
    {
        const bool branch_taken_0x27f9c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9C4u;
        // 0x27f9c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9c4) {
            ctx->pc = 0x27F9DCu;
            goto label_27f9dc;
        }
    }
    ctx->pc = 0x27F9CCu;
    // 0x27f9cc: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F9CCu;
    {
        const bool branch_taken_0x27f9cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9CCu;
        // 0x27f9d0: 0x8c43bd5c  lw          $v1, -0x42A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9cc) {
            ctx->pc = 0x27F9E0u;
            goto label_27f9e0;
        }
    }
    ctx->pc = 0x27F9D4u;
    // 0x27f9d4: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x27F9D4u;
    {
        const bool branch_taken_0x27f9d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9d4) {
            ctx->pc = 0x27F9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27F9D4u;
            // 0x27f9d8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FA64u;
            goto label_27fa64;
        }
    }
    ctx->pc = 0x27F9DCu;
label_27f9dc:
    // 0x27f9dc: 0x8c43bd5c  lw          $v1, -0x42A4($v0)
    ctx->pc = 0x27f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950236)));
label_27f9e0:
    // 0x27f9e0: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x27F9E0u;
    {
        const bool branch_taken_0x27f9e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F9E0u;
        // 0x27f9e4: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f9e0) {
            ctx->pc = 0x27FA3Cu;
            goto label_27fa3c;
        }
    }
    ctx->pc = 0x27F9E8u;
    // 0x27f9e8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x27F9E8u;
    SET_GPR_U32(ctx, 31, 0x27F9F0u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x27F9E8u, 0x27F9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9F0u;
label_27f9f0:
    // 0x27f9f0: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x27f9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x27f9f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27f9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f9f8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27f9fc: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x27f9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x27fa00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27fa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27fa04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27fa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27fa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fa0c: 0x8c49f3b4  lw          $t1, -0xC4C($v0)
    ctx->pc = 0x27fa0cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4BF3B4u));
    // 0x27fa10: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27fa10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27fa14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27fa14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa18: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27fa18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa1c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27fa1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa20: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27fa20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27fa24: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27fa24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x27fa28: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x27fa28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x27fa2c: 0xc0dae00  jal         func_36B800
    ctx->pc = 0x27FA2Cu;
    SET_GPR_U32(ctx, 31, 0x27FA34u);
    ctx->pc = 0x27FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA2Cu;
    // 0x27fa30: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B800u, 0x27FA2Cu, 0x27FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA34u;
label_27fa34:
    // 0x27fa34: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27FA34u;
    {
        const bool branch_taken_0x27fa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA34u;
        // 0x27fa38: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa34) {
            ctx->pc = 0x27FA64u;
            goto label_27fa64;
        }
    }
    ctx->pc = 0x27FA3Cu;
label_27fa3c:
    // 0x27fa3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27fa3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa40: 0x8c49f3b4  lw          $t1, -0xC4C($v0)
    ctx->pc = 0x27fa40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964148)));
    // 0x27fa44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x27fa44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x27fa48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27fa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27fa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa50: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27fa50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fa54: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x27fa54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x27fa58: 0xc0dae00  jal         func_36B800
    ctx->pc = 0x27FA58u;
    SET_GPR_U32(ctx, 31, 0x27FA60u);
    ctx->pc = 0x27FA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FA58u;
    // 0x27fa5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B800u, 0x27FA58u, 0x27FA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA60u;
label_27fa60:
    // 0x27fa60: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27fa60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27fa64:
    // 0x27fa64: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x27fa64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27fa68: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x27fa68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27fa6c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x27fa6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27fa70: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27fa70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27fa74: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x27fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27fa78: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x27fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x27FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FA7Cu;
        // 0x27fa80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FA84u;
    // 0x27fa84: 0x0  nop
    ctx->pc = 0x27fa84u;
    // NOP
    ctx->pc = 0x27fa88u;
}
