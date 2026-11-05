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

// Function: sub_001A4A38
// Address: 0x1a4a38 - 0x1a4bd8
void sub_001A4A38_0x1a4a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4A38_0x1a4a38");
#endif

    switch (ctx->pc) {
        case 0x1a4a38u: goto label_1a4a38;
        case 0x1a4a3cu: goto label_1a4a3c;
        case 0x1a4a40u: goto label_1a4a40;
        case 0x1a4a44u: goto label_1a4a44;
        case 0x1a4a48u: goto label_1a4a48;
        case 0x1a4a4cu: goto label_1a4a4c;
        case 0x1a4a50u: goto label_1a4a50;
        case 0x1a4a54u: goto label_1a4a54;
        case 0x1a4a58u: goto label_1a4a58;
        case 0x1a4a5cu: goto label_1a4a5c;
        case 0x1a4a60u: goto label_1a4a60;
        case 0x1a4a64u: goto label_1a4a64;
        case 0x1a4a68u: goto label_1a4a68;
        case 0x1a4a6cu: goto label_1a4a6c;
        case 0x1a4a70u: goto label_1a4a70;
        case 0x1a4a74u: goto label_1a4a74;
        case 0x1a4a78u: goto label_1a4a78;
        case 0x1a4a7cu: goto label_1a4a7c;
        case 0x1a4a80u: goto label_1a4a80;
        case 0x1a4a84u: goto label_1a4a84;
        case 0x1a4a88u: goto label_1a4a88;
        case 0x1a4a8cu: goto label_1a4a8c;
        case 0x1a4a90u: goto label_1a4a90;
        case 0x1a4a94u: goto label_1a4a94;
        case 0x1a4a98u: goto label_1a4a98;
        case 0x1a4a9cu: goto label_1a4a9c;
        case 0x1a4aa0u: goto label_1a4aa0;
        case 0x1a4aa4u: goto label_1a4aa4;
        case 0x1a4aa8u: goto label_1a4aa8;
        case 0x1a4aacu: goto label_1a4aac;
        case 0x1a4ab0u: goto label_1a4ab0;
        case 0x1a4ab4u: goto label_1a4ab4;
        case 0x1a4ab8u: goto label_1a4ab8;
        case 0x1a4abcu: goto label_1a4abc;
        case 0x1a4ac0u: goto label_1a4ac0;
        case 0x1a4ac4u: goto label_1a4ac4;
        case 0x1a4ac8u: goto label_1a4ac8;
        case 0x1a4accu: goto label_1a4acc;
        case 0x1a4ad0u: goto label_1a4ad0;
        case 0x1a4ad4u: goto label_1a4ad4;
        case 0x1a4ad8u: goto label_1a4ad8;
        case 0x1a4adcu: goto label_1a4adc;
        case 0x1a4ae0u: goto label_1a4ae0;
        case 0x1a4ae4u: goto label_1a4ae4;
        case 0x1a4ae8u: goto label_1a4ae8;
        case 0x1a4aecu: goto label_1a4aec;
        case 0x1a4af0u: goto label_1a4af0;
        case 0x1a4af4u: goto label_1a4af4;
        case 0x1a4af8u: goto label_1a4af8;
        case 0x1a4afcu: goto label_1a4afc;
        case 0x1a4b00u: goto label_1a4b00;
        case 0x1a4b04u: goto label_1a4b04;
        case 0x1a4b08u: goto label_1a4b08;
        case 0x1a4b0cu: goto label_1a4b0c;
        case 0x1a4b10u: goto label_1a4b10;
        case 0x1a4b14u: goto label_1a4b14;
        case 0x1a4b18u: goto label_1a4b18;
        case 0x1a4b1cu: goto label_1a4b1c;
        case 0x1a4b20u: goto label_1a4b20;
        case 0x1a4b24u: goto label_1a4b24;
        case 0x1a4b28u: goto label_1a4b28;
        case 0x1a4b2cu: goto label_1a4b2c;
        case 0x1a4b30u: goto label_1a4b30;
        case 0x1a4b34u: goto label_1a4b34;
        case 0x1a4b38u: goto label_1a4b38;
        case 0x1a4b3cu: goto label_1a4b3c;
        case 0x1a4b40u: goto label_1a4b40;
        case 0x1a4b44u: goto label_1a4b44;
        case 0x1a4b48u: goto label_1a4b48;
        case 0x1a4b4cu: goto label_1a4b4c;
        case 0x1a4b50u: goto label_1a4b50;
        case 0x1a4b54u: goto label_1a4b54;
        case 0x1a4b58u: goto label_1a4b58;
        case 0x1a4b5cu: goto label_1a4b5c;
        case 0x1a4b60u: goto label_1a4b60;
        case 0x1a4b64u: goto label_1a4b64;
        case 0x1a4b68u: goto label_1a4b68;
        case 0x1a4b6cu: goto label_1a4b6c;
        case 0x1a4b70u: goto label_1a4b70;
        case 0x1a4b74u: goto label_1a4b74;
        case 0x1a4b78u: goto label_1a4b78;
        case 0x1a4b7cu: goto label_1a4b7c;
        case 0x1a4b80u: goto label_1a4b80;
        case 0x1a4b84u: goto label_1a4b84;
        case 0x1a4b88u: goto label_1a4b88;
        case 0x1a4b8cu: goto label_1a4b8c;
        case 0x1a4b90u: goto label_1a4b90;
        case 0x1a4b94u: goto label_1a4b94;
        case 0x1a4b98u: goto label_1a4b98;
        case 0x1a4b9cu: goto label_1a4b9c;
        case 0x1a4ba0u: goto label_1a4ba0;
        case 0x1a4ba4u: goto label_1a4ba4;
        case 0x1a4ba8u: goto label_1a4ba8;
        case 0x1a4bacu: goto label_1a4bac;
        case 0x1a4bb0u: goto label_1a4bb0;
        case 0x1a4bb4u: goto label_1a4bb4;
        case 0x1a4bb8u: goto label_1a4bb8;
        case 0x1a4bbcu: goto label_1a4bbc;
        case 0x1a4bc0u: goto label_1a4bc0;
        case 0x1a4bc4u: goto label_1a4bc4;
        case 0x1a4bc8u: goto label_1a4bc8;
        case 0x1a4bccu: goto label_1a4bcc;
        case 0x1a4bd0u: goto label_1a4bd0;
        case 0x1a4bd4u: goto label_1a4bd4;
        default: break;
    }

    ctx->pc = 0x1a4a38u;

