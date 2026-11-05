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

// Function: sub_00352EE8
// Address: 0x352ee8 - 0x353178
void sub_00352EE8_0x352ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00352EE8_0x352ee8");
#endif

    switch (ctx->pc) {
        case 0x352f08u: goto label_352f08;
        case 0x352f20u: goto label_352f20;
        case 0x352f2cu: goto label_352f2c;
        case 0x352f40u: goto label_352f40;
        default: break;
    }

    ctx->pc = 0x352ee8u;

    // 0x352ee8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x352ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x352eec: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x352eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x352ef0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x352ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x352ef4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x352ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x352ef8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x352ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x352efc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x352efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x352f00: 0xc0d1a32  jal         func_3468C8
    ctx->pc = 0x352F00u;
    SET_GPR_U32(ctx, 31, 0x352F08u);
    ctx->pc = 0x352F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F00u;
    // 0x352f04: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3468C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3468C8u, 0x352F00u, 0x352F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F08u;
label_352f08:
    // 0x352f08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x352f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x352f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x352f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x352f10: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x352f10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x352f14: 0x8e300150  lw          $s0, 0x150($s1)
    ctx->pc = 0x352f14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x352f18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352F18u;
    SET_GPR_U32(ctx, 31, 0x352F20u);
    ctx->pc = 0x352F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F18u;
    // 0x352f1c: 0x8c720100  lw          $s2, 0x100($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352F18u, 0x352F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F20u;
label_352f20:
    // 0x352f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x352f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x352f24: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x352F24u;
    SET_GPR_U32(ctx, 31, 0x352F2Cu);
    ctx->pc = 0x352F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x352F24u;
    // 0x352f28: 0x26530040  addiu       $s3, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x352F24u, 0x352F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x352F2Cu;
label_352f2c:
    // 0x352f2c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x352f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x352f30: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
    ctx->pc = 0x352F30u;
    {
        const bool branch_taken_0x352f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x352F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x352F30u;
        // 0x352f34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x352f30) {
            ctx->pc = 0x35315Cu;
            goto label_35315c;
        }
    }
    ctx->pc = 0x352F38u;
    // 0x352f38: 0x26460050  addiu       $a2, $s2, 0x50
    ctx->pc = 0x352f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x352f3c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x352f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_352f40:
    // 0x352f40: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x352f40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x352f44: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x352f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352f48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x352f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x352f4c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x352f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352f50: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352f54: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x352f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x352f58: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x352f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x352f5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352f60: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x352f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352f64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352f68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x352f68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x352f6c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x352f6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x352f70: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x352f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352f74: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x352f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352f78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352f7c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x352f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352f80: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x352f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x352f84: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x352f84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x352f88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x352f88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x352f8c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x352f8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x352f90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x352f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x352f94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352f98: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x352f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x352f9c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x352f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352fa0: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x352fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352fa4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x352fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352fa8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x352fa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x352fac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x352facu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352fb0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x352fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x352fb4: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352fb8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x352fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352fbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x352fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x352fc0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x352fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352fc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352fc8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x352fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352fcc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x352fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x352fd0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x352fd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352fd4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x352fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x352fd8: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x352fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x352fdc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x352fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x352fe0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x352fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x352fe4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x352fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x352fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x352fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x352fec: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x352fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x352ff0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x352ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x352ff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x352ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x352ff8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x352ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x352ffc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x352ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x353000: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x353000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x353004: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x353004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353008: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35300c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x35300cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353014: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x353014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353018: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x353018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x35301c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35301cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353020: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x353020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x353024: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x353024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x353028: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x353028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35302c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35302cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353030: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x353030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353034: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353038: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x353038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35303c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x35303cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x353040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353044: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x353044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x353048: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x353048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x35304c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35304cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353050: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353054: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x353054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353058: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35305c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x35305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353060: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x353060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x353064: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x353064u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353068: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x353068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35306c: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x35306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x353070: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x353070u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x353074: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x353074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353078: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x353078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x35307c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x35307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353084: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x353084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353088: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x353088u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x35308c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35308cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x353090: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x353090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x353094: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x353094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x353098: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x353098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35309c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3530a0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3530a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3530a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3530a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3530a8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x3530a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3530ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3530acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3530b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3530b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3530b4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x3530b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3530b8: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x3530b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3530bc: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3530bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3530c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3530c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3530c4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3530c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3530c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3530c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3530cc: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x3530ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3530d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3530d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3530d4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3530d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3530d8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x3530d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x3530dc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3530dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x3530e0: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x3530e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x3530e4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3530e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3530e8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3530e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3530ec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3530ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3530f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3530f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3530f4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x3530f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3530f8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3530f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x3530fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3530fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353100: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x353100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x353104: 0x8e23014c  lw          $v1, 0x14C($s1)
    ctx->pc = 0x353104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x353108: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x353108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35310c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x35310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x353110: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x353110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x353114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x353118: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x353118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35311c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x35311cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x353120: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353124: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x353124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x353128: 0x8e22014c  lw          $v0, 0x14C($s1)
    ctx->pc = 0x353128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 332)));
    // 0x35312c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x35312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x353130: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x353130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x353134: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x353134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x353138: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x353138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35313c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x35313cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x353140: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x353140u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x353144: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x353144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x353148: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x353148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x35314c: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x35314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x353150: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x353150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x353154: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x353154u;
    {
        const bool branch_taken_0x353154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x353158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353154u;
        // 0x353158: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x353154) {
            ctx->pc = 0x352F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_352f40;
        }
    }
    ctx->pc = 0x35315Cu;
label_35315c:
    // 0x35315c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x35315cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x353160: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x353160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x353164: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x353164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x353168: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x353168u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35316c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x35316cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x353170: 0x3e00008  jr          $ra
    ctx->pc = 0x353170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x353174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x353170u;
        // 0x353174: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353178u;
}
