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

// Function: sub_001AABD8
// Address: 0x1aabd8 - 0x1aad20
void sub_001AABD8_0x1aabd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AABD8_0x1aabd8");
#endif

    switch (ctx->pc) {
        case 0x1aabf4u: goto label_1aabf4;
        case 0x1aac18u: goto label_1aac18;
        case 0x1aac50u: goto label_1aac50;
        case 0x1aace4u: goto label_1aace4;
        case 0x1aacfcu: goto label_1aacfc;
        case 0x1aad0cu: goto label_1aad0c;
        default: break;
    }

    ctx->pc = 0x1aabd8u;

    // 0x1aabd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aabd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aabdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aabdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aabe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aabe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aabe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aabe8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aabe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aabec: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AABECu;
    SET_GPR_U32(ctx, 31, 0x1AABF4u);
    ctx->pc = 0x1AABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AABECu;
    // 0x1aabf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AABECu, 0x1AABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AABF4u;
label_1aabf4:
    // 0x1aabf4: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1aabf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aabf8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AABF8u;
    {
        const bool branch_taken_0x1aabf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABF8u;
        // 0x1aabfc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabf8) {
            ctx->pc = 0x1AAC08u;
            goto label_1aac08;
        }
    }
    ctx->pc = 0x1AAC00u;
    // 0x1aac00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1AAC00u;
    {
        const bool branch_taken_0x1aac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC00u;
        // 0x1aac04: 0xc6020174  lwc1        $f2, 0x174($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac00) {
            ctx->pc = 0x1AAC38u;
            goto label_1aac38;
        }
    }
    ctx->pc = 0x1AAC08u;
label_1aac08:
    // 0x1aac08: 0xc6020174  lwc1        $f2, 0x174($s0)
    ctx->pc = 0x1aac08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aac0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aac10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac14: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1aac14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1aac18:
    // 0x1aac18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aac1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAC1Cu;
    {
        const bool branch_taken_0x1aac1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac1c) {
            ctx->pc = 0x1AAC38u;
            goto label_1aac38;
        }
    }
    ctx->pc = 0x1AAC24u;
    // 0x1aac24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aac28: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1aac28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aac2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAC2Cu;
    {
        const bool branch_taken_0x1aac2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC2Cu;
        // 0x1aac30: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac2c) {
            ctx->pc = 0x1AAC18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aac18;
        }
    }
    ctx->pc = 0x1AAC34u;
    // 0x1aac34: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x1aac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_1aac38:
    // 0x1aac38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAC38u;
    {
        const bool branch_taken_0x1aac38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC38u;
        // 0x1aac3c: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac38) {
            ctx->pc = 0x1AAC48u;
            goto label_1aac48;
        }
    }
    ctx->pc = 0x1AAC40u;
    // 0x1aac40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AAC40u;
    {
        const bool branch_taken_0x1aac40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC40u;
        // 0x1aac44: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac40) {
            ctx->pc = 0x1AAC70u;
            goto label_1aac70;
        }
    }
    ctx->pc = 0x1AAC48u;
label_1aac48:
    // 0x1aac48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aac48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aac4c: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_1aac50:
    // 0x1aac50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aac54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAC54u;
    {
        const bool branch_taken_0x1aac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aac54) {
            ctx->pc = 0x1AAC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAC54u;
            // 0x1aac58: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAC74u;
            goto label_1aac74;
        }
    }
    ctx->pc = 0x1AAC5Cu;
    // 0x1aac5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1aac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1aac60: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x1aac60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1aac64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAC64u;
    {
        const bool branch_taken_0x1aac64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC64u;
        // 0x1aac68: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac64) {
            ctx->pc = 0x1AAC50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aac50;
        }
    }
    ctx->pc = 0x1AAC6Cu;
    // 0x1aac6c: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x1aac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_1aac70:
    // 0x1aac70: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1aac70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1aac74:
    // 0x1aac74: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1aac74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1aac78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aac78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aac7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aac7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aac80: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1aac80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aac84: 0x0  nop
    ctx->pc = 0x1aac84u;
    // NOP
    // 0x1aac88: 0x0  nop
    ctx->pc = 0x1aac88u;
    // NOP
    // 0x1aac8c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1aac8cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aac90: 0x46030041  sub.s       $f1, $f0, $f3
    ctx->pc = 0x1aac90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1aac94: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1aac94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aac98: 0x0  nop
    ctx->pc = 0x1aac98u;
    // NOP
    // 0x1aac9c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1AAC9Cu;
    {
        const bool branch_taken_0x1aac9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAC9Cu;
        // 0x1aaca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aac9c) {
            ctx->pc = 0x1AACB4u;
            goto label_1aacb4;
        }
    }
    ctx->pc = 0x1AACA4u;
    // 0x1aaca4: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x1aaca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x1aaca8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aaca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aacac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1AACACu;
    {
        const bool branch_taken_0x1aacac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACACu;
        // 0x1aacb0: 0x9482002a  lhu         $v0, 0x2A($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aacac) {
            ctx->pc = 0x1AACD4u;
            goto label_1aacd4;
        }
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1aacb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1aacb8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1aacb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aacbc: 0x0  nop
    ctx->pc = 0x1aacbcu;
    // NOP
    // 0x1aacc0: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1AACC0u;
    {
        const bool branch_taken_0x1aacc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aacc0) {
            ctx->pc = 0x1AACC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AACC0u;
            // 0x1aacc4: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AACECu;
            goto label_1aacec;
        }
    }
    ctx->pc = 0x1AACC8u;
    // 0x1aacc8: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1aacc8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1aaccc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aacccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aacd0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aacd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aacd4:
    // 0x1aacd4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1aacd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1aacd8: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1aacd8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aacdc: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AACDCu;
    SET_GPR_U32(ctx, 31, 0x1AACE4u);
    ctx->pc = 0x1AACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACDCu;
    // 0x1aace0: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AACDCu, 0x1AACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACE4u;
label_1aace4:
    // 0x1aace4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1AACE4u;
    {
        const bool branch_taken_0x1aace4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AACE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AACE4u;
        // 0x1aace8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aace4) {
            ctx->pc = 0x1AAD10u;
            goto label_1aad10;
        }
    }
    ctx->pc = 0x1AACECu;
label_1aacec:
    // 0x1aacec: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1aacecu;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1aacf0: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1aacf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aacf4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1AACF4u;
    SET_GPR_U32(ctx, 31, 0x1AACFCu);
    ctx->pc = 0x1AACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AACF4u;
    // 0x1aacf8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1AACF4u, 0x1AACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AACFCu;
label_1aacfc:
    // 0x1aacfc: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1aacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aad00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aad00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aad04: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1AAD04u;
    SET_GPR_U32(ctx, 31, 0x1AAD0Cu);
    ctx->pc = 0x1AAD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAD04u;
    // 0x1aad08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1AAD04u, 0x1AAD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAD0Cu;
label_1aad0c:
    // 0x1aad0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aad0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aad10:
    // 0x1aad10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aad14: 0x3e00008  jr          $ra
    ctx->pc = 0x1AAD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AAD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAD14u;
        // 0x1aad18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AAD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AAD1Cu;
    // 0x1aad1c: 0x0  nop
    ctx->pc = 0x1aad1cu;
    // NOP
    ctx->pc = 0x1aad20u;
}
