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

// Function: sub_001BEE38
// Address: 0x1bee38 - 0x1bf010
void sub_001BEE38_0x1bee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE38_0x1bee38");
#endif

    switch (ctx->pc) {
        case 0x1bee60u: goto label_1bee60;
        case 0x1bee88u: goto label_1bee88;
        case 0x1bee90u: goto label_1bee90;
        case 0x1bef04u: goto label_1bef04;
        case 0x1befe4u: goto label_1befe4;
        default: break;
    }

    ctx->pc = 0x1bee38u;

    // 0x1bee38: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1bee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1bee3c: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x1bee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x1bee40: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x1bee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x1bee44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bee44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bee48: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x1bee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x1bee4c: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x1bee4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x1bee50: 0x12200068  beqz        $s1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1BEE50u;
    {
        const bool branch_taken_0x1bee50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE50u;
        // 0x1bee54: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee50) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEE58u;
    // 0x1bee58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEE58u;
    SET_GPR_U32(ctx, 31, 0x1BEE60u);
    ctx->pc = 0x1BEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE58u;
    // 0x1bee5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEE58u, 0x1BEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE60u;
label_1bee60:
    // 0x1bee60: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1bee60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bee64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1bee64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bee68: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1bee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bee6c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1bee6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bee70: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bee70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1bee74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bee74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bee78: 0x0  nop
    ctx->pc = 0x1bee78u;
    // NOP
    // 0x1bee7c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1bee7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1bee80: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEE80u;
    SET_GPR_U32(ctx, 31, 0x1BEE88u);
    ctx->pc = 0x1BEE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE80u;
    // 0x1bee84: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEE80u, 0x1BEE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE88u;
label_1bee88:
    // 0x1bee88: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BEE88u;
    SET_GPR_U32(ctx, 31, 0x1BEE90u);
    ctx->pc = 0x1BEE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE88u;
    // 0x1bee8c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BEE88u, 0x1BEE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEE90u;
label_1bee90:
    // 0x1bee90: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1bee90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1bee94: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x1bee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1bee98: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1bee98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1bee9c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1bee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1beea0: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1beea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x1beea4: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x1beea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1beea8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1beea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1beeac: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1beeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1beeb0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1beeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1beeb4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1beeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1beeb8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1beeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1beebc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1beebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x1beec0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1beec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beec4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1beec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1beec8: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x1beec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1beecc: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x1beeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x1beed0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x1beed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x1beed4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1beed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1beed8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x1beed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x1beedc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1beedcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1beee0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1beee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1beee4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1beee8: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1beee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1beeec: 0xc454c6a8  lwc1        $f20, -0x3958($v0)
    ctx->pc = 0x1beeecu;
    { uint32_t bits = FAST_READ32(0x45C6A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1beef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1beef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beef4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1beef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x1beef8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1beef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x1beefc: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1BEEFCu;
    SET_GPR_U32(ctx, 31, 0x1BEF04u);
    ctx->pc = 0x1BEF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEFCu;
    // 0x1bef00: 0xe7b400e0  swc1        $f20, 0xE0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1BEEFCu, 0x1BEF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF04u;
label_1bef04:
    // 0x1bef04: 0x7fa00080  sq          $zero, 0x80($sp)
    ctx->pc = 0x1bef04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 0));
    // 0x1bef08: 0x7fa00090  sq          $zero, 0x90($sp)
    ctx->pc = 0x1bef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 0));
    // 0x1bef0c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x1bef0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1bef10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bef14: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x1bef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x1bef18: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1bef18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bef1c: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x1bef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x1bef20: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bef20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1bef24: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x1bef24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x1bef28: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x1bef28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x1bef2c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x1bef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x1bef30: 0xafa000b8  sw          $zero, 0xB8($sp)
    ctx->pc = 0x1bef30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 0));
    // 0x1bef34: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x1bef34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x1bef38: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1bef38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1bef3c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1bef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1bef40: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1bef40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bef44: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1bef44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bef48: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bef48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1bef4c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x1bef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x1bef50: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1bef50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1bef54: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1bef54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1bef58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1bef58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bef5c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1bef5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bef60: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bef60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1bef64: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bef64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bef68: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x1bef68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bef6c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1bef6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1bef70: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x1bef70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1bef74: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bef74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1bef78: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bef78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1bef7c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1bef7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1bef80: 0x0  nop
    ctx->pc = 0x1bef80u;
    // NOP
    // 0x1bef84: 0x0  nop
    ctx->pc = 0x1bef84u;
    // NOP
    // 0x1bef88: 0x46010084  c1          0x10084
    ctx->pc = 0x1bef88u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1bef8c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1bef8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1bef90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bef90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bef94: 0x0  nop
    ctx->pc = 0x1bef94u;
    // NOP
    // 0x1bef98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bef98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bef9c: 0x0  nop
    ctx->pc = 0x1bef9cu;
    // NOP
    // 0x1befa0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1BEFA0u;
    {
        const bool branch_taken_0x1befa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA0u;
        // 0x1befa4: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befa0) {
            ctx->pc = 0x1BEFCCu;
            goto label_1befcc;
        }
    }
    ctx->pc = 0x1BEFA8u;
    // 0x1befa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1befa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1befac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1befacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1befb0: 0x0  nop
    ctx->pc = 0x1befb0u;
    // NOP
    // 0x1befb4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1befb4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1befb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1befb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1befbc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1befbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1befc0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1befc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1befc4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1befc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1befc8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1befc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1befcc:
    // 0x1befcc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1befccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1befd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1befd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1befd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1befd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1befd8: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x1befd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x1befdc: 0xc077912  jal         func_1DE448
    ctx->pc = 0x1BEFDCu;
    SET_GPR_U32(ctx, 31, 0x1BEFE4u);
    ctx->pc = 0x1BEFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFDCu;
    // 0x1befe0: 0x27a700e0  addiu       $a3, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x1BEFDCu, 0x1BEFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFE4u;
label_1befe4:
    // 0x1befe4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1befe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1befe8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEFE8u;
    {
        const bool branch_taken_0x1befe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFE8u;
        // 0x1befec: 0xc7a00084  lwc1        $f0, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befe8) {
            ctx->pc = 0x1BEFF4u;
            goto label_1beff4;
        }
    }
    ctx->pc = 0x1BEFF0u;
    // 0x1beff0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1beff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1beff4:
    // 0x1beff4: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x1beff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1beff8: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x1beff8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1beffc: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x1beffcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1bf000: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1bf000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1bf004: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1bf004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bf008: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF008u;
        // 0x1bf00c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF010u;
}
