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

// Function: sub_0011B4F0
// Address: 0x11b4f0 - 0x11b650
void sub_0011B4F0_0x11b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B4F0_0x11b4f0");
#endif

    switch (ctx->pc) {
        case 0x11b548u: goto label_11b548;
        case 0x11b5e4u: goto label_11b5e4;
        default: break;
    }

    ctx->pc = 0x11b4f0u;

    // 0x11b4f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11b4f4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x11b4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x11b4f8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x11b4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x11b4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b500: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11b500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11b504: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11b504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b508: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x11b508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x11b50c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11b50cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b510: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11b510u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11b514: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x11b514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11b518: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x11b518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x11b51c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11b51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11b520: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11b520u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11b524: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11b524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x11b528: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11b528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11b52c: 0x92021212  lbu         $v0, 0x1212($s0)
    ctx->pc = 0x11b52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
    // 0x11b530: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11B530u;
    {
        const bool branch_taken_0x11b530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B530u;
        // 0x11b534: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b530) {
            ctx->pc = 0x11B61Cu;
            goto label_11b61c;
        }
    }
    ctx->pc = 0x11B538u;
    // 0x11b538: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x11b538u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11b53c: 0x2414001e  addiu       $s4, $zero, 0x1E
    ctx->pc = 0x11b53cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11b540: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x11b540u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x11b544: 0x92021210  lbu         $v0, 0x1210($s0)
    ctx->pc = 0x11b544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4624)));
label_11b548:
    // 0x11b548: 0x112180  sll         $a0, $s1, 6
    ctx->pc = 0x11b548u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x11b54c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11b550: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x11b550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x11b554: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11b558: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x11b558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11b55c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x11b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11b560: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B560u;
    {
        const bool branch_taken_0x11b560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B560u;
        // 0x11b564: 0x24820010  addiu       $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b560) {
            ctx->pc = 0x11B578u;
            goto label_11b578;
        }
    }
    ctx->pc = 0x11B568u;
    // 0x11b568: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11b56c: 0x14530026  bne         $v0, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x11B56Cu;
    {
        const bool branch_taken_0x11b56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x11B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B56Cu;
        // 0x11b570: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b56c) {
            ctx->pc = 0x11B608u;
            goto label_11b608;
        }
    }
    ctx->pc = 0x11B574u;
    // 0x11b574: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x11b574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_11b578:
    // 0x11b578: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x11b578u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b57c: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x11b57cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11b580: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x11b580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11b584: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x11b584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11b588: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x11b588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11b58c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x11b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11b590: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x11b590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b594: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x11b594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x11b598: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x11b598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11b59c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11b59cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11b5a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11b5a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11b5a4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x11b5a4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x11b5a8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x11b5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11b5ac: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x11b5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11b5b0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x11b5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11b5b4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x11b5b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x11b5b8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x11b5b8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x11b5bc: 0x4604231c  madd.s      $f12, $f4, $f4
    ctx->pc = 0x11b5bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x11b5c0: 0x460c0304  c1          0xC0304
    ctx->pc = 0x11b5c0u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x11b5c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x11b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b5c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11b5c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11b5cc: 0x752018  mult        $a0, $v1, $s5
    ctx->pc = 0x11b5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11b5d0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x11b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x11b5d4: 0x10740003  beq         $v1, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B5D4u;
    {
        const bool branch_taken_0x11b5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x11B5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5D4u;
        // 0x11b5d8: 0x8c450028  lw          $a1, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5d4) {
            ctx->pc = 0x11B5E4u;
            goto label_11b5e4;
        }
    }
    ctx->pc = 0x11B5DCu;
    // 0x11b5dc: 0xc046dac  jal         func_11B6B0
    ctx->pc = 0x11B5DCu;
    SET_GPR_U32(ctx, 31, 0x11B5E4u);
    ctx->pc = 0x11B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B5DCu;
    // 0x11b5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B6B0u, 0x11B5DCu, 0x11B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B5E4u;
label_11b5e4:
    // 0x11b5e4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x11b5e4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b5e8: 0x0  nop
    ctx->pc = 0x11b5e8u;
    // NOP
    // 0x11b5ec: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x11B5ECu;
    {
        const bool branch_taken_0x11b5ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x11B5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5ECu;
        // 0x11b5f0: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5ec) {
            ctx->pc = 0x11B608u;
            goto label_11b608;
        }
    }
    ctx->pc = 0x11B5F4u;
    // 0x11b5f4: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x11b5f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11b5f8: 0x0  nop
    ctx->pc = 0x11b5f8u;
    // NOP
    // 0x11b5fc: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x11B5FCu;
    {
        const bool branch_taken_0x11b5fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11b5fc) {
            ctx->pc = 0x11B600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B5FCu;
            // 0x11b600: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B608u;
            goto label_11b608;
        }
    }
    ctx->pc = 0x11B604u;
    // 0x11b604: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x11b604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_11b608:
    // 0x11b608: 0x92021212  lbu         $v0, 0x1212($s0)
    ctx->pc = 0x11b608u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4626)));
    // 0x11b60c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x11b60cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11b610: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x11b610u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b614: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x11B614u;
    {
        const bool branch_taken_0x11b614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b614) {
            ctx->pc = 0x11B618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B614u;
            // 0x11b618: 0x92021210  lbu         $v0, 0x1210($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b548;
        }
    }
    ctx->pc = 0x11B61Cu;
label_11b61c:
    // 0x11b61c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x11b61cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x11b620: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11b620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b624: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x11b624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11b628: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11b628u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11b62c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x11b62cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11b630: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x11b630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11b634: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x11b634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11b638: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11b63c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x11b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11b640: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x11b640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11b644: 0x3e00008  jr          $ra
    ctx->pc = 0x11B644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B644u;
        // 0x11b648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B64Cu;
    // 0x11b64c: 0x0  nop
    ctx->pc = 0x11b64cu;
    // NOP
    ctx->pc = 0x11b650u;
}
