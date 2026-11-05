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

// Function: sub_001E2B48
// Address: 0x1e2b48 - 0x1e2f30
void sub_001E2B48_0x1e2b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2B48_0x1e2b48");
#endif

    ctx->pc = 0x1e2b48u;

    // 0x1e2b48: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1e2b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2b4c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e2b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e2b50: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e2b54: 0x25040010  addiu       $a0, $t0, 0x10
    ctx->pc = 0x1e2b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1e2b58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b5c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1e2b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2b60: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e2b60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2b64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e2b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b68: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1e2b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2b6c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e2b6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e2b70: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e2b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b74: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1e2b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2b78: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1e2b78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2b7c: 0xc4a4002c  lwc1        $f4, 0x2C($a1)
    ctx->pc = 0x1e2b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2b80: 0x25020020  addiu       $v0, $t0, 0x20
    ctx->pc = 0x1e2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1e2b84: 0x46040c81  sub.s       $f18, $f1, $f4
    ctx->pc = 0x1e2b84u;
    ctx->f[18] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x1e2b88: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1e2b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b8c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1e2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2b90: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1e2b90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2b94: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1e2b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b98: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1e2b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2b9c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1e2b9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1e2ba0: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1e2ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2ba4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1e2ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2ba8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1e2ba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1e2bac: 0x460404c1  sub.s       $f19, $f0, $f4
    ctx->pc = 0x1e2bacu;
    ctx->f[19] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1e2bb0: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x1e2bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1e2bb4: 0x46139002  mul.s       $f0, $f18, $f19
    ctx->pc = 0x1e2bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[18], ctx->f[19]);
    // 0x1e2bb8: 0x46100036  c.le.s      $f0, $f16
    ctx->pc = 0x1e2bb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2bbc: 0x0  nop
    ctx->pc = 0x1e2bbcu;
    // NOP
    // 0x1e2bc0: 0x450000d5  bc1f        . + 4 + (0xD5 << 2)
    ctx->pc = 0x1E2BC0u;
    {
        const bool branch_taken_0x1e2bc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2BC0u;
        // 0x1e2bc4: 0x25020030  addiu       $v0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bc0) {
            ctx->pc = 0x1E2F18u;
            goto label_1e2f18;
        }
    }
    ctx->pc = 0x1E2BC8u;
    // 0x1e2bc8: 0xc5020030  lwc1        $f2, 0x30($t0)
    ctx->pc = 0x1e2bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2bcc: 0xc4ad0020  lwc1        $f13, 0x20($a1)
    ctx->pc = 0x1e2bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1e2bd0: 0xc46e0004  lwc1        $f14, 0x4($v1)
    ctx->pc = 0x1e2bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1e2bd4: 0x46001446  mov.s       $f17, $f2
    ctx->pc = 0x1e2bd4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[2]);
    // 0x1e2bd8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e2bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2bdc: 0x46026882  mul.s       $f2, $f13, $f2
    ctx->pc = 0x1e2bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x1e2be0: 0xc4690008  lwc1        $f9, 0x8($v1)
    ctx->pc = 0x1e2be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1e2be4: 0x46017042  mul.s       $f1, $f14, $f1
    ctx->pc = 0x1e2be4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[1]);
    // 0x1e2be8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2bec: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x1e2becu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x1e2bf0: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1e2bf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1e2bf4: 0x460010c0  add.s       $f3, $f2, $f0
    ctx->pc = 0x1e2bf4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1e2bf8: 0x46101832  c.eq.s      $f3, $f16
    ctx->pc = 0x1e2bf8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[16])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2bfc: 0x0  nop
    ctx->pc = 0x1e2bfcu;
    // NOP
    // 0x1e2c00: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1E2C00u;
    {
        const bool branch_taken_0x1e2c00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C00u;
        // 0x1e2c04: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c00) {
            ctx->pc = 0x1E2C38u;
            goto label_1e2c38;
        }
    }
    ctx->pc = 0x1E2C08u;
    // 0x1e2c08: 0xc5000010  lwc1        $f0, 0x10($t0)
    ctx->pc = 0x1e2c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c0c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x1e2c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2c10: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1e2c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1e2c14: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e2c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2c18: 0x46027082  mul.s       $f2, $f14, $f2
    ctx->pc = 0x1e2c18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[14], ctx->f[2]);
    // 0x1e2c1c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x1e2c1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x1e2c20: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x1e2c20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x1e2c24: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1e2c24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1e2c28: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2c2c: 0x46030103  div.s       $f4, $f0, $f3
    ctx->pc = 0x1e2c2cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x1e2c30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2C30u;
    {
        const bool branch_taken_0x1e2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2C30u;
        // 0x1e2c34: 0xc5220004  lwc1        $f2, 0x4($t1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2c30) {
            ctx->pc = 0x1E2C44u;
            goto label_1e2c44;
        }
    }
    ctx->pc = 0x1E2C38u;
