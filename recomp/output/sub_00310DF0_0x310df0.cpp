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

// Function: sub_00310DF0
// Address: 0x310df0 - 0x311060
void sub_00310DF0_0x310df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310DF0_0x310df0");
#endif

    switch (ctx->pc) {
        case 0x310ea0u: goto label_310ea0;
        case 0x310f1cu: goto label_310f1c;
        case 0x310f40u: goto label_310f40;
        case 0x310f44u: goto label_310f44;
        case 0x310f70u: goto label_310f70;
        case 0x310f80u: goto label_310f80;
        case 0x310fb4u: goto label_310fb4;
        case 0x310fd8u: goto label_310fd8;
        case 0x310fe8u: goto label_310fe8;
        case 0x311018u: goto label_311018;
        case 0x311044u: goto label_311044;
        default: break;
    }

    ctx->pc = 0x310df0u;

    // 0x310df0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x310df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x310df4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x310df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x310df8: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x310df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x310dfc: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x310dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x310e00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x310e00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e04: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x310e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x310e08: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x310e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x310e0c: 0xae400530  sw          $zero, 0x530($s2)
    ctx->pc = 0x310e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1328), GPR_U32(ctx, 0));
    // 0x310e10: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x310e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x310e14: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x310e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x310e18: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x310e18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x310e1c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x310e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x310e20: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x310e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e24: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x310e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x310e28: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x310e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310e2c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x310e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e30: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x310e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310e34: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x310e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e38: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x310e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310e3c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x310e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e40: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x310e40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x310e44: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x310e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x310e48: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x310e48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310e4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x310e4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x310e50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x310e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310e54: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x310e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310e58: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x310e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x310e5c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x310e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x310e60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x310e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x310e64: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x310e64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310e68: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x310e68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x310e6c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x310e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310e70: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x310e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310e74: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x310e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310e78: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x310e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310e7c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x310e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310e80: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x310e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x310e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x310e88: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x310e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e8c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x310e8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x310e90: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x310e90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x310e94: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x310e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x310e98: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x310E98u;
    SET_GPR_U32(ctx, 31, 0x310EA0u);
    ctx->pc = 0x310E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E98u;
    // 0x310e9c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x310E98u, 0x310EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310EA0u;
label_310ea0:
    // 0x310ea0: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x310ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x310ea4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310ea8: 0x3c0143a2  lui         $at, 0x43A2
    ctx->pc = 0x310ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17314 << 16));
    // 0x310eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x310eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x310eb0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x310eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x310eb4: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x310eb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x310eb8: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x310eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310ebc: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x310ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x310ec0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x310ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310ec4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x310ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310ec8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x310ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310ecc: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x310eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310ed0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x310ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310ed4: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x310ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x310ed8: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x310ed8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x310edc: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x310edcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x310ee0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x310ee0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x310ee4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x310ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x310ee8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x310ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x310eec: 0xae40055c  sw          $zero, 0x55C($s2)
    ctx->pc = 0x310eecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1372), GPR_U32(ctx, 0));
    // 0x310ef0: 0x24433398  addiu       $v1, $v0, 0x3398
    ctx->pc = 0x310ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13208));
    // 0x310ef4: 0x9c473398  lwu         $a3, 0x3398($v0)
    ctx->pc = 0x310ef4u;
    SET_GPR_ZE32(ctx, 7, FAST_READ32(0x473398u));
    // 0x310ef8: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x310ef8u;
    SET_GPR_ZE32(ctx, 6, FAST_READ32(0x47339Cu));
    // 0x310efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f00: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x310f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x310f04: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x310f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x310f08: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x310f08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x310f0c: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x310f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x310f10: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x310f10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x310f14: 0xc08560a  jal         func_215828
    ctx->pc = 0x310F14u;
    SET_GPR_U32(ctx, 31, 0x310F1Cu);
    ctx->pc = 0x310F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F14u;
    // 0x310f18: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215828u, 0x310F14u, 0x310F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F1Cu;
