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

// Function: sub_00275AC0
// Address: 0x275ac0 - 0x275ca8
void sub_00275AC0_0x275ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275AC0_0x275ac0");
#endif

    switch (ctx->pc) {
        case 0x275b10u: goto label_275b10;
        case 0x275b6cu: goto label_275b6c;
        case 0x275ba4u: goto label_275ba4;
        case 0x275bb4u: goto label_275bb4;
        case 0x275bc8u: goto label_275bc8;
        case 0x275c88u: goto label_275c88;
        default: break;
    }

    ctx->pc = 0x275ac0u;

    // 0x275ac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x275ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x275ac4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x275ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x275ac8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x275ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x275acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x275accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ad0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x275ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x275ad4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x275ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x275ad8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x275ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x275adc: 0x8e031e78  lw          $v1, 0x1E78($s0)
    ctx->pc = 0x275adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7800)));
    // 0x275ae0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x275AE0u;
    {
        const bool branch_taken_0x275ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AE0u;
        // 0x275ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ae0) {
            ctx->pc = 0x275C88u;
            goto label_275c88;
        }
    }
    ctx->pc = 0x275AE8u;
    // 0x275ae8: 0x54620068  bnel        $v1, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x275AE8u;
    {
        const bool branch_taken_0x275ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x275ae8) {
            ctx->pc = 0x275AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275AE8u;
            // 0x275aec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C8Cu;
            goto label_275c8c;
        }
    }
    ctx->pc = 0x275AF0u;
    // 0x275af0: 0x92020370  lbu         $v0, 0x370($s0)
    ctx->pc = 0x275af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 880)));
    // 0x275af4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x275AF4u;
    {
        const bool branch_taken_0x275af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275AF4u;
        // 0x275af8: 0x26121e80  addiu       $s2, $s0, 0x1E80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275af4) {
            ctx->pc = 0x275B64u;
            goto label_275b64;
        }
    }
    ctx->pc = 0x275AFCu;
    // 0x275afc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x275afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x275b00: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x275B00u;
    {
        const bool branch_taken_0x275b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275b00) {
            ctx->pc = 0x275B64u;
            goto label_275b64;
        }
    }
    ctx->pc = 0x275B08u;
    // 0x275b08: 0xc09d9b8  jal         func_2766E0
    ctx->pc = 0x275B08u;
    SET_GPR_U32(ctx, 31, 0x275B10u);
    ctx->pc = 0x275B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B08u;
    // 0x275b0c: 0x8e041e80  lw          $a0, 0x1E80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766E0u, 0x275B08u, 0x275B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B10u;
label_275b10:
    // 0x275b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x275b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b14: 0x5080005d  beql        $a0, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x275B14u;
    {
        const bool branch_taken_0x275b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x275b14) {
            ctx->pc = 0x275B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275B14u;
            // 0x275b18: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C8Cu;
            goto label_275c8c;
        }
    }
    ctx->pc = 0x275B1Cu;
    // 0x275b1c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x275b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x275b20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275b24: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x275b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x275b28: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x275b28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275b2c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x275b2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275b30: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x275b30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275b34: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x275b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275b38: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x275b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275b3c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x275b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275b40: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x275b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275b44: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x275b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275b48: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x275b48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275b4c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x275b4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275b50: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x275b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x275b54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x275b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275b58: 0xfa0102c0  sqc2        $vf1, 0x2C0($s0)
    ctx->pc = 0x275b58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275b5c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x275B5Cu;
    {
        const bool branch_taken_0x275b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275B5Cu;
        // 0x275b60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275b5c) {
            ctx->pc = 0x275C8Cu;
            goto label_275c8c;
        }
    }
    ctx->pc = 0x275B64u;
label_275b64:
    // 0x275b64: 0xc09da86  jal         func_276A18
    ctx->pc = 0x275B64u;
    SET_GPR_U32(ctx, 31, 0x275B6Cu);
    ctx->pc = 0x275B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B64u;
    // 0x275b68: 0x8e041e88  lw          $a0, 0x1E88($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7816)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276A18u, 0x275B64u, 0x275B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B6Cu;
label_275b6c:
    // 0x275b6c: 0x8e041e90  lw          $a0, 0x1E90($s0)
    ctx->pc = 0x275b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7824)));
    // 0x275b70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x275b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b74: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x275b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x275b78: 0xae031e90  sw          $v1, 0x1E90($s0)
    ctx->pc = 0x275b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7824), GPR_U32(ctx, 3));
    // 0x275b7c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x275b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x275b80: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275B80u;
    {
        const bool branch_taken_0x275b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x275b80) {
            ctx->pc = 0x275B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275B80u;
            // 0x275b84: 0x8e051e90  lw          $a1, 0x1E90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275B9Cu;
            goto label_275b9c;
        }
    }
    ctx->pc = 0x275B88u;
    // 0x275b88: 0x92021e94  lbu         $v0, 0x1E94($s0)
    ctx->pc = 0x275b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7828)));
    // 0x275b8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x275b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b90: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x275b90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x275b94: 0xae031e90  sw          $v1, 0x1E90($s0)
    ctx->pc = 0x275b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7824), GPR_U32(ctx, 3));
    // 0x275b98: 0x8e051e90  lw          $a1, 0x1E90($s0)
    ctx->pc = 0x275b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7824)));
