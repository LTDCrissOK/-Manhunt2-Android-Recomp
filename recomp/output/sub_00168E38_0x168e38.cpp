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

// Function: sub_00168E38
// Address: 0x168e38 - 0x169038
void sub_00168E38_0x168e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168E38_0x168e38");
#endif

    switch (ctx->pc) {
        case 0x168e5cu: goto label_168e5c;
        case 0x168e64u: goto label_168e64;
        case 0x168e70u: goto label_168e70;
        case 0x168eacu: goto label_168eac;
        case 0x168ef8u: goto label_168ef8;
        case 0x168f10u: goto label_168f10;
        case 0x168f74u: goto label_168f74;
        case 0x168f8cu: goto label_168f8c;
        case 0x168f98u: goto label_168f98;
        case 0x168fa4u: goto label_168fa4;
        case 0x168fb4u: goto label_168fb4;
        case 0x168fbcu: goto label_168fbc;
        case 0x168fccu: goto label_168fcc;
        case 0x168ff0u: goto label_168ff0;
        case 0x168ffcu: goto label_168ffc;
        case 0x16900cu: goto label_16900c;
        case 0x169018u: goto label_169018;
        default: break;
    }

    ctx->pc = 0x168e38u;

    // 0x168e38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x168e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x168e3c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x168e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x168e40: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x168e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x168e44: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x168e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x168e48: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x168e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x168e4c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x168e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x168e50: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x168e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x168e54: 0xc05a2f6  jal         func_168BD8
    ctx->pc = 0x168E54u;
    SET_GPR_U32(ctx, 31, 0x168E5Cu);
    ctx->pc = 0x168E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E54u;
    // 0x168e58: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168BD8u, 0x168E54u, 0x168E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E5Cu;
label_168e5c:
    // 0x168e5c: 0xc0f70ee  jal         func_3DC3B8
    ctx->pc = 0x168E5Cu;
    SET_GPR_U32(ctx, 31, 0x168E64u);
    ctx->pc = 0x168E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E5Cu;
    // 0x168e60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC3B8u, 0x168E5Cu, 0x168E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E64u;
label_168e64:
    // 0x168e64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x168e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e68: 0xc0f7108  jal         func_3DC420
    ctx->pc = 0x168E68u;
    SET_GPR_U32(ctx, 31, 0x168E70u);
    ctx->pc = 0x168E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E68u;
    // 0x168e6c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC420u, 0x168E68u, 0x168E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E70u;
label_168e70:
    // 0x168e70: 0xc6540338  lwc1        $f20, 0x338($s2)
    ctx->pc = 0x168e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x168e74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x168e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168e78: 0x0  nop
    ctx->pc = 0x168e78u;
    // NOP
    // 0x168e7c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x168e7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168e80: 0x0  nop
    ctx->pc = 0x168e80u;
    // NOP
    // 0x168e84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x168E84u;
    {
        const bool branch_taken_0x168e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x168E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E84u;
        // 0x168e88: 0x8e51032c  lw          $s1, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e84) {
            ctx->pc = 0x168E94u;
            goto label_168e94;
        }
    }
    ctx->pc = 0x168E8Cu;
    // 0x168e8c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x168e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x168e90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x168e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_168e94:
    // 0x168e94: 0x8e420340  lw          $v0, 0x340($s2)
    ctx->pc = 0x168e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
    // 0x168e98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x168E98u;
    {
        const bool branch_taken_0x168e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E98u;
        // 0x168e9c: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e98) {
            ctx->pc = 0x168EA4u;
            goto label_168ea4;
        }
    }
    ctx->pc = 0x168EA0u;
    // 0x168ea0: 0x92330020  lbu         $s3, 0x20($s1)
    ctx->pc = 0x168ea0u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_168ea4:
    // 0x168ea4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x168EA4u;
    SET_GPR_U32(ctx, 31, 0x168EACu);
    ctx->pc = 0x168EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168EA4u;
    // 0x168ea8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x168EA4u, 0x168EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EACu;
