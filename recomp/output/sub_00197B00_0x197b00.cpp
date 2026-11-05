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

// Function: sub_00197B00
// Address: 0x197b00 - 0x197d00
void sub_00197B00_0x197b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197B00_0x197b00");
#endif

    switch (ctx->pc) {
        case 0x197b00u: goto label_197b00;
        case 0x197b04u: goto label_197b04;
        case 0x197b08u: goto label_197b08;
        case 0x197b0cu: goto label_197b0c;
        case 0x197b10u: goto label_197b10;
        case 0x197b14u: goto label_197b14;
        case 0x197b18u: goto label_197b18;
        case 0x197b1cu: goto label_197b1c;
        case 0x197b20u: goto label_197b20;
        case 0x197b24u: goto label_197b24;
        case 0x197b28u: goto label_197b28;
        case 0x197b2cu: goto label_197b2c;
        case 0x197b30u: goto label_197b30;
        case 0x197b34u: goto label_197b34;
        case 0x197b38u: goto label_197b38;
        case 0x197b3cu: goto label_197b3c;
        case 0x197b40u: goto label_197b40;
        case 0x197b44u: goto label_197b44;
        case 0x197b48u: goto label_197b48;
        case 0x197b4cu: goto label_197b4c;
        case 0x197b50u: goto label_197b50;
        case 0x197b54u: goto label_197b54;
        case 0x197b58u: goto label_197b58;
        case 0x197b5cu: goto label_197b5c;
        case 0x197b60u: goto label_197b60;
        case 0x197b64u: goto label_197b64;
        case 0x197b68u: goto label_197b68;
        case 0x197b6cu: goto label_197b6c;
        case 0x197b70u: goto label_197b70;
        case 0x197b74u: goto label_197b74;
        case 0x197b78u: goto label_197b78;
        case 0x197b7cu: goto label_197b7c;
        case 0x197b80u: goto label_197b80;
        case 0x197b84u: goto label_197b84;
        case 0x197b88u: goto label_197b88;
        case 0x197b8cu: goto label_197b8c;
        case 0x197b90u: goto label_197b90;
        case 0x197b94u: goto label_197b94;
        case 0x197b98u: goto label_197b98;
        case 0x197b9cu: goto label_197b9c;
        case 0x197ba0u: goto label_197ba0;
        case 0x197ba4u: goto label_197ba4;
        case 0x197ba8u: goto label_197ba8;
        case 0x197bacu: goto label_197bac;
        case 0x197bb0u: goto label_197bb0;
        case 0x197bb4u: goto label_197bb4;
        case 0x197bb8u: goto label_197bb8;
        case 0x197bbcu: goto label_197bbc;
        case 0x197bc0u: goto label_197bc0;
        case 0x197bc4u: goto label_197bc4;
        case 0x197bc8u: goto label_197bc8;
        case 0x197bccu: goto label_197bcc;
        case 0x197bd0u: goto label_197bd0;
        case 0x197bd4u: goto label_197bd4;
        case 0x197bd8u: goto label_197bd8;
        case 0x197bdcu: goto label_197bdc;
        case 0x197be0u: goto label_197be0;
        case 0x197be4u: goto label_197be4;
        case 0x197be8u: goto label_197be8;
        case 0x197becu: goto label_197bec;
        case 0x197bf0u: goto label_197bf0;
        case 0x197bf4u: goto label_197bf4;
        case 0x197bf8u: goto label_197bf8;
        case 0x197bfcu: goto label_197bfc;
        case 0x197c00u: goto label_197c00;
        case 0x197c04u: goto label_197c04;
        case 0x197c08u: goto label_197c08;
        case 0x197c0cu: goto label_197c0c;
        case 0x197c10u: goto label_197c10;
        case 0x197c14u: goto label_197c14;
        case 0x197c18u: goto label_197c18;
        case 0x197c1cu: goto label_197c1c;
        case 0x197c20u: goto label_197c20;
        case 0x197c24u: goto label_197c24;
        case 0x197c28u: goto label_197c28;
        case 0x197c2cu: goto label_197c2c;
        case 0x197c30u: goto label_197c30;
        case 0x197c34u: goto label_197c34;
        case 0x197c38u: goto label_197c38;
        case 0x197c3cu: goto label_197c3c;
        case 0x197c40u: goto label_197c40;
        case 0x197c44u: goto label_197c44;
        case 0x197c48u: goto label_197c48;
        case 0x197c4cu: goto label_197c4c;
        case 0x197c50u: goto label_197c50;
        case 0x197c54u: goto label_197c54;
        case 0x197c58u: goto label_197c58;
        case 0x197c5cu: goto label_197c5c;
        case 0x197c60u: goto label_197c60;
        case 0x197c64u: goto label_197c64;
        case 0x197c68u: goto label_197c68;
        case 0x197c6cu: goto label_197c6c;
        case 0x197c70u: goto label_197c70;
        case 0x197c74u: goto label_197c74;
        case 0x197c78u: goto label_197c78;
        case 0x197c7cu: goto label_197c7c;
        case 0x197c80u: goto label_197c80;
        case 0x197c84u: goto label_197c84;
        case 0x197c88u: goto label_197c88;
        case 0x197c8cu: goto label_197c8c;
        case 0x197c90u: goto label_197c90;
        case 0x197c94u: goto label_197c94;
        case 0x197c98u: goto label_197c98;
        case 0x197c9cu: goto label_197c9c;
        case 0x197ca0u: goto label_197ca0;
        case 0x197ca4u: goto label_197ca4;
        case 0x197ca8u: goto label_197ca8;
        case 0x197cacu: goto label_197cac;
        case 0x197cb0u: goto label_197cb0;
        case 0x197cb4u: goto label_197cb4;
        case 0x197cb8u: goto label_197cb8;
        case 0x197cbcu: goto label_197cbc;
        case 0x197cc0u: goto label_197cc0;
        case 0x197cc4u: goto label_197cc4;
        case 0x197cc8u: goto label_197cc8;
        case 0x197cccu: goto label_197ccc;
        case 0x197cd0u: goto label_197cd0;
        case 0x197cd4u: goto label_197cd4;
        case 0x197cd8u: goto label_197cd8;
        case 0x197cdcu: goto label_197cdc;
        case 0x197ce0u: goto label_197ce0;
        case 0x197ce4u: goto label_197ce4;
        case 0x197ce8u: goto label_197ce8;
        case 0x197cecu: goto label_197cec;
        case 0x197cf0u: goto label_197cf0;
        case 0x197cf4u: goto label_197cf4;
        case 0x197cf8u: goto label_197cf8;
        case 0x197cfcu: goto label_197cfc;
        default: break;
    }

    ctx->pc = 0x197b00u;

