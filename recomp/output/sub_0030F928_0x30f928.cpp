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

// Function: sub_0030F928
// Address: 0x30f928 - 0x30fb60
void sub_0030F928_0x30f928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F928_0x30f928");
#endif

    switch (ctx->pc) {
        case 0x30f9f8u: goto label_30f9f8;
        case 0x30fa6cu: goto label_30fa6c;
        case 0x30fa90u: goto label_30fa90;
        case 0x30fad0u: goto label_30fad0;
        case 0x30fb34u: goto label_30fb34;
        default: break;
    }

    ctx->pc = 0x30f928u;

    // 0x30f928: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x30f928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x30f92c: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x30f92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x30f930: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x30f930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x30f934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30f934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f938: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x30f938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x30f93c: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x30f93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x30f940: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x30f940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x30f944: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x30f944u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x30f948: 0x8e220568  lw          $v0, 0x568($s1)
    ctx->pc = 0x30f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1384)));
    // 0x30f94c: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x30F94Cu;
    {
        const bool branch_taken_0x30f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F94Cu;
        // 0x30f950: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f94c) {
            ctx->pc = 0x30FB3Cu;
            goto label_30fb3c;
        }
    }
    ctx->pc = 0x30F954u;
    // 0x30f954: 0x26240200  addiu       $a0, $s1, 0x200
    ctx->pc = 0x30f954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    // 0x30f958: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x30f958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
    // 0x30f95c: 0x8c520100  lw          $s2, 0x100($v0)
    ctx->pc = 0x30f95cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x30f960: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x30f960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x30f964: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30f964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f968: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x30f968u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30f96c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30f96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30f970: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f974: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x30f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30f978: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30f97c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30f97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30f980: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x30f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f984: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x30f984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f988: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x30f988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x30f98c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x30f98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f990: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30f990u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f994: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x30f994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30f998: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30F998u;
    {
        const bool branch_taken_0x30f998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F998u;
        // 0x30f99c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f998) {
            ctx->pc = 0x30F9D4u;
            goto label_30f9d4;
        }
    }
    ctx->pc = 0x30F9A0u;
    // 0x30f9a0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x30f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30f9a4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x30f9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30f9a8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x30f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30f9ac: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x30f9acu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x30f9b0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x30f9b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x30f9b4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x30f9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x30f9b8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x30f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x30f9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f9c0: 0x0  nop
    ctx->pc = 0x30f9c0u;
    // NOP
    // 0x30f9c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x30f9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30f9c8: 0x0  nop
    ctx->pc = 0x30f9c8u;
    // NOP
    // 0x30f9cc: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x30F9CCu;
    {
        const bool branch_taken_0x30f9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30F9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9CCu;
        // 0x30f9d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9cc) {
            ctx->pc = 0x30FB40u;
            goto label_30fb40;
        }
    }
    ctx->pc = 0x30F9D4u;
label_30f9d4:
    // 0x30f9d4: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x30f9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x30f9d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x30f9d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30f9dc: 0xfa210200  sqc2        $vf1, 0x200($s1)
    ctx->pc = 0x30f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f9e0: 0xae2001f0  sw          $zero, 0x1F0($s1)
    ctx->pc = 0x30f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 0));
    // 0x30f9e4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x30f9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30f9e8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x30f9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x30f9ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30f9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30f9f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30F9F0u;
    SET_GPR_U32(ctx, 31, 0x30F9F8u);
    ctx->pc = 0x30F9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F9F0u;
    // 0x30f9f4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30F9F0u, 0x30F9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F9F8u;
label_30f9f8:
    // 0x30f9f8: 0x3c014561  lui         $at, 0x4561
    ctx->pc = 0x30f9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17761 << 16));
    // 0x30f9fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30fa00: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x30fa00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x30fa04: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x30fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x30fa08: 0x7a420070  lq          $v0, 0x70($s2)
    ctx->pc = 0x30fa08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x30fa0c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x30fa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x30fa10: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x30fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30fa14: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x30fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30fa18: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x30fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30fa1c: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x30fa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30fa20: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x30fa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30fa24: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x30fa24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x30fa28: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x30fa28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x30fa2c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x30fa2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x30fa30: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x30fa30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30fa34: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x30fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30fa38: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x30fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x30fa3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x30fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa40: 0x24433390  addiu       $v1, $v0, 0x3390
    ctx->pc = 0x30fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13200));
    // 0x30fa44: 0x9c473390  lwu         $a3, 0x3390($v0)
    ctx->pc = 0x30fa44u;
    SET_GPR_ZE32(ctx, 7, FAST_READ32(0x473390u));
    // 0x30fa48: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x30fa48u;
    SET_GPR_ZE32(ctx, 6, FAST_READ32(0x473394u));
    // 0x30fa4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30fa50: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x30fa50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x30fa54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x30fa54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa58: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x30fa58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30fa5c: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x30fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x30fa60: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x30fa60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30fa64: 0xc08560a  jal         func_215828
    ctx->pc = 0x30FA64u;
    SET_GPR_U32(ctx, 31, 0x30FA6Cu);
    ctx->pc = 0x30FA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FA64u;
    // 0x30fa68: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215828u, 0x30FA64u, 0x30FA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FA6Cu;
