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

// Function: sub_003127D8
// Address: 0x3127d8 - 0x312af0
void sub_003127D8_0x3127d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003127D8_0x3127d8");
#endif

    switch (ctx->pc) {
        case 0x312844u: goto label_312844;
        case 0x312854u: goto label_312854;
        case 0x3128d8u: goto label_3128d8;
        case 0x3128e8u: goto label_3128e8;
        case 0x3128f8u: goto label_3128f8;
        case 0x312968u: goto label_312968;
        case 0x312978u: goto label_312978;
        case 0x312980u: goto label_312980;
        case 0x312988u: goto label_312988;
        case 0x312a28u: goto label_312a28;
        default: break;
    }

    ctx->pc = 0x3127d8u;

    // 0x3127d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3127d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3127dc: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x3127dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x3127e0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3127e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3127e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3127e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3127e8: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x3127e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x3127ec: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x3127ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
    // 0x3127f0: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x3127f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3127f4: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x3127f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x3127f8: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3127f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3127fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3127fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312800: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x312800u;
    {
        const bool branch_taken_0x312800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312800u;
        // 0x312804: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312800) {
            ctx->pc = 0x312AC8u;
            goto label_312ac8;
        }
    }
    ctx->pc = 0x312808u;
    // 0x312808: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x312808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31280c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x31280cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x312810: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x312810u;
    {
        const bool branch_taken_0x312810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x312814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312810u;
        // 0x312814: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312810) {
            ctx->pc = 0x312828u;
            goto label_312828;
        }
    }
    ctx->pc = 0x312818u;
    // 0x312818: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312818u;
    {
        const bool branch_taken_0x312818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312818u;
        // 0x31281c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312818) {
            ctx->pc = 0x312828u;
            goto label_312828;
        }
    }
    ctx->pc = 0x312820u;
    // 0x312820: 0x146200aa  bne         $v1, $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x312820u;
    {
        const bool branch_taken_0x312820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x312824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312820u;
        // 0x312824: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312820) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312828u;
label_312828:
    // 0x312828: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x312828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x31282c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x31282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x312830: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x312830u;
    {
        const bool branch_taken_0x312830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312830u;
        // 0x312834: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312830) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312838u;
    // 0x312838: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x312838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31283c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x31283Cu;
    SET_GPR_U32(ctx, 31, 0x312844u);
    ctx->pc = 0x312840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31283Cu;
    // 0x312840: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x31283Cu, 0x312844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312844u;
label_312844:
    // 0x312844: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x312844u;
    {
        const bool branch_taken_0x312844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312844u;
        // 0x312848: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312844) {
            ctx->pc = 0x312858u;
            goto label_312858;
        }
    }
    ctx->pc = 0x31284Cu;
    // 0x31284c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x31284Cu;
    SET_GPR_U32(ctx, 31, 0x312854u);
    ctx->pc = 0x312850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31284Cu;
    // 0x312850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x31284Cu, 0x312854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312854u;
label_312854:
    // 0x312854: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x312854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_312858:
    // 0x312858: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x312858u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31285c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x31285cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x312860: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x312860u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312864: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x312864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312868: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x312868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31286c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x31286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312870: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x312870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312874: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x312874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x312878: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x312878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31287c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x31287cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x312880: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x312880u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x312884: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x312884u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x312888: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x312888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31288c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x31288cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312890: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x312890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x312894: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x312894u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x312898: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x312898u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x31289c: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x31289cu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3128a0: 0xc6360024  lwc1        $f22, 0x24($s1)
    ctx->pc = 0x3128a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3128a4: 0x4616b002  mul.s       $f0, $f22, $f22
    ctx->pc = 0x3128a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x3128a8: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x3128a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3128ac: 0x0  nop
    ctx->pc = 0x3128acu;
    // NOP
    // 0x3128b0: 0x45010086  bc1t        . + 4 + (0x86 << 2)
    ctx->pc = 0x3128B0u;
    {
        const bool branch_taken_0x3128b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3128B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128B0u;
        // 0x3128b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128b0) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x3128B8u;
    // 0x3128b8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x3128b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3128bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3128bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3128c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3128C0u;
    {
        const bool branch_taken_0x3128c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3128C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C0u;
        // 0x3128c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128c0) {
            ctx->pc = 0x3128D0u;
            goto label_3128d0;
        }
    }
    ctx->pc = 0x3128C8u;
    // 0x3128c8: 0x1462005a  bne         $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x3128C8u;
    {
        const bool branch_taken_0x3128c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3128CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128C8u;
        // 0x3128cc: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128c8) {
            ctx->pc = 0x312A34u;
            goto label_312a34;
        }
    }
    ctx->pc = 0x3128D0u;
