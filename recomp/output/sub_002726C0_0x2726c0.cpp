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

// Function: sub_002726C0
// Address: 0x2726c0 - 0x272800
void sub_002726C0_0x2726c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002726C0_0x2726c0");
#endif

    switch (ctx->pc) {
        case 0x27273cu: goto label_27273c;
        case 0x2727d4u: goto label_2727d4;
        default: break;
    }

    ctx->pc = 0x2726c0u;

    // 0x2726c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2726c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2726c4: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2726c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2726c8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2726c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2726cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2726ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2726d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2726d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2726d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2726d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2726d8: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x2726D8u;
    {
        const bool branch_taken_0x2726d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726D8u;
        // 0x2726dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726d8) {
            ctx->pc = 0x2727E4u;
            goto label_2727e4;
        }
    }
    ctx->pc = 0x2726E0u;
    // 0x2726e0: 0x922202d5  lbu         $v0, 0x2D5($s1)
    ctx->pc = 0x2726e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 725)));
    // 0x2726e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726E4u;
    {
        const bool branch_taken_0x2726e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2726E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726E4u;
        // 0x2726e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726e4) {
            ctx->pc = 0x2726F4u;
            goto label_2726f4;
        }
    }
    ctx->pc = 0x2726ECu;
    // 0x2726ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2726ECu;
    {
        const bool branch_taken_0x2726ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726ECu;
        // 0x2726f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726ec) {
            ctx->pc = 0x2727E4u;
            goto label_2727e4;
        }
    }
    ctx->pc = 0x2726F4u;
label_2726f4:
    // 0x2726f4: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x2726f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2726f8: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x2726f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    // 0x2726fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2726fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x272700: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x272700u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272704: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x272704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x272708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x272708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27270c: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x27270cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272710: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x272710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x272714: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x272714u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x272718: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x272718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27271c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x27271cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x272720: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x272720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x272724: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x272724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x272728: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x272728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27272c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x27272cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x272730: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x272730u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x272734: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x272734u;
    SET_GPR_U32(ctx, 31, 0x27273Cu);
    ctx->pc = 0x272738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272734u;
    // 0x272738: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x272734u, 0x27273Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27273Cu;
label_27273c:
    // 0x27273c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x27273cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272740: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x272740u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x272744: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x272744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x272748: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x272748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27274c: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x27274cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x272750: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x272750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x272754: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x272754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x272758: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x272758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27275c: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x27275cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x272760: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x272760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x272764: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x272764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x272768: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x272768u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27276c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x27276cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x272770: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x272770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x272774: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x272774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x272778: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x272778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27277c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27277cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272780: 0x3c0141d8  lui         $at, 0x41D8
    ctx->pc = 0x272780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16856 << 16));
    // 0x272784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x272788: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x272788u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x27278c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27278cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x272790: 0x0  nop
    ctx->pc = 0x272790u;
    // NOP
    // 0x272794: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x272794u;
    {
        const bool branch_taken_0x272794 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x272798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272794u;
        // 0x272798: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272794) {
            ctx->pc = 0x2727B4u;
            goto label_2727b4;
        }
    }
    ctx->pc = 0x27279Cu;
    // 0x27279c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27279cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2727a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2727a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2727a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2727a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2727a8: 0x0  nop
    ctx->pc = 0x2727a8u;
    // NOP
    // 0x2727ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2727ACu;
    {
        const bool branch_taken_0x2727ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2727ac) {
            ctx->pc = 0x2727B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2727ACu;
            // 0x2727b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2727B4u;
            goto label_2727b4;
        }
    }
    ctx->pc = 0x2727B4u;
label_2727b4:
    // 0x2727b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2727B4u;
    {
        const bool branch_taken_0x2727b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727B4u;
        // 0x2727b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727b4) {
            ctx->pc = 0x2727DCu;
            goto label_2727dc;
        }
    }
    ctx->pc = 0x2727BCu;
    // 0x2727bc: 0x92220220  lbu         $v0, 0x220($s1)
    ctx->pc = 0x2727bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x2727c0: 0x2c4200b4  sltiu       $v0, $v0, 0xB4
    ctx->pc = 0x2727c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)180) ? 1 : 0);
    // 0x2727c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2727C4u;
    {
        const bool branch_taken_0x2727c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727C4u;
        // 0x2727c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727c4) {
            ctx->pc = 0x2727E0u;
            goto label_2727e0;
        }
    }
    ctx->pc = 0x2727CCu;
    // 0x2727cc: 0xc09ca00  jal         func_272800
    ctx->pc = 0x2727CCu;
    SET_GPR_U32(ctx, 31, 0x2727D4u);
    ctx->pc = 0x2727D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2727CCu;
    // 0x2727d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272800u, 0x2727CCu, 0x2727D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2727D4u;
label_2727d4:
    // 0x2727d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2727D4u;
    {
        const bool branch_taken_0x2727d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2727D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727D4u;
        // 0x2727d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2727d4) {
            ctx->pc = 0x2727E4u;
            goto label_2727e4;
        }
    }
    ctx->pc = 0x2727DCu;
label_2727dc:
    // 0x2727dc: 0xa2220220  sb          $v0, 0x220($s1)
    ctx->pc = 0x2727dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 544), (uint8_t)GPR_U32(ctx, 2));
label_2727e0:
    // 0x2727e0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2727e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2727e4:
    // 0x2727e4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2727e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2727e8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2727e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2727ec: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2727ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2727f0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2727f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2727f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2727F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2727F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2727F4u;
        // 0x2727f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2727F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2727FCu;
    // 0x2727fc: 0x0  nop
    ctx->pc = 0x2727fcu;
    // NOP
    ctx->pc = 0x272800u;
}
