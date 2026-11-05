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

// Function: sub_0015EE38
// Address: 0x15ee38 - 0x15efe8
void sub_0015EE38_0x15ee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EE38_0x15ee38");
#endif

    switch (ctx->pc) {
        case 0x15ee90u: goto label_15ee90;
        case 0x15eeb4u: goto label_15eeb4;
        case 0x15eeccu: goto label_15eecc;
        case 0x15eed4u: goto label_15eed4;
        case 0x15ef6cu: goto label_15ef6c;
        case 0x15ef8cu: goto label_15ef8c;
        case 0x15efb0u: goto label_15efb0;
        case 0x15efc8u: goto label_15efc8;
        default: break;
    }

    ctx->pc = 0x15ee38u;

    // 0x15ee38: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x15ee38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x15ee3c: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x15ee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x15ee40: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x15ee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x15ee44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15ee44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee48: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x15ee48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x15ee4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15ee4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee50: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x15ee50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x15ee54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ee54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee58: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x15ee58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x15ee5c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x15ee5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee60: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x15ee60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x15ee64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15ee64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ee68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15ee68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15ee6c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x15ee6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ee70: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x15ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ee74: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x15ee74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ee78: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x15ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ee7c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15ee7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x15ee80: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x15ee80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15ee84: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x15ee84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15ee88: 0xc06fb8e  jal         func_1BEE38
    ctx->pc = 0x15EE88u;
    SET_GPR_U32(ctx, 31, 0x15EE90u);
    ctx->pc = 0x15EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE88u;
    // 0x15ee8c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15EE88u, 0x15EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE90u;
label_15ee90:
    // 0x15ee90: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x15ee90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ee94: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15ee94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ee98: 0x8e2402e4  lw          $a0, 0x2E4($s1)
    ctx->pc = 0x15ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    // 0x15ee9c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x15ee9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x15eea0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x15eea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x15eea4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x15eea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x15eea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15eea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15eeac: 0xc0b121c  jal         func_2C4870
    ctx->pc = 0x15EEACu;
    SET_GPR_U32(ctx, 31, 0x15EEB4u);
    ctx->pc = 0x15EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEACu;
    // 0x15eeb0: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4870u, 0x15EEACu, 0x15EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EEB4u;
label_15eeb4:
    // 0x15eeb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15EEB4u;
    {
        const bool branch_taken_0x15eeb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEB4u;
        // 0x15eeb8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eeb4) {
            ctx->pc = 0x15EEC4u;
            goto label_15eec4;
        }
    }
    ctx->pc = 0x15EEBCu;
    // 0x15eebc: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x15EEBCu;
    {
        const bool branch_taken_0x15eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEBCu;
        // 0x15eec0: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15eebc) {
            ctx->pc = 0x15EFC8u;
            goto label_15efc8;
        }
    }
    ctx->pc = 0x15EEC4u;
label_15eec4:
    // 0x15eec4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15EEC4u;
    SET_GPR_U32(ctx, 31, 0x15EECCu);
    ctx->pc = 0x15EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EEC4u;
    // 0x15eec8: 0x8e3002e4  lw          $s0, 0x2E4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15EEC4u, 0x15EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EECCu;
label_15eecc:
    // 0x15eecc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x15EECCu;
    SET_GPR_U32(ctx, 31, 0x15EED4u);
    ctx->pc = 0x15EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EECCu;
    // 0x15eed0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15EECCu, 0x15EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EED4u;
