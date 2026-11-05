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

// Function: sub_003494A8
// Address: 0x3494a8 - 0x349888
void sub_003494A8_0x3494a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003494A8_0x3494a8");
#endif

    switch (ctx->pc) {
        case 0x3495a8u: goto label_3495a8;
        case 0x3495c8u: goto label_3495c8;
        case 0x3495d0u: goto label_3495d0;
        case 0x349614u: goto label_349614;
        case 0x349658u: goto label_349658;
        case 0x349758u: goto label_349758;
        case 0x349788u: goto label_349788;
        case 0x3497d8u: goto label_3497d8;
        default: break;
    }

    ctx->pc = 0x3494a8u;

    // 0x3494a8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3494a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3494ac: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x3494acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x3494b0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x3494b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x3494b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3494b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3494b8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x3494b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x3494bc: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x3494bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x3494c0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x3494c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x3494c4: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x3494c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x3494c8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x3494c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x3494cc: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3494ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x3494d0: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x3494d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3494d4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3494d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3494d8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3494d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3494dc: 0xc6200084  lwc1        $f0, 0x84($s1)
    ctx->pc = 0x3494dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3494e0: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x3494e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3494e4: 0xc6220080  lwc1        $f2, 0x80($s1)
    ctx->pc = 0x3494e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3494e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3494e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3494ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3494ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3494f0: 0x0  nop
    ctx->pc = 0x3494f0u;
    // NOP
    // 0x3494f4: 0x450100d7  bc1t        . + 4 + (0xD7 << 2)
    ctx->pc = 0x3494F4u;
    {
        const bool branch_taken_0x3494f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3494F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3494F4u;
        // 0x3494f8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3494f4) {
            ctx->pc = 0x349854u;
            goto label_349854;
        }
    }
    ctx->pc = 0x3494FCu;
    // 0x3494fc: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x3494fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x349500: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x349500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x349504: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x349504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349508: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x349508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x34950c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34950cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349510: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x349510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x349514: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349518: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x349518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34951c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x34951cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349520: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x349520u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349524: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x349524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x349528: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x349528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x34952c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x34952cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x349530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349534: 0x46000085  abs.s       $f2, $f0
    ctx->pc = 0x349534u;
    ctx->f[2] = FPU_ABS_S(ctx->f[0]);
    // 0x349538: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x349538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34953c: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x34953cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x349540: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x349540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349544: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x349544u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349548: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x349548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34954c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x34954cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x349550: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x349550u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x349554: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x349554u;
    {
        const bool branch_taken_0x349554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349554u;
        // 0x349558: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349554) {
            ctx->pc = 0x349584u;
            goto label_349584;
        }
    }
    ctx->pc = 0x34955Cu;
    // 0x34955c: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x34955cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x349560: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x349560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349564: 0x0  nop
    ctx->pc = 0x349564u;
    // NOP
    // 0x349568: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x349568u;
    {
        const bool branch_taken_0x349568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349568) {
            ctx->pc = 0x349584u;
            goto label_349584;
        }
    }
    ctx->pc = 0x349570u;
    // 0x349570: 0x46002805  abs.s       $f0, $f5
    ctx->pc = 0x349570u;
    ctx->f[0] = FPU_ABS_S(ctx->f[5]);
    // 0x349574: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x349574u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349578: 0x0  nop
    ctx->pc = 0x349578u;
    // NOP
    // 0x34957c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34957Cu;
    {
        const bool branch_taken_0x34957c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34957c) {
            ctx->pc = 0x349580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34957Cu;
            // 0x349580: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349584u;
            goto label_349584;
        }
    }
    ctx->pc = 0x349584u;
label_349584:
    // 0x349584: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x349584u;
    {
        const bool branch_taken_0x349584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x349588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349584u;
        // 0x349588: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349584) {
            ctx->pc = 0x349854u;
            goto label_349854;
        }
    }
    ctx->pc = 0x34958Cu;
    // 0x34958c: 0x3c013a1a  lui         $at, 0x3A1A
    ctx->pc = 0x34958cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14874 << 16));
    // 0x349590: 0x342133ce  ori         $at, $at, 0x33CE
    ctx->pc = 0x349590u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13262);
    // 0x349594: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x349594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x349598: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34959c: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x34959cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3495a0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3495a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3495a4: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x3495a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3495a8:
    // 0x3495a8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3495a8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3495ac: 0x0  nop
    ctx->pc = 0x3495acu;
    // NOP
    // 0x3495b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3495b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3495b4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x3495b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x3495b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3495b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3495bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3495bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3495c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3495C0u;
    SET_GPR_U32(ctx, 31, 0x3495C8u);
    ctx->pc = 0x3495C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3495C0u;
    // 0x3495c4: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3495C0u, 0x3495C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495C8u;
