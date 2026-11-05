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

// Function: sub_00360D40
// Address: 0x360d40 - 0x3613c8
void sub_00360D40_0x360d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360D40_0x360d40");
#endif

    switch (ctx->pc) {
        case 0x360d8cu: goto label_360d8c;
        case 0x360d94u: goto label_360d94;
        case 0x360db4u: goto label_360db4;
        case 0x360e34u: goto label_360e34;
        case 0x360e3cu: goto label_360e3c;
        case 0x360eecu: goto label_360eec;
        case 0x360efcu: goto label_360efc;
        case 0x360f14u: goto label_360f14;
        case 0x360f1cu: goto label_360f1c;
        case 0x360f50u: goto label_360f50;
        case 0x360f60u: goto label_360f60;
        case 0x360fd4u: goto label_360fd4;
        case 0x361094u: goto label_361094;
        case 0x361108u: goto label_361108;
        case 0x361120u: goto label_361120;
        case 0x361128u: goto label_361128;
        case 0x36114cu: goto label_36114c;
        case 0x361158u: goto label_361158;
        case 0x361170u: goto label_361170;
        case 0x3611b4u: goto label_3611b4;
        case 0x36138cu: goto label_36138c;
        default: break;
    }

    ctx->pc = 0x360d40u;

    // 0x360d40: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x360d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x360d44: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x360d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x360d48: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x360d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x360d4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x360d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d50: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x360d50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x360d54: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x360d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x360d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d5c: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x360d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x360d60: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x360d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x360d64: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x360d64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x360d68: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x360d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x360d6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x360d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360d70: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x360d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x360d74: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x360d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x360d78: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x360d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x360d7c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x360d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x360d80: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x360d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x360d84: 0xc0d765e  jal         func_35D978
    ctx->pc = 0x360D84u;
    SET_GPR_U32(ctx, 31, 0x360D8Cu);
    ctx->pc = 0x360D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360D84u;
    // 0x360d88: 0xafa600b0  sw          $a2, 0xB0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D978u, 0x360D84u, 0x360D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D8Cu;
label_360d8c:
    // 0x360d8c: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x360D8Cu;
    SET_GPR_U32(ctx, 31, 0x360D94u);
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x360D8Cu, 0x360D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360D94u;
label_360d94:
    // 0x360d94: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x360d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x360d98: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x360d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360d9c: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x360d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
    // 0x360da0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x360da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x360da4: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x360DA4u;
    {
        const bool branch_taken_0x360da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x360da4) {
            ctx->pc = 0x360DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360DA4u;
            // 0x360da8: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360DB8u;
            goto label_360db8;
        }
    }
    ctx->pc = 0x360DACu;
    // 0x360dac: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x360DACu;
    SET_GPR_U32(ctx, 31, 0x360DB4u);
    ctx->pc = 0x360DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360DACu;
    // 0x360db0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x360DACu, 0x360DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360DB4u;
label_360db4:
    // 0x360db4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x360db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_360db8:
    // 0x360db8: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x360db8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x360dbc: 0x164000b1  bnez        $s2, . + 4 + (0xB1 << 2)
    ctx->pc = 0x360DBCu;
    {
        const bool branch_taken_0x360dbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x360DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360DBCu;
        // 0x360dc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360dbc) {
            ctx->pc = 0x361084u;
            goto label_361084;
        }
    }
    ctx->pc = 0x360DC4u;
    // 0x360dc4: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x360dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x360dc8: 0xc6620010  lwc1        $f2, 0x10($s3)
    ctx->pc = 0x360dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360dcc: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x360dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360dd0: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x360dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x360dd4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x360dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360dd8: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x360dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x360ddc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x360ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360de0: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x360de0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x360de4: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x360de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x360de8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x360de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x360dec: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x360decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x360df0: 0xe7a3003c  swc1        $f3, 0x3C($sp)
    ctx->pc = 0x360df0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x360df4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x360df4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x360df8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x360df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x360dfc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x360dfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360e00: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x360e00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360e04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360e04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360e08: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x360e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360e0c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x360e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360e10: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x360e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x360e14: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x360e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x360e18: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x360e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x360e1c: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x360e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360e20: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x360e20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x360e24: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x360e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x360e28: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x360e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x360e2c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360E2Cu;
    SET_GPR_U32(ctx, 31, 0x360E34u);
    ctx->pc = 0x360E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E2Cu;
    // 0x360e30: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360E2Cu, 0x360E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E34u;