label_197b00:
    // 0x197b00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_197b04:
    // 0x197b04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_197b08:
    // 0x197b08: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197b08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_197b0c:
    // 0x197b0c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x197b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_197b10:
    // 0x197b10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x197b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_197b14:
    // 0x197b14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197b18:
    // 0x197b18: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x197b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_197b1c:
    // 0x197b1c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x197b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_197b20:
    // 0x197b20: 0xc066078  jal         func_1981E0
label_197b24:
    if (ctx->pc == 0x197B24u) {
        ctx->pc = 0x197B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B20u;
        // 0x197b24: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B28u;
        goto label_197b28;
    }
    ctx->pc = 0x197B20u;
    SET_GPR_U32(ctx, 31, 0x197B28u);
    ctx->pc = 0x197B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B20u;
    // 0x197b24: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1981E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1981E0u, 0x197B20u, 0x197B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B28u;
label_197b28:
    // 0x197b28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x197b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197b2c:
    // 0x197b2c: 0xc061a12  jal         func_186848
label_197b30:
    if (ctx->pc == 0x197B30u) {
        ctx->pc = 0x197B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B2Cu;
        // 0x197b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B34u;
        goto label_197b34;
    }
    ctx->pc = 0x197B2Cu;
    SET_GPR_U32(ctx, 31, 0x197B34u);
    ctx->pc = 0x197B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B2Cu;
    // 0x197b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197B2Cu, 0x197B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B34u;