label_3128d0:
    // 0x3128d0: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x3128D0u;
    SET_GPR_U32(ctx, 31, 0x3128D8u);
    ctx->pc = 0x3128D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128D0u;
    // 0x3128d4: 0xc62c0020  lwc1        $f12, 0x20($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x3128D0u, 0x3128D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128D8u;
label_3128d8:
    // 0x3128d8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x3128d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3128dc: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x3128dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x3128e0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3128E0u;
    SET_GPR_U32(ctx, 31, 0x3128E8u);
    ctx->pc = 0x3128E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128E0u;
    // 0x3128e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3128E0u, 0x3128E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128E8u;
label_3128e8:
    // 0x3128e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3128E8u;
    {
        const bool branch_taken_0x3128e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3128ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3128E8u;
        // 0x3128ec: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3128e8) {
            ctx->pc = 0x3128FCu;
            goto label_3128fc;
        }
    }
    ctx->pc = 0x3128F0u;
    // 0x3128f0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3128F0u;
    SET_GPR_U32(ctx, 31, 0x3128F8u);
    ctx->pc = 0x3128F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3128F0u;
    // 0x3128f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3128F0u, 0x3128F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3128F8u;
label_3128f8:
    // 0x3128f8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x3128f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_3128fc:
    // 0x3128fc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3128fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312900: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x312900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312904: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x312904u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x312908: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x312908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31290c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x31290cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312910: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x312910u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x312914: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x312914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312918: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x312918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31291c: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x31291cu;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x312920: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x312920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x312924: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x312924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x312928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x312928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31292c: 0x4614a882  mul.s       $f2, $f21, $f20
    ctx->pc = 0x31292cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x312930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312934: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x312934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312938: 0x0  nop
    ctx->pc = 0x312938u;
    // NOP
    // 0x31293c: 0x45010063  bc1t        . + 4 + (0x63 << 2)
    ctx->pc = 0x31293Cu;
    {
        const bool branch_taken_0x31293c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x312940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31293Cu;
        // 0x312940: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31293c) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312944u;
    // 0x312944: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x312944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x312948: 0x0  nop
    ctx->pc = 0x312948u;
    // NOP
    // 0x31294c: 0x46142036  c.le.s      $f4, $f20
    ctx->pc = 0x31294cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312950: 0x0  nop
    ctx->pc = 0x312950u;
    // NOP
    // 0x312954: 0x4501005e  bc1t        . + 4 + (0x5E << 2)
    ctx->pc = 0x312954u;
    {
        const bool branch_taken_0x312954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x312958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312954u;
        // 0x312958: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312954) {
            ctx->pc = 0x312AD0u;
            goto label_312ad0;
        }
    }
    ctx->pc = 0x31295Cu;
    // 0x31295c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x31295cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x312960: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x312960u;
    SET_GPR_U32(ctx, 31, 0x312968u);
    ctx->pc = 0x312964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312960u;
    // 0x312964: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x312960u, 0x312968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312968u;
label_312968:
    // 0x312968: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x312968u;
    {
        const bool branch_taken_0x312968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312968) {
            ctx->pc = 0x312978u;
            goto label_312978;
        }
    }
    ctx->pc = 0x312970u;
    // 0x312970: 0xc0c4900  jal         func_312400
    ctx->pc = 0x312970u;
    SET_GPR_U32(ctx, 31, 0x312978u);
    ctx->pc = 0x312974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312970u;
    // 0x312974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x312970u, 0x312978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312978u;
label_312978:
    // 0x312978: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312978u;
    SET_GPR_U32(ctx, 31, 0x312980u);
    ctx->pc = 0x31297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312978u;
    // 0x31297c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312978u, 0x312980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312980u;
label_312980:
    // 0x312980: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x312980u;
    SET_GPR_U32(ctx, 31, 0x312988u);
    ctx->pc = 0x312984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312980u;
    // 0x312984: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x312980u, 0x312988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312988u;
