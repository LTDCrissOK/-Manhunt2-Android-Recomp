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

// Function: sub_001B6A48
// Address: 0x1b6a48 - 0x1b6c70
void sub_001B6A48_0x1b6a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6A48_0x1b6a48");
#endif

    switch (ctx->pc) {
        case 0x1b6a98u: goto label_1b6a98;
        case 0x1b6b4cu: goto label_1b6b4c;
        case 0x1b6b5cu: goto label_1b6b5c;
        case 0x1b6b64u: goto label_1b6b64;
        default: break;
    }

    ctx->pc = 0x1b6a48u;

    // 0x1b6a48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b6a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b6a4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1b6a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1b6a50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1b6a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1b6a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1b6a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1b6a5c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1b6a5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1b6a60: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1b6a60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1b6a64: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1b6a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1b6a68: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1B6A68u;
    {
        const bool branch_taken_0x1b6a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A68u;
        // 0x1b6a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a68) {
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6A70u;
    // 0x1b6a70: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1b6a74: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1b6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1b6a78: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x1b6a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1b6a7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6a80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b6a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b6a84: 0x14430072  bne         $v0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x1B6A84u;
    {
        const bool branch_taken_0x1b6a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A84u;
        // 0x1b6a88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a84) {
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6A8Cu;
    // 0x1b6a8c: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1b6a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1b6a90: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1B6A90u;
    SET_GPR_U32(ctx, 31, 0x1B6A98u);
    ctx->pc = 0x1B6A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6A90u;
    // 0x1b6a94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1B6A90u, 0x1B6A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6A98u;
label_1b6a98:
    // 0x1b6a98: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1B6A98u;
    {
        const bool branch_taken_0x1b6a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A98u;
        // 0x1b6a9c: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a98) {
            ctx->pc = 0x1B6C4Cu;
            goto label_1b6c4c;
        }
    }
    ctx->pc = 0x1B6AA0u;
    // 0x1b6aa0: 0x8e040ff8  lw          $a0, 0xFF8($s0)
    ctx->pc = 0x1b6aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1b6aa4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1b6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b6aa8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b6aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6aac: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6AACu;
    {
        const bool branch_taken_0x1b6aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AACu;
        // 0x1b6ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aac) {
            ctx->pc = 0x1B6AD0u;
            goto label_1b6ad0;
        }
    }
    ctx->pc = 0x1B6AB4u;
    // 0x1b6ab4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b6ab8: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6abc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6ABCu;
    {
        const bool branch_taken_0x1b6abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ABCu;
        // 0x1b6ac0: 0x3c030200  lui         $v1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6abc) {
            ctx->pc = 0x1B6AD0u;
            goto label_1b6ad0;
        }
    }
    ctx->pc = 0x1B6AC4u;
    // 0x1b6ac4: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x1b6ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b6ac8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1b6acc: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1b6accu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b6ad0:
    // 0x1b6ad0: 0x14a0005f  bnez        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x1B6AD0u;
    {
        const bool branch_taken_0x1b6ad0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AD0u;
        // 0x1b6ad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ad0) {
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6AD8u;
    // 0x1b6ad8: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b6ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b6adc: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x1b6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1b6ae0: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x1b6ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1b6ae4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1b6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b6ae8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6aec: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1b6aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1b6af0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1b6af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1b6af4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1b6af4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6af8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1b6af8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6afc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b6afcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6b00: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1b6b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6b04: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1b6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6b08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1b6b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6b0c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1b6b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6b10: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1b6b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b6b14: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b6b18: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1b6b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b6b1c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1b6b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6b20: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1b6b20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1b6b24: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1b6b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6b28: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1b6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6b2c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1b6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b6b30: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b6b30u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b6b34: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b6b34u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b6b38: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x1b6b38u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b6b3c: 0x46150544  c1          0x150544
    ctx->pc = 0x1b6b3cu;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b6b40: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b6b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b6b44: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B6B44u;
    SET_GPR_U32(ctx, 31, 0x1B6B4Cu);
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B6B44u, 0x1B6B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B4Cu;
label_1b6b4c:
    // 0x1b6b4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6B4Cu;
    {
        const bool branch_taken_0x1b6b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b4c) {
            ctx->pc = 0x1B6B90u;
            goto label_1b6b90;
        }
    }
    ctx->pc = 0x1B6B54u;
    // 0x1b6b54: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B6B54u;
    SET_GPR_U32(ctx, 31, 0x1B6B5Cu);
    ctx->pc = 0x1B6B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B54u;
    // 0x1b6b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B6B54u, 0x1B6B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B5Cu;
