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

// Function: sub_002FCD80
// Address: 0x2fcd80 - 0x2fd150
void sub_002FCD80_0x2fcd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCD80_0x2fcd80");
#endif

    switch (ctx->pc) {
        case 0x2fcdb4u: goto label_2fcdb4;
        case 0x2fce00u: goto label_2fce00;
        case 0x2fce18u: goto label_2fce18;
        case 0x2fd024u: goto label_2fd024;
        case 0x2fd030u: goto label_2fd030;
        case 0x2fd08cu: goto label_2fd08c;
        case 0x2fd098u: goto label_2fd098;
        case 0x2fd0d0u: goto label_2fd0d0;
        case 0x2fd0dcu: goto label_2fd0dc;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd0f0u: goto label_2fd0f0;
        case 0x2fd110u: goto label_2fd110;
        case 0x2fd11cu: goto label_2fd11c;
        case 0x2fd124u: goto label_2fd124;
        case 0x2fd12cu: goto label_2fd12c;
        default: break;
    }

    ctx->pc = 0x2fcd80u;

    // 0x2fcd80: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2fcd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2fcd84: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2fcd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x2fcd88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2fcd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd8c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x2fcd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x2fcd90: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x2fcd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x2fcd94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fcd94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2fcd98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcd9c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x2fcd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x2fcda0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2fcda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2fcda4: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x2fcda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x2fcda8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x2fcda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x2fcdac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2FCDACu;
    SET_GPR_U32(ctx, 31, 0x2FCDB4u);
    ctx->pc = 0x2FCDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDACu;
    // 0x2fcdb0: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2FCDACu, 0x2FCDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCDB4u;
label_2fcdb4:
    // 0x2fcdb4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2fcdb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdb8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2fcdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x2fcdbc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2fcdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x2fcdc0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2fcdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x2fcdc4: 0xae600010  sw          $zero, 0x10($s3)
    ctx->pc = 0x2fcdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
    // 0x2fcdc8: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x2fcdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x2fcdcc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2fcdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcdd0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2fcdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fcdd4: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2fcdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fcdd8: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fcdd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fcddc: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2fcddcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2fcde0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2fcde0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2fcde4: 0x46000004  c1          0x4
    ctx->pc = 0x2fcde4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fcde8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fcde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcdec: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x2fcdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x2fcdf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fcdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fcdf4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fcdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2fcdf8: 0xc079620  jal         func_1E5880
    ctx->pc = 0x2FCDF8u;
    SET_GPR_U32(ctx, 31, 0x2FCE00u);
    ctx->pc = 0x2FCDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCDF8u;
    // 0x2fcdfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5880u, 0x2FCDF8u, 0x2FCE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE00u;
label_2fce00:
    // 0x2fce00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2fce00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2fce04: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2fce04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2fce08: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x2fce08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fce0c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2fce0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2fce10: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FCE10u;
    SET_GPR_U32(ctx, 31, 0x2FCE18u);
    ctx->pc = 0x2FCE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCE10u;
    // 0x2fce14: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FCE10u, 0x2FCE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCE18u;
