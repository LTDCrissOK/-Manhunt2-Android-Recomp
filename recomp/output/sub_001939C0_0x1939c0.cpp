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

// Function: sub_001939C0
// Address: 0x1939c0 - 0x193ac8
void sub_001939C0_0x1939c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001939C0_0x1939c0");
#endif

    switch (ctx->pc) {
        case 0x1939c0u: goto label_1939c0;
        case 0x1939c4u: goto label_1939c4;
        case 0x1939c8u: goto label_1939c8;
        case 0x1939ccu: goto label_1939cc;
        case 0x1939d0u: goto label_1939d0;
        case 0x1939d4u: goto label_1939d4;
        case 0x1939d8u: goto label_1939d8;
        case 0x1939dcu: goto label_1939dc;
        case 0x1939e0u: goto label_1939e0;
        case 0x1939e4u: goto label_1939e4;
        case 0x1939e8u: goto label_1939e8;
        case 0x1939ecu: goto label_1939ec;
        case 0x1939f0u: goto label_1939f0;
        case 0x1939f4u: goto label_1939f4;
        case 0x1939f8u: goto label_1939f8;
        case 0x1939fcu: goto label_1939fc;
        case 0x193a00u: goto label_193a00;
        case 0x193a04u: goto label_193a04;
        case 0x193a08u: goto label_193a08;
        case 0x193a0cu: goto label_193a0c;
        case 0x193a10u: goto label_193a10;
        case 0x193a14u: goto label_193a14;
        case 0x193a18u: goto label_193a18;
        case 0x193a1cu: goto label_193a1c;
        case 0x193a20u: goto label_193a20;
        case 0x193a24u: goto label_193a24;
        case 0x193a28u: goto label_193a28;
        case 0x193a2cu: goto label_193a2c;
        case 0x193a30u: goto label_193a30;
        case 0x193a34u: goto label_193a34;
        case 0x193a38u: goto label_193a38;
        case 0x193a3cu: goto label_193a3c;
        case 0x193a40u: goto label_193a40;
        case 0x193a44u: goto label_193a44;
        case 0x193a48u: goto label_193a48;
        case 0x193a4cu: goto label_193a4c;
        case 0x193a50u: goto label_193a50;
        case 0x193a54u: goto label_193a54;
        case 0x193a58u: goto label_193a58;
        case 0x193a5cu: goto label_193a5c;
        case 0x193a60u: goto label_193a60;
        case 0x193a64u: goto label_193a64;
        case 0x193a68u: goto label_193a68;
        case 0x193a6cu: goto label_193a6c;
        case 0x193a70u: goto label_193a70;
        case 0x193a74u: goto label_193a74;
        case 0x193a78u: goto label_193a78;
        case 0x193a7cu: goto label_193a7c;
        case 0x193a80u: goto label_193a80;
        case 0x193a84u: goto label_193a84;
        case 0x193a88u: goto label_193a88;
        case 0x193a8cu: goto label_193a8c;
        case 0x193a90u: goto label_193a90;
        case 0x193a94u: goto label_193a94;
        case 0x193a98u: goto label_193a98;
        case 0x193a9cu: goto label_193a9c;
        case 0x193aa0u: goto label_193aa0;
        case 0x193aa4u: goto label_193aa4;
        case 0x193aa8u: goto label_193aa8;
        case 0x193aacu: goto label_193aac;
        case 0x193ab0u: goto label_193ab0;
        case 0x193ab4u: goto label_193ab4;
        case 0x193ab8u: goto label_193ab8;
        case 0x193abcu: goto label_193abc;
        case 0x193ac0u: goto label_193ac0;
        case 0x193ac4u: goto label_193ac4;
        default: break;
    }

    ctx->pc = 0x1939c0u;

label_1939c0:
    // 0x1939c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1939c4:
    // 0x1939c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1939c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1939c8:
    // 0x1939c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1939c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1939cc:
    // 0x1939cc: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x1939ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