label_30fa6c:
    // 0x30fa6c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x30fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fa70: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x30fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x30fa74: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FA74u;
    {
        const bool branch_taken_0x30fa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30FA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA74u;
        // 0x30fa78: 0xafa30080  sw          $v1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa74) {
            ctx->pc = 0x30FA80u;
            goto label_30fa80;
        }
    }
    ctx->pc = 0x30FA7Cu;
    // 0x30fa7c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x30fa7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_30fa80:
    // 0x30fa80: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x30FA80u;
    {
        const bool branch_taken_0x30fa80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA80u;
        // 0x30fa84: 0x26320060  addiu       $s2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa80) {
            ctx->pc = 0x30FB20u;
            goto label_30fb20;
        }
    }
    ctx->pc = 0x30FA88u;
    // 0x30fa88: 0x24130064  addiu       $s3, $zero, 0x64
    ctx->pc = 0x30fa88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x30fa8c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x30fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_30fa90:
    // 0x30fa90: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x30fa90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x30fa94: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x30fa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x30fa98: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x30FA98u;
    {
        const bool branch_taken_0x30fa98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fa98) {
            ctx->pc = 0x30FA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FA98u;
            // 0x30fa9c: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FAF4u;
            goto label_30faf4;
        }
    }
    ctx->pc = 0x30FAA0u;
    // 0x30faa0: 0x92020290  lbu         $v0, 0x290($s0)
    ctx->pc = 0x30faa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x30faa4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x30FAA4u;
    {
        const bool branch_taken_0x30faa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30faa4) {
            ctx->pc = 0x30FAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FAA4u;
            // 0x30faa8: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FAF4u;
            goto label_30faf4;
        }
    }
    ctx->pc = 0x30FAACu;
    // 0x30faac: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x30faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x30fab0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x30fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x30fab4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x30FAB4u;
    {
        const bool branch_taken_0x30fab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fab4) {
            ctx->pc = 0x30FAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FAB4u;
            // 0x30fab8: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FAF4u;
            goto label_30faf4;
        }
    }
    ctx->pc = 0x30FABCu;
    // 0x30fabc: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x30fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x30fac0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x30FAC0u;
    {
        const bool branch_taken_0x30fac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAC0u;
        // 0x30fac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fac0) {
            ctx->pc = 0x30FAF0u;
            goto label_30faf0;
        }
    }
    ctx->pc = 0x30FAC8u;
    // 0x30fac8: 0xc0c3e3c  jal         func_30F8F0
    ctx->pc = 0x30FAC8u;
    SET_GPR_U32(ctx, 31, 0x30FAD0u);
    ctx->pc = 0x30FACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAC8u;
    // 0x30facc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F8F0u, 0x30FAC8u, 0x30FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAD0u;
label_30fad0:
    // 0x30fad0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FAD0u;
    {
        const bool branch_taken_0x30fad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fad0) {
            ctx->pc = 0x30FAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FAD0u;
            // 0x30fad4: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FAF4u;
            goto label_30faf4;
        }
    }
    ctx->pc = 0x30FAD8u;
    // 0x30fad8: 0x8e2301f0  lw          $v1, 0x1F0($s1)
    ctx->pc = 0x30fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
    // 0x30fadc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30fae0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x30fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x30fae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30fae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30fae8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x30fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x30faec: 0xae2301f0  sw          $v1, 0x1F0($s1)
    ctx->pc = 0x30faecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 3));
label_30faf0:
    // 0x30faf0: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x30faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_30faf4:
    // 0x30faf4: 0x1053000a  beq         $v0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x30FAF4u;
    {
        const bool branch_taken_0x30faf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x30FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAF4u;
        // 0x30faf8: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faf4) {
            ctx->pc = 0x30FB20u;
            goto label_30fb20;
        }
    }
    ctx->pc = 0x30FAFCu;
    // 0x30fafc: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x30fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30fb00: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FB00u;
    {
        const bool branch_taken_0x30fb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x30FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB00u;
        // 0x30fb04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb00) {
            ctx->pc = 0x30FB18u;
            goto label_30fb18;
        }
    }
    ctx->pc = 0x30FB08u;
    // 0x30fb08: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30fb0c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FB0Cu;
    {
        const bool branch_taken_0x30fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x30FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB0Cu;
        // 0x30fb10: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb0c) {
            ctx->pc = 0x30FB18u;
            goto label_30fb18;
        }
    }
    ctx->pc = 0x30FB14u;
    // 0x30fb14: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_30fb18:
    // 0x30fb18: 0x5600ffdd  bnel        $s0, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x30FB18u;
    {
        const bool branch_taken_0x30fb18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x30fb18) {
            ctx->pc = 0x30FB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30FB18u;
            // 0x30fb1c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30FA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fa90;
        }
    }
    ctx->pc = 0x30FB20u;
label_30fb20:
    // 0x30fb20: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x30fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30fb24: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30FB24u;
    {
        const bool branch_taken_0x30fb24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB24u;
        // 0x30fb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb24) {
            ctx->pc = 0x30FB40u;
            goto label_30fb40;
        }
    }
    ctx->pc = 0x30FB2Cu;
    // 0x30fb2c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x30FB2Cu;
    SET_GPR_U32(ctx, 31, 0x30FB34u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x30FB2Cu, 0x30FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FB34u;
label_30fb34:
    // 0x30fb34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30FB34u;
    {
        const bool branch_taken_0x30fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB34u;
        // 0x30fb38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fb34) {
            ctx->pc = 0x30FB40u;
            goto label_30fb40;
        }
    }
    ctx->pc = 0x30FB3Cu;
label_30fb3c:
    // 0x30fb3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30fb40:
    // 0x30fb40: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x30fb40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30fb44: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x30fb44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x30fb48: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x30fb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30fb4c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x30fb4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x30fb50: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x30fb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30fb54: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x30fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30fb58: 0x3e00008  jr          $ra
    ctx->pc = 0x30FB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB58u;
        // 0x30fb5c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FB60u;
}
