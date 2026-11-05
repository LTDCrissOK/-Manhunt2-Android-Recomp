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

// Function: sub_002659F0
// Address: 0x2659f0 - 0x265b80
void sub_002659F0_0x2659f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002659F0_0x2659f0");
#endif

    switch (ctx->pc) {
        case 0x2659f0u: goto label_2659f0;
        case 0x2659f4u: goto label_2659f4;
        case 0x2659f8u: goto label_2659f8;
        case 0x2659fcu: goto label_2659fc;
        case 0x265a00u: goto label_265a00;
        case 0x265a04u: goto label_265a04;
        case 0x265a08u: goto label_265a08;
        case 0x265a0cu: goto label_265a0c;
        case 0x265a10u: goto label_265a10;
        case 0x265a14u: goto label_265a14;
        case 0x265a18u: goto label_265a18;
        case 0x265a1cu: goto label_265a1c;
        case 0x265a20u: goto label_265a20;
        case 0x265a24u: goto label_265a24;
        case 0x265a28u: goto label_265a28;
        case 0x265a2cu: goto label_265a2c;
        case 0x265a30u: goto label_265a30;
        case 0x265a34u: goto label_265a34;
        case 0x265a38u: goto label_265a38;
        case 0x265a3cu: goto label_265a3c;
        case 0x265a40u: goto label_265a40;
        case 0x265a44u: goto label_265a44;
        case 0x265a48u: goto label_265a48;
        case 0x265a4cu: goto label_265a4c;
        case 0x265a50u: goto label_265a50;
        case 0x265a54u: goto label_265a54;
        case 0x265a58u: goto label_265a58;
        case 0x265a5cu: goto label_265a5c;
        case 0x265a60u: goto label_265a60;
        case 0x265a64u: goto label_265a64;
        case 0x265a68u: goto label_265a68;
        case 0x265a6cu: goto label_265a6c;
        case 0x265a70u: goto label_265a70;
        case 0x265a74u: goto label_265a74;
        case 0x265a78u: goto label_265a78;
        case 0x265a7cu: goto label_265a7c;
        case 0x265a80u: goto label_265a80;
        case 0x265a84u: goto label_265a84;
        case 0x265a88u: goto label_265a88;
        case 0x265a8cu: goto label_265a8c;
        case 0x265a90u: goto label_265a90;
        case 0x265a94u: goto label_265a94;
        case 0x265a98u: goto label_265a98;
        case 0x265a9cu: goto label_265a9c;
        case 0x265aa0u: goto label_265aa0;
        case 0x265aa4u: goto label_265aa4;
        case 0x265aa8u: goto label_265aa8;
        case 0x265aacu: goto label_265aac;
        case 0x265ab0u: goto label_265ab0;
        case 0x265ab4u: goto label_265ab4;
        case 0x265ab8u: goto label_265ab8;
        case 0x265abcu: goto label_265abc;
        case 0x265ac0u: goto label_265ac0;
        case 0x265ac4u: goto label_265ac4;
        case 0x265ac8u: goto label_265ac8;
        case 0x265accu: goto label_265acc;
        case 0x265ad0u: goto label_265ad0;
        case 0x265ad4u: goto label_265ad4;
        case 0x265ad8u: goto label_265ad8;
        case 0x265adcu: goto label_265adc;
        case 0x265ae0u: goto label_265ae0;
        case 0x265ae4u: goto label_265ae4;
        case 0x265ae8u: goto label_265ae8;
        case 0x265aecu: goto label_265aec;
        case 0x265af0u: goto label_265af0;
        case 0x265af4u: goto label_265af4;
        case 0x265af8u: goto label_265af8;
        case 0x265afcu: goto label_265afc;
        case 0x265b00u: goto label_265b00;
        case 0x265b04u: goto label_265b04;
        case 0x265b08u: goto label_265b08;
        case 0x265b0cu: goto label_265b0c;
        case 0x265b10u: goto label_265b10;
        case 0x265b14u: goto label_265b14;
        case 0x265b18u: goto label_265b18;
        case 0x265b1cu: goto label_265b1c;
        case 0x265b20u: goto label_265b20;
        case 0x265b24u: goto label_265b24;
        case 0x265b28u: goto label_265b28;
        case 0x265b2cu: goto label_265b2c;
        case 0x265b30u: goto label_265b30;
        case 0x265b34u: goto label_265b34;
        case 0x265b38u: goto label_265b38;
        case 0x265b3cu: goto label_265b3c;
        case 0x265b40u: goto label_265b40;
        case 0x265b44u: goto label_265b44;
        case 0x265b48u: goto label_265b48;
        case 0x265b4cu: goto label_265b4c;
        case 0x265b50u: goto label_265b50;
        case 0x265b54u: goto label_265b54;
        case 0x265b58u: goto label_265b58;
        case 0x265b5cu: goto label_265b5c;
        case 0x265b60u: goto label_265b60;
        case 0x265b64u: goto label_265b64;
        case 0x265b68u: goto label_265b68;
        case 0x265b6cu: goto label_265b6c;
        case 0x265b70u: goto label_265b70;
        case 0x265b74u: goto label_265b74;
        case 0x265b78u: goto label_265b78;
        case 0x265b7cu: goto label_265b7c;
        default: break;
    }

    ctx->pc = 0x2659f0u;

