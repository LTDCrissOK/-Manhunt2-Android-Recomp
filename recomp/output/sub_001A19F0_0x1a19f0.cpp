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

// Function: sub_001A19F0
// Address: 0x1a19f0 - 0x1a1b28
void sub_001A19F0_0x1a19f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A19F0_0x1a19f0");
#endif

    switch (ctx->pc) {
        case 0x1a19f0u: goto label_1a19f0;
        case 0x1a19f4u: goto label_1a19f4;
        case 0x1a19f8u: goto label_1a19f8;
        case 0x1a19fcu: goto label_1a19fc;
        case 0x1a1a00u: goto label_1a1a00;
        case 0x1a1a04u: goto label_1a1a04;
        case 0x1a1a08u: goto label_1a1a08;
        case 0x1a1a0cu: goto label_1a1a0c;
        case 0x1a1a10u: goto label_1a1a10;
        case 0x1a1a14u: goto label_1a1a14;
        case 0x1a1a18u: goto label_1a1a18;
        case 0x1a1a1cu: goto label_1a1a1c;
        case 0x1a1a20u: goto label_1a1a20;
        case 0x1a1a24u: goto label_1a1a24;
        case 0x1a1a28u: goto label_1a1a28;
        case 0x1a1a2cu: goto label_1a1a2c;
        case 0x1a1a30u: goto label_1a1a30;
        case 0x1a1a34u: goto label_1a1a34;
        case 0x1a1a38u: goto label_1a1a38;
        case 0x1a1a3cu: goto label_1a1a3c;
        case 0x1a1a40u: goto label_1a1a40;
        case 0x1a1a44u: goto label_1a1a44;
        case 0x1a1a48u: goto label_1a1a48;
        case 0x1a1a4cu: goto label_1a1a4c;
        case 0x1a1a50u: goto label_1a1a50;
        case 0x1a1a54u: goto label_1a1a54;
        case 0x1a1a58u: goto label_1a1a58;
        case 0x1a1a5cu: goto label_1a1a5c;
        case 0x1a1a60u: goto label_1a1a60;
        case 0x1a1a64u: goto label_1a1a64;
        case 0x1a1a68u: goto label_1a1a68;
        case 0x1a1a6cu: goto label_1a1a6c;
        case 0x1a1a70u: goto label_1a1a70;
        case 0x1a1a74u: goto label_1a1a74;
        case 0x1a1a78u: goto label_1a1a78;
        case 0x1a1a7cu: goto label_1a1a7c;
        case 0x1a1a80u: goto label_1a1a80;
        case 0x1a1a84u: goto label_1a1a84;
        case 0x1a1a88u: goto label_1a1a88;
        case 0x1a1a8cu: goto label_1a1a8c;
        case 0x1a1a90u: goto label_1a1a90;
        case 0x1a1a94u: goto label_1a1a94;
        case 0x1a1a98u: goto label_1a1a98;
        case 0x1a1a9cu: goto label_1a1a9c;
        case 0x1a1aa0u: goto label_1a1aa0;
        case 0x1a1aa4u: goto label_1a1aa4;
        case 0x1a1aa8u: goto label_1a1aa8;
        case 0x1a1aacu: goto label_1a1aac;
        case 0x1a1ab0u: goto label_1a1ab0;
        case 0x1a1ab4u: goto label_1a1ab4;
        case 0x1a1ab8u: goto label_1a1ab8;
        case 0x1a1abcu: goto label_1a1abc;
        case 0x1a1ac0u: goto label_1a1ac0;
        case 0x1a1ac4u: goto label_1a1ac4;
        case 0x1a1ac8u: goto label_1a1ac8;
        case 0x1a1accu: goto label_1a1acc;
        case 0x1a1ad0u: goto label_1a1ad0;
        case 0x1a1ad4u: goto label_1a1ad4;
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1adcu: goto label_1a1adc;
        case 0x1a1ae0u: goto label_1a1ae0;
        case 0x1a1ae4u: goto label_1a1ae4;
        case 0x1a1ae8u: goto label_1a1ae8;
        case 0x1a1aecu: goto label_1a1aec;
        case 0x1a1af0u: goto label_1a1af0;
        case 0x1a1af4u: goto label_1a1af4;
        case 0x1a1af8u: goto label_1a1af8;
        case 0x1a1afcu: goto label_1a1afc;
        case 0x1a1b00u: goto label_1a1b00;
        case 0x1a1b04u: goto label_1a1b04;
        case 0x1a1b08u: goto label_1a1b08;
        case 0x1a1b0cu: goto label_1a1b0c;
        case 0x1a1b10u: goto label_1a1b10;
        case 0x1a1b14u: goto label_1a1b14;
        case 0x1a1b18u: goto label_1a1b18;
        case 0x1a1b1cu: goto label_1a1b1c;
        case 0x1a1b20u: goto label_1a1b20;
        case 0x1a1b24u: goto label_1a1b24;
        default: break;
    }

    ctx->pc = 0x1a19f0u;