label_360e34:
    // 0x360e34: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x360E34u;
    SET_GPR_U32(ctx, 31, 0x360E3Cu);
    ctx->pc = 0x360E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360E34u;
    // 0x360e38: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x360E34u, 0x360E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360E3Cu;
label_360e3c:
    // 0x360e3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x360e3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360e40: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x360e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x360e44: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x360e44u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360e48: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x360e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x360e4c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x360e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x360e50: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x360e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x360e54: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x360e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x360e58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x360e58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x360e5c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x360e5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360e60: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x360e60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360e64: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x360e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x360e68: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x360e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x360e6c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x360e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x360e70: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x360e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x360e74: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x360e74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x360e78: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x360e78u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x360e7c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x360e7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x360e80: 0x0  nop
    ctx->pc = 0x360e80u;
    // NOP
    // 0x360e84: 0x0  nop
    ctx->pc = 0x360e84u;
    // NOP
    // 0x360e88: 0x46010084  c1          0x10084
    ctx->pc = 0x360e88u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x360e8c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x360e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x360e90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x360e90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360e94: 0x0  nop
    ctx->pc = 0x360e94u;
    // NOP
    // 0x360e98: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x360e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360e9c: 0x0  nop
    ctx->pc = 0x360e9cu;
    // NOP
    // 0x360ea0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x360EA0u;
    {
        const bool branch_taken_0x360ea0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x360EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360EA0u;
        // 0x360ea4: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x360ea0) {
            ctx->pc = 0x360ECCu;
            goto label_360ecc;
        }
    }
    ctx->pc = 0x360EA8u;
    // 0x360ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x360eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x360eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360eb0: 0x0  nop
    ctx->pc = 0x360eb0u;
    // NOP
    // 0x360eb4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x360eb4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x360eb8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x360eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x360ebc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x360ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x360ec0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x360ec0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x360ec4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x360ec4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x360ec8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x360ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_360ecc:
    // 0x360ecc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x360eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x360ed0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x360ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x360ed4: 0x24a56ee8  addiu       $a1, $a1, 0x6EE8
    ctx->pc = 0x360ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28392));
    // 0x360ed8: 0x24107210  addiu       $s0, $zero, 0x7210
    ctx->pc = 0x360ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 29200));
    // 0x360edc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360ee0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x360ee0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360ee4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x360EE4u;
    SET_GPR_U32(ctx, 31, 0x360EECu);
    ctx->pc = 0x360EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EE4u;
    // 0x360ee8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x360EE4u, 0x360EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EECu;
label_360eec:
    // 0x360eec: 0x24037310  addiu       $v1, $zero, 0x7310
    ctx->pc = 0x360eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29456));
    // 0x360ef0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x360ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x360ef4: 0xc07a248  jal         func_1E8920
    ctx->pc = 0x360EF4u;
    SET_GPR_U32(ctx, 31, 0x360EFCu);
    ctx->pc = 0x360EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360EF4u;
    // 0x360ef8: 0x62800b  movn        $s0, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x360EF4u, 0x360EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360EFCu;
label_360efc:
    // 0x360efc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x360f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x360f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x360f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x360f0c: 0xc077b46  jal         func_1DED18
    ctx->pc = 0x360F0Cu;
    SET_GPR_U32(ctx, 31, 0x360F14u);
    ctx->pc = 0x360F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F0Cu;
    // 0x360f10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED18u, 0x360F0Cu, 0x360F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F14u;
label_360f14:
    // 0x360f14: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x360F14u;
    SET_GPR_U32(ctx, 31, 0x360F1Cu);
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x360F14u, 0x360F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F1Cu;
label_360f1c:
    // 0x360f1c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x360f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x360f20: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x360f20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x360f24: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x360f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360f28: 0x10400113  beqz        $v0, . + 4 + (0x113 << 2)
    ctx->pc = 0x360F28u;
    {
        const bool branch_taken_0x360f28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F28u;
        // 0x360f2c: 0x3c120048  lui         $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f28) {
            ctx->pc = 0x361378u;
            goto label_361378;
        }
    }
    ctx->pc = 0x360F30u;
    // 0x360f30: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x360f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x360f34: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x360f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x360f38: 0x245e7ee0  addiu       $fp, $v0, 0x7EE0
    ctx->pc = 0x360f38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x360f3c: 0x24772828  addiu       $s7, $v1, 0x2828
    ctx->pc = 0x360f3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 10280));
    // 0x360f40: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x360f40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x360f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360f48: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x360f48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x360f4c: 0x0  nop
    ctx->pc = 0x360f4cu;
    // NOP