label_1a4a38:
    // 0x1a4a38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a4a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a4a3c:
    // 0x1a4a3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a4a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a4a40:
    // 0x1a4a40: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a4a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a4a44:
    // 0x1a4a44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4a44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a48:
    // 0x1a4a48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a4a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a4a4c:
    // 0x1a4a4c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1a4a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1a4a50:
    // 0x1a4a50: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a4a50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a4a54:
    // 0x1a4a54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4a58:
    // 0x1a4a58: 0x50510059  beql        $v0, $s1, . + 4 + (0x59 << 2)
label_1a4a5c:
    if (ctx->pc == 0x1A4A5Cu) {
        ctx->pc = 0x1A4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A58u;
        // 0x1a4a5c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A60u;
        goto label_1a4a60;
    }
    ctx->pc = 0x1A4A58u;
    {
        const bool branch_taken_0x1a4a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4a58) {
            ctx->pc = 0x1A4A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4A58u;
            // 0x1a4a5c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4BC0u;
            goto label_1a4bc0;
        }
    }
    ctx->pc = 0x1A4A60u;
label_1a4a60:
    // 0x1a4a60: 0xc0691d6  jal         func_1A4758
label_1a4a64:
    if (ctx->pc == 0x1A4A64u) {
        ctx->pc = 0x1A4A68u;
        goto label_1a4a68;
    }
    ctx->pc = 0x1A4A60u;
    SET_GPR_U32(ctx, 31, 0x1A4A68u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4A60u, 0x1A4A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A68u;
label_1a4a68:
    // 0x1a4a68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4a6c:
    // 0x1a4a6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4a70:
    if (ctx->pc == 0x1A4A70u) {
        ctx->pc = 0x1A4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A6Cu;
        // 0x1a4a70: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A74u;
        goto label_1a4a74;
    }
    ctx->pc = 0x1A4A6Cu;
    {
        const bool branch_taken_0x1a4a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A6Cu;
        // 0x1a4a70: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4a6c) {
            ctx->pc = 0x1A4A84u;
            goto label_1a4a84;
        }
    }
    ctx->pc = 0x1A4A74u;
