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

// Function: sub_00268B00
// Address: 0x268b00 - 0x268d50
void sub_00268B00_0x268b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268B00_0x268b00");
#endif

    switch (ctx->pc) {
        case 0x268b84u: goto label_268b84;
        case 0x268bb0u: goto label_268bb0;
        case 0x268be8u: goto label_268be8;
        case 0x268bfcu: goto label_268bfc;
        case 0x268c48u: goto label_268c48;
        case 0x268c50u: goto label_268c50;
        case 0x268c98u: goto label_268c98;
        case 0x268cd8u: goto label_268cd8;
        case 0x268ce8u: goto label_268ce8;
        case 0x268d30u: goto label_268d30;
        default: break;
    }

    ctx->pc = 0x268b00u;

    // 0x268b00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x268b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x268b04: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x268b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x268b08: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x268b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x268b0c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x268b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x268b10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x268b10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b14: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x268b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x268b18: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x268b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x268b1c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x268b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x268b20: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x268b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x268b24: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x268b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x268b28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x268b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x268b2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x268b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x268b30: 0x92430297  lbu         $v1, 0x297($s2)
    ctx->pc = 0x268b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
    // 0x268b34: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x268B34u;
    {
        const bool branch_taken_0x268b34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B34u;
        // 0x268b38: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b34) {
            ctx->pc = 0x268B8Cu;
            goto label_268b8c;
        }
    }
    ctx->pc = 0x268B3Cu;
    // 0x268b3c: 0x8e4602d8  lw          $a2, 0x2D8($s2)
    ctx->pc = 0x268b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 728)));
    // 0x268b40: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x268b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x268b44: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x268b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x268b48: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x268b48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268b4c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x268b4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268b50: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x268b50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x268b54: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x268b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x268b58: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x268b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x268b5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b60: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x268b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x268b64: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x268b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268b68: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x268b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x268b6c: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x268b6cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x268b70: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x268b70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x268b74: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x268b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x268b78: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x268b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x268b7c: 0xc041acc  jal         func_106B30
    ctx->pc = 0x268B7Cu;
    SET_GPR_U32(ctx, 31, 0x268B84u);
    ctx->pc = 0x268B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268B7Cu;
    // 0x268b80: 0xc4cc0060  lwc1        $f12, 0x60($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x106B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B30u, 0x268B7Cu, 0x268B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268B84u;
label_268b84:
    // 0x268b84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x268B84u;
    {
        const bool branch_taken_0x268b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268B84u;
        // 0x268b88: 0x264202c4  addiu       $v0, $s2, 0x2C4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268b84) {
            ctx->pc = 0x268BB4u;
            goto label_268bb4;
        }
    }
    ctx->pc = 0x268B8Cu;
label_268b8c:
    // 0x268b8c: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x268b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x268b90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x268b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268b94: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x268b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x268b98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x268b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x268b9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268ba0: 0x264502b0  addiu       $a1, $s2, 0x2B0
    ctx->pc = 0x268ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
    // 0x268ba4: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x268ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x268ba8: 0xc041acc  jal         func_106B30
    ctx->pc = 0x268BA8u;
    SET_GPR_U32(ctx, 31, 0x268BB0u);
    ctx->pc = 0x268BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268BA8u;
    // 0x268bac: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106B30u, 0x268BA8u, 0x268BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BB0u;
label_268bb0:
    // 0x268bb0: 0x264202c4  addiu       $v0, $s2, 0x2C4
    ctx->pc = 0x268bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 708));
label_268bb4:
    // 0x268bb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x268bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x268bb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x268bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268bbc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x268bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x268bc0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x268bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x268bc4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x268bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x268bc8: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x268bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x268bcc: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x268bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x268bd0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x268bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x268bd4: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x268bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x268bd8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x268BD8u;
    {
        const bool branch_taken_0x268bd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x268BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268BD8u;
        // 0x268bdc: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268bd8) {
            ctx->pc = 0x268C34u;
            goto label_268c34;
        }
    }
    ctx->pc = 0x268BE0u;
    // 0x268be0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x268be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x268be4: 0x0  nop
    ctx->pc = 0x268be4u;
    // NOP