label_360f50:
    // 0x360f50: 0x8e422b20  lw          $v0, 0x2B20($s2)
    ctx->pc = 0x360f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11040)));
    // 0x360f54: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x360f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x360f58: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x360F58u;
    SET_GPR_U32(ctx, 31, 0x360F60u);
    ctx->pc = 0x360F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360F58u;
    // 0x360f5c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x360F58u, 0x360F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360F60u;
label_360f60:
    // 0x360f60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x360f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x360f64: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x360f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x360f68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x360F68u;
    {
        const bool branch_taken_0x360f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F68u;
        // 0x360f6c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f68) {
            ctx->pc = 0x360F94u;
            goto label_360f94;
        }
    }
    ctx->pc = 0x360F70u;
    // 0x360f70: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x360f70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360f74: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x360f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x360f78: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x360f78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360f7c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x360F7Cu;
    {
        const bool branch_taken_0x360f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x360f7c) {
            ctx->pc = 0x360F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360F7Cu;
            // 0x360f80: 0x8ec42b20  lw          $a0, 0x2B20($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11040)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360F98u;
            goto label_360f98;
        }
    }
    ctx->pc = 0x360F84u;
    // 0x360f84: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x360f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x360f88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x360f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360f8c: 0x14750012  bne         $v1, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x360F8Cu;
    {
        const bool branch_taken_0x360f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x360F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360F8Cu;
        // 0x360f90: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360f8c) {
            ctx->pc = 0x360FD8u;
            goto label_360fd8;
        }
    }
    ctx->pc = 0x360F94u;
label_360f94:
    // 0x360f94: 0x8ec42b20  lw          $a0, 0x2B20($s6)
    ctx->pc = 0x360f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11040)));
label_360f98:
    // 0x360f98: 0x2041821  addu        $v1, $s0, $a0
    ctx->pc = 0x360f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x360f9c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x360f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x360fa0: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x360fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x360fa4: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x360fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x360fa8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x360FA8u;
    {
        const bool branch_taken_0x360fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FA8u;
        // 0x360fac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360fa8) {
            ctx->pc = 0x360FB4u;
            goto label_360fb4;
        }
    }
    ctx->pc = 0x360FB0u;
    // 0x360fb0: 0x8ca60034  lw          $a2, 0x34($a1)
    ctx->pc = 0x360fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_360fb4:
    // 0x360fb4: 0x8cc300b8  lw          $v1, 0xB8($a2)
    ctx->pc = 0x360fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 184)));
    // 0x360fb8: 0x8c6200b0  lw          $v0, 0xB0($v1)
    ctx->pc = 0x360fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
    // 0x360fbc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x360fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x360fc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x360FC0u;
    {
        const bool branch_taken_0x360fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x360FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FC0u;
        // 0x360fc4: 0xe41021  addu        $v0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360fc0) {
            ctx->pc = 0x360FF4u;
            goto label_360ff4;
        }
    }
    ctx->pc = 0x360FC8u;
    // 0x360fc8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x360fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x360fcc: 0xc0d7a5e  jal         func_35E978
    ctx->pc = 0x360FCCu;
    SET_GPR_U32(ctx, 31, 0x360FD4u);
    ctx->pc = 0x360FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360FCCu;
    // 0x360fd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E978u, 0x360FCCu, 0x360FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360FD4u;
label_360fd4:
    // 0x360fd4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x360fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_360fd8:
    // 0x360fd8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x360fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x360fdc: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x360fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x360fe0: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x360fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x360fe4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x360FE4u;
    {
        const bool branch_taken_0x360fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x360FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FE4u;
        // 0x360fe8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360fe4) {
            ctx->pc = 0x360F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_360f50;
        }
    }
    ctx->pc = 0x360FECu;
    // 0x360fec: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x360FECu;
    {
        const bool branch_taken_0x360fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360FECu;
        // 0x360ff0: 0x8e30002c  lw          $s0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360fec) {
            ctx->pc = 0x36137Cu;
            goto label_36137c;
        }
    }
    ctx->pc = 0x360FF4u;