label_1a19f0:
    // 0x1a19f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a19f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a19f4:
    // 0x1a19f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a19f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a19f8:
    // 0x1a19f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a19fc:
    // 0x1a19fc: 0xc061a26  jal         func_186898
label_1a1a00:
    if (ctx->pc == 0x1A1A00u) {
        ctx->pc = 0x1A1A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19FCu;
        // 0x1a1a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A04u;
        goto label_1a1a04;
    }
    ctx->pc = 0x1A19FCu;
    SET_GPR_U32(ctx, 31, 0x1A1A04u);
    ctx->pc = 0x1A1A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A19FCu;
    // 0x1a1a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A19FCu, 0x1A1A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A04u;
label_1a1a04:
    // 0x1a1a04: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x1a1a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a1a08:
    // 0x1a1a08: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a1a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1a1a0c:
    // 0x1a1a0c: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1a1a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1a1a10:
    // 0x1a1a10: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1a1a14:
    if (ctx->pc == 0x1A1A14u) {
        ctx->pc = 0x1A1A18u;
        goto label_1a1a18;
    }
    ctx->pc = 0x1A1A10u;
    {
        const bool branch_taken_0x1a1a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a10) {
            ctx->pc = 0x1A1A78u;
            goto label_1a1a78;
        }
    }
    ctx->pc = 0x1A1A18u;
label_1a1a18:
    // 0x1a1a18: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1a1a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1a1c:
    // 0x1a1a1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a1a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a20:
    // 0x1a1a20: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x1a1a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
label_1a1a24:
    // 0x1a1a24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1a28:
    // 0x1a1a28: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x1a1a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_1a1a2c:
    // 0x1a1a2c: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x1a1a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a1a30:
    // 0x1a1a30: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a1a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a1a34:
    // 0x1a1a34: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1a1a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a1a38:
    // 0x1a1a38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a1a38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a1a3c:
    // 0x1a1a3c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a1a3cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a1a40:
    // 0x1a1a40: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1a1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_1a1a44:
    // 0x1a1a44: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1a1a44u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1a1a48:
    // 0x1a1a48: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a1a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a1a4c:
    // 0x1a1a4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1a1a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a1a50:
    // 0x1a1a50: 0xc061a12  jal         func_186848
label_1a1a54:
    if (ctx->pc == 0x1A1A54u) {
        ctx->pc = 0x1A1A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A50u;
        // 0x1a1a54: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A58u;
        goto label_1a1a58;
    }
    ctx->pc = 0x1A1A50u;
    SET_GPR_U32(ctx, 31, 0x1A1A58u);
    ctx->pc = 0x1A1A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A50u;
    // 0x1a1a54: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A1A50u, 0x1A1A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A58u;
label_1a1a58:
    // 0x1a1a58: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a1a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a1a5c:
    // 0x1a1a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a1a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a1a60:
    // 0x1a1a60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a1a64:
    // 0x1a1a64: 0x40f809  jalr        $v0
label_1a1a68:
    if (ctx->pc == 0x1A1A68u) {
        ctx->pc = 0x1A1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A64u;
        // 0x1a1a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A6Cu;
        goto label_1a1a6c;
    }
    ctx->pc = 0x1A1A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1A6Cu);
        ctx->pc = 0x1A1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A64u;
        // 0x1a1a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1A64u, 0x1A1A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1A6Cu;
