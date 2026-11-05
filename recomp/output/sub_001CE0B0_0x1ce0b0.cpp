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

// Function: sub_001CE0B0
// Address: 0x1ce0b0 - 0x1ce2b0
void sub_001CE0B0_0x1ce0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE0B0_0x1ce0b0");
#endif

    switch (ctx->pc) {
        case 0x1ce0ecu: goto label_1ce0ec;
        case 0x1ce128u: goto label_1ce128;
        case 0x1ce13cu: goto label_1ce13c;
        case 0x1ce168u: goto label_1ce168;
        case 0x1ce1c0u: goto label_1ce1c0;
        case 0x1ce1f8u: goto label_1ce1f8;
        case 0x1ce22cu: goto label_1ce22c;
        case 0x1ce24cu: goto label_1ce24c;
        case 0x1ce278u: goto label_1ce278;
        default: break;
    }

    ctx->pc = 0x1ce0b0u;

    // 0x1ce0b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ce0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ce0b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1ce0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1ce0b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1ce0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1ce0c0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ce0c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ce0c4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x1ce0c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ce0c8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1ce0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1ce0cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ce0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce0d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1ce0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1ce0d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ce0d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1ce0d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ce0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ce0dc: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce0e0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x1ce0e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ce0e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CE0E4u;
    SET_GPR_U32(ctx, 31, 0x1CE0ECu);
    ctx->pc = 0x1CE0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE0E4u;
    // 0x1ce0e8: 0xe7b50058  swc1        $f21, 0x58($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CE0E4u, 0x1CE0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE0ECu;
label_1ce0ec:
    // 0x1ce0ec: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1ce0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1ce0f0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ce0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ce0f4: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1ce0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1ce0f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ce0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ce0fc: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1ce0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1ce100: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1ce100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1ce104: 0xae130088  sw          $s3, 0x88($s0)
    ctx->pc = 0x1ce104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 19));
    // 0x1ce108: 0x24422b18  addiu       $v0, $v0, 0x2B18
    ctx->pc = 0x1ce108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11032));
    // 0x1ce10c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ce10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ce110: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1ce110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1ce114: 0x8cc589b8  lw          $a1, -0x7648($a2)
    ctx->pc = 0x1ce114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937016)));
    // 0x1ce118: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1ce118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce11c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ce11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ce120: 0xc077200  jal         func_1DC800
    ctx->pc = 0x1CE120u;
    SET_GPR_U32(ctx, 31, 0x1CE128u);
    ctx->pc = 0x1CE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE120u;
    // 0x1ce124: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC800u, 0x1CE120u, 0x1CE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE128u;
label_1ce128:
    // 0x1ce128: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE128u;
    {
        const bool branch_taken_0x1ce128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ce128) {
            ctx->pc = 0x1CE12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE128u;
            // 0x1ce12c: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE14Cu;
            goto label_1ce14c;
        }
    }
    ctx->pc = 0x1CE130u;
    // 0x1ce130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce134: 0xc0736b0  jal         func_1CDAC0
    ctx->pc = 0x1CE134u;
    SET_GPR_U32(ctx, 31, 0x1CE13Cu);
    ctx->pc = 0x1CE138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE134u;
    // 0x1ce138: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAC0u, 0x1CE134u, 0x1CE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE13Cu;
label_1ce13c:
    // 0x1ce13c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ce13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ce140: 0x262180a  movz        $v1, $s3, $v0
    ctx->pc = 0x1ce140u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x1ce144: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1CE144u;
    {
        const bool branch_taken_0x1ce144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE144u;
        // 0x1ce148: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce144) {
            ctx->pc = 0x1CE284u;
            goto label_1ce284;
        }
    }
    ctx->pc = 0x1CE14Cu;
label_1ce14c:
    // 0x1ce14c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ce14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce154: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1ce154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ce158: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ce158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce15c: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x1ce15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x1ce160: 0xc073c68  jal         func_1CF1A0
    ctx->pc = 0x1CE160u;
    SET_GPR_U32(ctx, 31, 0x1CE168u);
    ctx->pc = 0x1CE164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE160u;
    // 0x1ce164: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF1A0u, 0x1CE160u, 0x1CE168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE168u;
label_1ce168:
    // 0x1ce168: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x1ce168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1ce16c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x1ce16cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1ce170: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ce170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ce174: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ce174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ce178: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x1ce178u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1ce17c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ce17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ce180: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ce180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ce184: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ce184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ce188: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ce188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ce18c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1ce18cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ce190: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ce190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ce194: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ce194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ce198: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1ce198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ce19c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1ce19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ce1a0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1ce1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ce1a4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ce1a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ce1a8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ce1a8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ce1ac: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x1ce1acu;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ce1b0: 0x46150544  c1          0x150544
    ctx->pc = 0x1ce1b0u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ce1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce1b8: 0xc073a90  jal         func_1CEA40
    ctx->pc = 0x1CE1B8u;
    SET_GPR_U32(ctx, 31, 0x1CE1C0u);
    ctx->pc = 0x1CE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1B8u;
    // 0x1ce1bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA40u, 0x1CE1B8u, 0x1CE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1C0u;