label_1939d0:
    // 0x1939d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1939d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1939d4:
    // 0x1939d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1939d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1939d8:
    // 0x1939d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1939d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1939dc:
    // 0x1939dc: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x1939dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_1939e0:
    // 0x1939e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1939e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1939e4:
    // 0x1939e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1939e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1939e8:
    // 0x1939e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1939e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1939ec:
    // 0x1939ec: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1939ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1939f0:
    // 0x1939f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1939f4:
    // 0x1939f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1939f8:
    if (ctx->pc == 0x1939F8u) {
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1939FCu;
        goto label_1939fc;
    }
    ctx->pc = 0x1939F4u;
    {
        const bool branch_taken_0x1939f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1939F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1939F4u;
        // 0x1939f8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1939f4) {
            ctx->pc = 0x193A18u;
            goto label_193a18;
        }
    }
    ctx->pc = 0x1939FCu;
label_1939fc:
    // 0x1939fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1939fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193a00:
    // 0x193a00: 0xc0f61e8  jal         func_3D87A0
label_193a04:
    if (ctx->pc == 0x193A04u) {
        ctx->pc = 0x193A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A00u;
        // 0x193a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A08u;
        goto label_193a08;
    }
    ctx->pc = 0x193A00u;
    SET_GPR_U32(ctx, 31, 0x193A08u);
    ctx->pc = 0x193A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A00u;
    // 0x193a04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x193A00u, 0x193A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A08u;
label_193a08:
    // 0x193a08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x193a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193a0c:
    // 0x193a0c: 0x0  nop
    ctx->pc = 0x193a0cu;
    // NOP
label_193a10:
    // 0x193a10: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_193a14:
    if (ctx->pc == 0x193A14u) {
        ctx->pc = 0x193A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A10u;
        // 0x193a14: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A18u;
        goto label_193a18;
    }
    ctx->pc = 0x193A10u;
    {
        const bool branch_taken_0x193a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193a10) {
            ctx->pc = 0x193A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A10u;
            // 0x193a14: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193a00;
        }
    }
    ctx->pc = 0x193A18u;
label_193a18:
    // 0x193a18: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x193a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_193a1c:
    // 0x193a1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x193a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_193a20:
    // 0x193a20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_193a24:
    // 0x193a24: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x193a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_193a28:
    // 0x193a28: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x193a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_193a2c:
    // 0x193a2c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_193a30:
    if (ctx->pc == 0x193A30u) {
        ctx->pc = 0x193A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A2Cu;
        // 0x193a30: 0x2630005c  addiu       $s0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A34u;
        goto label_193a34;
    }
    ctx->pc = 0x193A2Cu;
    {
        const bool branch_taken_0x193a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A2Cu;
        // 0x193a30: 0x2630005c  addiu       $s0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a2c) {
            ctx->pc = 0x193A48u;
            goto label_193a48;
        }
    }
    ctx->pc = 0x193A34u;
label_193a34:
    // 0x193a34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x193a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_193a38:
    // 0x193a38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x193a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_193a3c:
    // 0x193a3c: 0x40f809  jalr        $v0
label_193a40:
    if (ctx->pc == 0x193A40u) {
        ctx->pc = 0x193A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A3Cu;
        // 0x193a40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A44u;
        goto label_193a44;
    }
    ctx->pc = 0x193A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193A44u);
        ctx->pc = 0x193A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A3Cu;
        // 0x193a40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193A3Cu, 0x193A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193A44u;
label_193a44:
    // 0x193a44: 0x2630005c  addiu       $s0, $s1, 0x5C
    ctx->pc = 0x193a44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
