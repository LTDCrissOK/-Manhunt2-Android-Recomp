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

// Function: sub_003AE9C0
// Address: 0x3ae9c0 - 0x3aeb10
void sub_003AE9C0_0x3ae9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE9C0_0x3ae9c0");
#endif

    switch (ctx->pc) {
        case 0x3ae9c0u: goto label_3ae9c0;
        case 0x3ae9c4u: goto label_3ae9c4;
        case 0x3ae9c8u: goto label_3ae9c8;
        case 0x3ae9ccu: goto label_3ae9cc;
        case 0x3ae9d0u: goto label_3ae9d0;
        case 0x3ae9d4u: goto label_3ae9d4;
        case 0x3ae9d8u: goto label_3ae9d8;
        case 0x3ae9dcu: goto label_3ae9dc;
        case 0x3ae9e0u: goto label_3ae9e0;
        case 0x3ae9e4u: goto label_3ae9e4;
        case 0x3ae9e8u: goto label_3ae9e8;
        case 0x3ae9ecu: goto label_3ae9ec;
        case 0x3ae9f0u: goto label_3ae9f0;
        case 0x3ae9f4u: goto label_3ae9f4;
        case 0x3ae9f8u: goto label_3ae9f8;
        case 0x3ae9fcu: goto label_3ae9fc;
        case 0x3aea00u: goto label_3aea00;
        case 0x3aea04u: goto label_3aea04;
        case 0x3aea08u: goto label_3aea08;
        case 0x3aea0cu: goto label_3aea0c;
        case 0x3aea10u: goto label_3aea10;
        case 0x3aea14u: goto label_3aea14;
        case 0x3aea18u: goto label_3aea18;
        case 0x3aea1cu: goto label_3aea1c;
        case 0x3aea20u: goto label_3aea20;
        case 0x3aea24u: goto label_3aea24;
        case 0x3aea28u: goto label_3aea28;
        case 0x3aea2cu: goto label_3aea2c;
        case 0x3aea30u: goto label_3aea30;
        case 0x3aea34u: goto label_3aea34;
        case 0x3aea38u: goto label_3aea38;
        case 0x3aea3cu: goto label_3aea3c;
        case 0x3aea40u: goto label_3aea40;
        case 0x3aea44u: goto label_3aea44;
        case 0x3aea48u: goto label_3aea48;
        case 0x3aea4cu: goto label_3aea4c;
        case 0x3aea50u: goto label_3aea50;
        case 0x3aea54u: goto label_3aea54;
        case 0x3aea58u: goto label_3aea58;
        case 0x3aea5cu: goto label_3aea5c;
        case 0x3aea60u: goto label_3aea60;
        case 0x3aea64u: goto label_3aea64;
        case 0x3aea68u: goto label_3aea68;
        case 0x3aea6cu: goto label_3aea6c;
        case 0x3aea70u: goto label_3aea70;
        case 0x3aea74u: goto label_3aea74;
        case 0x3aea78u: goto label_3aea78;
        case 0x3aea7cu: goto label_3aea7c;
        case 0x3aea80u: goto label_3aea80;
        case 0x3aea84u: goto label_3aea84;
        case 0x3aea88u: goto label_3aea88;
        case 0x3aea8cu: goto label_3aea8c;
        case 0x3aea90u: goto label_3aea90;
        case 0x3aea94u: goto label_3aea94;
        case 0x3aea98u: goto label_3aea98;
        case 0x3aea9cu: goto label_3aea9c;
        case 0x3aeaa0u: goto label_3aeaa0;
        case 0x3aeaa4u: goto label_3aeaa4;
        case 0x3aeaa8u: goto label_3aeaa8;
        case 0x3aeaacu: goto label_3aeaac;
        case 0x3aeab0u: goto label_3aeab0;
        case 0x3aeab4u: goto label_3aeab4;
        case 0x3aeab8u: goto label_3aeab8;
        case 0x3aeabcu: goto label_3aeabc;
        case 0x3aeac0u: goto label_3aeac0;
        case 0x3aeac4u: goto label_3aeac4;
        case 0x3aeac8u: goto label_3aeac8;
        case 0x3aeaccu: goto label_3aeacc;
        case 0x3aead0u: goto label_3aead0;
        case 0x3aead4u: goto label_3aead4;
        case 0x3aead8u: goto label_3aead8;
        case 0x3aeadcu: goto label_3aeadc;
        case 0x3aeae0u: goto label_3aeae0;
        case 0x3aeae4u: goto label_3aeae4;
        case 0x3aeae8u: goto label_3aeae8;
        case 0x3aeaecu: goto label_3aeaec;
        case 0x3aeaf0u: goto label_3aeaf0;
        case 0x3aeaf4u: goto label_3aeaf4;
        case 0x3aeaf8u: goto label_3aeaf8;
        case 0x3aeafcu: goto label_3aeafc;
        case 0x3aeb00u: goto label_3aeb00;
        case 0x3aeb04u: goto label_3aeb04;
        case 0x3aeb08u: goto label_3aeb08;
        case 0x3aeb0cu: goto label_3aeb0c;
        default: break;
    }

    ctx->pc = 0x3ae9c0u;