label_2fce18:
    // 0x2fce18: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2fce18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2fce1c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2fce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2fce20: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x2fce20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
    // 0x2fce24: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x2fce24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
    // 0x2fce28: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fce28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fce2c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2fce2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2fce30: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2fce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2fce34: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2fce34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2fce38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fce38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fce3c: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x2fce3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2fce40: 0x3c013f8d  lui         $at, 0x3F8D
    ctx->pc = 0x2fce40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16269 << 16));
    // 0x2fce44: 0x34211eb7  ori         $at, $at, 0x1EB7
    ctx->pc = 0x2fce44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7863);
    // 0x2fce48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fce48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fce4c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fce4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fce50: 0xe4c10020  swc1        $f1, 0x20($a2)
    ctx->pc = 0x2fce50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2fce54: 0xe4c00030  swc1        $f0, 0x30($a2)
    ctx->pc = 0x2fce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2fce58: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2fce58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce5c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2fce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fce60: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fce60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fce64: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2fce64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2fce68: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x2fce68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2fce6c: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x2fce6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2fce70: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2fce70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fce74: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2fce74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2fce78: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2fce78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce7c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fce7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fce80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fce84: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fce84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fce88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2fce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fce8c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fce90: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2fce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fce94: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2fce94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fce98: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fce98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fce9c: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2fce9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcea0: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2fcea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fcea4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x2fcea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fcea8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2fcea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fceac: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x2fceacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2fceb0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2fceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fceb4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2fceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fceb8: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2fceb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2fcebc: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2fcebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2fcec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fcec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fcec4: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x2fcec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x2fcec8: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2fcec8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2fcecc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2fceccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2fced0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2fced0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2fced4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fced4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fced8: 0xe7a4007c  swc1        $f4, 0x7C($sp)
    ctx->pc = 0x2fced8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2fcedc: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x2fcedcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2fcee0: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x2fcee0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2fcee4: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x2fcee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2fcee8: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2fcee8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2fceec: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2fceecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x2fcef0: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2fcef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2fcef4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fcef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fcef8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2fcef8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fcefc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2fcefcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2fcf00: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2fcf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcf04: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x2fcf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcf08: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x2fcf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcf0c: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x2fcf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fcf10: 0xc7a3009c  lwc1        $f3, 0x9C($sp)
    ctx->pc = 0x2fcf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fcf14: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fcf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fcf18: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fcf18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fcf1c: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2fcf1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fcf20: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x2fcf20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fcf24: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fcf24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fcf28: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fcf28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcf2c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fcf2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcf30: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2fcf30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2fcf34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fcf34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fcf38: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fcf38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fcf3c: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x2fcf3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x2fcf40: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x2fcf40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x2fcf44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2fcf44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fcf48: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fcf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fcf4c: 0xe4c30020  swc1        $f3, 0x20($a2)
    ctx->pc = 0x2fcf4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2fcf50: 0xe4c20030  swc1        $f2, 0x30($a2)
    ctx->pc = 0x2fcf50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2fcf54: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2fcf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcf58: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2fcf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fcf5c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fcf5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fcf60: 0x24a30050  addiu       $v1, $a1, 0x50
    ctx->pc = 0x2fcf60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x2fcf64: 0x24a40060  addiu       $a0, $a1, 0x60
    ctx->pc = 0x2fcf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x2fcf68: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2fcf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2fcf6c: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x2fcf6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2fcf70: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2fcf70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcf74: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2fcf74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2fcf78: 0xc4a00060  lwc1        $f0, 0x60($a1)
    ctx->pc = 0x2fcf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcf7c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fcf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fcf80: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fcf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcf84: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fcf84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fcf88: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2fcf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcf8c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fcf8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fcf90: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2fcf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fcf94: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2fcf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fcf98: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fcf98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fcf9c: 0xf8a10090  sqc2        $vf1, 0x90($a1)
    ctx->pc = 0x2fcf9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcfa0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2fcfa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2fcfa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fcfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fcfa8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fcfac: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2fcfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2fcfb0: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2fcfb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2fcfb4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2fcfb8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fcfb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fcfbc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fcfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fcfc0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fcfc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcfc4: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x2fcfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2fcfc8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2fcfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2fcfcc: 0xe4c20030  swc1        $f2, 0x30($a2)
    ctx->pc = 0x2fcfccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 48), bits); }
    // 0x2fcfd0: 0x24a300a0  addiu       $v1, $a1, 0xA0
    ctx->pc = 0x2fcfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    // 0x2fcfd4: 0xe4c30020  swc1        $f3, 0x20($a2)
    ctx->pc = 0x2fcfd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    // 0x2fcfd8: 0x24a400b0  addiu       $a0, $a1, 0xB0
    ctx->pc = 0x2fcfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
    // 0x2fcfdc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2fcfdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcfe0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fcfe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fcfe4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2fcfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2fcfe8: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x2fcfe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2fcfec: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2fcfecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fcff0: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x2fcff0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x2fcff4: 0xc4a000b0  lwc1        $f0, 0xB0($a1)
    ctx->pc = 0x2fcff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fcff8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2fcff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2fcffc: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2fcffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd000: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2fd000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2fd004: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2fd004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd008: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2fd008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2fd00c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2fd00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd010: 0xe7a1006c  swc1        $f1, 0x6C($sp)
    ctx->pc = 0x2fd010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2fd014: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fd014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd018: 0xf8a100e0  sqc2        $vf1, 0xE0($a1)
    ctx->pc = 0x2fd018u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd01c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2FD01Cu;
    SET_GPR_U32(ctx, 31, 0x2FD024u);
    ctx->pc = 0x2FD020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD01Cu;
    // 0x2fd020: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2FD01Cu, 0x2FD024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD024u;