label_1e2c38:
    // 0x1e2c38: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e2c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2c3c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e2c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2c40: 0xc5220004  lwc1        $f2, 0x4($t1)
    ctx->pc = 0x1e2c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e2c44:
    // 0x1e2c44: 0x461120c2  mul.s       $f3, $f4, $f17
    ctx->pc = 0x1e2c44u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[17]);
    // 0x1e2c48: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x1e2c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2c4c: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x1e2c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1e2c50: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x1e2c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c54: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e2c54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e2c58: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e2c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e2c5c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1e2c5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e2c60: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e2c60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e2c64: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1e2c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e2c68: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x1e2c68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e2c6c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1e2c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e2c70: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1e2c70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e2c74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e2c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2c78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e2c78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2c7c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2c7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2c80: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e2c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2c84: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x1e2c84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c88: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1e2c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2c8c: 0x90a30010  lbu         $v1, 0x10($a1)
    ctx->pc = 0x1e2c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e2c90: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x1e2c90u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2c94: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1e2c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2c98: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1e2c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2c9c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1e2c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1e2ca0: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1e2ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2ca4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1e2ca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e2ca8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1e2ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1e2cac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1e2cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1e2cb0: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E2CB0u;
    {
        const bool branch_taken_0x1e2cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CB0u;
        // 0x1e2cb4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cb0) {
            ctx->pc = 0x1E2DD8u;
            goto label_1e2dd8;
        }
    }
    ctx->pc = 0x1E2CB8u;
    // 0x1e2cb8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e2cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e2cbc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e2cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e2cc0: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x1e2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x1e2cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e2cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e2cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2ccc: 0x800008  jr          $a0
    ctx->pc = 0x1E2CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2CD4u: goto label_1e2cd4;
            case 0x1E2CFCu: goto label_1e2cfc;
            case 0x1E2D2Cu: goto label_1e2d2c;
            case 0x1E2D54u: goto label_1e2d54;
            case 0x1E2D84u: goto label_1e2d84;
            case 0x1E2DACu: goto label_1e2dac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E2CD4u;
label_1e2cd4:
    // 0x1e2cd4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2cd8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2cdc: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2ce0: 0xc44b0008  lwc1        $f11, 0x8($v0)
    ctx->pc = 0x1e2ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2ce4: 0xc46f0008  lwc1        $f15, 0x8($v1)
    ctx->pc = 0x1e2ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2ce8: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x1e2ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2cec: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x1e2cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2cf0: 0xc46a0004  lwc1        $f10, 0x4($v1)
    ctx->pc = 0x1e2cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e2cf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2CF4u;
    {
        const bool branch_taken_0x1e2cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2CF4u;
        // 0x1e2cf8: 0xc4870004  lwc1        $f7, 0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2cf4) {
            ctx->pc = 0x1E2D20u;
            goto label_1e2d20;
        }
    }
    ctx->pc = 0x1E2CFCu;