label_3ae9c0:
    // 0x3ae9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ae9c4:
    // 0x3ae9c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ae9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ae9c8:
    // 0x3ae9c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ae9cc:
    // 0x3ae9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ae9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ae9d0:
    // 0x3ae9d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ae9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ae9d4:
    // 0x3ae9d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ae9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ae9d8:
    // 0x3ae9d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ae9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3ae9dc:
    // 0x3ae9dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ae9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ae9e0:
    // 0x3ae9e0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ae9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ae9e4:
    // 0x3ae9e4: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_3ae9e8:
    if (ctx->pc == 0x3AE9E8u) {
        ctx->pc = 0x3AE9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9E4u;
        // 0x3ae9e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9ECu;
        goto label_3ae9ec;
    }
    ctx->pc = 0x3AE9E4u;
    {
        const bool branch_taken_0x3ae9e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ae9e4) {
            ctx->pc = 0x3AE9E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9E4u;
            // 0x3ae9e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA34u;
            goto label_3aea34;
        }
    }
    ctx->pc = 0x3AE9ECu;
label_3ae9ec:
    // 0x3ae9ec: 0xc0ec416  jal         func_3B1058
label_3ae9f0:
    if (ctx->pc == 0x3AE9F0u) {
        ctx->pc = 0x3AE9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9ECu;
        // 0x3ae9f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9F4u;
        goto label_3ae9f4;
    }
    ctx->pc = 0x3AE9ECu;
    SET_GPR_U32(ctx, 31, 0x3AE9F4u);
    ctx->pc = 0x3AE9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE9ECu;
    // 0x3ae9f0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AE9ECu, 0x3AE9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AE9F4u;
label_3ae9f4:
    // 0x3ae9f4: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3ae9f8:
    if (ctx->pc == 0x3AE9F8u) {
        ctx->pc = 0x3AE9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE9F4u;
        // 0x3ae9f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AE9FCu;
        goto label_3ae9fc;
    }
    ctx->pc = 0x3AE9F4u;
    {
        const bool branch_taken_0x3ae9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ae9f4) {
            ctx->pc = 0x3AE9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AE9F4u;
            // 0x3ae9f8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA30u;
            goto label_3aea30;
        }
    }
    ctx->pc = 0x3AE9FCu;
label_3ae9fc:
    // 0x3ae9fc: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x3ae9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_3aea00:
    // 0x3aea00: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x3aea00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_3aea04:
    // 0x3aea04: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x3aea04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_3aea08:
    // 0x3aea08: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x3aea08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_3aea0c:
    // 0x3aea0c: 0x40f809  jalr        $v0
label_3aea10:
    if (ctx->pc == 0x3AEA10u) {
        ctx->pc = 0x3AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA0Cu;
        // 0x3aea10: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA14u;
        goto label_3aea14;
    }
    ctx->pc = 0x3AEA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AEA14u);
        ctx->pc = 0x3AEA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA0Cu;
        // 0x3aea10: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEA0Cu, 0x3AEA14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEA14u;
label_3aea14:
    // 0x3aea14: 0xc0eb99c  jal         func_3AE670
label_3aea18:
    if (ctx->pc == 0x3AEA18u) {
        ctx->pc = 0x3AEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA14u;
        // 0x3aea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA1Cu;
        goto label_3aea1c;
    }
    ctx->pc = 0x3AEA14u;
    SET_GPR_U32(ctx, 31, 0x3AEA1Cu);
    ctx->pc = 0x3AEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA14u;
    // 0x3aea18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE670u, 0x3AEA14u, 0x3AEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA1Cu;
label_3aea1c:
    // 0x3aea1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aea20:
    // 0x3aea20: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3aea20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3aea24:
    // 0x3aea24: 0x10000003  b           . + 4 + (0x3 << 2)
label_3aea28:
    if (ctx->pc == 0x3AEA28u) {
        ctx->pc = 0x3AEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA24u;
        // 0x3aea28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA2Cu;
        goto label_3aea2c;
    }
    ctx->pc = 0x3AEA24u;
    {
        const bool branch_taken_0x3aea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA24u;
        // 0x3aea28: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea24) {
            ctx->pc = 0x3AEA34u;
            goto label_3aea34;
        }
    }
    ctx->pc = 0x3AEA2Cu;
label_3aea2c:
    // 0x3aea2c: 0x0  nop
    ctx->pc = 0x3aea2cu;
    // NOP