label_1a1a6c:
    // 0x1a1a6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1a1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a1a70:
    // 0x1a1a70: 0x10000027  b           . + 4 + (0x27 << 2)
label_1a1a74:
    if (ctx->pc == 0x1A1A74u) {
        ctx->pc = 0x1A1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A70u;
        // 0x1a1a74: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1A78u;
        goto label_1a1a78;
    }
    ctx->pc = 0x1A1A70u;
    {
        const bool branch_taken_0x1a1a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A70u;
        // 0x1a1a74: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a70) {
            ctx->pc = 0x1A1B10u;
            goto label_1a1b10;
        }
    }
    ctx->pc = 0x1A1A78u;
label_1a1a78:
    // 0x1a1a78: 0xc065976  jal         func_1965D8
label_1a1a7c:
    if (ctx->pc == 0x1A1A7Cu) {
        ctx->pc = 0x1A1A80u;
        goto label_1a1a80;
    }
    ctx->pc = 0x1A1A78u;
    SET_GPR_U32(ctx, 31, 0x1A1A80u);
    ctx->pc = 0x1965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965D8u, 0x1A1A78u, 0x1A1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A80u;
label_1a1a80:
    // 0x1a1a80: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_1a1a84:
    if (ctx->pc == 0x1A1A84u) {
        ctx->pc = 0x1A1A88u;
        goto label_1a1a88;
    }
    ctx->pc = 0x1A1A80u;
    {
        const bool branch_taken_0x1a1a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a80) {
            ctx->pc = 0x1A1AE4u;
            goto label_1a1ae4;
        }
    }
    ctx->pc = 0x1A1A88u;
label_1a1a88:
    // 0x1a1a88: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1a1a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a1a8c:
    // 0x1a1a8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a1a90:
    // 0x1a1a90: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1a1a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1a1a94:
    // 0x1a1a94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1a1a98:
    if (ctx->pc == 0x1A1A98u) {
        ctx->pc = 0x1A1A9Cu;
        goto label_1a1a9c;
    }
    ctx->pc = 0x1A1A94u;
    {
        const bool branch_taken_0x1a1a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1a94) {
            ctx->pc = 0x1A1AE4u;
            goto label_1a1ae4;
        }
    }
    ctx->pc = 0x1A1A9Cu;
label_1a1a9c:
    // 0x1a1a9c: 0xc064b7a  jal         func_192DE8
label_1a1aa0:
    if (ctx->pc == 0x1A1AA0u) {
        ctx->pc = 0x1A1AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A9Cu;
        // 0x1a1aa0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AA4u;
        goto label_1a1aa4;
    }
    ctx->pc = 0x1A1A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A1AA4u);
    ctx->pc = 0x1A1AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A9Cu;
    // 0x1a1aa0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192DE8u, 0x1A1A9Cu, 0x1A1AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AA4u;