label_268be8:
    // 0x268be8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x268be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x268bec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268BECu;
    {
        const bool branch_taken_0x268bec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x268bec) {
            ctx->pc = 0x268C00u;
            goto label_268c00;
        }
    }
    ctx->pc = 0x268BF4u;
    // 0x268bf4: 0xc04019e  jal         func_100678
    ctx->pc = 0x268BF4u;
    SET_GPR_U32(ctx, 31, 0x268BFCu);
    ctx->pc = 0x100678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100678u, 0x268BF4u, 0x268BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268BFCu;
label_268bfc:
    // 0x268bfc: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x268bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_268c00:
    // 0x268c00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x268C00u;
    {
        const bool branch_taken_0x268c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268c00) {
            ctx->pc = 0x268C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268C00u;
            // 0x268c04: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C14u;
            goto label_268c14;
        }
    }
    ctx->pc = 0x268C08u;
    // 0x268c08: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x268c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x268c0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x268C0Cu;
    {
        const bool branch_taken_0x268c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C0Cu;
        // 0x268c10: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c0c) {
            ctx->pc = 0x268C24u;
            goto label_268c24;
        }
    }
    ctx->pc = 0x268C14u;
label_268c14:
    // 0x268c14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x268C14u;
    {
        const bool branch_taken_0x268c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C14u;
        // 0x268c18: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c14) {
            ctx->pc = 0x268C28u;
            goto label_268c28;
        }
    }
    ctx->pc = 0x268C1Cu;
    // 0x268c1c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x268c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x268c20: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x268c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_268c24:
    // 0x268c24: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x268c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_268c28:
    // 0x268c28: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x268c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x268c2c: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x268C2Cu;
    {
        const bool branch_taken_0x268c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x268C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C2Cu;
        // 0x268c30: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c2c) {
            ctx->pc = 0x268BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268be8;
        }
    }
    ctx->pc = 0x268C34u;
label_268c34:
    // 0x268c34: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x268c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268c38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x268C38u;
    {
        const bool branch_taken_0x268c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C38u;
        // 0x268c3c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c38) {
            ctx->pc = 0x268C60u;
            goto label_268c60;
        }
    }
    ctx->pc = 0x268C40u;
    // 0x268c40: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x268c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268c44: 0x0  nop
    ctx->pc = 0x268c44u;
    // NOP
label_268c48:
    // 0x268c48: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x268C48u;
    SET_GPR_U32(ctx, 31, 0x268C50u);
    ctx->pc = 0x268C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268C48u;
    // 0x268c4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x268C48u, 0x268C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268C50u;
label_268c50:
    // 0x268c50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x268c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x268c54: 0x0  nop
    ctx->pc = 0x268c54u;
    // NOP
    // 0x268c58: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x268C58u;
    {
        const bool branch_taken_0x268c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268c58) {
            ctx->pc = 0x268C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268C58u;
            // 0x268c5c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268c48;
        }
    }
    ctx->pc = 0x268C60u;
label_268c60:
    // 0x268c60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x268c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268c64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x268c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268c68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x268c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x268c6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x268c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x268c70: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x268c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x268c74: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x268c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x268c78: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x268c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x268c7c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x268C7Cu;
    {
        const bool branch_taken_0x268c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C7Cu;
        // 0x268c80: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c7c) {
            ctx->pc = 0x268C88u;
            goto label_268c88;
        }
    }
    ctx->pc = 0x268C84u;
    // 0x268c84: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x268c84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_268c88:
    // 0x268c88: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x268C88u;
    {
        const bool branch_taken_0x268c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C88u;
        // 0x268c8c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c88) {
            ctx->pc = 0x268D18u;
            goto label_268d18;
        }
    }
    ctx->pc = 0x268C90u;
    // 0x268c90: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x268c90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268c94: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x268c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