label_3aea30:
    // 0x3aea30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3aea30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aea34:
    // 0x3aea34: 0x54620030  bnel        $v1, $v0, . + 4 + (0x30 << 2)
label_3aea38:
    if (ctx->pc == 0x3AEA38u) {
        ctx->pc = 0x3AEA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA34u;
        // 0x3aea38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA3Cu;
        goto label_3aea3c;
    }
    ctx->pc = 0x3AEA34u;
    {
        const bool branch_taken_0x3aea34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aea34) {
            ctx->pc = 0x3AEA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA34u;
            // 0x3aea38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEAF8u;
            goto label_3aeaf8;
        }
    }
    ctx->pc = 0x3AEA3Cu;
label_3aea3c:
    // 0x3aea3c: 0xc0ec45a  jal         func_3B1168
label_3aea40:
    if (ctx->pc == 0x3AEA40u) {
        ctx->pc = 0x3AEA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA3Cu;
        // 0x3aea40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA44u;
        goto label_3aea44;
    }
    ctx->pc = 0x3AEA3Cu;
    SET_GPR_U32(ctx, 31, 0x3AEA44u);
    ctx->pc = 0x3AEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA3Cu;
    // 0x3aea40: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1168u, 0x3AEA3Cu, 0x3AEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA44u;
label_3aea44:
    // 0x3aea44: 0xc0ec416  jal         func_3B1058
label_3aea48:
    if (ctx->pc == 0x3AEA48u) {
        ctx->pc = 0x3AEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA44u;
        // 0x3aea48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA4Cu;
        goto label_3aea4c;
    }
    ctx->pc = 0x3AEA44u;
    SET_GPR_U32(ctx, 31, 0x3AEA4Cu);
    ctx->pc = 0x3AEA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA44u;
    // 0x3aea48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1058u, 0x3AEA44u, 0x3AEA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA4Cu;
label_3aea4c:
    // 0x3aea4c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3aea4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aea50:
    // 0x3aea50: 0x54430029  bnel        $v0, $v1, . + 4 + (0x29 << 2)
label_3aea54:
    if (ctx->pc == 0x3AEA54u) {
        ctx->pc = 0x3AEA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA50u;
        // 0x3aea54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA58u;
        goto label_3aea58;
    }
    ctx->pc = 0x3AEA50u;
    {
        const bool branch_taken_0x3aea50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3aea50) {
            ctx->pc = 0x3AEA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEA50u;
            // 0x3aea54: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEAF8u;
            goto label_3aeaf8;
        }
    }
    ctx->pc = 0x3AEA58u;
label_3aea58:
    // 0x3aea58: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x3aea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
label_3aea5c:
    // 0x3aea5c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3aea60:
    if (ctx->pc == 0x3AEA60u) {
        ctx->pc = 0x3AEA64u;
        goto label_3aea64;
    }
    ctx->pc = 0x3AEA5Cu;
    {
        const bool branch_taken_0x3aea5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3aea5c) {
            ctx->pc = 0x3AEAC8u;
            goto label_3aeac8;
        }
    }
    ctx->pc = 0x3AEA64u;
label_3aea64:
    // 0x3aea64: 0xc0ebe50  jal         func_3AF940
label_3aea68:
    if (ctx->pc == 0x3AEA68u) {
        ctx->pc = 0x3AEA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA64u;
        // 0x3aea68: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA6Cu;
        goto label_3aea6c;
    }
    ctx->pc = 0x3AEA64u;
    SET_GPR_U32(ctx, 31, 0x3AEA6Cu);
    ctx->pc = 0x3AEA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEA64u;
    // 0x3aea68: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x3AEA64u, 0x3AEA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEA6Cu;
label_3aea6c:
    // 0x3aea6c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3aea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3aea70:
    // 0x3aea70: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3aea70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3aea74:
    // 0x3aea74: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_3aea78:
    if (ctx->pc == 0x3AEA78u) {
        ctx->pc = 0x3AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA74u;
        // 0x3aea78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEA7Cu;
        goto label_3aea7c;
    }
    ctx->pc = 0x3AEA74u;
    {
        const bool branch_taken_0x3aea74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3AEA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEA74u;
        // 0x3aea78: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aea74) {
            ctx->pc = 0x3AEAC0u;
            goto label_3aeac0;
        }
    }
    ctx->pc = 0x3AEA7Cu;
label_3aea7c:
    // 0x3aea7c: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x3aea7cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
label_3aea80:
    // 0x3aea80: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x3aea80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_3aea84:
    // 0x3aea84: 0x0  nop
    ctx->pc = 0x3aea84u;
    // NOP