label_3495c8:
    // 0x3495c8: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3495C8u;
    SET_GPR_U32(ctx, 31, 0x3495D0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3495C8u, 0x3495D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3495D0u;
label_3495d0:
    // 0x3495d0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3495d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3495d4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3495D4u;
    {
        const bool branch_taken_0x3495d4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3495D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495D4u;
        // 0x3495d8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495d4) {
            ctx->pc = 0x3495F0u;
            goto label_3495f0;
        }
    }
    ctx->pc = 0x3495DCu;
    // 0x3495dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3495dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3495e0: 0x0  nop
    ctx->pc = 0x3495e0u;
    // NOP
    // 0x3495e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3495e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3495e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3495E8u;
    {
        const bool branch_taken_0x3495e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3495ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3495E8u;
        // 0x3495ec: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3495e8) {
            ctx->pc = 0x34960Cu;
            goto label_34960c;
        }
    }
    ctx->pc = 0x3495F0u;
label_3495f0:
    // 0x3495f0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3495f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3495f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3495f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3495f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3495f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3495fc: 0x0  nop
    ctx->pc = 0x3495fcu;
    // NOP
    // 0x349600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x349604: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x349604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x349608: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x349608u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_34960c:
    // 0x34960c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34960Cu;
    SET_GPR_U32(ctx, 31, 0x349614u);
    ctx->pc = 0x349610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34960Cu;
    // 0x349610: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34960Cu, 0x349614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349614u;
label_349614:
    // 0x349614: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x349614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x349618: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349618u;
    {
        const bool branch_taken_0x349618 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x34961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349618u;
        // 0x34961c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349618) {
            ctx->pc = 0x349634u;
            goto label_349634;
        }
    }
    ctx->pc = 0x349620u;
    // 0x349620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x349620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349624: 0x0  nop
    ctx->pc = 0x349624u;
    // NOP
    // 0x349628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34962c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34962Cu;
    {
        const bool branch_taken_0x34962c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34962Cu;
        // 0x349630: 0x46160002  mul.s       $f0, $f0, $f22 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34962c) {
            ctx->pc = 0x349650u;
            goto label_349650;
        }
    }
    ctx->pc = 0x349634u;
label_349634:
    // 0x349634: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x349634u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x349638: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x349638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34963c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34963cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349640: 0x0  nop
    ctx->pc = 0x349640u;
    // NOP
    // 0x349644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x349648: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x349648u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34964c: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x34964cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_349650:
    // 0x349650: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x349650u;
    SET_GPR_U32(ctx, 31, 0x349658u);
    ctx->pc = 0x349654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349650u;
    // 0x349654: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x349650u, 0x349658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349658u;
label_349658:
    // 0x349658: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x349658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34965c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34965Cu;
    {
        const bool branch_taken_0x34965c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x349660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34965Cu;
        // 0x349660: 0xc7a30000  lwc1        $f3, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34965c) {
            ctx->pc = 0x349678u;
            goto label_349678;
        }
    }
    ctx->pc = 0x349664u;
    // 0x349664: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x349664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x349668: 0x0  nop
    ctx->pc = 0x349668u;
    // NOP
    // 0x34966c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x34966cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x349670: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x349670u;
    {
        const bool branch_taken_0x349670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349670u;
        // 0x349674: 0x46162102  mul.s       $f4, $f4, $f22 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x349670) {
            ctx->pc = 0x349698u;
            goto label_349698;
        }
    }
    ctx->pc = 0x349678u;
label_349678:
    // 0x349678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x349678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x34967c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x34967cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x349680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x349680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x349684: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x349684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x349688: 0x0  nop
    ctx->pc = 0x349688u;
    // NOP
    // 0x34968c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x34968cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x349690: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x349690u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x349694: 0x46162102  mul.s       $f4, $f4, $f22
    ctx->pc = 0x349694u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
label_349698:
    // 0x349698: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x349698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34969c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x34969cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3496a0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x3496a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x3496a4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x3496a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3496a8: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3496a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x3496ac: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x3496acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x3496b0: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x3496b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3496b4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3496b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3496b8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x3496b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3496bc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3496bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3496c0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3496c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3496c4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x3496c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x3496c8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x3496c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3496cc: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x3496ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3496d0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3496d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3496d4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3496d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3496d8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x3496d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3496dc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x3496dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3496e0: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x3496e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3496e4: 0xc7a3005c  lwc1        $f3, 0x5C($sp)
    ctx->pc = 0x3496e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3496e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3496e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3496ec: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x3496ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x3496f0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x3496f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3496f4: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x3496f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x3496f8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x3496f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3496fc: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x3496fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x349700: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349700u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349704: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x349704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349708: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x349708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34970c: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x34970cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x349710: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x349710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x349714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349718: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x349718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34971c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x34971cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x349720: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x349720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x349724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349728: 0x3c013fb4  lui         $at, 0x3FB4
    ctx->pc = 0x349728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16308 << 16));
    // 0x34972c: 0x3421b4b5  ori         $at, $at, 0xB4B5
    ctx->pc = 0x34972cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46261);
    // 0x349730: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x349730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x349734: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x349734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349738: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x349738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34973c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x34973cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x349740: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x349740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x349744: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x349744u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x349748: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x349748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x34974c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x34974cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x349750: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x349750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x349754: 0x0  nop
    ctx->pc = 0x349754u;
    // NOP