label_1e2cfc:
    // 0x1e2cfc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2d00: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2d04: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2d08: 0xc44b0008  lwc1        $f11, 0x8($v0)
    ctx->pc = 0x1e2d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2d0c: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x1e2d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2d10: 0xc48f0008  lwc1        $f15, 0x8($a0)
    ctx->pc = 0x1e2d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2d14: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x1e2d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2d18: 0xc4670004  lwc1        $f7, 0x4($v1)
    ctx->pc = 0x1e2d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2d1c: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x1e2d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e2d20:
    // 0x1e2d20: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x1e2d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2d24: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1E2D24u;
    {
        const bool branch_taken_0x1e2d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D24u;
        // 0x1e2d28: 0xc7a50008  lwc1        $f5, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d24) {
            ctx->pc = 0x1E2DD8u;
            goto label_1e2dd8;
        }
    }
    ctx->pc = 0x1E2D2Cu;
label_1e2d2c:
    // 0x1e2d2c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2d30: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2d34: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2d38: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x1e2d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2d3c: 0xc46f0000  lwc1        $f15, 0x0($v1)
    ctx->pc = 0x1e2d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2d40: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x1e2d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2d44: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x1e2d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2d48: 0xc46a0008  lwc1        $f10, 0x8($v1)
    ctx->pc = 0x1e2d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e2d4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2D4Cu;
    {
        const bool branch_taken_0x1e2d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D4Cu;
        // 0x1e2d50: 0xc4870008  lwc1        $f7, 0x8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d4c) {
            ctx->pc = 0x1E2D78u;
            goto label_1e2d78;
        }
    }
    ctx->pc = 0x1E2D54u;
label_1e2d54:
    // 0x1e2d54: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2d58: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2d5c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2d60: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x1e2d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2d64: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x1e2d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2d68: 0xc48f0000  lwc1        $f15, 0x0($a0)
    ctx->pc = 0x1e2d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2d6c: 0xc4460008  lwc1        $f6, 0x8($v0)
    ctx->pc = 0x1e2d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2d70: 0xc4670008  lwc1        $f7, 0x8($v1)
    ctx->pc = 0x1e2d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2d74: 0xc48a0008  lwc1        $f10, 0x8($a0)
    ctx->pc = 0x1e2d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e2d78:
    // 0x1e2d78: 0xc7a80008  lwc1        $f8, 0x8($sp)
    ctx->pc = 0x1e2d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2d7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E2D7Cu;
    {
        const bool branch_taken_0x1e2d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2D7Cu;
        // 0x1e2d80: 0xc7a50000  lwc1        $f5, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2d7c) {
            ctx->pc = 0x1E2DD8u;
            goto label_1e2dd8;
        }
    }
    ctx->pc = 0x1E2D84u;
label_1e2d84:
    // 0x1e2d84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2d88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2d8c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2d90: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x1e2d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2d94: 0xc46f0004  lwc1        $f15, 0x4($v1)
    ctx->pc = 0x1e2d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2d98: 0xc48c0004  lwc1        $f12, 0x4($a0)
    ctx->pc = 0x1e2d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2d9c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x1e2d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2da0: 0xc46a0000  lwc1        $f10, 0x0($v1)
    ctx->pc = 0x1e2da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1e2da4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E2DA4u;
    {
        const bool branch_taken_0x1e2da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2DA4u;
        // 0x1e2da8: 0xc4870000  lwc1        $f7, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2da4) {
            ctx->pc = 0x1E2DD0u;
            goto label_1e2dd0;
        }
    }
    ctx->pc = 0x1E2DACu;