label_168eac:
    // 0x168eac: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x168eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x168eb0: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x168EB0u;
    {
        const bool branch_taken_0x168eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EB0u;
        // 0x168eb4: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168eb0) {
            ctx->pc = 0x168F4Cu;
            goto label_168f4c;
        }
    }
    ctx->pc = 0x168EB8u;
    // 0x168eb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x168eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x168ebc: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x168ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x168ec0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x168ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x168ec4: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x168ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x168ec8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x168ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x168ecc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x168eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x168ed0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x168ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x168ed4: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x168ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x168ed8: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x168ED8u;
    {
        const bool branch_taken_0x168ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168ed8) {
            ctx->pc = 0x168EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168ED8u;
            // 0x168edc: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168EE8u;
            goto label_168ee8;
        }
    }
    ctx->pc = 0x168EE0u;
    // 0x168ee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x168EE0u;
    {
        const bool branch_taken_0x168ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168EE0u;
        // 0x168ee4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168ee0) {
            ctx->pc = 0x168EF0u;
            goto label_168ef0;
        }
    }
    ctx->pc = 0x168EE8u;
label_168ee8:
    // 0x168ee8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x168ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168eec: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x168eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_168ef0:
    // 0x168ef0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x168EF0u;
    SET_GPR_U32(ctx, 31, 0x168EF8u);
    ctx->pc = 0x168EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168EF0u;
    // 0x168ef4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x168EF0u, 0x168EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168EF8u;
label_168ef8:
    // 0x168ef8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168ef8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168efc: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x168efcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f00: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f04: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x168f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f08: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x168F08u;
    SET_GPR_U32(ctx, 31, 0x168F10u);
    ctx->pc = 0x168F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F08u;
    // 0x168f0c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x168F08u, 0x168F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F10u;
label_168f10:
    // 0x168f10: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x168f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x168f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x168f18: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x168f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x168f1c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x168f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168f20: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x168f20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x168f24: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x168f24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168f28: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x168f28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x168f2c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x168f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f30: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x168f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f34: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x168f34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x168f38: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x168f38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168f3c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x168f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x168f40: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x168f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x168F44u;
    {
        const bool branch_taken_0x168f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F44u;
        // 0x168f48: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f44) {
            ctx->pc = 0x168F58u;
            goto label_168f58;
        }
    }
    ctx->pc = 0x168F4Cu;
label_168f4c:
    // 0x168f4c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x168f4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x168f50: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x168f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x168f54: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x168f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_168f58:
    // 0x168f58: 0xc64d033c  lwc1        $f13, 0x33C($s2)
    ctx->pc = 0x168f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x168f5c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x168f5cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x168f60: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x168f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f6c: 0xc04090a  jal         func_102428
    ctx->pc = 0x168F6Cu;
    SET_GPR_U32(ctx, 31, 0x168F74u);
    ctx->pc = 0x168F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F6Cu;
    // 0x168f70: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102428u, 0x168F6Cu, 0x168F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F74u;
label_168f74:
    // 0x168f74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x168F74u;
    {
        const bool branch_taken_0x168f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168F74u;
        // 0x168f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168f74) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F7Cu;
    // 0x168f7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x168f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x168f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f84: 0xc05a40e  jal         func_169038
    ctx->pc = 0x168F84u;
    SET_GPR_U32(ctx, 31, 0x168F8Cu);
    ctx->pc = 0x168F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F84u;
    // 0x168f88: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169038u, 0x168F84u, 0x168F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168F8Cu;
label_168f8c:
    // 0x168f8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x168F8Cu;
    {
        const bool branch_taken_0x168f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168f8c) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168F94u;
    // 0x168f94: 0x0  nop
    ctx->pc = 0x168f94u;
    // NOP
label_168f98:
    // 0x168f98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x168f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168f9c: 0xc0f7124  jal         func_3DC490
    ctx->pc = 0x168F9Cu;
    SET_GPR_U32(ctx, 31, 0x168FA4u);
    ctx->pc = 0x168FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168F9Cu;
    // 0x168fa0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC490u, 0x168F9Cu, 0x168FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FA4u;
label_168fa4:
    // 0x168fa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168FA4u;
    {
        const bool branch_taken_0x168fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FA4u;
        // 0x168fa8: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fa4) {
            ctx->pc = 0x168FB4u;
            goto label_168fb4;
        }
    }
    ctx->pc = 0x168FACu;
    // 0x168fac: 0xc05a33a  jal         func_168CE8
    ctx->pc = 0x168FACu;
    SET_GPR_U32(ctx, 31, 0x168FB4u);
    ctx->pc = 0x168FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FACu;
    // 0x168fb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168CE8u, 0x168FACu, 0x168FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FB4u;