label_1a4a74:
    // 0x1a4a74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4a78:
    // 0x1a4a78: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4a7c:
    // 0x1a4a7c: 0x40f809  jalr        $v0
label_1a4a80:
    if (ctx->pc == 0x1A4A80u) {
        ctx->pc = 0x1A4A84u;
        goto label_1a4a84;
    }
    ctx->pc = 0x1A4A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4A84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4A7Cu, 0x1A4A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4A84u;
label_1a4a84:
    // 0x1a4a84: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a4a88:
    // 0x1a4a88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a4a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4a8c:
    // 0x1a4a8c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a4a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a4a90:
    // 0x1a4a90: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a4a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4a94:
    // 0x1a4a94: 0xc06faee  jal         func_1BEBB8
label_1a4a98:
    if (ctx->pc == 0x1A4A98u) {
        ctx->pc = 0x1A4A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4A94u;
        // 0x1a4a98: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4A9Cu;
        goto label_1a4a9c;
    }
    ctx->pc = 0x1A4A94u;
    SET_GPR_U32(ctx, 31, 0x1A4A9Cu);
    ctx->pc = 0x1A4A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4A94u;
    // 0x1a4a98: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A4A94u, 0x1A4A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4A9Cu;
label_1a4a9c:
    // 0x1a4a9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a4aa0:
    // 0x1a4aa0: 0xc061a12  jal         func_186848
label_1a4aa4:
    if (ctx->pc == 0x1A4AA4u) {
        ctx->pc = 0x1A4AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AA0u;
        // 0x1a4aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AA8u;
        goto label_1a4aa8;
    }
    ctx->pc = 0x1A4AA0u;
    SET_GPR_U32(ctx, 31, 0x1A4AA8u);
    ctx->pc = 0x1A4AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AA0u;
    // 0x1a4aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A4AA0u, 0x1A4AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AA8u;
label_1a4aa8:
    // 0x1a4aa8: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a4aac:
    // 0x1a4aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ab0:
    // 0x1a4ab0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a4ab4:
    // 0x1a4ab4: 0x40f809  jalr        $v0
label_1a4ab8:
    if (ctx->pc == 0x1A4AB8u) {
        ctx->pc = 0x1A4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AB4u;
        // 0x1a4ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4ABCu;
        goto label_1a4abc;
    }
    ctx->pc = 0x1A4AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4ABCu);
        ctx->pc = 0x1A4AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AB4u;
        // 0x1a4ab8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4AB4u, 0x1A4ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4ABCu;
label_1a4abc:
    // 0x1a4abc: 0xc061a16  jal         func_186858
label_1a4ac0:
    if (ctx->pc == 0x1A4AC0u) {
        ctx->pc = 0x1A4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4ABCu;
        // 0x1a4ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AC4u;
        goto label_1a4ac4;
    }
    ctx->pc = 0x1A4ABCu;
    SET_GPR_U32(ctx, 31, 0x1A4AC4u);
    ctx->pc = 0x1A4AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4ABCu;
    // 0x1a4ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4ABCu, 0x1A4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AC4u;
label_1a4ac4:
    // 0x1a4ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ac8:
    // 0x1a4ac8: 0xc061a16  jal         func_186858
label_1a4acc:
    if (ctx->pc == 0x1A4ACCu) {
        ctx->pc = 0x1A4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AC8u;
        // 0x1a4acc: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AD0u;
        goto label_1a4ad0;
    }
    ctx->pc = 0x1A4AC8u;
    SET_GPR_U32(ctx, 31, 0x1A4AD0u);
    ctx->pc = 0x1A4ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AC8u;
    // 0x1a4acc: 0xe4540024  swc1        $f20, 0x24($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4AC8u, 0x1A4AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AD0u;
