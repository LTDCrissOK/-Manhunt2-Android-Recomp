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

// Function: sub_001C64B8
// Address: 0x1c64b8 - 0x1c65f0
void sub_001C64B8_0x1c64b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C64B8_0x1c64b8");
#endif

    switch (ctx->pc) {
        case 0x1c6510u: goto label_1c6510;
        case 0x1c6528u: goto label_1c6528;
        case 0x1c653cu: goto label_1c653c;
        default: break;
    }

    ctx->pc = 0x1c64b8u;

    // 0x1c64b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c64b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c64bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1c64bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1c64c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c64c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c64c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c64c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c64c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c64c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c64ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c64d0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1c64d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c64d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c64d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64dc: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1c64dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1c64e0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c64e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c64e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c64e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c64e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c64ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c64ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c64f0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c64f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c64f4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c64f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c64f8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c64f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c64fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c64fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c6500: 0xc454c74c  lwc1        $f20, -0x38B4($v0)
    ctx->pc = 0x1c6500u;
    { uint32_t bits = FAST_READ32(0x45C74Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6504: 0x8e030318  lw          $v1, 0x318($s0)
    ctx->pc = 0x1c6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1c6508: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C6508u;
    SET_GPR_U32(ctx, 31, 0x1C6510u);
    ctx->pc = 0x1C650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6508u;
    // 0x1c650c: 0x8c720fe8  lw          $s2, 0xFE8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C6508u, 0x1C6510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6510u;
label_1c6510:
    // 0x1c6510: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1c6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1c6514: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1C6514u;
    {
        const bool branch_taken_0x1c6514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6514u;
        // 0x1c6518: 0x26160330  addiu       $s6, $s0, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6514) {
            ctx->pc = 0x1C65B8u;
            goto label_1c65b8;
        }
    }
    ctx->pc = 0x1C651Cu;
    // 0x1c651c: 0x3c1e0044  lui         $fp, 0x44
    ctx->pc = 0x1c651cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)68 << 16));
    // 0x1c6520: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x1c6520u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x1c6524: 0x26510044  addiu       $s1, $s2, 0x44
    ctx->pc = 0x1c6524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
label_1c6528:
    // 0x1c6528: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6528u;
    {
        const bool branch_taken_0x1c6528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6528u;
        // 0x1c652c: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6528) {
            ctx->pc = 0x1C6544u;
            goto label_1c6544;
        }
    }
    ctx->pc = 0x1C6530u;
    // 0x1c6530: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6534: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C6534u;
    SET_GPR_U32(ctx, 31, 0x1C653Cu);
    ctx->pc = 0x1C6538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6534u;
    // 0x1c6538: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C6534u, 0x1C653Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C653Cu;
label_1c653c:
    // 0x1c653c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C653Cu;
    {
        const bool branch_taken_0x1c653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c653c) {
            ctx->pc = 0x1C6540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C653Cu;
            // 0x1c6540: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C6544u;
label_1c6544:
    // 0x1c6544: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1c6544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1c6548: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6548u;
    {
        const bool branch_taken_0x1c6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6548u;
        // 0x1c654c: 0xc7c1a568  lwc1        $f1, -0x5A98($fp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4294944104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6548) {
            ctx->pc = 0x1C6554u;
            goto label_1c6554;
        }
    }
    ctx->pc = 0x1C6550u;
    // 0x1c6550: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1c6550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c6554:
    // 0x1c6554: 0xc6e089d0  lwc1        $f0, -0x7630($s7)
    ctx->pc = 0x1c6554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294937040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c6558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c655c: 0x0  nop
    ctx->pc = 0x1c655cu;
    // NOP
    // 0x1c6560: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6560u;
    {
        const bool branch_taken_0x1c6560 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6560) {
            ctx->pc = 0x1C6564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6560u;
            // 0x1c6564: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C6568u;
    // 0x1c6568: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c6568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c656c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1c656cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1c6570: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c6570u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6574: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c6574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6578: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c6578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c657c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c657cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6580: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c6580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6584: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c6584u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c6588: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c6588u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c658c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c658cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c6590: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1c6590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6594: 0x0  nop
    ctx->pc = 0x1c6594u;
    // NOP
    // 0x1c6598: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6598u;
    {
        const bool branch_taken_0x1c6598 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6598u;
        // 0x1c659c: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6598) {
            ctx->pc = 0x1C65A8u;
            goto label_1c65a8;
        }
    }
    ctx->pc = 0x1C65A0u;
    // 0x1c65a0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1c65a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c65a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c65a8:
    // 0x1c65a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c65a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1c65ac: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1c65acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c65b0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1C65B0u;
    {
        const bool branch_taken_0x1c65b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C65B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65B0u;
        // 0x1c65b4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c65b0) {
            ctx->pc = 0x1C6528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6528;
        }
    }
    ctx->pc = 0x1C65B8u;
label_1c65b8:
    // 0x1c65b8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1c65b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65bc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c65bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c65c0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c65c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c65c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c65c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c65c8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c65c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c65cc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c65ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c65d0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c65d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c65d4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c65d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c65d8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c65d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c65dc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c65dcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c65e0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c65e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c65e4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c65e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c65e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C65E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C65E8u;
        // 0x1c65ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C65E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C65F0u;
}