label_1a1aa4:
    // 0x1a1aa4: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1a1aa8:
    if (ctx->pc == 0x1A1AA8u) {
        ctx->pc = 0x1A1AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AA4u;
        // 0x1a1aa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AACu;
        goto label_1a1aac;
    }
    ctx->pc = 0x1A1AA4u;
    {
        const bool branch_taken_0x1a1aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1aa4) {
            ctx->pc = 0x1A1AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AA4u;
            // 0x1a1aa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1AACu;
label_1a1aac:
    // 0x1a1aac: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1a1aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a1ab0:
    // 0x1a1ab0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1a1ab4:
    // 0x1a1ab4: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_1a1ab8:
    if (ctx->pc == 0x1A1AB8u) {
        ctx->pc = 0x1A1AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB4u;
        // 0x1a1ab8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1ABCu;
        goto label_1a1abc;
    }
    ctx->pc = 0x1A1AB4u;
    {
        const bool branch_taken_0x1a1ab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ab4) {
            ctx->pc = 0x1A1AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AB4u;
            // 0x1a1ab8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1ABCu;
label_1a1abc:
    // 0x1a1abc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a1ac0:
    // 0x1a1ac0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1a1ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1a1ac4:
    // 0x1a1ac4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x1a1ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a1ac8:
    // 0x1a1ac8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a1ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a1acc:
    // 0x1a1acc: 0x8c451004  lw          $a1, 0x1004($v0)
    ctx->pc = 0x1a1accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
label_1a1ad0:
    // 0x1a1ad0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a1ad4:
    // 0x1a1ad4: 0x40f809  jalr        $v0
label_1a1ad8:
    if (ctx->pc == 0x1A1AD8u) {
        ctx->pc = 0x1A1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD4u;
        // 0x1a1ad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1ADCu;
        goto label_1a1adc;
    }
    ctx->pc = 0x1A1AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1ADCu);
        ctx->pc = 0x1A1AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD4u;
        // 0x1a1ad8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1AD4u, 0x1A1ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A1ADCu;
label_1a1adc:
    // 0x1a1adc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a1ae0:
    if (ctx->pc == 0x1A1AE0u) {
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AE4u;
        goto label_1a1ae4;
    }
    ctx->pc = 0x1A1ADCu;
    {
        const bool branch_taken_0x1a1adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1ADCu;
        // 0x1a1ae0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1adc) {
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1AE4u;
label_1a1ae4:
    // 0x1a1ae4: 0xc065976  jal         func_1965D8
label_1a1ae8:
    if (ctx->pc == 0x1A1AE8u) {
        ctx->pc = 0x1A1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AE4u;
        // 0x1a1ae8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1AECu;
        goto label_1a1aec;
    }
    ctx->pc = 0x1A1AE4u;
    SET_GPR_U32(ctx, 31, 0x1A1AECu);
    ctx->pc = 0x1A1AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1AE4u;
    // 0x1a1ae8: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1965D8u, 0x1A1AE4u, 0x1A1AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1AECu;
label_1a1aec:
    // 0x1a1aec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1a1af0:
    if (ctx->pc == 0x1A1AF0u) {
        ctx->pc = 0x1A1AF4u;
        goto label_1a1af4;
    }
    ctx->pc = 0x1A1AECu;
    {
        const bool branch_taken_0x1a1aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1aec) {
            ctx->pc = 0x1A1B08u;
            goto label_1a1b08;
        }
    }
    ctx->pc = 0x1A1AF4u;
label_1a1af4:
    // 0x1a1af4: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1a1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1a1af8:
    // 0x1a1af8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a1af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a1afc:
    // 0x1a1afc: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x1a1afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
label_1a1b00:
    // 0x1a1b00: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1a1b04:
    if (ctx->pc == 0x1A1B04u) {
        ctx->pc = 0x1A1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B00u;
        // 0x1a1b04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B08u;
        goto label_1a1b08;
    }
    ctx->pc = 0x1A1B00u;
    {
        const bool branch_taken_0x1a1b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b00) {
            ctx->pc = 0x1A1B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1B00u;
            // 0x1a1b04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1B08u;
label_1a1b08:
    // 0x1a1b08: 0xc068fc6  jal         func_1A3F18
label_1a1b0c:
    if (ctx->pc == 0x1A1B0Cu) {
        ctx->pc = 0x1A1B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B08u;
        // 0x1a1b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B10u;
        goto label_1a1b10;
    }
    ctx->pc = 0x1A1B08u;
    SET_GPR_U32(ctx, 31, 0x1A1B10u);
    ctx->pc = 0x1A1B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1B08u;
    // 0x1a1b0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F18u, 0x1A1B08u, 0x1A1B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1B10u;
label_1a1b10:
    // 0x1a1b10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a1b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a1b14:
    // 0x1a1b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b18:
    // 0x1a1b18: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a1b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a1b1c:
    // 0x1a1b1c: 0x3e00008  jr          $ra
label_1a1b20:
    if (ctx->pc == 0x1A1B20u) {
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A1B24u;
        goto label_1a1b24;
    }
    ctx->pc = 0x1A1B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x0  nop
    ctx->pc = 0x1a1b24u;
    // NOP
    ctx->pc = 0x1a1b28u;
}