label_268c98:
    // 0x268c98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x268C98u;
    {
        const bool branch_taken_0x268c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268C98u;
        // 0x268c9c: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268c98) {
            ctx->pc = 0x268CA4u;
            goto label_268ca4;
        }
    }
    ctx->pc = 0x268CA0u;
    // 0x268ca0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x268ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_268ca4:
    // 0x268ca4: 0x50740007  beql        $v1, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x268CA4u;
    {
        const bool branch_taken_0x268ca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x268ca4) {
            ctx->pc = 0x268CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268CA4u;
            // 0x268ca8: 0x92420297  lbu         $v0, 0x297($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268CC4u;
            goto label_268cc4;
        }
    }
    ctx->pc = 0x268CACu;
    // 0x268cac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x268CACu;
    {
        const bool branch_taken_0x268cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x268cac) {
            ctx->pc = 0x268CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268CACu;
            // 0x268cb0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268CB8u;
            goto label_268cb8;
        }
    }
    ctx->pc = 0x268CB4u;
    // 0x268cb4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x268cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_268cb8:
    // 0x268cb8: 0x14530009  bne         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x268CB8u;
    {
        const bool branch_taken_0x268cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x268CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CB8u;
        // 0x268cbc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cb8) {
            ctx->pc = 0x268CE0u;
            goto label_268ce0;
        }
    }
    ctx->pc = 0x268CC0u;
    // 0x268cc0: 0x92420297  lbu         $v0, 0x297($s2)
    ctx->pc = 0x268cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 663)));
label_268cc4:
    // 0x268cc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x268CC4u;
    {
        const bool branch_taken_0x268cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CC4u;
        // 0x268cc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cc4) {
            ctx->pc = 0x268CE0u;
            goto label_268ce0;
        }
    }
    ctx->pc = 0x268CCCu;
    // 0x268ccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x268cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268cd0: 0xc09a2b8  jal         func_268AE0
    ctx->pc = 0x268CD0u;
    SET_GPR_U32(ctx, 31, 0x268CD8u);
    ctx->pc = 0x268CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CD0u;
    // 0x268cd4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268AE0u, 0x268CD0u, 0x268CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CD8u;
label_268cd8:
    // 0x268cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268CD8u;
    {
        const bool branch_taken_0x268cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CD8u;
        // 0x268cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cd8) {
            ctx->pc = 0x268CF0u;
            goto label_268cf0;
        }
    }
    ctx->pc = 0x268CE0u;
label_268ce0:
    // 0x268ce0: 0xc0f620c  jal         func_3D8830
    ctx->pc = 0x268CE0u;
    SET_GPR_U32(ctx, 31, 0x268CE8u);
    ctx->pc = 0x268CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268CE0u;
    // 0x268ce4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8830u, 0x268CE0u, 0x268CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268CE8u;
label_268ce8:
    // 0x268ce8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x268CE8u;
    {
        const bool branch_taken_0x268ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CE8u;
        // 0x268cec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ce8) {
            ctx->pc = 0x268D1Cu;
            goto label_268d1c;
        }
    }
    ctx->pc = 0x268CF0u;
label_268cf0:
    // 0x268cf0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x268cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x268cf4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x268cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268cf8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268CF8u;
    {
        const bool branch_taken_0x268cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x268CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268CF8u;
        // 0x268cfc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268cf8) {
            ctx->pc = 0x268D10u;
            goto label_268d10;
        }
    }
    ctx->pc = 0x268D00u;
    // 0x268d00: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x268d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x268d04: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x268D04u;
    {
        const bool branch_taken_0x268d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x268D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D04u;
        // 0x268d08: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d04) {
            ctx->pc = 0x268D10u;
            goto label_268d10;
        }
    }
    ctx->pc = 0x268D0Cu;
    // 0x268d0c: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x268d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_268d10:
    // 0x268d10: 0x5620ffe1  bnel        $s1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x268D10u;
    {
        const bool branch_taken_0x268d10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x268d10) {
            ctx->pc = 0x268D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268D10u;
            // 0x268d14: 0x8e420220  lw          $v0, 0x220($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_268c98;
        }
    }
    ctx->pc = 0x268D18u;
label_268d18:
    // 0x268d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268d1c:
    // 0x268d1c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x268d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268d20: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x268D20u;
    {
        const bool branch_taken_0x268d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D20u;
        // 0x268d24: 0xae4202c0  sw          $v0, 0x2C0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268d20) {
            ctx->pc = 0x268D30u;
            goto label_268d30;
        }
    }
    ctx->pc = 0x268D28u;
    // 0x268d28: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x268D28u;
    SET_GPR_U32(ctx, 31, 0x268D30u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x268D28u, 0x268D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268D30u;
label_268d30:
    // 0x268d30: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x268d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268d34: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x268d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x268d38: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x268d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x268d3c: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x268d3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x268d40: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x268d40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x268d44: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x268d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x268d48: 0x3e00008  jr          $ra
    ctx->pc = 0x268D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268D48u;
        // 0x268d4c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268D50u;
}