label_2fd024:
    // 0x2fd024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd028: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FD028u;
    SET_GPR_U32(ctx, 31, 0x2FD030u);
    ctx->pc = 0x2FD02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD028u;
    // 0x2fd02c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FD028u, 0x2FD030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD030u;
label_2fd030:
    // 0x2fd030: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2fd030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2fd034: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2fd034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2fd038: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x2fd038u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x2fd03c: 0x7e000040  sq          $zero, 0x40($s0)
    ctx->pc = 0x2fd03cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 0));
    // 0x2fd040: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2fd040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x2fd044: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x2fd044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2fd048: 0xae5013c8  sw          $s0, 0x13C8($s2)
    ctx->pc = 0x2fd048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5064), GPR_U32(ctx, 16));
    // 0x2fd04c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x2fd04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x2fd050: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x2fd050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x2fd054: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fd054u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2fd058: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fd058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd05c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2fd05cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd060: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2fd060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2fd064: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2fd064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2fd068: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd06c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x2fd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x2fd070: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2fd070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x2fd074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fd074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd078: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2fd078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2fd07c: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x2fd07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2fd080: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2fd080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2fd084: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x2FD084u;
    SET_GPR_U32(ctx, 31, 0x2FD08Cu);
    ctx->pc = 0x2FD088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD084u;
    // 0x2fd088: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x2FD084u, 0x2FD08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD08Cu;
label_2fd08c:
    // 0x2fd08c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd090: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2FD090u;
    SET_GPR_U32(ctx, 31, 0x2FD098u);
    ctx->pc = 0x2FD094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD090u;
    // 0x2fd094: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FD090u, 0x2FD098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD098u;
label_2fd098:
    // 0x2fd098: 0xae5013c0  sw          $s0, 0x13C0($s2)
    ctx->pc = 0x2fd098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5056), GPR_U32(ctx, 16));
    // 0x2fd09c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fd09cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fd0a0: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd0a4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2fd0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2fd0a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fd0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fd0ac: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x2fd0acu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd0b0: 0x26830020  addiu       $v1, $s4, 0x20
    ctx->pc = 0x2fd0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x2fd0b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fd0b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fd0b8: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x2fd0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd0bc: 0x26940030  addiu       $s4, $s4, 0x30
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x2fd0c0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2fd0c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2fd0c4: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x2fd0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fd0c8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2FD0C8u;
    SET_GPR_U32(ctx, 31, 0x2FD0D0u);
    ctx->pc = 0x2FD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0C8u;
    // 0x2fd0cc: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2FD0C8u, 0x2FD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0D0u;
label_2fd0d0:
    // 0x2fd0d0: 0x8e4513c0  lw          $a1, 0x13C0($s2)
    ctx->pc = 0x2fd0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5056)));
    // 0x2fd0d4: 0xc076442  jal         func_1D9108
    ctx->pc = 0x2FD0D4u;
    SET_GPR_U32(ctx, 31, 0x2FD0DCu);
    ctx->pc = 0x2FD0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0D4u;
    // 0x2fd0d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9108u, 0x2FD0D4u, 0x2FD0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0DCu;