label_3aea88:
    // 0x3aea88: 0x123840  sll         $a3, $s2, 1
    ctx->pc = 0x3aea88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_3aea8c:
    // 0x3aea8c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x3aea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3aea90:
    // 0x3aea90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aea90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aea94:
    // 0x3aea94: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x3aea94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_3aea98:
    // 0x3aea98: 0x8e63370c  lw          $v1, 0x370C($s3)
    ctx->pc = 0x3aea98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 14092)));
label_3aea9c:
    // 0x3aea9c: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x3aea9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_3aeaa0:
    // 0x3aeaa0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x3aeaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3aeaa4:
    // 0x3aeaa4: 0x60f809  jalr        $v1
label_3aeaa8:
    if (ctx->pc == 0x3AEAA8u) {
        ctx->pc = 0x3AEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAA4u;
        // 0x3aeaa8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAACu;
        goto label_3aeaac;
    }
    ctx->pc = 0x3AEAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AEAACu);
        ctx->pc = 0x3AEAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAA4u;
        // 0x3aeaa8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEAA4u, 0x3AEAACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEAACu;
label_3aeaac:
    // 0x3aeaac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x3aeaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3aeab0:
    // 0x3aeab0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3aeab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_3aeab4:
    // 0x3aeab4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3aeab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3aeab8:
    // 0x3aeab8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_3aeabc:
    if (ctx->pc == 0x3AEABCu) {
        ctx->pc = 0x3AEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAB8u;
        // 0x3aeabc: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAC0u;
        goto label_3aeac0;
    }
    ctx->pc = 0x3AEAB8u;
    {
        const bool branch_taken_0x3aeab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeab8) {
            ctx->pc = 0x3AEABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEAB8u;
            // 0x3aeabc: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3aea88;
        }
    }
    ctx->pc = 0x3AEAC0u;
label_3aeac0:
    // 0x3aeac0: 0xc0ebe56  jal         func_3AF958
label_3aeac4:
    if (ctx->pc == 0x3AEAC4u) {
        ctx->pc = 0x3AEAC8u;
        goto label_3aeac8;
    }
    ctx->pc = 0x3AEAC0u;
    SET_GPR_U32(ctx, 31, 0x3AEAC8u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x3AEAC0u, 0x3AEAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAC8u;
label_3aeac8:
    // 0x3aeac8: 0xc0eba0e  jal         func_3AE838
label_3aeacc:
    if (ctx->pc == 0x3AEACCu) {
        ctx->pc = 0x3AEACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAC8u;
        // 0x3aeacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAD0u;
        goto label_3aead0;
    }
    ctx->pc = 0x3AEAC8u;
    SET_GPR_U32(ctx, 31, 0x3AEAD0u);
    ctx->pc = 0x3AEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAC8u;
    // 0x3aeacc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE838u, 0x3AEAC8u, 0x3AEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAD0u;
label_3aead0:
    // 0x3aead0: 0xc0ec44e  jal         func_3B1138
label_3aead4:
    if (ctx->pc == 0x3AEAD4u) {
        ctx->pc = 0x3AEAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAD0u;
        // 0x3aead4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAD8u;
        goto label_3aead8;
    }
    ctx->pc = 0x3AEAD0u;
    SET_GPR_U32(ctx, 31, 0x3AEAD8u);
    ctx->pc = 0x3AEAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEAD0u;
    // 0x3aead4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1138u, 0x3AEAD0u, 0x3AEAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEAD8u;
label_3aead8:
    // 0x3aead8: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x3aead8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_3aeadc:
    // 0x3aeadc: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x3aeadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3aeae0:
    // 0x3aeae0: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3aeae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3aeae4:
    // 0x3aeae4: 0x60f809  jalr        $v1
label_3aeae8:
    if (ctx->pc == 0x3AEAE8u) {
        ctx->pc = 0x3AEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAE4u;
        // 0x3aeae8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEAECu;
        goto label_3aeaec;
    }
    ctx->pc = 0x3AEAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AEAECu);
        ctx->pc = 0x3AEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEAE4u;
        // 0x3aeae8: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEAE4u, 0x3AEAECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEAECu;
label_3aeaec:
    // 0x3aeaec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3aeaecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3aeaf0:
    // 0x3aeaf0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3aeaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3aeaf4:
    // 0x3aeaf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aeaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aeaf8:
    // 0x3aeaf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aeaf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aeafc:
    // 0x3aeafc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aeafcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3aeb00:
    // 0x3aeb00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3aeb00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3aeb04:
    // 0x3aeb04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aeb04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3aeb08:
    // 0x3aeb08: 0x3e00008  jr          $ra
label_3aeb0c:
    if (ctx->pc == 0x3AEB0Cu) {
        ctx->pc = 0x3AEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB08u;
        // 0x3aeb0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB10u;
        goto label_fallthrough_0x3aeb08;
    }
    ctx->pc = 0x3AEB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB08u;
        // 0x3aeb0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEB08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aeb08:
    ctx->pc = 0x3AEB10u;
}