label_310f1c:
    // 0x310f1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x310f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310f20: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x310f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x310f24: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x310f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x310f28: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310F28u;
    {
        const bool branch_taken_0x310f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x310F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F28u;
        // 0x310f2c: 0xafa30090  sw          $v1, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f28) {
            ctx->pc = 0x310F34u;
            goto label_310f34;
        }
    }
    ctx->pc = 0x310F30u;
    // 0x310f30: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x310f30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_310f34:
    // 0x310f34: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x310F34u;
    {
        const bool branch_taken_0x310f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F34u;
        // 0x310f38: 0x26510534  addiu       $s1, $s2, 0x534 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f34) {
            ctx->pc = 0x310F60u;
            goto label_310f60;
        }
    }
    ctx->pc = 0x310F3Cu;
    // 0x310f3c: 0x0  nop
    ctx->pc = 0x310f3cu;
    // NOP
label_310f40:
    // 0x310f40: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x310f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_310f44:
    // 0x310f44: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x310f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x310f48: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310F48u;
    {
        const bool branch_taken_0x310f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x310F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F48u;
        // 0x310f4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f48) {
            ctx->pc = 0x310F60u;
            goto label_310f60;
        }
    }
    ctx->pc = 0x310F50u;
    // 0x310f50: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x310f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x310f54: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310F54u;
    {
        const bool branch_taken_0x310f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x310F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F54u;
        // 0x310f58: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f54) {
            ctx->pc = 0x310F60u;
            goto label_310f60;
        }
    }
    ctx->pc = 0x310F5Cu;
    // 0x310f5c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x310f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_310f60:
    // 0x310f60: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x310F60u;
    {
        const bool branch_taken_0x310f60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F60u;
        // 0x310f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f60) {
            ctx->pc = 0x310FA8u;
            goto label_310fa8;
        }
    }
    ctx->pc = 0x310F68u;
    // 0x310f68: 0xc0c3f38  jal         func_30FCE0
    ctx->pc = 0x310F68u;
    SET_GPR_U32(ctx, 31, 0x310F70u);
    ctx->pc = 0x310F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F68u;
    // 0x310f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FCE0u, 0x310F68u, 0x310F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F70u;
label_310f70:
    // 0x310f70: 0x1040fff3  beqz        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x310F70u;
    {
        const bool branch_taken_0x310f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F70u;
        // 0x310f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f70) {
            ctx->pc = 0x310F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f40;
        }
    }
    ctx->pc = 0x310F78u;
    // 0x310f78: 0xc0c3f7a  jal         func_30FDE8
    ctx->pc = 0x310F78u;
    SET_GPR_U32(ctx, 31, 0x310F80u);
    ctx->pc = 0x310F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310F78u;
    // 0x310f7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FDE8u, 0x310F78u, 0x310F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310F80u;
label_310f80:
    // 0x310f80: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x310F80u;
    {
        const bool branch_taken_0x310f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F80u;
        // 0x310f84: 0x8fa40084  lw          $a0, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f80) {
            ctx->pc = 0x310F44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f44;
        }
    }
    ctx->pc = 0x310F88u;
    // 0x310f88: 0x8e42055c  lw          $v0, 0x55C($s2)
    ctx->pc = 0x310f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1372)));
    // 0x310f8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x310f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x310f90: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x310f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x310f94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310f98: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x310f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x310f9c: 0x2844000a  slti        $a0, $v0, 0xA
    ctx->pc = 0x310f9cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x310fa0: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x310FA0u;
    {
        const bool branch_taken_0x310fa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x310FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FA0u;
        // 0x310fa4: 0xae42055c  sw          $v0, 0x55C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fa0) {
            ctx->pc = 0x310F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310f40;
        }
    }
    ctx->pc = 0x310FA8u;
label_310fa8:
    // 0x310fa8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fac: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310FACu;
    SET_GPR_U32(ctx, 31, 0x310FB4u);
    ctx->pc = 0x310FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FACu;
    // 0x310fb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310FACu, 0x310FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FB4u;