label_1a4ad0:
    // 0x1a4ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4ad4:
    // 0x1a4ad4: 0xc06ee66  jal         func_1BB998
label_1a4ad8:
    if (ctx->pc == 0x1A4AD8u) {
        ctx->pc = 0x1A4AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AD4u;
        // 0x1a4ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4ADCu;
        goto label_1a4adc;
    }
    ctx->pc = 0x1A4AD4u;
    SET_GPR_U32(ctx, 31, 0x1A4ADCu);
    ctx->pc = 0x1A4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AD4u;
    // 0x1a4ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A4AD4u, 0x1A4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4ADCu;
label_1a4adc:
    // 0x1a4adc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a4adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_1a4ae0:
    // 0x1a4ae0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4ae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4ae4:
    // 0x1a4ae4: 0xc0b12b0  jal         func_2C4AC0
label_1a4ae8:
    if (ctx->pc == 0x1A4AE8u) {
        ctx->pc = 0x1A4AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4AE4u;
        // 0x1a4ae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4AECu;
        goto label_1a4aec;
    }
    ctx->pc = 0x1A4AE4u;
    SET_GPR_U32(ctx, 31, 0x1A4AECu);
    ctx->pc = 0x1A4AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4AE4u;
    // 0x1a4ae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A4AE4u, 0x1A4AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4AECu;
label_1a4aec:
    // 0x1a4aec: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1a4aecu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_1a4af0:
    // 0x1a4af0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a4af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a4af4:
    // 0x1a4af4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4af4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4af8:
    // 0x1a4af8: 0x0  nop
    ctx->pc = 0x1a4af8u;
    // NOP
label_1a4afc:
    // 0x1a4afc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1a4afcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4b00:
    // 0x1a4b00: 0x0  nop
    ctx->pc = 0x1a4b00u;
    // NOP
label_1a4b04:
    // 0x1a4b04: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1a4b08:
    if (ctx->pc == 0x1A4B08u) {
        ctx->pc = 0x1A4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B04u;
        // 0x1a4b08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B0Cu;
        goto label_1a4b0c;
    }
    ctx->pc = 0x1A4B04u;
    {
        const bool branch_taken_0x1a4b04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B04u;
        // 0x1a4b08: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b04) {
            ctx->pc = 0x1A4B60u;
            goto label_1a4b60;
        }
    }
    ctx->pc = 0x1A4B0Cu;
label_1a4b0c:
    // 0x1a4b0c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a4b10:
    // 0x1a4b10: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4b14:
    if (ctx->pc == 0x1A4B14u) {
        ctx->pc = 0x1A4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B10u;
        // 0x1a4b14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B18u;
        goto label_1a4b18;
    }
    ctx->pc = 0x1A4B10u;
    {
        const bool branch_taken_0x1a4b10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B10u;
        // 0x1a4b14: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b10) {
            ctx->pc = 0x1A4B2Cu;
            goto label_1a4b2c;
        }
    }
    ctx->pc = 0x1A4B18u;
label_1a4b18:
    // 0x1a4b18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b1c:
    // 0x1a4b1c: 0x0  nop
    ctx->pc = 0x1a4b1cu;
    // NOP
label_1a4b20:
    // 0x1a4b20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4b20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4b24:
    // 0x1a4b24: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4b28:
    if (ctx->pc == 0x1A4B28u) {
        ctx->pc = 0x1A4B2Cu;
        goto label_1a4b2c;
    }
    ctx->pc = 0x1A4B24u;
    {
        const bool branch_taken_0x1a4b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b24) {
            ctx->pc = 0x1A4B44u;
            goto label_1a4b44;
        }
    }
    ctx->pc = 0x1A4B2Cu;
label_1a4b2c:
    // 0x1a4b2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4b30:
    // 0x1a4b30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4b34:
    // 0x1a4b34: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b38:
    // 0x1a4b38: 0x0  nop
    ctx->pc = 0x1a4b38u;
    // NOP