label_1ce1c0:
    // 0x1ce1c0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1ce1c0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce1c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce1c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce1c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce1cc: 0x0  nop
    ctx->pc = 0x1ce1ccu;
    // NOP
    // 0x1ce1d0: 0x4600b032  c.eq.s      $f22, $f0
    ctx->pc = 0x1ce1d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce1d4: 0x0  nop
    ctx->pc = 0x1ce1d4u;
    // NOP
    // 0x1ce1d8: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x1CE1D8u;
    {
        const bool branch_taken_0x1ce1d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1D8u;
        // 0x1ce1dc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1d8) {
            ctx->pc = 0x1CE284u;
            goto label_1ce284;
        }
    }
    ctx->pc = 0x1CE1E0u;
    // 0x1ce1e0: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1ce1e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce1e4: 0x0  nop
    ctx->pc = 0x1ce1e4u;
    // NOP
    // 0x1ce1e8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CE1E8u;
    {
        const bool branch_taken_0x1ce1e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE1E8u;
        // 0x1ce1ec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce1e8) {
            ctx->pc = 0x1CE218u;
            goto label_1ce218;
        }
    }
    ctx->pc = 0x1CE1F0u;
    // 0x1ce1f0: 0xc073a62  jal         func_1CE988
    ctx->pc = 0x1CE1F0u;
    SET_GPR_U32(ctx, 31, 0x1CE1F8u);
    ctx->pc = 0x1CE1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE1F0u;
    // 0x1ce1f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE988u, 0x1CE1F0u, 0x1CE1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE1F8u;
label_1ce1f8:
    // 0x1ce1f8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ce1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce1fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ce1fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ce200: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x1ce200u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce204: 0x0  nop
    ctx->pc = 0x1ce204u;
    // NOP
    // 0x1ce208: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CE208u;
    {
        const bool branch_taken_0x1ce208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE208u;
        // 0x1ce20c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce208) {
            ctx->pc = 0x1CE21Cu;
            goto label_1ce21c;
        }
    }
    ctx->pc = 0x1CE210u;
    // 0x1ce210: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1CE210u;
    {
        const bool branch_taken_0x1ce210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE210u;
        // 0x1ce214: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce210) {
            ctx->pc = 0x1CE288u;
            goto label_1ce288;
        }
    }
    ctx->pc = 0x1CE218u;
label_1ce218:
    // 0x1ce218: 0xc4548a0c  lwc1        $f20, -0x75F4($v0)
    ctx->pc = 0x1ce218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ce21c:
    // 0x1ce21c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ce21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce220: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ce220u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce224: 0xc073a9a  jal         func_1CEA68
    ctx->pc = 0x1CE224u;
    SET_GPR_U32(ctx, 31, 0x1CE22Cu);
    ctx->pc = 0x1CE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE224u;
    // 0x1ce228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEA68u, 0x1CE224u, 0x1CE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE22Cu;
label_1ce22c:
    // 0x1ce22c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CE22Cu;
    {
        const bool branch_taken_0x1ce22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE22Cu;
        // 0x1ce230: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce22c) {
            ctx->pc = 0x1CE250u;
            goto label_1ce250;
        }
    }
    ctx->pc = 0x1CE234u;
    // 0x1ce234: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x1ce234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce238: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1ce238u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1ce23c: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x1ce23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ce240: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x1ce240u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x1ce244: 0xc0738c4  jal         func_1CE310
    ctx->pc = 0x1CE244u;
    SET_GPR_U32(ctx, 31, 0x1CE24Cu);
    ctx->pc = 0x1CE248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE244u;
    // 0x1ce248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE310u, 0x1CE244u, 0x1CE24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE24Cu;
label_1ce24c:
    // 0x1ce24c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ce24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ce250:
    // 0x1ce250: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ce250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce254: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CE254u;
    {
        const bool branch_taken_0x1ce254 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE254u;
        // 0x1ce258: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce254) {
            ctx->pc = 0x1CE280u;
            goto label_1ce280;
        }
    }
    ctx->pc = 0x1CE25Cu;
    // 0x1ce25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ce25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce260: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1ce260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce264: 0xae110048  sw          $s1, 0x48($s0)
    ctx->pc = 0x1ce264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 17));
    // 0x1ce268: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x1ce268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x1ce26c: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1ce26cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1ce270: 0xc073a12  jal         func_1CE848
    ctx->pc = 0x1CE270u;
    SET_GPR_U32(ctx, 31, 0x1CE278u);
    ctx->pc = 0x1CE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE270u;
    // 0x1ce274: 0xae050088  sw          $a1, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE848u, 0x1CE270u, 0x1CE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE278u;
label_1ce278:
    // 0x1ce278: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CE278u;
    {
        const bool branch_taken_0x1ce278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE278u;
        // 0x1ce27c: 0x8e020088  lw          $v0, 0x88($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce278) {
            ctx->pc = 0x1CE284u;
            goto label_1ce284;
        }
    }
    ctx->pc = 0x1CE280u;
label_1ce280:
    // 0x1ce280: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ce280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ce284:
    // 0x1ce284: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1ce284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce288:
    // 0x1ce288: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1ce288u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ce28c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1ce28cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce290: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1ce290u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce294: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ce294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ce298: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x1ce298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ce29c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x1ce29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce2a0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ce2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE2A4u;
        // 0x1ce2a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE2ACu;
    // 0x1ce2ac: 0x0  nop
    ctx->pc = 0x1ce2acu;
    // NOP
    ctx->pc = 0x1ce2b0u;
}
