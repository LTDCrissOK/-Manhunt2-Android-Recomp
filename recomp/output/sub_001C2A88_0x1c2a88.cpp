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

// Function: sub_001C2A88
// Address: 0x1c2a88 - 0x1c2bc8
void sub_001C2A88_0x1c2a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2A88_0x1c2a88");
#endif

    switch (ctx->pc) {
        case 0x1c2ab0u: goto label_1c2ab0;
        case 0x1c2bacu: goto label_1c2bac;
        default: break;
    }

    ctx->pc = 0x1c2a88u;

    // 0x1c2a88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c2a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c2a8c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c2a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c2a90: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c2a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c2a94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a98: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c2a9c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c2a9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2aa0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1c2aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1c2aa4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c2aa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2aa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C2AA8u;
    SET_GPR_U32(ctx, 31, 0x1C2AB0u);
    ctx->pc = 0x1C2AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA8u;
    // 0x1c2aac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C2AA8u, 0x1C2AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2AB0u;
label_1c2ab0:
    // 0x1c2ab0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c2ab4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C2AB4u;
    {
        const bool branch_taken_0x1c2ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2ab4) {
            ctx->pc = 0x1C2B7Cu;
            goto label_1c2b7c;
        }
    }
    ctx->pc = 0x1C2ABCu;
    // 0x1c2abc: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c2ac0: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c2ac4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2ac8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1c2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1c2acc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2accu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2ad0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2ad4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c2ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c2ad8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2adc: 0xc461c61c  lwc1        $f1, -0x39E4($v1)
    ctx->pc = 0x1c2adcu;
    { uint32_t bits = FAST_READ32(0x45C61Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2ae0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1c2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1c2ae4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c2ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c2ae8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1c2ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1c2aec: 0x8ca6036c  lw          $a2, 0x36C($a1)
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 876)));
    // 0x1c2af0: 0xc41024  and         $v0, $a2, $a0
    ctx->pc = 0x1c2af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c2af4: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C2AF4u;
    {
        const bool branch_taken_0x1c2af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C2AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2AF4u;
        // 0x1c2af8: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2af4) {
            ctx->pc = 0x1C2B20u;
            goto label_1c2b20;
        }
    }
    ctx->pc = 0x1C2AFCu;
    // 0x1c2afc: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c2b00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2b04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c2b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c2b08: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2b08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b0c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2b0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2b10: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2b10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2b14: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c2b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2b18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C2B18u;
    {
        const bool branch_taken_0x1c2b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B18u;
        // 0x1c2b1c: 0xc7a30020  lwc1        $f3, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b18) {
            ctx->pc = 0x1C2B4Cu;
            goto label_1c2b4c;
        }
    }
    ctx->pc = 0x1C2B20u;
label_1c2b20:
    // 0x1c2b20: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x1c2b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c2b24: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C2B24u;
    {
        const bool branch_taken_0x1c2b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c2b24) {
            ctx->pc = 0x1C2B84u;
            goto label_1c2b84;
        }
    }
    ctx->pc = 0x1C2B2Cu;
    // 0x1c2b2c: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x1c2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c2b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c2b34: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1c2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1c2b38: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b3c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c2b3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2b40: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c2b40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c2b44: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1c2b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2b48: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1c2b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c2b4c:
    // 0x1c2b4c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1c2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c2b50: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1c2b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c2b54: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1c2b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c2b58: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1c2b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c2b5c: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1c2b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1c2b60: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1c2b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1c2b64: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1c2b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1c2b68: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1c2b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1c2b6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c2b6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2b70: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c2b74: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2B74u;
    {
        const bool branch_taken_0x1c2b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b74) {
            ctx->pc = 0x1C2B84u;
            goto label_1c2b84;
        }
    }
    ctx->pc = 0x1C2B7Cu;
label_1c2b7c:
    // 0x1c2b7c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1c2b7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c2b80: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c2b84:
    // 0x1c2b84: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B84u;
    {
        const bool branch_taken_0x1c2b84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2b84) {
            ctx->pc = 0x1C2B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2B84u;
            // 0x1c2b88: 0x8e4204bc  lw          $v0, 0x4BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2B98u;
            goto label_1c2b98;
        }
    }
    ctx->pc = 0x1C2B8Cu;
    // 0x1c2b8c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1c2b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1c2b90: 0x2451f140  addiu       $s1, $v0, -0xEC0
    ctx->pc = 0x1c2b90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963520));
    // 0x1c2b94: 0x8e4204bc  lw          $v0, 0x4BC($s2)
    ctx->pc = 0x1c2b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1c2b98:
    // 0x1c2b98: 0x264601e0  addiu       $a2, $s2, 0x1E0
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
    // 0x1c2b9c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c2b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ba0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c2ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ba4: 0xc0718c6  jal         func_1C6318
    ctx->pc = 0x1C2BA4u;
    SET_GPR_U32(ctx, 31, 0x1C2BACu);
    ctx->pc = 0x1C2BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2BA4u;
    // 0x1c2ba8: 0x8c440ffc  lw          $a0, 0xFFC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6318u, 0x1C2BA4u, 0x1C2BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2BACu;
label_1c2bac:
    // 0x1c2bac: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c2bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2bb0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c2bb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c2bb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c2bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2bb8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1c2bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c2bbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BBCu;
        // 0x1c2bc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2BBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2BC4u;
    // 0x1c2bc4: 0x0  nop
    ctx->pc = 0x1c2bc4u;
    // NOP
    ctx->pc = 0x1c2bc8u;
}