label_360ff4:
    // 0x360ff4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x360ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x360ff8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x360ff8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360ffc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x360ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361000: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x361000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x361004: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x361004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x361008: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x361008u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36100c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x36100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x361010: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x361010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x361014: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x361014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361018: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x361018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x36101c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x36101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x361020: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x361020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x361024: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x361024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x361028: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x361028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x36102c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x36102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x361030: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x361030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x361034: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x361034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x361038: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x361038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x36103c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x36103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361040: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x361040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x361044: 0x0  nop
    ctx->pc = 0x361044u;
    // NOP
    // 0x361048: 0x0  nop
    ctx->pc = 0x361048u;
    // NOP
    // 0x36104c: 0x46000004  c1          0x4
    ctx->pc = 0x36104cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x361050: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x361050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x361054: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x361054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x361058: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x361058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x36105c: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x36105cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x361060: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x361060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x361064: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x361064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x361068: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x361068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x36106c: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x36106cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x361070: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x361070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x361074: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x361074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x361078: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x361078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36107c: 0x100000be  b           . + 4 + (0xBE << 2)
    ctx->pc = 0x36107Cu;
    {
        const bool branch_taken_0x36107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x361080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36107Cu;
        // 0x361080: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36107c) {
            ctx->pc = 0x361378u;
            goto label_361378;
        }
    }
    ctx->pc = 0x361084u;
label_361084:
    // 0x361084: 0x564200bd  bnel        $s2, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x361084u;
    {
        const bool branch_taken_0x361084 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x361084) {
            ctx->pc = 0x361088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361084u;
            // 0x361088: 0x8e30002c  lw          $s0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36137Cu;
            goto label_36137c;
        }
    }
    ctx->pc = 0x36108Cu;
    // 0x36108c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36108Cu;
    SET_GPR_U32(ctx, 31, 0x361094u);
    ctx->pc = 0x361090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36108Cu;
    // 0x361090: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36108Cu, 0x361094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361094u;
label_361094:
    // 0x361094: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x361094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x361098: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x361098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36109c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x36109cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x3610a0: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x3610a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3610a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3610a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x3610a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3610a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3610ac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3610acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3610b0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x3610b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3610b4: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x3610b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3610b8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3610b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3610bc: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x3610bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3610c0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x3610c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x3610c4: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x3610c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x3610c8: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x3610c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x3610cc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3610ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3610d0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3610d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3610d4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3610d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3610d8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x3610d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3610dc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3610DCu;
    {
        const bool branch_taken_0x3610dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3610E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3610DCu;
        // 0x3610e0: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3610dc) {
            ctx->pc = 0x361110u;
            goto label_361110;
        }
    }
    ctx->pc = 0x3610E4u;
    // 0x3610e4: 0x8c420338  lw          $v0, 0x338($v0)
    ctx->pc = 0x3610e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
    // 0x3610e8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x3610e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3610ec: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x3610ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x3610f0: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3610F0u;
    {
        const bool branch_taken_0x3610f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3610F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3610F0u;
        // 0x3610f4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3610f0) {
            ctx->pc = 0x361114u;
            goto label_361114;
        }
    }
    ctx->pc = 0x3610F8u;
    // 0x3610f8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x3610f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x3610fc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x3610fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x361100: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x361100u;
    SET_GPR_U32(ctx, 31, 0x361108u);
    ctx->pc = 0x361104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361100u;
    // 0x361104: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x361100u, 0x361108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361108u;
label_361108:
    // 0x361108: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x361108u;
    {
        const bool branch_taken_0x361108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x361108) {
            ctx->pc = 0x361120u;
            goto label_361120;
        }
    }
    ctx->pc = 0x361110u;
label_361110:
    // 0x361110: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x361110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_361114:
    // 0x361114: 0x24057210  addiu       $a1, $zero, 0x7210
    ctx->pc = 0x361114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29200));
    // 0x361118: 0xc07a592  jal         func_1E9648
    ctx->pc = 0x361118u;
    SET_GPR_U32(ctx, 31, 0x361120u);
    ctx->pc = 0x36111Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361118u;
    // 0x36111c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x361118u, 0x361120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361120u;
label_361120:
    // 0x361120: 0xc0d763e  jal         func_35D8F8
    ctx->pc = 0x361120u;
    SET_GPR_U32(ctx, 31, 0x361128u);
    ctx->pc = 0x361124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361120u;
    // 0x361124: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D8F8u, 0x361120u, 0x361128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361128u;
