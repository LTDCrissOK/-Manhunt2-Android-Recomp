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

// Function: sub_001F7258
// Address: 0x1f7258 - 0x1f7370
void sub_001F7258_0x1f7258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7258_0x1f7258");
#endif

    switch (ctx->pc) {
        case 0x1f7280u: goto label_1f7280;
        case 0x1f7288u: goto label_1f7288;
        default: break;
    }

    ctx->pc = 0x1f7258u;

    // 0x1f7258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f7258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f725c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f7260: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f7264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7268: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f7268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f726c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f726cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7270: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f7270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7274: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1f7274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1f7278: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F7278u;
    SET_GPR_U32(ctx, 31, 0x1F7280u);
    ctx->pc = 0x1F727Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7278u;
    // 0x1f727c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F7278u, 0x1F7280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7280u;
label_1f7280:
    // 0x1f7280: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1F7280u;
    SET_GPR_U32(ctx, 31, 0x1F7288u);
    ctx->pc = 0x1F7284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7280u;
    // 0x1f7284: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1F7280u, 0x1F7288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7288u;
label_1f7288:
    // 0x1f7288: 0x260300a0  addiu       $v1, $s0, 0xA0
    ctx->pc = 0x1f7288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1f728c: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x1f728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1f7290: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f7290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f7294: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1f7294u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7298: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f7298u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f729c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1f729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f72a0: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1f72a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f72a4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1f72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f72a8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1f72a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f72ac: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1f72acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f72b0: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x1f72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f72b4: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x1f72b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f72b8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1f72b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1f72bc: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1f72bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f72c0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x1f72c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1f72c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f72c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f72c8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f72c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f72cc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1f72ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f72d0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1f72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f72d4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f72d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f72d8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1f72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f72dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1f72dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f72e0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f72e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f72e4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1f72e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f72e8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1f72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f72ec: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f72ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f72f0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1f72f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1f72f4: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x1f72f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x1f72f8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f72f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f72fc: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1f72fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7300: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f7300u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7304: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f7304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7308: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1f7308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f730c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f730cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f7310: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f7310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7314: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1f7314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7318: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f7318u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f731c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1f731cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1f7320: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x1f7320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1f7324: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1f7324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7328: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1f7328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f732c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f732cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7330: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x1f7330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7334: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1f7334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7338: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f7338u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f733c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x1f733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7340: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1f7340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7344: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f7344u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f7348: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1f7348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1f734c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f734cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f7350: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f7350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f7354: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f7354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f7358: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f7358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f735c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F735Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F735Cu;
        // 0x1f7360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F735Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7364u;
    // 0x1f7364: 0x0  nop
    ctx->pc = 0x1f7364u;
    // NOP
    // 0x1f7368: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1f7368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f736c: 0x0  nop
    ctx->pc = 0x1f736cu;
    // NOP
    ctx->pc = 0x1f7370u;
}