label_168fb4:
    // 0x168fb4: 0xc0f6730  jal         func_3D9CC0
    ctx->pc = 0x168FB4u;
    SET_GPR_U32(ctx, 31, 0x168FBCu);
    ctx->pc = 0x168FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FB4u;
    // 0x168fb8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9CC0u, 0x168FB4u, 0x168FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FBCu;
label_168fbc:
    // 0x168fbc: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x168FBCu;
    {
        const bool branch_taken_0x168fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x168fbc) {
            ctx->pc = 0x168FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168FBCu;
            // 0x168fc0: 0xafa00050  sw          $zero, 0x50($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168f98;
        }
    }
    ctx->pc = 0x168FC4u;
    // 0x168fc4: 0xc0f714e  jal         func_3DC538
    ctx->pc = 0x168FC4u;
    SET_GPR_U32(ctx, 31, 0x168FCCu);
    ctx->pc = 0x168FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FC4u;
    // 0x168fc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC538u, 0x168FC4u, 0x168FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FCCu;
label_168fcc:
    // 0x168fcc: 0x8e430350  lw          $v1, 0x350($s2)
    ctx->pc = 0x168fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
    // 0x168fd0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x168FD0u;
    {
        const bool branch_taken_0x168fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x168FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168FD0u;
        // 0x168fd4: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168fd0) {
            ctx->pc = 0x16900Cu;
            goto label_16900c;
        }
    }
    ctx->pc = 0x168FD8u;
    // 0x168fd8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x168fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168fdc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x168fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x168fe0: 0x2410002d  addiu       $s0, $zero, 0x2D
    ctx->pc = 0x168fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x168fe4: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x168fe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x168fe8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x168FE8u;
    SET_GPR_U32(ctx, 31, 0x168FF0u);
    ctx->pc = 0x168FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FE8u;
    // 0x168fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x168FE8u, 0x168FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FF0u;
label_168ff0:
    // 0x168ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ff4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x168FF4u;
    SET_GPR_U32(ctx, 31, 0x168FFCu);
    ctx->pc = 0x168FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168FF4u;
    // 0x168ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x168FF4u, 0x168FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168FFCu;
label_168ffc:
    // 0x168ffc: 0xae420328  sw          $v0, 0x328($s2)
    ctx->pc = 0x168ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 808), GPR_U32(ctx, 2));
    // 0x169000: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x169000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169004: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x169004u;
    SET_GPR_U32(ctx, 31, 0x16900Cu);
    ctx->pc = 0x169008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169004u;
    // 0x169008: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x169004u, 0x16900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16900Cu;
label_16900c:
    // 0x16900c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16900cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169010: 0xc0f70de  jal         func_3DC378
    ctx->pc = 0x169010u;
    SET_GPR_U32(ctx, 31, 0x169018u);
    ctx->pc = 0x169014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169010u;
    // 0x169014: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC378u, 0x169010u, 0x169018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169018u;
label_169018:
    // 0x169018: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x169018u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16901c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x16901cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x169020: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x169020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169024: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x169024u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x169028: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x169028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16902c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16902cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x169030: 0x3e00008  jr          $ra
    ctx->pc = 0x169030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169030u;
        // 0x169034: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169038u;
}