label_197b34:
    // 0x197b34: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x197b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_197b38:
    // 0x197b38: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x197b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_197b3c:
    // 0x197b3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x197b3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_197b40:
    // 0x197b40: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x197b40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_197b44:
    // 0x197b44: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x197b44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_197b48:
    // 0x197b48: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x197b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_197b4c:
    // 0x197b4c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x197b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197b50:
    // 0x197b50: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x197b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_197b54:
    // 0x197b54: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x197b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197b58:
    // 0x197b58: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x197b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_197b5c:
    // 0x197b5c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x197b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_197b60:
    // 0x197b60: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x197b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_197b64:
    // 0x197b64: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x197b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_197b68:
    // 0x197b68: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x197b68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_197b6c:
    // 0x197b6c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x197b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197b70:
    // 0x197b70: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x197b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197b74:
    // 0x197b74: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x197b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_197b78:
    // 0x197b78: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x197b78u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_197b7c:
    // 0x197b7c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x197b7cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_197b80:
    // 0x197b80: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x197b80u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_197b84:
    // 0x197b84: 0x46140504  c1          0x140504
    ctx->pc = 0x197b84u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_197b88:
    // 0x197b88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_197b8c:
    if (ctx->pc == 0x197B8Cu) {
        ctx->pc = 0x197B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B88u;
        // 0x197b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B90u;
        goto label_197b90;
    }
    ctx->pc = 0x197B88u;
    {
        const bool branch_taken_0x197b88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B88u;
        // 0x197b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b88) {
            ctx->pc = 0x197BA0u;
            goto label_197ba0;
        }
    }
    ctx->pc = 0x197B90u;
label_197b90:
    // 0x197b90: 0xc065f62  jal         func_197D88
label_197b94:
    if (ctx->pc == 0x197B94u) {
        ctx->pc = 0x197B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B90u;
        // 0x197b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197B98u;
        goto label_197b98;
    }
    ctx->pc = 0x197B90u;
    SET_GPR_U32(ctx, 31, 0x197B98u);
    ctx->pc = 0x197B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197B90u;
    // 0x197b94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197D88u, 0x197B90u, 0x197B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197B98u;
label_197b98:
    // 0x197b98: 0x10000054  b           . + 4 + (0x54 << 2)
label_197b9c:
    if (ctx->pc == 0x197B9Cu) {
        ctx->pc = 0x197B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B98u;
        // 0x197b9c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BA0u;
        goto label_197ba0;
    }
    ctx->pc = 0x197B98u;
    {
        const bool branch_taken_0x197b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197B98u;
        // 0x197b9c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b98) {
            ctx->pc = 0x197CECu;
            goto label_197cec;
        }
    }
    ctx->pc = 0x197BA0u;
label_197ba0:
    // 0x197ba0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x197ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197ba4:
    // 0x197ba4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x197ba4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197ba8:
    // 0x197ba8: 0x0  nop
    ctx->pc = 0x197ba8u;
    // NOP
label_197bac:
    // 0x197bac: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_197bb0:
    if (ctx->pc == 0x197BB0u) {
        ctx->pc = 0x197BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BACu;
        // 0x197bb0: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BB4u;
        goto label_197bb4;
    }
    ctx->pc = 0x197BACu;
    {
        const bool branch_taken_0x197bac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197bac) {
            ctx->pc = 0x197BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197BACu;
            // 0x197bb0: 0xc600001c  lwc1        $f0, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x197C10u;
            goto label_197c10;
        }
    }
    ctx->pc = 0x197BB4u;
label_197bb4:
    // 0x197bb4: 0xc061a12  jal         func_186848