label_310fb4:
    // 0x310fb4: 0x9242055c  lbu         $v0, 0x55C($s2)
    ctx->pc = 0x310fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1372)));
    // 0x310fb8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x310fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x310fbc: 0x8e44055c  lw          $a0, 0x55C($s2)
    ctx->pc = 0x310fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1372)));
    // 0x310fc0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x310fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310fc4: 0xa242057c  sb          $v0, 0x57C($s2)
    ctx->pc = 0x310fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1404), (uint8_t)GPR_U32(ctx, 2));
    // 0x310fc8: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x310FC8u;
    {
        const bool branch_taken_0x310fc8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x310FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310FC8u;
        // 0x310fcc: 0xa243057d  sb          $v1, 0x57D($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1405), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310fc8) {
            ctx->pc = 0x310FF8u;
            goto label_310ff8;
        }
    }
    ctx->pc = 0x310FD0u;
    // 0x310fd0: 0x26500534  addiu       $s0, $s2, 0x534
    ctx->pc = 0x310fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1332));
    // 0x310fd4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x310fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_310fd8:
    // 0x310fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310fdc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x310fdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x310fe0: 0xc0c3f88  jal         func_30FE20
    ctx->pc = 0x310FE0u;
    SET_GPR_U32(ctx, 31, 0x310FE8u);
    ctx->pc = 0x310FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310FE0u;
    // 0x310fe4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FE20u, 0x310FE0u, 0x310FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310FE8u;
label_310fe8:
    // 0x310fe8: 0x8e43055c  lw          $v1, 0x55C($s2)
    ctx->pc = 0x310fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1372)));
    // 0x310fec: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x310fecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x310ff0: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x310FF0u;
    {
        const bool branch_taken_0x310ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x310ff0) {
            ctx->pc = 0x310FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310FF0u;
            // 0x310ff4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310fd8;
        }
    }
    ctx->pc = 0x310FF8u;
label_310ff8:
    // 0x310ff8: 0x8e430530  lw          $v1, 0x530($s2)
    ctx->pc = 0x310ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1328)));
    // 0x310ffc: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x310ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x311000: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x311000u;
    {
        const bool branch_taken_0x311000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x311004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311000u;
        // 0x311004: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311000) {
            ctx->pc = 0x311030u;
            goto label_311030;
        }
    }
    ctx->pc = 0x311008u;
    // 0x311008: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x311008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31100c: 0x24420214  addiu       $v0, $v0, 0x214
    ctx->pc = 0x31100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 532));
    // 0x311010: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x311010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x311014: 0x0  nop
    ctx->pc = 0x311014u;
    // NOP
label_311018:
    // 0x311018: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x311018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x31101c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x311020: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x311020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x311024: 0x0  nop
    ctx->pc = 0x311024u;
    // NOP
    // 0x311028: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311028u;
    {
        const bool branch_taken_0x311028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311028u;
        // 0x31102c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311028) {
            ctx->pc = 0x311018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311018;
        }
    }
    ctx->pc = 0x311030u;
label_311030:
    // 0x311030: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x311030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x311034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311034u;
    {
        const bool branch_taken_0x311034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311034u;
        // 0x311038: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311034) {
            ctx->pc = 0x311048u;
            goto label_311048;
        }
    }
    ctx->pc = 0x31103Cu;
    // 0x31103c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x31103Cu;
    SET_GPR_U32(ctx, 31, 0x311044u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x31103Cu, 0x311044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311044u;
label_311044:
    // 0x311044: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x311044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_311048:
    // 0x311048: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x311048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x31104c: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x31104cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x311050: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x311050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x311054: 0x3e00008  jr          $ra
    ctx->pc = 0x311054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311054u;
        // 0x311058: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31105Cu;
    // 0x31105c: 0x0  nop
    ctx->pc = 0x31105cu;
    // NOP
    ctx->pc = 0x311060u;
}