label_2659f0:
    // 0x2659f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2659f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2659f4:
    // 0x2659f4: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x2659f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2659f8:
    // 0x2659f8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2659f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2659fc:
    // 0x2659fc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2659fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_265a00:
    // 0x265a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x265a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_265a04:
    // 0x265a04: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x265a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265a08:
    // 0x265a08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x265a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265a0c:
    // 0x265a0c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x265a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265a10:
    // 0x265a10: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x265a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a14:
    // 0x265a14: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x265a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_265a18:
    // 0x265a18: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x265a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_265a1c:
    // 0x265a1c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x265a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_265a20:
    // 0x265a20: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x265a20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_265a24:
    // 0x265a24: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x265a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_265a28:
    // 0x265a28: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x265a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_265a2c:
    // 0x265a2c: 0x40f809  jalr        $v0
label_265a30:
    if (ctx->pc == 0x265A30u) {
        ctx->pc = 0x265A34u;
        goto label_265a34;
    }
    ctx->pc = 0x265A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x265A34u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265A2Cu, 0x265A34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x265A34u;
label_265a34:
    // 0x265a34: 0x260302f0  addiu       $v1, $s0, 0x2F0
    ctx->pc = 0x265a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
label_265a38:
    // 0x265a38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x265a38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265a3c:
    // 0x265a3c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x265a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265a40:
    // 0x265a40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265a40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265a44:
    // 0x265a44: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x265a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_265a48:
    // 0x265a48: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x265a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265a4c:
    // 0x265a4c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x265a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_265a50:
    // 0x265a50: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x265a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a54:
    // 0x265a54: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x265a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_265a58:
    // 0x265a58: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x265a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265a5c:
    // 0x265a5c: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x265a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265a60:
    // 0x265a60: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x265a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_265a64:
    // 0x265a64: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x265a64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_265a68:
    // 0x265a68: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x265a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_265a6c:
    // 0x265a6c: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x265a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_265a70:
    // 0x265a70: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x265a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a74:
    // 0x265a74: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x265a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265a78:
    // 0x265a78: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x265a78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_265a7c:
    // 0x265a7c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x265a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a80:
    // 0x265a80: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x265a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265a84:
    // 0x265a84: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x265a84u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_265a88:
    // 0x265a88: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x265a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a8c:
    // 0x265a8c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x265a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265a90:
    // 0x265a90: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x265a90u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_265a94:
    // 0x265a94: 0x46042040  add.s       $f1, $f4, $f4
    ctx->pc = 0x265a94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_265a98:
    // 0x265a98: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x265a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265a9c:
    // 0x265a9c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x265a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265aa0:
    // 0x265aa0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x265aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_265aa4:
    // 0x265aa4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x265aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265aa8:
    // 0x265aa8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x265aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_265aac:
    // 0x265aac: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x265aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_265ab0:
    // 0x265ab0: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x265ab0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_265ab4:
    // 0x265ab4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x265ab4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_265ab8:
    // 0x265ab8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x265ab8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_265abc:
    // 0x265abc: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x265abcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_265ac0:
    // 0x265ac0: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x265ac0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_265ac4:
    // 0x265ac4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x265ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_265ac8:
    // 0x265ac8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x265ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_265acc:
    // 0x265acc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265ad0:
    // 0x265ad0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265ad0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265ad4:
    // 0x265ad4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265ad4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265ad8:
    // 0x265ad8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x265ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_265adc:
    // 0x265adc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x265adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265ae0:
    // 0x265ae0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x265ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265ae4:
    // 0x265ae4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x265ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265ae8:
    // 0x265ae8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x265ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265aec:
    // 0x265aec: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x265aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265af0:
    // 0x265af0: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x265af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265af4:
    // 0x265af4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x265af4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265af8:
    // 0x265af8: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x265af8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265afc:
    // 0x265afc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x265afcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_265b00:
    // 0x265b00: 0xfa010300  sqc2        $vf1, 0x300($s0)
    ctx->pc = 0x265b00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 768), _mm_castps_si128(ctx->vu0_vf[1]));
