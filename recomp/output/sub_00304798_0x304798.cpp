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

// Function: sub_00304798
// Address: 0x304798 - 0x3048b8
void sub_00304798_0x304798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304798_0x304798");
#endif

    switch (ctx->pc) {
        case 0x304888u: goto label_304888;
        case 0x3048a4u: goto label_3048a4;
        default: break;
    }

    ctx->pc = 0x304798u;

    // 0x304798: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30479c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3047a0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3047a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3047a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3047a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3047a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3047a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3047ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3047acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3047b0: 0x92221418  lbu         $v0, 0x1418($s1)
    ctx->pc = 0x3047b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5144)));
    // 0x3047b4: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3047B4u;
    {
        const bool branch_taken_0x3047b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3047B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3047B4u;
        // 0x3047b8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3047b4) {
            ctx->pc = 0x3048A8u;
            goto label_3048a8;
        }
    }
    ctx->pc = 0x3047BCu;
    // 0x3047bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3047bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3047c0: 0xc6221424  lwc1        $f2, 0x1424($s1)
    ctx->pc = 0x3047c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3047c4: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x3047c4u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3047c8: 0x26231430  addiu       $v1, $s1, 0x1430
    ctx->pc = 0x3047c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
    // 0x3047cc: 0xc6211430  lwc1        $f1, 0x1430($s1)
    ctx->pc = 0x3047ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 5168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3047d0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3047d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3047d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3047d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3047d8: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x3047d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x3047dc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3047dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3047e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3047e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3047e4: 0x8e251420  lw          $a1, 0x1420($s1)
    ctx->pc = 0x3047e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5152)));
    // 0x3047e8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3047e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3047ec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3047ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3047f0: 0x460310a8  max.s       $f2, $f2, $f3
    ctx->pc = 0x3047f0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[3]);
    // 0x3047f4: 0xe6221424  swc1        $f2, 0x1424($s1)
    ctx->pc = 0x3047f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5156), bits); }
    // 0x3047f8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3047f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3047fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3047fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x304800: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x304800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304804: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x304804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x304808: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x304808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30480c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x304810: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x304810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x304814: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x304814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x304818: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x304818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30481c: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x30481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x304820: 0xc4830060  lwc1        $f3, 0x60($a0)
    ctx->pc = 0x304820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x304824: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x304824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304828: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x304828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30482c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x30482cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304830: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x304830u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x304834: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x304834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x304838: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x304838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30483c: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x30483cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x304840: 0xc4a00374  lwc1        $f0, 0x374($a1)
    ctx->pc = 0x304840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304844: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x304844u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304848: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x304848u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x30484c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30484cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x304850: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x304850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304854: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x304854u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304858: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x304858u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30485c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30485cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x304860: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x304860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304864: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x304864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x304868: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x304868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x30486c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x30486cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x304870: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x304870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x304874: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x304874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x304878: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x304878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x30487c: 0x460c0300  add.s       $f12, $f0, $f12
    ctx->pc = 0x30487cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x304880: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x304880u;
    SET_GPR_U32(ctx, 31, 0x304888u);
    ctx->pc = 0x304884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304880u;
    // 0x304884: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x304880u, 0x304888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304888u;
label_304888:
    // 0x304888: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x304888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x30488c: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x30488cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x304890: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x304890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x304894: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x304894u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x304898: 0x8e2211d0  lw          $v0, 0x11D0($s1)
    ctx->pc = 0x304898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4560)));
    // 0x30489c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x30489Cu;
    SET_GPR_U32(ctx, 31, 0x3048A4u);
    ctx->pc = 0x3048A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30489Cu;
    // 0x3048a0: 0x8c440100  lw          $a0, 0x100($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x30489Cu, 0x3048A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3048A4u;
label_3048a4:
    // 0x3048a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3048a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3048a8:
    // 0x3048a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3048a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3048ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3048acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3048b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3048B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3048B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3048B0u;
        // 0x3048b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3048B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3048B8u;
}