label_1b6b5c:
    // 0x1b6b5c: 0xc0d8f5a  jal         func_363D68
    ctx->pc = 0x1B6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1B6B64u);
    ctx->pc = 0x1B6B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6B5Cu;
    // 0x1b6b60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363D68u, 0x1B6B5Cu, 0x1B6B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6B64u;
label_1b6b64:
    // 0x1b6b64: 0x8e030ff8  lw          $v1, 0xFF8($s0)
    ctx->pc = 0x1b6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4088)));
    // 0x1b6b68: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1b6b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1b6b6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6b6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6b70: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1b6b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1b6b74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b6b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1b6b78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6B78u;
    {
        const bool branch_taken_0x1b6b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6B78u;
        // 0x1b6b7c: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6b78) {
            ctx->pc = 0x1B6B90u;
            goto label_1b6b90;
        }
    }
    ctx->pc = 0x1B6B80u;
    // 0x1b6b80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6b84: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b6b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1b6b88: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6B88u;
    {
        const bool branch_taken_0x1b6b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6b88) {
            ctx->pc = 0x1B6B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6B88u;
            // 0x1b6b8c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6B90u;
            goto label_1b6b90;
        }
    }
    ctx->pc = 0x1B6B90u;
label_1b6b90:
    // 0x1b6b90: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1b6b90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6b94: 0x0  nop
    ctx->pc = 0x1b6b94u;
    // NOP
    // 0x1b6b98: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1B6B98u;
    {
        const bool branch_taken_0x1b6b98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6b98) {
            ctx->pc = 0x1B6B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6B98u;
            // 0x1b6b9c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6BDCu;
            goto label_1b6bdc;
        }
    }
    ctx->pc = 0x1B6BA0u;
    // 0x1b6ba0: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x1b6ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x1b6ba4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1b6ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1b6ba8: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b6ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b6bac: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x1b6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x1b6bb0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b6bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b6bb4: 0x54450026  bnel        $v0, $a1, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B6BB4u;
    {
        const bool branch_taken_0x1b6bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1b6bb4) {
            ctx->pc = 0x1B6BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6BB4u;
            // 0x1b6bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6BBCu;
    // 0x1b6bbc: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1b6bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x1b6bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6bc4: 0x0  nop
    ctx->pc = 0x1b6bc4u;
    // NOP
    // 0x1b6bc8: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1b6bc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6bcc: 0x0  nop
    ctx->pc = 0x1b6bccu;
    // NOP
    // 0x1b6bd0: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x1B6BD0u;
    {
        const bool branch_taken_0x1b6bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6bd0) {
            ctx->pc = 0x1B6BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6BD0u;
            // 0x1b6bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6BD8u;
    // 0x1b6bd8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1b6bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1b6bdc:
    // 0x1b6bdc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6bdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b6be0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1b6be0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6be4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1b6be4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6be8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1b6be8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1b6bec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1b6becu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1b6bf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1b6bf0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1b6bf4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1b6bf4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6bf8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1b6bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6bfc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x1b6bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1b6c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6c04: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1b6c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1b6c08: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1b6c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6c0c: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1b6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6c10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1b6c10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6c14: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1b6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6c18: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1b6c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6c1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1b6c1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1b6c20: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1b6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6c24: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1b6c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6c28: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1b6c28u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1b6c2c: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x1b6c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
    // 0x1b6c30: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x1b6c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x1b6c34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6c38: 0x0  nop
    ctx->pc = 0x1b6c38u;
    // NOP
    // 0x1b6c3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b6c3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b6c40: 0x0  nop
    ctx->pc = 0x1b6c40u;
    // NOP
    // 0x1b6c44: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6C44u;
    {
        const bool branch_taken_0x1b6c44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C44u;
        // 0x1b6c48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c44) {
            ctx->pc = 0x1B6C50u;
            goto label_1b6c50;
        }
    }
    ctx->pc = 0x1B6C4Cu;
label_1b6c4c:
    // 0x1b6c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6c50:
    // 0x1b6c50: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1b6c50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b6c54: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1b6c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b6c58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b6c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b6c5c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1b6c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b6c60: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1b6c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b6c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C64u;
        // 0x1b6c68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C6Cu;
    // 0x1b6c6c: 0x0  nop
    ctx->pc = 0x1b6c6cu;
    // NOP
    ctx->pc = 0x1b6c70u;
}