label_1a4b3c:
    // 0x1a4b3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4b3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4b40:
    // 0x1a4b40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a4b40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a4b44:
    // 0x1a4b44: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4b44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4b48:
    // 0x1a4b48: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4b48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a4b4c:
    // 0x1a4b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4b50:
    // 0x1a4b50: 0x0  nop
    ctx->pc = 0x1a4b50u;
    // NOP
label_1a4b54:
    // 0x1a4b54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a4b58:
    // 0x1a4b58: 0x10000014  b           . + 4 + (0x14 << 2)
label_1a4b5c:
    if (ctx->pc == 0x1A4B5Cu) {
        ctx->pc = 0x1A4B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B58u;
        // 0x1a4b5c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B60u;
        goto label_1a4b60;
    }
    ctx->pc = 0x1A4B58u;
    {
        const bool branch_taken_0x1a4b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B58u;
        // 0x1a4b5c: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b58) {
            ctx->pc = 0x1A4BACu;
            goto label_1a4bac;
        }
    }
    ctx->pc = 0x1A4B60u;
label_1a4b60:
    // 0x1a4b60: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a4b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a4b64:
    // 0x1a4b64: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4b68:
    if (ctx->pc == 0x1A4B68u) {
        ctx->pc = 0x1A4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B64u;
        // 0x1a4b68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4B6Cu;
        goto label_1a4b6c;
    }
    ctx->pc = 0x1A4B64u;
    {
        const bool branch_taken_0x1a4b64 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4B64u;
        // 0x1a4b68: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4b64) {
            ctx->pc = 0x1A4B80u;
            goto label_1a4b80;
        }
    }
    ctx->pc = 0x1A4B6Cu;
label_1a4b6c:
    // 0x1a4b6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b70:
    // 0x1a4b70: 0x0  nop
    ctx->pc = 0x1a4b70u;
    // NOP
label_1a4b74:
    // 0x1a4b74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4b78:
    // 0x1a4b78: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4b7c:
    if (ctx->pc == 0x1A4B7Cu) {
        ctx->pc = 0x1A4B80u;
        goto label_1a4b80;
    }
    ctx->pc = 0x1A4B78u;
    {
        const bool branch_taken_0x1a4b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4b78) {
            ctx->pc = 0x1A4B98u;
            goto label_1a4b98;
        }
    }
    ctx->pc = 0x1A4B80u;
label_1a4b80:
    // 0x1a4b80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4b84:
    // 0x1a4b84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4b88:
    // 0x1a4b88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a4b88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4b8c:
    // 0x1a4b8c: 0x0  nop
    ctx->pc = 0x1a4b8cu;
    // NOP
label_1a4b90:
    // 0x1a4b90: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a4b90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a4b94:
    // 0x1a4b94: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a4b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a4b98:
    // 0x1a4b98: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4b9c:
    // 0x1a4b9c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4b9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a4ba0:
    // 0x1a4ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4ba4:
    // 0x1a4ba4: 0x0  nop
    ctx->pc = 0x1a4ba4u;
    // NOP
label_1a4ba8:
    // 0x1a4ba8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a4ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a4bac:
    // 0x1a4bac: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1a4bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1a4bb0:
    // 0x1a4bb0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1a4bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1a4bb4:
    // 0x1a4bb4: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x1a4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_1a4bb8:
    // 0x1a4bb8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1a4bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1a4bbc:
    // 0x1a4bbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a4bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4bc0:
    // 0x1a4bc0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a4bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a4bc4:
    // 0x1a4bc4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a4bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4bc8:
    // 0x1a4bc8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a4bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4bcc:
    // 0x1a4bcc: 0x3e00008  jr          $ra
label_1a4bd0:
    if (ctx->pc == 0x1A4BD0u) {
        ctx->pc = 0x1A4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BCCu;
        // 0x1a4bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4BD4u;
        goto label_1a4bd4;
    }
    ctx->pc = 0x1A4BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4BCCu;
        // 0x1a4bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4BD4u;
label_1a4bd4:
    // 0x1a4bd4: 0x0  nop
    ctx->pc = 0x1a4bd4u;
    // NOP
    ctx->pc = 0x1a4bd8u;
}