label_197bb8:
    if (ctx->pc == 0x197BB8u) {
        ctx->pc = 0x197BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BB4u;
        // 0x197bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BBCu;
        goto label_197bbc;
    }
    ctx->pc = 0x197BB4u;
    SET_GPR_U32(ctx, 31, 0x197BBCu);
    ctx->pc = 0x197BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197BB4u;
    // 0x197bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197BB4u, 0x197BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197BBCu;
label_197bbc:
    // 0x197bbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x197bbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197bc0:
    // 0x197bc0: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x197bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197bc4:
    // 0x197bc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197bc8:
    // 0x197bc8: 0x0  nop
    ctx->pc = 0x197bc8u;
    // NOP
label_197bcc:
    // 0x197bcc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_197bd0:
    if (ctx->pc == 0x197BD0u) {
        ctx->pc = 0x197BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BCCu;
        // 0x197bd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197BD4u;
        goto label_197bd4;
    }
    ctx->pc = 0x197BCCu;
    {
        const bool branch_taken_0x197bcc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197BCCu;
        // 0x197bd0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bcc) {
            ctx->pc = 0x197BD8u;
            goto label_197bd8;
        }
    }
    ctx->pc = 0x197BD4u;
label_197bd4:
    // 0x197bd4: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x197bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_197bd8:
    // 0x197bd8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x197bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197bdc:
    // 0x197bdc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x197bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197be0:
    // 0x197be0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x197be0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197be4:
    // 0x197be4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x197be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197be8:
    // 0x197be8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x197be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197bec:
    // 0x197bec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x197becu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_197bf0:
    // 0x197bf0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x197bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197bf4:
    // 0x197bf4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x197bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197bf8:
    // 0x197bf8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x197bf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197bfc:
    // 0x197bfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x197bfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197c00:
    // 0x197c00: 0x0  nop
    ctx->pc = 0x197c00u;
    // NOP
label_197c04:
    // 0x197c04: 0x4501001c  bc1t        . + 4 + (0x1C << 2)
label_197c08:
    if (ctx->pc == 0x197C08u) {
        ctx->pc = 0x197C0Cu;
        goto label_197c0c;
    }
    ctx->pc = 0x197C04u;
    {
        const bool branch_taken_0x197c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197c04) {
            ctx->pc = 0x197C78u;
            goto label_197c78;
        }
    }
    ctx->pc = 0x197C0Cu;
label_197c0c:
    // 0x197c0c: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x197c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197c10:
    // 0x197c10: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x197c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197c14:
    // 0x197c14: 0x0  nop
    ctx->pc = 0x197c14u;
    // NOP
label_197c18:
    // 0x197c18: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_197c1c:
    if (ctx->pc == 0x197C1Cu) {
        ctx->pc = 0x197C20u;
        goto label_197c20;
    }
    ctx->pc = 0x197C18u;
    {
        const bool branch_taken_0x197c18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197c18) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197C20u;
label_197c20:
    // 0x197c20: 0xc061a12  jal         func_186848
label_197c24:
    if (ctx->pc == 0x197C24u) {
        ctx->pc = 0x197C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C20u;
        // 0x197c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C28u;
        goto label_197c28;
    }
    ctx->pc = 0x197C20u;
    SET_GPR_U32(ctx, 31, 0x197C28u);
    ctx->pc = 0x197C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C20u;
    // 0x197c24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197C20u, 0x197C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C28u;
label_197c28:
    // 0x197c28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x197c28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_197c2c:
    // 0x197c2c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x197c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_197c30:
    // 0x197c30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197c30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197c34:
    // 0x197c34: 0x0  nop
    ctx->pc = 0x197c34u;
    // NOP
label_197c38:
    // 0x197c38: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_197c3c:
    if (ctx->pc == 0x197C3Cu) {
        ctx->pc = 0x197C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C38u;
        // 0x197c3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C40u;
        goto label_197c40;
    }
    ctx->pc = 0x197C38u;
    {
        const bool branch_taken_0x197c38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C38u;
        // 0x197c3c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c38) {
            ctx->pc = 0x197C44u;
            goto label_197c44;
        }
    }
    ctx->pc = 0x197C40u;