label_275b9c:
    // 0x275b9c: 0xc09d7da  jal         func_275F68
    ctx->pc = 0x275B9Cu;
    SET_GPR_U32(ctx, 31, 0x275BA4u);
    ctx->pc = 0x275BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B9Cu;
    // 0x275ba0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275F68u, 0x275B9Cu, 0x275BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BA4u;
label_275ba4:
    // 0x275ba4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x275ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x275ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275bac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x275BACu;
    SET_GPR_U32(ctx, 31, 0x275BB4u);
    ctx->pc = 0x275BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BACu;
    // 0x275bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x275BACu, 0x275BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BB4u;
label_275bb4:
    // 0x275bb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x275bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x275bb8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x275BB8u;
    {
        const bool branch_taken_0x275bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275bb8) {
            ctx->pc = 0x275BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275BB8u;
            // 0x275bbc: 0x92021e94  lbu         $v0, 0x1E94($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7828)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C4Cu;
            goto label_275c4c;
        }
    }
    ctx->pc = 0x275BC0u;
    // 0x275bc0: 0xc09d9b8  jal         func_2766E0
    ctx->pc = 0x275BC0u;
    SET_GPR_U32(ctx, 31, 0x275BC8u);
    ctx->pc = 0x275BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275BC0u;
    // 0x275bc4: 0x8e041e80  lw          $a0, 0x1E80($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7808)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2766E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2766E0u, 0x275BC0u, 0x275BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BC8u;
label_275bc8:
    // 0x275bc8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x275bcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x275bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x275bd0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x275bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x275bd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x275bd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x275bd8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x275bd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275bdc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x275bdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x275be0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x275be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x275be4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x275be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275be8: 0x92020374  lbu         $v0, 0x374($s0)
    ctx->pc = 0x275be8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 884)));
    // 0x275bec: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x275becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275bf0: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x275bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275bf4: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x275bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275bf8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x275bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x275bfc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x275bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x275c00: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x275c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x275c04: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x275c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x275c08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x275c0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275C0Cu;
    {
        const bool branch_taken_0x275c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C0Cu;
        // 0x275c10: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c0c) {
            ctx->pc = 0x275C1Cu;
            goto label_275c1c;
        }
    }
    ctx->pc = 0x275C14u;
    // 0x275c14: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x275c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x275c18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x275c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_275c1c:
    // 0x275c1c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x275c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x275c20: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x275c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x275c24: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x275c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x275c28: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x275c28u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x275c2c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x275c2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x275c30: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x275c30u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x275c34: 0x46000004  c1          0x4
    ctx->pc = 0x275c34u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x275c38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x275c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275c3c: 0x0  nop
    ctx->pc = 0x275c3cu;
    // NOP
    // 0x275c40: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x275C40u;
    {
        const bool branch_taken_0x275c40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x275c40) {
            ctx->pc = 0x275C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C40u;
            // 0x275c44: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C8Cu;
            goto label_275c8c;
        }
    }
    ctx->pc = 0x275C48u;
    // 0x275c48: 0x92021e94  lbu         $v0, 0x1E94($s0)
    ctx->pc = 0x275c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7828)));
label_275c4c:
    // 0x275c4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x275c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c50: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275C50u;
    {
        const bool branch_taken_0x275c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C50u;
        // 0x275c54: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c50) {
            ctx->pc = 0x275C68u;
            goto label_275c68;
        }
    }
    ctx->pc = 0x275C58u;
    // 0x275c58: 0x8e031e90  lw          $v1, 0x1E90($s0)
    ctx->pc = 0x275c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7824)));
    // 0x275c5c: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x275c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x275c60: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x275C60u;
    {
        const bool branch_taken_0x275c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x275c60) {
            ctx->pc = 0x275C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275C60u;
            // 0x275c64: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C78u;
            goto label_275c78;
        }
    }
    ctx->pc = 0x275C68u;
label_275c68:
    // 0x275c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x275c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275c6c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x275C6Cu;
    {
        const bool branch_taken_0x275c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x275C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C6Cu;
        // 0x275c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c6c) {
            ctx->pc = 0x275C7Cu;
            goto label_275c7c;
        }
    }
    ctx->pc = 0x275C74u;
    // 0x275c74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x275c74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_275c78:
    // 0x275c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_275c7c:
    // 0x275c7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c80: 0xc09d5d0  jal         func_275740
    ctx->pc = 0x275C80u;
    SET_GPR_U32(ctx, 31, 0x275C88u);
    ctx->pc = 0x275C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C80u;
    // 0x275c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275740u, 0x275C80u, 0x275C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C88u;
label_275c88:
    // 0x275c88: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x275c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_275c8c:
    // 0x275c8c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x275c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x275c90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x275c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275c94: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x275c94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x275c98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x275c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x275c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x275C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C9Cu;
        // 0x275ca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275CA4u;
    // 0x275ca4: 0x0  nop
    ctx->pc = 0x275ca4u;
    // NOP
    ctx->pc = 0x275ca8u;
}