label_361128:
    // 0x361128: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x361128u;
    {
        const bool branch_taken_0x361128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361128u;
        // 0x36112c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361128) {
            ctx->pc = 0x361378u;
            goto label_361378;
        }
    }
    ctx->pc = 0x361130u;
    // 0x361130: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x361130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
    // 0x361134: 0x50600091  beql        $v1, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x361134u;
    {
        const bool branch_taken_0x361134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x361134) {
            ctx->pc = 0x361138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361134u;
            // 0x361138: 0x8e30002c  lw          $s0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36137Cu;
            goto label_36137c;
        }
    }
    ctx->pc = 0x36113Cu;
    // 0x36113c: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x36113cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x361140: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x361140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x361144: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361144u;
    SET_GPR_U32(ctx, 31, 0x36114Cu);
    ctx->pc = 0x361148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361144u;
    // 0x361148: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361144u, 0x36114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36114Cu;
label_36114c:
    // 0x36114c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36114cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361150: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x361150u;
    SET_GPR_U32(ctx, 31, 0x361158u);
    ctx->pc = 0x361154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361150u;
    // 0x361154: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x361150u, 0x361158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361158u;
label_361158:
    // 0x361158: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x361158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x36115c: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x36115cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x361160: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x361160u;
    {
        const bool branch_taken_0x361160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361160u;
        // 0x361164: 0x27b40080  addiu       $s4, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361160) {
            ctx->pc = 0x361378u;
            goto label_361378;
        }
    }
    ctx->pc = 0x361168u;
    // 0x361168: 0x27b50090  addiu       $s5, $sp, 0x90
    ctx->pc = 0x361168u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x36116c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_361170:
    // 0x361170: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x361170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x361174: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x361174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
    // 0x361178: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x361178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x36117c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x36117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x361180: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x361180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x361184: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x361184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x361188: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x361188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36118c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x36118Cu;
    {
        const bool branch_taken_0x36118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36118Cu;
        // 0x361190: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36118c) {
            ctx->pc = 0x3611BCu;
            goto label_3611bc;
        }
    }
    ctx->pc = 0x361194u;
    // 0x361194: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x361194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x361198: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x361198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x36119c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x36119Cu;
    {
        const bool branch_taken_0x36119c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3611A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36119Cu;
        // 0x3611a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36119c) {
            ctx->pc = 0x3611A8u;
            goto label_3611a8;
        }
    }
    ctx->pc = 0x3611A4u;
    // 0x3611a4: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x3611a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3611a8:
    // 0x3611a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3611a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3611ac: 0xc0d80c6  jal         func_360318
    ctx->pc = 0x3611ACu;
    SET_GPR_U32(ctx, 31, 0x3611B4u);
    ctx->pc = 0x3611B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3611ACu;
    // 0x3611b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360318u, 0x3611ACu, 0x3611B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3611B4u;
label_3611b4:
    // 0x3611b4: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x3611B4u;
    {
        const bool branch_taken_0x3611b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3611B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611B4u;
        // 0x3611b8: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3611b4) {
            ctx->pc = 0x361364u;
            goto label_361364;
        }
    }
    ctx->pc = 0x3611BCu;
label_3611bc:
    // 0x3611bc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3611bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3611c0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x3611c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3611c4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3611c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3611c8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x3611c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3611cc: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x3611ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3611d0: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x3611d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x3611d4: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x3611d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x3611d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3611d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3611dc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3611dcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3611e0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3611e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3611e4: 0x0  nop
    ctx->pc = 0x3611e4u;
    // NOP
    // 0x3611e8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x3611E8u;
    {
        const bool branch_taken_0x3611e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3611ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3611E8u;
        // 0x3611ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3611e8) {
            ctx->pc = 0x36121Cu;
            goto label_36121c;
        }
    }
    ctx->pc = 0x3611F0u;
    // 0x3611f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3611f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3611f4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x3611f4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x3611f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3611f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3611fc: 0x0  nop
    ctx->pc = 0x3611fcu;
    // NOP
    // 0x361200: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x361200u;
    {
        const bool branch_taken_0x361200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x361204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361200u;
        // 0x361204: 0xc7a00088  lwc1        $f0, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x361200) {
            ctx->pc = 0x36121Cu;
            goto label_36121c;
        }
    }
    ctx->pc = 0x361208u;
    // 0x361208: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x361208u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x36120c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x36120cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361210: 0x0  nop
    ctx->pc = 0x361210u;
    // NOP
    // 0x361214: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x361214u;
    {
        const bool branch_taken_0x361214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x361214) {
            ctx->pc = 0x361218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x361214u;
            // 0x361218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36121Cu;
            goto label_36121c;
        }
    }
    ctx->pc = 0x36121Cu;