label_197c40:
    // 0x197c40: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x197c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_197c44:
    // 0x197c44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x197c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197c48:
    // 0x197c48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x197c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197c4c:
    // 0x197c4c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x197c4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197c50:
    // 0x197c50: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x197c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197c54:
    // 0x197c54: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x197c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197c58:
    // 0x197c58: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x197c58u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_197c5c:
    // 0x197c5c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x197c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_197c60:
    // 0x197c60: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x197c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_197c64:
    // 0x197c64: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x197c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_197c68:
    // 0x197c68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_197c6c:
    // 0x197c6c: 0x0  nop
    ctx->pc = 0x197c6cu;
    // NOP
label_197c70:
    // 0x197c70: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_197c74:
    if (ctx->pc == 0x197C74u) {
        ctx->pc = 0x197C78u;
        goto label_197c78;
    }
    ctx->pc = 0x197C70u;
    {
        const bool branch_taken_0x197c70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197c70) {
            ctx->pc = 0x197C88u;
            goto label_197c88;
        }
    }
    ctx->pc = 0x197C78u;
label_197c78:
    // 0x197c78: 0xc06605c  jal         func_198170
label_197c7c:
    if (ctx->pc == 0x197C7Cu) {
        ctx->pc = 0x197C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C78u;
        // 0x197c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C80u;
        goto label_197c80;
    }
    ctx->pc = 0x197C78u;
    SET_GPR_U32(ctx, 31, 0x197C80u);
    ctx->pc = 0x197C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C78u;
    // 0x197c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198170u, 0x197C78u, 0x197C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C80u;
label_197c80:
    // 0x197c80: 0x1000001a  b           . + 4 + (0x1A << 2)
label_197c84:
    if (ctx->pc == 0x197C84u) {
        ctx->pc = 0x197C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C80u;
        // 0x197c84: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C88u;
        goto label_197c88;
    }
    ctx->pc = 0x197C80u;
    {
        const bool branch_taken_0x197c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C80u;
        // 0x197c84: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197c80) {
            ctx->pc = 0x197CECu;
            goto label_197cec;
        }
    }
    ctx->pc = 0x197C88u;
label_197c88:
    // 0x197c88: 0xc061a12  jal         func_186848
label_197c8c:
    if (ctx->pc == 0x197C8Cu) {
        ctx->pc = 0x197C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197C88u;
        // 0x197c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197C90u;
        goto label_197c90;
    }
    ctx->pc = 0x197C88u;
    SET_GPR_U32(ctx, 31, 0x197C90u);
    ctx->pc = 0x197C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197C88u;
    // 0x197c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197C88u, 0x197C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197C90u;
label_197c90:
    // 0x197c90: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_197c94:
    // 0x197c94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x197c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_197c98:
    // 0x197c98: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_197c9c:
    // 0x197c9c: 0x40f809  jalr        $v0
label_197ca0:
    if (ctx->pc == 0x197CA0u) {
        ctx->pc = 0x197CA4u;
        goto label_197ca4;
    }
    ctx->pc = 0x197C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197CA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197C9Cu, 0x197CA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197CA4u;
label_197ca4:
    // 0x197ca4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_197ca8:
    if (ctx->pc == 0x197CA8u) {
        ctx->pc = 0x197CACu;
        goto label_197cac;
    }
    ctx->pc = 0x197CA4u;
    {
        const bool branch_taken_0x197ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197ca4) {
            ctx->pc = 0x197CBCu;
            goto label_197cbc;
        }
    }
    ctx->pc = 0x197CACu;
label_197cac:
    // 0x197cac: 0xc066040  jal         func_198100
label_197cb0:
    if (ctx->pc == 0x197CB0u) {
        ctx->pc = 0x197CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CACu;
        // 0x197cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CB4u;
        goto label_197cb4;
    }
    ctx->pc = 0x197CACu;
    SET_GPR_U32(ctx, 31, 0x197CB4u);
    ctx->pc = 0x197CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CACu;
    // 0x197cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198100u, 0x197CACu, 0x197CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CB4u;