label_193a48:
    // 0x193a48: 0x32530001  andi        $s3, $s2, 0x1
    ctx->pc = 0x193a48u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_193a4c:
    // 0x193a4c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193a50:
    // 0x193a50: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x193a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_193a54:
    // 0x193a54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_193a58:
    if (ctx->pc == 0x193A58u) {
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A5Cu;
        goto label_193a5c;
    }
    ctx->pc = 0x193A54u;
    {
        const bool branch_taken_0x193a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A54u;
        // 0x193a58: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a54) {
            ctx->pc = 0x193A78u;
            goto label_193a78;
        }
    }
    ctx->pc = 0x193A5Cu;
label_193a5c:
    // 0x193a5c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x193a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193a60:
    // 0x193a60: 0xc0f61e8  jal         func_3D87A0
label_193a64:
    if (ctx->pc == 0x193A64u) {
        ctx->pc = 0x193A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A60u;
        // 0x193a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A68u;
        goto label_193a68;
    }
    ctx->pc = 0x193A60u;
    SET_GPR_U32(ctx, 31, 0x193A68u);
    ctx->pc = 0x193A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A60u;
    // 0x193a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x193A60u, 0x193A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A68u;
label_193a68:
    // 0x193a68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x193a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193a6c:
    // 0x193a6c: 0x0  nop
    ctx->pc = 0x193a6cu;
    // NOP
label_193a70:
    // 0x193a70: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_193a74:
    if (ctx->pc == 0x193A74u) {
        ctx->pc = 0x193A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A70u;
        // 0x193a74: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193A78u;
        goto label_193a78;
    }
    ctx->pc = 0x193A70u;
    {
        const bool branch_taken_0x193a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193a70) {
            ctx->pc = 0x193A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A70u;
            // 0x193a74: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193a60;
        }
    }
    ctx->pc = 0x193A78u;
label_193a78:
    // 0x193a78: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x193a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_193a7c:
    // 0x193a7c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x193a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_193a80:
    // 0x193a80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x193a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_193a84:
    // 0x193a84: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x193a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_193a88:
    // 0x193a88: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x193a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_193a8c:
    // 0x193a8c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x193a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_193a90:
    // 0x193a90: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x193a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_193a94:
    // 0x193a94: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x193a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_193a98:
    // 0x193a98: 0xae430018  sw          $v1, 0x18($s2)
    ctx->pc = 0x193a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 3));
label_193a9c:
    // 0x193a9c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_193aa0:
    if (ctx->pc == 0x193AA0u) {
        ctx->pc = 0x193AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A9Cu;
        // 0x193aa0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AA4u;
        goto label_193aa4;
    }
    ctx->pc = 0x193A9Cu;
    {
        const bool branch_taken_0x193a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x193AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193A9Cu;
        // 0x193aa0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193a9c) {
            ctx->pc = 0x193AACu;
            goto label_193aac;
        }
    }
    ctx->pc = 0x193AA4u;
label_193aa4:
    // 0x193aa4: 0xc0f5222  jal         func_3D4888
label_193aa8:
    if (ctx->pc == 0x193AA8u) {
        ctx->pc = 0x193AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AA4u;
        // 0x193aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AACu;
        goto label_193aac;
    }
    ctx->pc = 0x193AA4u;
    SET_GPR_U32(ctx, 31, 0x193AACu);
    ctx->pc = 0x193AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193AA4u;
    // 0x193aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x193AA4u, 0x193AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193AACu;
label_193aac:
    // 0x193aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193ab0:
    // 0x193ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193ab4:
    // 0x193ab4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193ab8:
    // 0x193ab8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193ab8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_193abc:
    // 0x193abc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193ac0:
    // 0x193ac0: 0x3e00008  jr          $ra
label_193ac4:
    if (ctx->pc == 0x193AC4u) {
        ctx->pc = 0x193AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AC0u;
        // 0x193ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x193AC8u;
        goto label_fallthrough_0x193ac0;
    }
    ctx->pc = 0x193AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193AC0u;
        // 0x193ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x193ac0:
    ctx->pc = 0x193AC8u;
}