label_36121c:
    // 0x36121c: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x36121Cu;
    {
        const bool branch_taken_0x36121c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36121Cu;
        // 0x361220: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36121c) {
            ctx->pc = 0x361364u;
            goto label_361364;
        }
    }
    ctx->pc = 0x361224u;
    // 0x361224: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x361224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x361228: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x361228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x36122c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x36122cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361230: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x361230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x361234: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x361234u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x361238: 0x4a0003bf  vwaitq
    ctx->pc = 0x361238u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x36123c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x36123cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361240: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x361240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361244: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x361244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x361248: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x361248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x36124c: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x36124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x361250: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x361250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x361254: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x361254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x361258: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x361258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36125c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x36125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361260: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x361260u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x361264: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x361264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361268: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x361268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36126c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x36126cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x361270: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x361270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361274: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x361274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361278: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x361278u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36127c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x36127cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x361280: 0x0  nop
    ctx->pc = 0x361280u;
    // NOP
    // 0x361284: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x361284u;
    {
        const bool branch_taken_0x361284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x361284) {
            ctx->pc = 0x361304u;
            goto label_361304;
        }
    }
    ctx->pc = 0x36128Cu;
    // 0x36128c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36128cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x361290: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x361290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x361294: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x361294u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361298: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x361298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x36129c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x36129cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3612a0: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x3612a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3612a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3612a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3612a8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x3612a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x3612ac: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3612acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3612b0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x3612b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x3612b4: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x3612b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3612b8: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x3612b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x3612bc: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3612bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3612c0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x3612c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x3612c4: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3612c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3612c8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3612c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x3612cc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3612ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3612d0: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x3612d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x3612d4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3612d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3612d8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x3612d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x3612dc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x3612dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x3612e0: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x3612e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x3612e4: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x3612e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3612e8: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x3612e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x3612ec: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3612ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x3612f0: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x3612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x3612f4: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3612f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3612f8: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x3612f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
    // 0x3612fc: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x3612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x361300: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x361300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_361304:
    // 0x361304: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x361304u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x361308: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x361308u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36130c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x36130cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x361310: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x361310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x361314: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x361314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x361318: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x361318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36131c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x36131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361320: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x361320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361324: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x361324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x361328: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x361328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x36132c: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x36132cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x361330: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x361330u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x361334: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x361334u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x361338: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x361338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x36133c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x36133cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x361340: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x361340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x361344: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x361344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x361348: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x361348u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x36134c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x36134cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x361350: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x361350u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x361354: 0x46000004  c1          0x4
    ctx->pc = 0x361354u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x361358: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x361358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36135c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36135cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x361360: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x361360u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_361364:
    // 0x361364: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x361364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x361368: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x361368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x36136c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x36136cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x361370: 0x1440ff7f  bnez        $v0, . + 4 + (-0x81 << 2)
    ctx->pc = 0x361370u;
    {
        const bool branch_taken_0x361370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x361374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x361370u;
        // 0x361374: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361370) {
            ctx->pc = 0x361170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_361170;
        }
    }
    ctx->pc = 0x361378u;
label_361378:
    // 0x361378: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x361378u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_36137c:
    // 0x36137c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36137cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x361380: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x361380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x361384: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x361384u;
    SET_GPR_U32(ctx, 31, 0x36138Cu);
    ctx->pc = 0x361388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361384u;
    // 0x361388: 0x10802b  sltu        $s0, $zero, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x361384u, 0x36138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36138Cu;
label_36138c:
    // 0x36138c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36138cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361390: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x361390u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x361394: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x361394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x361398: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x361398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36139c: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x36139cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x3613a0: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x3613a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3613a4: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x3613a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3613a8: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x3613a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3613ac: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x3613acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x3613b0: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x3613b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3613b4: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x3613b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3613b8: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x3613b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3613bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3613BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3613C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3613BCu;
        // 0x3613c0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3613BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3613C4u;
    // 0x3613c4: 0x0  nop
    ctx->pc = 0x3613c4u;
    // NOP
    ctx->pc = 0x3613c8u;
}