label_265b04:
    // 0x265b04: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x265b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265b08:
    // 0x265b08: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x265b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265b0c:
    // 0x265b0c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x265b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265b10:
    // 0x265b10: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x265b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_265b14:
    // 0x265b14: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x265b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265b18:
    // 0x265b18: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x265b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_265b1c:
    // 0x265b1c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x265b1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_265b20:
    // 0x265b20: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x265b20u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_265b24:
    // 0x265b24: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x265b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_265b28:
    // 0x265b28: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x265b28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_265b2c:
    // 0x265b2c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x265b2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_265b30:
    // 0x265b30: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x265b30u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_265b34:
    // 0x265b34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x265b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_265b38:
    // 0x265b38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x265b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_265b3c:
    // 0x265b3c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x265b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_265b40:
    // 0x265b40: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x265b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_265b44:
    // 0x265b44: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x265b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_265b48:
    // 0x265b48: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x265b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_265b4c:
    // 0x265b4c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x265b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_265b50:
    // 0x265b50: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x265b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_265b54:
    // 0x265b54: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x265b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_265b58:
    // 0x265b58: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x265b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_265b5c:
    // 0x265b5c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x265b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_265b60:
    // 0x265b60: 0xe7a3002c  swc1        $f3, 0x2C($sp)
    ctx->pc = 0x265b60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_265b64:
    // 0x265b64: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x265b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_265b68:
    // 0x265b68: 0xfa010330  sqc2        $vf1, 0x330($s0)
    ctx->pc = 0x265b68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 816), _mm_castps_si128(ctx->vu0_vf[1]));
label_265b6c:
    // 0x265b6c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x265b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_265b70:
    // 0x265b70: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x265b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_265b74:
    // 0x265b74: 0x3e00008  jr          $ra
label_265b78:
    if (ctx->pc == 0x265B78u) {
        ctx->pc = 0x265B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B74u;
        // 0x265b78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x265B7Cu;
        goto label_265b7c;
    }
    ctx->pc = 0x265B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265B74u;
        // 0x265b78: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265B7Cu;
label_265b7c:
    // 0x265b7c: 0x0  nop
    ctx->pc = 0x265b7cu;
    // NOP
    ctx->pc = 0x265b80u;
}