label_1e2dac:
    // 0x1e2dac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e2dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e2db0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e2db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e2db4: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x1e2db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e2db8: 0xc44b0004  lwc1        $f11, 0x4($v0)
    ctx->pc = 0x1e2db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1e2dbc: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x1e2dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e2dc0: 0xc48f0004  lwc1        $f15, 0x4($a0)
    ctx->pc = 0x1e2dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1e2dc4: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x1e2dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1e2dc8: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x1e2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1e2dcc: 0xc48a0000  lwc1        $f10, 0x0($a0)
    ctx->pc = 0x1e2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e2dd0:
    // 0x1e2dd0: 0xc7a80000  lwc1        $f8, 0x0($sp)
    ctx->pc = 0x1e2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1e2dd4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x1e2dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1e2dd8:
    // 0x1e2dd8: 0x46063841  sub.s       $f1, $f7, $f6
    ctx->pc = 0x1e2dd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
    // 0x1e2ddc: 0x460b28c1  sub.s       $f3, $f5, $f11
    ctx->pc = 0x1e2ddcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[11]);
    // 0x1e2de0: 0x460b6001  sub.s       $f0, $f12, $f11
    ctx->pc = 0x1e2de0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
    // 0x1e2de4: 0x46064081  sub.s       $f2, $f8, $f6
    ctx->pc = 0x1e2de4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[6]);
    // 0x1e2de8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2de8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2dec: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x1e2decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x1e2df0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2df4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2df4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2df8: 0x46090834  c.lt.s      $f1, $f9
    ctx->pc = 0x1e2df8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2dfc: 0x0  nop
    ctx->pc = 0x1e2dfcu;
    // NOP
    // 0x1e2e00: 0x45010046  bc1t        . + 4 + (0x46 << 2)
    ctx->pc = 0x1E2E00u;
    {
        const bool branch_taken_0x1e2e00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2E00u;
        // 0x1e2e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2e00) {
            ctx->pc = 0x1E2F1Cu;
            goto label_1e2f1c;
        }
    }
    ctx->pc = 0x1E2E08u;
    // 0x1e2e08: 0x46065041  sub.s       $f1, $f10, $f6
    ctx->pc = 0x1e2e08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[6]);
    // 0x1e2e0c: 0x460b7801  sub.s       $f0, $f15, $f11
    ctx->pc = 0x1e2e0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[15], ctx->f[11]);
    // 0x1e2e10: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2e10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2e14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2e18: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1e2e18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e1c: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x1e2e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e20: 0x0  nop
    ctx->pc = 0x1e2e20u;
    // NOP
    // 0x1e2e24: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x1E2E24u;
    {
        const bool branch_taken_0x1e2e24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e24) {
            ctx->pc = 0x1E2F1Cu;
            goto label_1e2f1c;
        }
    }
    ctx->pc = 0x1E2E2Cu;
    // 0x1e2e2c: 0x460c7841  sub.s       $f1, $f15, $f12
    ctx->pc = 0x1e2e2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[15], ctx->f[12]);
    // 0x1e2e30: 0x460740c1  sub.s       $f3, $f8, $f7
    ctx->pc = 0x1e2e30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
    // 0x1e2e34: 0x46075001  sub.s       $f0, $f10, $f7
    ctx->pc = 0x1e2e34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x1e2e38: 0x460c2881  sub.s       $f2, $f5, $f12
    ctx->pc = 0x1e2e38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x1e2e3c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1e2e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1e2e40: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1e2e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1e2e44: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e2e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e2e48: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x1e2e48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e4c: 0x0  nop
    ctx->pc = 0x1e2e4cu;
    // NOP
    // 0x1e2e50: 0x45010032  bc1t        . + 4 + (0x32 << 2)
    ctx->pc = 0x1E2E50u;
    {
        const bool branch_taken_0x1e2e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e50) {
            ctx->pc = 0x1E2F1Cu;
            goto label_1e2f1c;
        }
    }
    ctx->pc = 0x1E2E58u;
    // 0x1e2e58: 0x46009045  abs.s       $f1, $f18
    ctx->pc = 0x1e2e58u;
    ctx->f[1] = FPU_ABS_S(ctx->f[18]);
    // 0x1e2e5c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e2e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e2e60: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e2e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2e64: 0x46009805  abs.s       $f0, $f19
    ctx->pc = 0x1e2e64u;
    ctx->f[0] = FPU_ABS_S(ctx->f[19]);
    // 0x1e2e68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e2e6c: 0x46090032  c.eq.s      $f0, $f9
    ctx->pc = 0x1e2e6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2e70: 0x0  nop
    ctx->pc = 0x1e2e70u;
    // NOP
    // 0x1e2e74: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1E2E74u;
    {
        const bool branch_taken_0x1e2e74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2e74) {
            ctx->pc = 0x1E2E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2E74u;
            // 0x1e2e78: 0xc5010030  lwc1        $f1, 0x30($t0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2E8Cu;
            goto label_1e2e8c;
        }
    }
    ctx->pc = 0x1E2E7Cu;
    // 0x1e2e7c: 0x0  nop
    ctx->pc = 0x1e2e7cu;
    // NOP
    // 0x1e2e80: 0x0  nop
    ctx->pc = 0x1e2e80u;
    // NOP
    // 0x1e2e84: 0x46000903  div.s       $f4, $f1, $f0
    ctx->pc = 0x1e2e84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1e2e88: 0xc5010030  lwc1        $f1, 0x30($t0)
    ctx->pc = 0x1e2e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e2e8c:
    // 0x1e2e8c: 0xc522000c  lwc1        $f2, 0xC($t1)
    ctx->pc = 0x1e2e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2e90: 0xc5230004  lwc1        $f3, 0x4($t1)
    ctx->pc = 0x1e2e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2e94: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1e2e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1e2e98: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x1e2e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2e9c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1e2e9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1e2ea0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x1e2ea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1e2ea4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1e2ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1e2ea8: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1e2ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1e2eac: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1e2eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1e2eb0: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1e2eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1e2eb4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1e2eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1e2eb8: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x1e2eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2ebc: 0xc5630004  lwc1        $f3, 0x4($t3)
    ctx->pc = 0x1e2ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e2ec0: 0xc5640008  lwc1        $f4, 0x8($t3)
    ctx->pc = 0x1e2ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e2ec4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1e2ec4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1e2ec8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1e2ec8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1e2ecc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1e2eccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1e2ed0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1e2ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2ed4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2ed8: 0x0  nop
    ctx->pc = 0x1e2ed8u;
    // NOP
    // 0x1e2edc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1E2EDCu;
    {
        const bool branch_taken_0x1e2edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2EDCu;
        // 0x1e2ee0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2edc) {
            ctx->pc = 0x1E2F18u;
            goto label_1e2f18;
        }
    }
    ctx->pc = 0x1E2EE4u;
    // 0x1e2ee4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1e2ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2ee8: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x1e2ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x1e2eec: 0x24a30020  addiu       $v1, $a1, 0x20
    ctx->pc = 0x1e2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1e2ef0: 0xacc40030  sw          $a0, 0x30($a2)
    ctx->pc = 0x1e2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 4));
    // 0x1e2ef4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e2ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e2ef8: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1e2ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2efc: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x1e2efcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1e2f00: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x1e2f00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1e2f04: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e2f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e2f08: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1e2f08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e2f0c: 0xe4e10000  swc1        $f1, 0x0($a3)
    ctx->pc = 0x1e2f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x1e2f10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2F10u;
    {
        const bool branch_taken_0x1e2f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F10u;
        // 0x1e2f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2f10) {
            ctx->pc = 0x1E2F1Cu;
            goto label_1e2f1c;
        }
    }
    ctx->pc = 0x1E2F18u;
label_1e2f18:
    // 0x1e2f18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e2f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e2f1c:
    // 0x1e2f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2F1Cu;
        // 0x1e2f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2F24u;
    // 0x1e2f24: 0x0  nop
    ctx->pc = 0x1e2f24u;
    // NOP
    // 0x1e2f28: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1e2f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e2f2c: 0x0  nop
    ctx->pc = 0x1e2f2cu;
    // NOP
    ctx->pc = 0x1e2f30u;
}