label_312988:
    // 0x312988: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x312988u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x31298c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x31298cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312990: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x312990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312994: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x312994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x312998: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x312998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x31299c: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x31299cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x3129a0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3129a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x3129a4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3129a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3129a8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x3129a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3129ac: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3129acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3129b0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x3129b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3129b4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x3129b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3129b8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x3129b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3129bc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x3129bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3129c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3129c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3129c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3129c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3129c8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3129c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3129cc: 0x0  nop
    ctx->pc = 0x3129ccu;
    // NOP
    // 0x3129d0: 0x0  nop
    ctx->pc = 0x3129d0u;
    // NOP
    // 0x3129d4: 0x46000044  c1          0x44
    ctx->pc = 0x3129d4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3129d8: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3129d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3129dc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x3129dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3129e0: 0x0  nop
    ctx->pc = 0x3129e0u;
    // NOP
    // 0x3129e4: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3129E4u;
    {
        const bool branch_taken_0x3129e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3129E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3129E4u;
        // 0x3129e8: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3129e4) {
            ctx->pc = 0x312A10u;
            goto label_312a10;
        }
    }
    ctx->pc = 0x3129ECu;
    // 0x3129ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3129ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3129f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3129f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3129f4: 0x0  nop
    ctx->pc = 0x3129f4u;
    // NOP
    // 0x3129f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3129f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3129fc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3129fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x312a00: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x312a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x312a04: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x312a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x312a08: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x312a08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x312a0c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x312a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_312a10:
    // 0x312a10: 0x3c051040  lui         $a1, 0x1040
    ctx->pc = 0x312a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4160 << 16));
    // 0x312a14: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x312a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x312a18: 0x34a50710  ori         $a1, $a1, 0x710
    ctx->pc = 0x312a18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1808);
    // 0x312a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x312a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312a20: 0xc07789e  jal         func_1DE278
    ctx->pc = 0x312A20u;
    SET_GPR_U32(ctx, 31, 0x312A28u);
    ctx->pc = 0x312A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312A20u;
    // 0x312a24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x312A20u, 0x312A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312A28u;
label_312a28:
    // 0x312a28: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x312A28u;
    {
        const bool branch_taken_0x312a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x312A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312A28u;
        // 0x312a2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a28) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312A30u;
    // 0x312a30: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_312a34:
    // 0x312a34: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x312a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312a38: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x312a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x312a3c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x312a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312a40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x312a40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x312a44: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x312a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x312a48: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x312a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x312a4c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x312a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x312a50: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x312a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x312a54: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x312a54u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x312a58: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x312a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x312a5c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x312a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x312a60: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x312a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x312a64: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x312a64u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x312a68: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x312a68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x312a6c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x312a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x312a70: 0x46010044  c1          0x10044
    ctx->pc = 0x312a70u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x312a74: 0x0  nop
    ctx->pc = 0x312a74u;
    // NOP
    // 0x312a78: 0x0  nop
    ctx->pc = 0x312a78u;
    // NOP
    // 0x312a7c: 0x46160843  div.s       $f1, $f1, $f22
    ctx->pc = 0x312a7cu;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[22]); }
    // 0x312a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x312a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x312a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x312a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x312a88: 0x0  nop
    ctx->pc = 0x312a88u;
    // NOP
    // 0x312a8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x312a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312a90: 0x0  nop
    ctx->pc = 0x312a90u;
    // NOP
    // 0x312a94: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x312A94u;
    {
        const bool branch_taken_0x312a94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312a94) {
            ctx->pc = 0x312AA8u;
            goto label_312aa8;
        }
    }
    ctx->pc = 0x312A9Cu;
    // 0x312a9c: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x312a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x312aa0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x312AA0u;
    {
        const bool branch_taken_0x312aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AA0u;
        // 0x312aa4: 0x46002941  sub.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312aa0) {
            ctx->pc = 0x312AACu;
            goto label_312aac;
        }
    }
    ctx->pc = 0x312AA8u;
label_312aa8:
    // 0x312aa8: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x312aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_312aac:
    // 0x312aac: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x312aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x312ab0: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x312ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x312ab4: 0x0  nop
    ctx->pc = 0x312ab4u;
    // NOP
    // 0x312ab8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x312AB8u;
    {
        const bool branch_taken_0x312ab8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x312ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AB8u;
        // 0x312abc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312ab8) {
            ctx->pc = 0x312ACCu;
            goto label_312acc;
        }
    }
    ctx->pc = 0x312AC0u;
    // 0x312ac0: 0xe6450014  swc1        $f5, 0x14($s2)
    ctx->pc = 0x312ac0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x312ac4: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x312ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
label_312ac8:
    // 0x312ac8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x312ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312acc:
    // 0x312acc: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x312accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_312ad0:
    // 0x312ad0: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x312ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x312ad4: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x312ad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x312ad8: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x312ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x312adc: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x312adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x312ae0: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x312ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x312ae4: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x312ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x312ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x312AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312AE8u;
        // 0x312aec: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312AF0u;
}