label_15eed4:
    // 0x15eed4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x15eed4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15eed8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15eed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15eedc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x15eedcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eee0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15eee4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x15eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x15eee8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x15eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15eeec: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x15eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x15eef0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x15eef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15eef4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x15eef4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x15eef8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x15eef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15eefc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x15eefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ef00: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x15ef00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ef04: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x15ef04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ef08: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x15ef08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ef0c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15ef0cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15ef10: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15ef10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15ef14: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15ef14u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15ef18: 0x0  nop
    ctx->pc = 0x15ef18u;
    // NOP
    // 0x15ef1c: 0x0  nop
    ctx->pc = 0x15ef1cu;
    // NOP
    // 0x15ef20: 0x46010084  c1          0x10084
    ctx->pc = 0x15ef20u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x15ef24: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x15ef24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15ef28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ef28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ef2c: 0x0  nop
    ctx->pc = 0x15ef2cu;
    // NOP
    // 0x15ef30: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15ef30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ef34: 0x0  nop
    ctx->pc = 0x15ef34u;
    // NOP
    // 0x15ef38: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x15EF38u;
    {
        const bool branch_taken_0x15ef38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF38u;
        // 0x15ef3c: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef38) {
            ctx->pc = 0x15EF60u;
            goto label_15ef60;
        }
    }
    ctx->pc = 0x15EF40u;
    // 0x15ef40: 0x0  nop
    ctx->pc = 0x15ef40u;
    // NOP
    // 0x15ef44: 0x0  nop
    ctx->pc = 0x15ef44u;
    // NOP
    // 0x15ef48: 0x4602a003  div.s       $f0, $f20, $f2
    ctx->pc = 0x15ef48u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[2]); }
    // 0x15ef4c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15ef4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15ef50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15ef50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15ef54: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15ef54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15ef58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15ef58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15ef5c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x15ef5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_15ef60:
    // 0x15ef60: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x15ef60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15ef64: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x15EF64u;
    SET_GPR_U32(ctx, 31, 0x15EF6Cu);
    ctx->pc = 0x15EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF64u;
    // 0x15ef68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x15EF64u, 0x15EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF6Cu;
label_15ef6c:
    // 0x15ef6c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x15ef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x15ef70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15ef70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef74: 0xc460eedc  lwc1        $f0, -0x1124($v1)
    ctx->pc = 0x15ef74u;
    { uint32_t bits = FAST_READ32(0x43EEDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ef78: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15ef7c: 0x24050210  addiu       $a1, $zero, 0x210
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x15ef80: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x15ef80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x15ef84: 0xc077912  jal         func_1DE448
    ctx->pc = 0x15EF84u;
    SET_GPR_U32(ctx, 31, 0x15EF8Cu);
    ctx->pc = 0x15EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF84u;
    // 0x15ef88: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x15EF84u, 0x15EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF8Cu;
label_15ef8c:
    // 0x15ef8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15EF8Cu;
    {
        const bool branch_taken_0x15ef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ef8c) {
            ctx->pc = 0x15EF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15EF8Cu;
            // 0x15ef90: 0x8e2502e0  lw          $a1, 0x2E0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15EFA4u;
            goto label_15efa4;
        }
    }
    ctx->pc = 0x15EF94u;
    // 0x15ef94: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x15ef94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15ef98: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x15ef98u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ef9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15EF9Cu;
    {
        const bool branch_taken_0x15ef9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF9Cu;
        // 0x15efa0: 0x8e2202e0  lw          $v0, 0x2E0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ef9c) {
            ctx->pc = 0x15EFC8u;
            goto label_15efc8;
        }
    }
    ctx->pc = 0x15EFA4u;
label_15efa4:
    // 0x15efa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efa8: 0xc040f64  jal         func_103D90
    ctx->pc = 0x15EFA8u;
    SET_GPR_U32(ctx, 31, 0x15EFB0u);
    ctx->pc = 0x15EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFA8u;
    // 0x15efac: 0xc62c02f0  lwc1        $f12, 0x2F0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x103D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103D90u, 0x15EFA8u, 0x15EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB0u;
label_15efb0:
    // 0x15efb0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15EFB0u;
    {
        const bool branch_taken_0x15efb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFB0u;
        // 0x15efb4: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efb0) {
            ctx->pc = 0x15EFCCu;
            goto label_15efcc;
        }
    }
    ctx->pc = 0x15EFB8u;
    // 0x15efb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efc0: 0xc0579c8  jal         func_15E720
    ctx->pc = 0x15EFC0u;
    SET_GPR_U32(ctx, 31, 0x15EFC8u);
    ctx->pc = 0x15EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC0u;
    // 0x15efc4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E720u, 0x15EFC0u, 0x15EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFC8u;
label_15efc8:
    // 0x15efc8: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x15efc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_15efcc:
    // 0x15efcc: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x15efccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15efd0: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x15efd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x15efd4: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x15efd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x15efd8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x15efd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x15efdc: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x15efdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15efe0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE0u;
        // 0x15efe4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EFE8u;
}
