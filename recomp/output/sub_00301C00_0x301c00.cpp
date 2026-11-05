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

// Function: sub_00301C00
// Address: 0x301c00 - 0x301d48
void sub_00301C00_0x301c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00301C00_0x301c00");
#endif

    switch (ctx->pc) {
        case 0x301c24u: goto label_301c24;
        case 0x301ca4u: goto label_301ca4;
        case 0x301cc8u: goto label_301cc8;
        case 0x301cf4u: goto label_301cf4;
        case 0x301d30u: goto label_301d30;
        default: break;
    }

    ctx->pc = 0x301c00u;

    // 0x301c00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x301c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x301c04: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x301c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x301c08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x301c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x301c0c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x301c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x301c10: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x301c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301c14: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x301c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x301c18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x301c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x301c1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x301C1Cu;
    SET_GPR_U32(ctx, 31, 0x301C24u);
    ctx->pc = 0x301C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C1Cu;
    // 0x301c20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x301C1Cu, 0x301C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301C24u;
label_301c24:
    // 0x301c24: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x301c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x301c28: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x301c28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x301c2c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x301c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x301c30: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x301c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x301c34: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x301c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x301c38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x301c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x301c3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x301c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x301c40: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x301c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x301c44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x301c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x301c48: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x301c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301c4c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x301c4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x301c50: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x301c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x301c54: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x301c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301c58: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x301c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x301c5c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x301c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x301c60: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x301c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x301c64: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x301c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x301c68: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x301c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x301c6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x301c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x301c70: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x301c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x301c74: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x301c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x301c78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x301c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301c7c: 0x24431dd8  addiu       $v1, $v0, 0x1DD8
    ctx->pc = 0x301c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 7640));
    // 0x301c80: 0x9c471dd8  lwu         $a3, 0x1DD8($v0)
    ctx->pc = 0x301c80u;
    SET_GPR_ZE32(ctx, 7, FAST_READ32(0x471DD8u));
    // 0x301c84: 0x9c660004  lwu         $a2, 0x4($v1)
    ctx->pc = 0x301c84u;
    SET_GPR_ZE32(ctx, 6, FAST_READ32(0x471DDCu));
    // 0x301c88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x301c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x301c8c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x301c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x301c90: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x301c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x301c94: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x301c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x301c98: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x301c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x301c9c: 0xc08560a  jal         func_215828
    ctx->pc = 0x301C9Cu;
    SET_GPR_U32(ctx, 31, 0x301CA4u);
    ctx->pc = 0x301CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301C9Cu;
    // 0x301ca0: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215828u, 0x301C9Cu, 0x301CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CA4u;
label_301ca4:
    // 0x301ca4: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x301ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301ca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x301ca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x301cac: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x301cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x301cb0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301CB0u;
    {
        const bool branch_taken_0x301cb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x301CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CB0u;
        // 0x301cb4: 0xafa30070  sw          $v1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cb0) {
            ctx->pc = 0x301CBCu;
            goto label_301cbc;
        }
    }
    ctx->pc = 0x301CB8u;
    // 0x301cb8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x301cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_301cbc:
    // 0x301cbc: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x301CBCu;
    {
        const bool branch_taken_0x301cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x301CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CBCu;
        // 0x301cc0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cbc) {
            ctx->pc = 0x301D1Cu;
            goto label_301d1c;
        }
    }
    ctx->pc = 0x301CC4u;
    // 0x301cc4: 0x90a20220  lbu         $v0, 0x220($a1)
    ctx->pc = 0x301cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
label_301cc8:
    // 0x301cc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x301CC8u;
    {
        const bool branch_taken_0x301cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CC8u;
        // 0x301ccc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cc8) {
            ctx->pc = 0x301CDCu;
            goto label_301cdc;
        }
    }
    ctx->pc = 0x301CD0u;
    // 0x301cd0: 0x8ca20224  lw          $v0, 0x224($a1)
    ctx->pc = 0x301cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x301cd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x301cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x301cd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x301cd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301cdc:
    // 0x301cdc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x301cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x301ce0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x301CE0u;
    {
        const bool branch_taken_0x301ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x301CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CE0u;
        // 0x301ce4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301ce0) {
            ctx->pc = 0x301CF4u;
            goto label_301cf4;
        }
    }
    ctx->pc = 0x301CE8u;
    // 0x301ce8: 0x8ca40224  lw          $a0, 0x224($a1)
    ctx->pc = 0x301ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x301cec: 0xc097466  jal         func_25D198
    ctx->pc = 0x301CECu;
    SET_GPR_U32(ctx, 31, 0x301CF4u);
    ctx->pc = 0x301CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x301CECu;
    // 0x301cf0: 0x8e05bd48  lw          $a1, -0x42B8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D198u, 0x301CECu, 0x301CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301CF4u;
label_301cf4:
    // 0x301cf4: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x301cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x301cf8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x301cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x301cfc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x301CFCu;
    {
        const bool branch_taken_0x301cfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x301D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301CFCu;
        // 0x301d00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301cfc) {
            ctx->pc = 0x301D14u;
            goto label_301d14;
        }
    }
    ctx->pc = 0x301D04u;
    // 0x301d04: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x301d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x301d08: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x301D08u;
    {
        const bool branch_taken_0x301d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x301D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D08u;
        // 0x301d0c: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d08) {
            ctx->pc = 0x301D14u;
            goto label_301d14;
        }
    }
    ctx->pc = 0x301D10u;
    // 0x301d10: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x301d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_301d14:
    // 0x301d14: 0x54a0ffec  bnel        $a1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x301D14u;
    {
        const bool branch_taken_0x301d14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x301d14) {
            ctx->pc = 0x301D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x301D14u;
            // 0x301d18: 0x90a20220  lbu         $v0, 0x220($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x301CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_301cc8;
        }
    }
    ctx->pc = 0x301D1Cu;
label_301d1c:
    // 0x301d1c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x301d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x301d20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x301D20u;
    {
        const bool branch_taken_0x301d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x301D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D20u;
        // 0x301d24: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x301d20) {
            ctx->pc = 0x301D34u;
            goto label_301d34;
        }
    }
    ctx->pc = 0x301D28u;
    // 0x301d28: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x301D28u;
    SET_GPR_U32(ctx, 31, 0x301D30u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x301D28u, 0x301D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x301D30u;
label_301d30:
    // 0x301d30: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x301d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_301d34:
    // 0x301d34: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x301d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x301d38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x301d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x301d3c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x301d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x301d40: 0x3e00008  jr          $ra
    ctx->pc = 0x301D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x301D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x301D40u;
        // 0x301d44: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x301D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x301D48u;
}