label_2fd0dc:
    // 0x2fd0dc: 0xae4213c4  sw          $v0, 0x13C4($s2)
    ctx->pc = 0x2fd0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5060), GPR_U32(ctx, 2));
    // 0x2fd0e0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2FD0E0u;
    SET_GPR_U32(ctx, 31, 0x2FD0E8u);
    ctx->pc = 0x2FD0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0E0u;
    // 0x2fd0e4: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2FD0E0u, 0x2FD0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0E8u;
label_2fd0e8:
    // 0x2fd0e8: 0xc076238  jal         func_1D88E0
    ctx->pc = 0x2FD0E8u;
    SET_GPR_U32(ctx, 31, 0x2FD0F0u);
    ctx->pc = 0x2FD0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD0E8u;
    // 0x2fd0ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88E0u, 0x2FD0E8u, 0x2FD0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD0F0u;
label_2fd0f0:
    // 0x2fd0f0: 0xae4213cc  sw          $v0, 0x13CC($s2)
    ctx->pc = 0x2fd0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5068), GPR_U32(ctx, 2));
    // 0x2fd0f4: 0xac53000c  sw          $s3, 0xC($v0)
    ctx->pc = 0x2fd0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 19));
    // 0x2fd0f8: 0x8e4313cc  lw          $v1, 0x13CC($s2)
    ctx->pc = 0x2fd0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5068)));
    // 0x2fd0fc: 0x8e4213c8  lw          $v0, 0x13C8($s2)
    ctx->pc = 0x2fd0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5064)));
    // 0x2fd100: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2fd100u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2fd104: 0x8e4413c4  lw          $a0, 0x13C4($s2)
    ctx->pc = 0x2fd104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5060)));
    // 0x2fd108: 0xc076574  jal         func_1D95D0
    ctx->pc = 0x2FD108u;
    SET_GPR_U32(ctx, 31, 0x2FD110u);
    ctx->pc = 0x2FD10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD108u;
    // 0x2fd10c: 0x8e4513cc  lw          $a1, 0x13CC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x2FD108u, 0x2FD110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD110u;
label_2fd110:
    // 0x2fd110: 0x8e4513c0  lw          $a1, 0x13C0($s2)
    ctx->pc = 0x2fd110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5056)));
    // 0x2fd114: 0xc0763f2  jal         func_1D8FC8
    ctx->pc = 0x2FD114u;
    SET_GPR_U32(ctx, 31, 0x2FD11Cu);
    ctx->pc = 0x2FD118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD114u;
    // 0x2fd118: 0x8e4413c4  lw          $a0, 0x13C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8FC8u, 0x2FD114u, 0x2FD11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD11Cu;
label_2fd11c:
    // 0x2fd11c: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD11Cu;
    SET_GPR_U32(ctx, 31, 0x2FD124u);
    ctx->pc = 0x2FD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD11Cu;
    // 0x2fd120: 0x8e4413c4  lw          $a0, 0x13C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD11Cu, 0x2FD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD124u;
label_2fd124:
    // 0x2fd124: 0xc076de4  jal         func_1DB790
    ctx->pc = 0x2FD124u;
    SET_GPR_U32(ctx, 31, 0x2FD12Cu);
    ctx->pc = 0x2FD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD124u;
    // 0x2fd128: 0x8e4413c4  lw          $a0, 0x13C4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x2FD124u, 0x2FD12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD12Cu;
label_2fd12c:
    // 0x2fd12c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x2fd12cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2fd130: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x2fd130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2fd134: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2fd134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2fd138: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x2fd138u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2fd13c: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x2fd13cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2fd140: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x2fd140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2fd144: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2fd144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd148: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD148u;
        // 0x2fd14c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD150u;
}