label_349758:
    // 0x349758: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x349758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x34975c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x34975cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x349760: 0x9043001c  lbu         $v1, 0x1C($v0)
    ctx->pc = 0x349760u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x349764: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x349764u;
    {
        const bool branch_taken_0x349764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x349768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349764u;
        // 0x349768: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349764) {
            ctx->pc = 0x349834u;
            goto label_349834;
        }
    }
    ctx->pc = 0x34976Cu;
    // 0x34976c: 0xa046001c  sb          $a2, 0x1C($v0)
    ctx->pc = 0x34976cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 6));
    // 0x349770: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x349770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x349774: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x349774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x349778: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x349778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34977c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x34977cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349780: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x349780u;
    SET_GPR_U32(ctx, 31, 0x349788u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x349780u, 0x349788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349788u;
label_349788:
    // 0x349788: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x349788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34978c: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x34978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x349790: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x349790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x349794: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x349794u;
    {
        const bool branch_taken_0x349794 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x349798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349794u;
        // 0x349798: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349794) {
            ctx->pc = 0x3497B0u;
            goto label_3497b0;
        }
    }
    ctx->pc = 0x34979Cu;
    // 0x34979c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34979cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3497a0: 0x0  nop
    ctx->pc = 0x3497a0u;
    // NOP
    // 0x3497a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3497a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3497a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3497A8u;
    {
        const bool branch_taken_0x3497a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3497ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497A8u;
        // 0x3497ac: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497a8) {
            ctx->pc = 0x3497D0u;
            goto label_3497d0;
        }
    }
    ctx->pc = 0x3497B0u;
label_3497b0:
    // 0x3497b0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x3497b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3497b4: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3497b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3497b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3497b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3497bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3497bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3497c0: 0x0  nop
    ctx->pc = 0x3497c0u;
    // NOP
    // 0x3497c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3497c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3497c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3497c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3497cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3497ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3497d0:
    // 0x3497d0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x3497D0u;
    SET_GPR_U32(ctx, 31, 0x3497D8u);
    ctx->pc = 0x3497D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3497D0u;
    // 0x3497d4: 0xe4a00010  swc1        $f0, 0x10($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x3497D0u, 0x3497D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3497D8u;
label_3497d8:
    // 0x3497d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3497d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3497dc: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x3497dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x3497e0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x3497e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3497e4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3497E4u;
    {
        const bool branch_taken_0x3497e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3497E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497E4u;
        // 0x3497e8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497e4) {
            ctx->pc = 0x349800u;
            goto label_349800;
        }
    }
    ctx->pc = 0x3497ECu;
    // 0x3497ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3497ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3497f0: 0x0  nop
    ctx->pc = 0x3497f0u;
    // NOP
    // 0x3497f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3497f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3497f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3497F8u;
    {
        const bool branch_taken_0x3497f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3497F8u;
        // 0x3497fc: 0x46150002  mul.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3497f8) {
            ctx->pc = 0x349820u;
            goto label_349820;
        }
    }
    ctx->pc = 0x349800u;
label_349800:
    // 0x349800: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x349800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x349804: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x349804u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x349808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x349808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34980c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34980cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349810: 0x0  nop
    ctx->pc = 0x349810u;
    // NOP
    // 0x349814: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x349814u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x349818: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x349818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x34981c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x34981cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_349820:
    // 0x349820: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x349820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x349824: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x349824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x349828: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x349828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x34982c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34982Cu;
    {
        const bool branch_taken_0x34982c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x349830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34982Cu;
        // 0x349830: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34982c) {
            ctx->pc = 0x349840u;
            goto label_349840;
        }
    }
    ctx->pc = 0x349834u;
label_349834:
    // 0x349834: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x349834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x349838: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x349838u;
    {
        const bool branch_taken_0x349838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349838u;
        // 0x34983c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349838) {
            ctx->pc = 0x349758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349758;
        }
    }
    ctx->pc = 0x349840u;
label_349840:
    // 0x349840: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x349840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349844: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x349844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x349848: 0x1440ff57  bnez        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x349848u;
    {
        const bool branch_taken_0x349848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349848) {
            ctx->pc = 0x3495A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3495a8;
        }
    }
    ctx->pc = 0x349850u;
    // 0x349850: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x349850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_349854:
    // 0x349854: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x349854u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x349858: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x349858u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x34985c: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x34985cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x349860: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x349860u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x349864: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x349864u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x349868: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x349868u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x34986c: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x34986cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x349870: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x349870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x349874: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x349874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x349878: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x349878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34987c: 0x3e00008  jr          $ra
    ctx->pc = 0x34987Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34987Cu;
        // 0x349880: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34987Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349884u;
    // 0x349884: 0x0  nop
    ctx->pc = 0x349884u;
    // NOP
    ctx->pc = 0x349888u;
}