label_197cb4:
    // 0x197cb4: 0x1000000d  b           . + 4 + (0xD << 2)
label_197cb8:
    if (ctx->pc == 0x197CB8u) {
        ctx->pc = 0x197CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB4u;
        // 0x197cb8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CBCu;
        goto label_197cbc;
    }
    ctx->pc = 0x197CB4u;
    {
        const bool branch_taken_0x197cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CB4u;
        // 0x197cb8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cb4) {
            ctx->pc = 0x197CECu;
            goto label_197cec;
        }
    }
    ctx->pc = 0x197CBCu;
label_197cbc:
    // 0x197cbc: 0xc061a1e  jal         func_186878
label_197cc0:
    if (ctx->pc == 0x197CC0u) {
        ctx->pc = 0x197CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CBCu;
        // 0x197cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CC4u;
        goto label_197cc4;
    }
    ctx->pc = 0x197CBCu;
    SET_GPR_U32(ctx, 31, 0x197CC4u);
    ctx->pc = 0x197CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CBCu;
    // 0x197cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197CBCu, 0x197CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CC4u;
label_197cc4:
    // 0x197cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_197cc8:
    // 0x197cc8: 0xc061a1e  jal         func_186878
label_197ccc:
    if (ctx->pc == 0x197CCCu) {
        ctx->pc = 0x197CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CC8u;
        // 0x197ccc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CD0u;
        goto label_197cd0;
    }
    ctx->pc = 0x197CC8u;
    SET_GPR_U32(ctx, 31, 0x197CD0u);
    ctx->pc = 0x197CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CC8u;
    // 0x197ccc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197CC8u, 0x197CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CD0u;
label_197cd0:
    // 0x197cd0: 0xc06df10  jal         func_1B7C40
label_197cd4:
    if (ctx->pc == 0x197CD4u) {
        ctx->pc = 0x197CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CD0u;
        // 0x197cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CD8u;
        goto label_197cd8;
    }
    ctx->pc = 0x197CD0u;
    SET_GPR_U32(ctx, 31, 0x197CD8u);
    ctx->pc = 0x197CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CD0u;
    // 0x197cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x197CD0u, 0x197CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CD8u;
label_197cd8:
    // 0x197cd8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_197cdc:
    if (ctx->pc == 0x197CDCu) {
        ctx->pc = 0x197CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CD8u;
        // 0x197cdc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CE0u;
        goto label_197ce0;
    }
    ctx->pc = 0x197CD8u;
    {
        const bool branch_taken_0x197cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197cd8) {
            ctx->pc = 0x197CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x197CD8u;
            // 0x197cdc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197CECu;
            goto label_197cec;
        }
    }
    ctx->pc = 0x197CE0u;
label_197ce0:
    // 0x197ce0: 0xc066040  jal         func_198100
label_197ce4:
    if (ctx->pc == 0x197CE4u) {
        ctx->pc = 0x197CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CE0u;
        // 0x197ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197CE8u;
        goto label_197ce8;
    }
    ctx->pc = 0x197CE0u;
    SET_GPR_U32(ctx, 31, 0x197CE8u);
    ctx->pc = 0x197CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197CE0u;
    // 0x197ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198100u, 0x197CE0u, 0x197CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197CE8u;
label_197ce8:
    // 0x197ce8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x197ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_197cec:
    // 0x197cec: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x197cecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_197cf0:
    // 0x197cf0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x197cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_197cf4:
    // 0x197cf4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x197cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_197cf8:
    // 0x197cf8: 0x3e00008  jr          $ra
label_197cfc:
    if (ctx->pc == 0x197CFCu) {
        ctx->pc = 0x197CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CF8u;
        // 0x197cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197D00u;
        goto label_fallthrough_0x197cf8;
    }
    ctx->pc = 0x197CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197CF8u;
        // 0x197cfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197cf8:
    ctx->pc = 0x197D00u;
}
