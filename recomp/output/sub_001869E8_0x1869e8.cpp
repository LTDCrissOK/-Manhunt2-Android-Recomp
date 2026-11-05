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

// Function: sub_001869E8
// Address: 0x1869e8 - 0x186c18
void sub_001869E8_0x1869e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001869E8_0x1869e8");
#endif

    switch (ctx->pc) {
        case 0x1869e8u: goto label_1869e8;
        case 0x1869ecu: goto label_1869ec;
        case 0x1869f0u: goto label_1869f0;
        case 0x1869f4u: goto label_1869f4;
        case 0x1869f8u: goto label_1869f8;
        case 0x1869fcu: goto label_1869fc;
        case 0x186a00u: goto label_186a00;
        case 0x186a04u: goto label_186a04;
        case 0x186a08u: goto label_186a08;
        case 0x186a0cu: goto label_186a0c;
        case 0x186a10u: goto label_186a10;
        case 0x186a14u: goto label_186a14;
        case 0x186a18u: goto label_186a18;
        case 0x186a1cu: goto label_186a1c;
        case 0x186a20u: goto label_186a20;
        case 0x186a24u: goto label_186a24;
        case 0x186a28u: goto label_186a28;
        case 0x186a2cu: goto label_186a2c;
        case 0x186a30u: goto label_186a30;
        case 0x186a34u: goto label_186a34;
        case 0x186a38u: goto label_186a38;
        case 0x186a3cu: goto label_186a3c;
        case 0x186a40u: goto label_186a40;
        case 0x186a44u: goto label_186a44;
        case 0x186a48u: goto label_186a48;
        case 0x186a4cu: goto label_186a4c;
        case 0x186a50u: goto label_186a50;
        case 0x186a54u: goto label_186a54;
        case 0x186a58u: goto label_186a58;
        case 0x186a5cu: goto label_186a5c;
        case 0x186a60u: goto label_186a60;
        case 0x186a64u: goto label_186a64;
        case 0x186a68u: goto label_186a68;
        case 0x186a6cu: goto label_186a6c;
        case 0x186a70u: goto label_186a70;
        case 0x186a74u: goto label_186a74;
        case 0x186a78u: goto label_186a78;
        case 0x186a7cu: goto label_186a7c;
        case 0x186a80u: goto label_186a80;
        case 0x186a84u: goto label_186a84;
        case 0x186a88u: goto label_186a88;
        case 0x186a8cu: goto label_186a8c;
        case 0x186a90u: goto label_186a90;
        case 0x186a94u: goto label_186a94;
        case 0x186a98u: goto label_186a98;
        case 0x186a9cu: goto label_186a9c;
        case 0x186aa0u: goto label_186aa0;
        case 0x186aa4u: goto label_186aa4;
        case 0x186aa8u: goto label_186aa8;
        case 0x186aacu: goto label_186aac;
        case 0x186ab0u: goto label_186ab0;
        case 0x186ab4u: goto label_186ab4;
        case 0x186ab8u: goto label_186ab8;
        case 0x186abcu: goto label_186abc;
        case 0x186ac0u: goto label_186ac0;
        case 0x186ac4u: goto label_186ac4;
        case 0x186ac8u: goto label_186ac8;
        case 0x186accu: goto label_186acc;
        case 0x186ad0u: goto label_186ad0;
        case 0x186ad4u: goto label_186ad4;
        case 0x186ad8u: goto label_186ad8;
        case 0x186adcu: goto label_186adc;
        case 0x186ae0u: goto label_186ae0;
        case 0x186ae4u: goto label_186ae4;
        case 0x186ae8u: goto label_186ae8;
        case 0x186aecu: goto label_186aec;
        case 0x186af0u: goto label_186af0;
        case 0x186af4u: goto label_186af4;
        case 0x186af8u: goto label_186af8;
        case 0x186afcu: goto label_186afc;
        case 0x186b00u: goto label_186b00;
        case 0x186b04u: goto label_186b04;
        case 0x186b08u: goto label_186b08;
        case 0x186b0cu: goto label_186b0c;
        case 0x186b10u: goto label_186b10;
        case 0x186b14u: goto label_186b14;
        case 0x186b18u: goto label_186b18;
        case 0x186b1cu: goto label_186b1c;
        case 0x186b20u: goto label_186b20;
        case 0x186b24u: goto label_186b24;
        case 0x186b28u: goto label_186b28;
        case 0x186b2cu: goto label_186b2c;
        case 0x186b30u: goto label_186b30;
        case 0x186b34u: goto label_186b34;
        case 0x186b38u: goto label_186b38;
        case 0x186b3cu: goto label_186b3c;
        case 0x186b40u: goto label_186b40;
        case 0x186b44u: goto label_186b44;
        case 0x186b48u: goto label_186b48;
        case 0x186b4cu: goto label_186b4c;
        case 0x186b50u: goto label_186b50;
        case 0x186b54u: goto label_186b54;
        case 0x186b58u: goto label_186b58;
        case 0x186b5cu: goto label_186b5c;
        case 0x186b60u: goto label_186b60;
        case 0x186b64u: goto label_186b64;
        case 0x186b68u: goto label_186b68;
        case 0x186b6cu: goto label_186b6c;
        case 0x186b70u: goto label_186b70;
        case 0x186b74u: goto label_186b74;
        case 0x186b78u: goto label_186b78;
        case 0x186b7cu: goto label_186b7c;
        case 0x186b80u: goto label_186b80;
        case 0x186b84u: goto label_186b84;
        case 0x186b88u: goto label_186b88;
        case 0x186b8cu: goto label_186b8c;
        case 0x186b90u: goto label_186b90;
        case 0x186b94u: goto label_186b94;
        case 0x186b98u: goto label_186b98;
        case 0x186b9cu: goto label_186b9c;
        case 0x186ba0u: goto label_186ba0;
        case 0x186ba4u: goto label_186ba4;
        case 0x186ba8u: goto label_186ba8;
        case 0x186bacu: goto label_186bac;
        case 0x186bb0u: goto label_186bb0;
        case 0x186bb4u: goto label_186bb4;
        case 0x186bb8u: goto label_186bb8;
        case 0x186bbcu: goto label_186bbc;
        case 0x186bc0u: goto label_186bc0;
        case 0x186bc4u: goto label_186bc4;
        case 0x186bc8u: goto label_186bc8;
        case 0x186bccu: goto label_186bcc;
        case 0x186bd0u: goto label_186bd0;
        case 0x186bd4u: goto label_186bd4;
        case 0x186bd8u: goto label_186bd8;
        case 0x186bdcu: goto label_186bdc;
        case 0x186be0u: goto label_186be0;
        case 0x186be4u: goto label_186be4;
        case 0x186be8u: goto label_186be8;
        case 0x186becu: goto label_186bec;
        case 0x186bf0u: goto label_186bf0;
        case 0x186bf4u: goto label_186bf4;
        case 0x186bf8u: goto label_186bf8;
        case 0x186bfcu: goto label_186bfc;
        case 0x186c00u: goto label_186c00;
        case 0x186c04u: goto label_186c04;
        case 0x186c08u: goto label_186c08;
        case 0x186c0cu: goto label_186c0c;
        case 0x186c10u: goto label_186c10;
        case 0x186c14u: goto label_186c14;
        default: break;
    }

    ctx->pc = 0x1869e8u;

label_1869e8:
    // 0x1869e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1869e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1869ec:
    // 0x1869ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1869ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_1869f0:
    // 0x1869f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1869f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1869f4:
    // 0x1869f4: 0x24420fa0  addiu       $v0, $v0, 0xFA0
    ctx->pc = 0x1869f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
label_1869f8:
    // 0x1869f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1869f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1869fc:
    // 0x1869fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1869fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186a00:
    // 0x186a00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_186a04:
    // 0x186a04: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x186a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_186a08:
    // 0x186a08: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x186a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_186a0c:
    // 0x186a0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_186a10:
    if (ctx->pc == 0x186A10u) {
        ctx->pc = 0x186A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A0Cu;
        // 0x186a10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A14u;
        goto label_186a14;
    }
    ctx->pc = 0x186A0Cu;
    {
        const bool branch_taken_0x186a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A0Cu;
        // 0x186a10: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186a0c) {
            ctx->pc = 0x186A28u;
            goto label_186a28;
        }
    }
    ctx->pc = 0x186A14u;
label_186a14:
    // 0x186a14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186a18:
    // 0x186a18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a1c:
    // 0x186a1c: 0x40f809  jalr        $v0
label_186a20:
    if (ctx->pc == 0x186A20u) {
        ctx->pc = 0x186A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A1Cu;
        // 0x186a20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A24u;
        goto label_186a24;
    }
    ctx->pc = 0x186A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186A24u);
        ctx->pc = 0x186A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A1Cu;
        // 0x186a20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A1Cu, 0x186A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186A24u;
label_186a24:
    // 0x186a24: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x186a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_186a28:
    // 0x186a28: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x186a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_186a2c:
    // 0x186a2c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186a30:
    if (ctx->pc == 0x186A30u) {
        ctx->pc = 0x186A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A2Cu;
        // 0x186a30: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A34u;
        goto label_186a34;
    }
    ctx->pc = 0x186A2Cu;
    {
        const bool branch_taken_0x186a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a2c) {
            ctx->pc = 0x186A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A2Cu;
            // 0x186a30: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A4Cu;
            goto label_186a4c;
        }
    }
    ctx->pc = 0x186A34u;
label_186a34:
    // 0x186a34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186a38:
    // 0x186a38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a3c:
    // 0x186a3c: 0x40f809  jalr        $v0
label_186a40:
    if (ctx->pc == 0x186A40u) {
        ctx->pc = 0x186A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A3Cu;
        // 0x186a40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A44u;
        goto label_186a44;
    }
    ctx->pc = 0x186A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186A44u);
        ctx->pc = 0x186A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A3Cu;
        // 0x186a40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A3Cu, 0x186A44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186A44u;
label_186a44:
    // 0x186a44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x186a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_186a48:
    // 0x186a48: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x186a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_186a4c:
    // 0x186a4c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186a50:
    if (ctx->pc == 0x186A50u) {
        ctx->pc = 0x186A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A4Cu;
        // 0x186a50: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A54u;
        goto label_186a54;
    }
    ctx->pc = 0x186A4Cu;
    {
        const bool branch_taken_0x186a4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a4c) {
            ctx->pc = 0x186A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A4Cu;
            // 0x186a50: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A6Cu;
            goto label_186a6c;
        }
    }
    ctx->pc = 0x186A54u;
label_186a54:
    // 0x186a54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186a58:
    // 0x186a58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a5c:
    // 0x186a5c: 0x40f809  jalr        $v0
label_186a60:
    if (ctx->pc == 0x186A60u) {
        ctx->pc = 0x186A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A5Cu;
        // 0x186a60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A64u;
        goto label_186a64;
    }
    ctx->pc = 0x186A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186A64u);
        ctx->pc = 0x186A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A5Cu;
        // 0x186a60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A5Cu, 0x186A64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186A64u;
label_186a64:
    // 0x186a64: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x186a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_186a68:
    // 0x186a68: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x186a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_186a6c:
    // 0x186a6c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186a70:
    if (ctx->pc == 0x186A70u) {
        ctx->pc = 0x186A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A6Cu;
        // 0x186a70: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A74u;
        goto label_186a74;
    }
    ctx->pc = 0x186A6Cu;
    {
        const bool branch_taken_0x186a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a6c) {
            ctx->pc = 0x186A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A6Cu;
            // 0x186a70: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186A8Cu;
            goto label_186a8c;
        }
    }
    ctx->pc = 0x186A74u;
label_186a74:
    // 0x186a74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186a78:
    // 0x186a78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a7c:
    // 0x186a7c: 0x40f809  jalr        $v0
label_186a80:
    if (ctx->pc == 0x186A80u) {
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A7Cu;
        // 0x186a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A84u;
        goto label_186a84;
    }
    ctx->pc = 0x186A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186A84u);
        ctx->pc = 0x186A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A7Cu;
        // 0x186a80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A7Cu, 0x186A84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186A84u;
label_186a84:
    // 0x186a84: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x186a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_186a88:
    // 0x186a88: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x186a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_186a8c:
    // 0x186a8c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186a90:
    if (ctx->pc == 0x186A90u) {
        ctx->pc = 0x186A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A8Cu;
        // 0x186a90: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186A94u;
        goto label_186a94;
    }
    ctx->pc = 0x186A8Cu;
    {
        const bool branch_taken_0x186a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186a8c) {
            ctx->pc = 0x186A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186A8Cu;
            // 0x186a90: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AACu;
            goto label_186aac;
        }
    }
    ctx->pc = 0x186A94u;
label_186a94:
    // 0x186a94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186a98:
    // 0x186a98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186a9c:
    // 0x186a9c: 0x40f809  jalr        $v0
label_186aa0:
    if (ctx->pc == 0x186AA0u) {
        ctx->pc = 0x186AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A9Cu;
        // 0x186aa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AA4u;
        goto label_186aa4;
    }
    ctx->pc = 0x186A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186AA4u);
        ctx->pc = 0x186AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186A9Cu;
        // 0x186aa0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186A9Cu, 0x186AA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186AA4u;
label_186aa4:
    // 0x186aa4: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x186aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_186aa8:
    // 0x186aa8: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x186aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_186aac:
    // 0x186aac: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186ab0:
    if (ctx->pc == 0x186AB0u) {
        ctx->pc = 0x186AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AACu;
        // 0x186ab0: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AB4u;
        goto label_186ab4;
    }
    ctx->pc = 0x186AACu;
    {
        const bool branch_taken_0x186aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186aac) {
            ctx->pc = 0x186AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AACu;
            // 0x186ab0: 0x8e04002c  lw          $a0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186ACCu;
            goto label_186acc;
        }
    }
    ctx->pc = 0x186AB4u;
label_186ab4:
    // 0x186ab4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186ab8:
    // 0x186ab8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186abc:
    // 0x186abc: 0x40f809  jalr        $v0
label_186ac0:
    if (ctx->pc == 0x186AC0u) {
        ctx->pc = 0x186AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ABCu;
        // 0x186ac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AC4u;
        goto label_186ac4;
    }
    ctx->pc = 0x186ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186AC4u);
        ctx->pc = 0x186AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ABCu;
        // 0x186ac0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186ABCu, 0x186AC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186AC4u;
label_186ac4:
    // 0x186ac4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x186ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_186ac8:
    // 0x186ac8: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x186ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_186acc:
    // 0x186acc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186ad0:
    if (ctx->pc == 0x186AD0u) {
        ctx->pc = 0x186AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ACCu;
        // 0x186ad0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AD4u;
        goto label_186ad4;
    }
    ctx->pc = 0x186ACCu;
    {
        const bool branch_taken_0x186acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186acc) {
            ctx->pc = 0x186AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186ACCu;
            // 0x186ad0: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186AECu;
            goto label_186aec;
        }
    }
    ctx->pc = 0x186AD4u;
label_186ad4:
    // 0x186ad4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186ad8:
    // 0x186ad8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186adc:
    // 0x186adc: 0x40f809  jalr        $v0
label_186ae0:
    if (ctx->pc == 0x186AE0u) {
        ctx->pc = 0x186AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ADCu;
        // 0x186ae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AE4u;
        goto label_186ae4;
    }
    ctx->pc = 0x186ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186AE4u);
        ctx->pc = 0x186AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186ADCu;
        // 0x186ae0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186ADCu, 0x186AE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186AE4u;
label_186ae4:
    // 0x186ae4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x186ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_186ae8:
    // 0x186ae8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x186ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_186aec:
    // 0x186aec: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186af0:
    if (ctx->pc == 0x186AF0u) {
        ctx->pc = 0x186AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AECu;
        // 0x186af0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186AF4u;
        goto label_186af4;
    }
    ctx->pc = 0x186AECu;
    {
        const bool branch_taken_0x186aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186aec) {
            ctx->pc = 0x186AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186AECu;
            // 0x186af0: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B0Cu;
            goto label_186b0c;
        }
    }
    ctx->pc = 0x186AF4u;
label_186af4:
    // 0x186af4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186af8:
    // 0x186af8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186afc:
    // 0x186afc: 0x40f809  jalr        $v0
label_186b00:
    if (ctx->pc == 0x186B00u) {
        ctx->pc = 0x186B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AFCu;
        // 0x186b00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B04u;
        goto label_186b04;
    }
    ctx->pc = 0x186AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B04u);
        ctx->pc = 0x186B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186AFCu;
        // 0x186b00: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186AFCu, 0x186B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186B04u;
label_186b04:
    // 0x186b04: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x186b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_186b08:
    // 0x186b08: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x186b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186b0c:
    // 0x186b0c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186b10:
    if (ctx->pc == 0x186B10u) {
        ctx->pc = 0x186B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B0Cu;
        // 0x186b10: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B14u;
        goto label_186b14;
    }
    ctx->pc = 0x186B0Cu;
    {
        const bool branch_taken_0x186b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b0c) {
            ctx->pc = 0x186B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B0Cu;
            // 0x186b10: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B2Cu;
            goto label_186b2c;
        }
    }
    ctx->pc = 0x186B14u;
label_186b14:
    // 0x186b14: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b18:
    // 0x186b18: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b1c:
    // 0x186b1c: 0x40f809  jalr        $v0
label_186b20:
    if (ctx->pc == 0x186B20u) {
        ctx->pc = 0x186B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B1Cu;
        // 0x186b20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B24u;
        goto label_186b24;
    }
    ctx->pc = 0x186B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B24u);
        ctx->pc = 0x186B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B1Cu;
        // 0x186b20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B1Cu, 0x186B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186B24u;
label_186b24:
    // 0x186b24: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x186b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_186b28:
    // 0x186b28: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x186b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_186b2c:
    // 0x186b2c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186b30:
    if (ctx->pc == 0x186B30u) {
        ctx->pc = 0x186B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B2Cu;
        // 0x186b30: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B34u;
        goto label_186b34;
    }
    ctx->pc = 0x186B2Cu;
    {
        const bool branch_taken_0x186b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b2c) {
            ctx->pc = 0x186B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B2Cu;
            // 0x186b30: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B4Cu;
            goto label_186b4c;
        }
    }
    ctx->pc = 0x186B34u;
label_186b34:
    // 0x186b34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b38:
    // 0x186b38: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b3c:
    // 0x186b3c: 0x40f809  jalr        $v0
label_186b40:
    if (ctx->pc == 0x186B40u) {
        ctx->pc = 0x186B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B3Cu;
        // 0x186b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B44u;
        goto label_186b44;
    }
    ctx->pc = 0x186B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B44u);
        ctx->pc = 0x186B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B3Cu;
        // 0x186b40: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B3Cu, 0x186B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186B44u;
label_186b44:
    // 0x186b44: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x186b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_186b48:
    // 0x186b48: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x186b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_186b4c:
    // 0x186b4c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186b50:
    if (ctx->pc == 0x186B50u) {
        ctx->pc = 0x186B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B4Cu;
        // 0x186b50: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B54u;
        goto label_186b54;
    }
    ctx->pc = 0x186B4Cu;
    {
        const bool branch_taken_0x186b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b4c) {
            ctx->pc = 0x186B50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B4Cu;
            // 0x186b50: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B6Cu;
            goto label_186b6c;
        }
    }
    ctx->pc = 0x186B54u;
label_186b54:
    // 0x186b54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b58:
    // 0x186b58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b5c:
    // 0x186b5c: 0x40f809  jalr        $v0
label_186b60:
    if (ctx->pc == 0x186B60u) {
        ctx->pc = 0x186B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B5Cu;
        // 0x186b60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B64u;
        goto label_186b64;
    }
    ctx->pc = 0x186B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B64u);
        ctx->pc = 0x186B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B5Cu;
        // 0x186b60: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B5Cu, 0x186B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186B64u;
label_186b64:
    // 0x186b64: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x186b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_186b68:
    // 0x186b68: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x186b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_186b6c:
    // 0x186b6c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186b70:
    if (ctx->pc == 0x186B70u) {
        ctx->pc = 0x186B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B6Cu;
        // 0x186b70: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B74u;
        goto label_186b74;
    }
    ctx->pc = 0x186B6Cu;
    {
        const bool branch_taken_0x186b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b6c) {
            ctx->pc = 0x186B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B6Cu;
            // 0x186b70: 0x8e040034  lw          $a0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186B8Cu;
            goto label_186b8c;
        }
    }
    ctx->pc = 0x186B74u;
label_186b74:
    // 0x186b74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b78:
    // 0x186b78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b7c:
    // 0x186b7c: 0x40f809  jalr        $v0
label_186b80:
    if (ctx->pc == 0x186B80u) {
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B7Cu;
        // 0x186b80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B84u;
        goto label_186b84;
    }
    ctx->pc = 0x186B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186B84u);
        ctx->pc = 0x186B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B7Cu;
        // 0x186b80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B7Cu, 0x186B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186B84u;
label_186b84:
    // 0x186b84: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x186b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_186b88:
    // 0x186b88: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x186b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_186b8c:
    // 0x186b8c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186b90:
    if (ctx->pc == 0x186B90u) {
        ctx->pc = 0x186B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B8Cu;
        // 0x186b90: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186B94u;
        goto label_186b94;
    }
    ctx->pc = 0x186B8Cu;
    {
        const bool branch_taken_0x186b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186b8c) {
            ctx->pc = 0x186B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186B8Cu;
            // 0x186b90: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BACu;
            goto label_186bac;
        }
    }
    ctx->pc = 0x186B94u;
label_186b94:
    // 0x186b94: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186b98:
    // 0x186b98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186b9c:
    // 0x186b9c: 0x40f809  jalr        $v0
label_186ba0:
    if (ctx->pc == 0x186BA0u) {
        ctx->pc = 0x186BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B9Cu;
        // 0x186ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BA4u;
        goto label_186ba4;
    }
    ctx->pc = 0x186B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186BA4u);
        ctx->pc = 0x186BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186B9Cu;
        // 0x186ba0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186B9Cu, 0x186BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186BA4u;
label_186ba4:
    // 0x186ba4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x186ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_186ba8:
    // 0x186ba8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x186ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_186bac:
    // 0x186bac: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_186bb0:
    if (ctx->pc == 0x186BB0u) {
        ctx->pc = 0x186BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BACu;
        // 0x186bb0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BB4u;
        goto label_186bb4;
    }
    ctx->pc = 0x186BACu;
    {
        const bool branch_taken_0x186bac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186bac) {
            ctx->pc = 0x186BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186BACu;
            // 0x186bb0: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186BCCu;
            goto label_186bcc;
        }
    }
    ctx->pc = 0x186BB4u;
label_186bb4:
    // 0x186bb4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186bb8:
    // 0x186bb8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186bbc:
    // 0x186bbc: 0x40f809  jalr        $v0
label_186bc0:
    if (ctx->pc == 0x186BC0u) {
        ctx->pc = 0x186BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BBCu;
        // 0x186bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BC4u;
        goto label_186bc4;
    }
    ctx->pc = 0x186BBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186BC4u);
        ctx->pc = 0x186BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BBCu;
        // 0x186bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186BBCu, 0x186BC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186BC4u;
label_186bc4:
    // 0x186bc4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x186bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_186bc8:
    // 0x186bc8: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x186bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_186bcc:
    // 0x186bcc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_186bd0:
    if (ctx->pc == 0x186BD0u) {
        ctx->pc = 0x186BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BCCu;
        // 0x186bd0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BD4u;
        goto label_186bd4;
    }
    ctx->pc = 0x186BCCu;
    {
        const bool branch_taken_0x186bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BCCu;
        // 0x186bd0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bcc) {
            ctx->pc = 0x186BECu;
            goto label_186bec;
        }
    }
    ctx->pc = 0x186BD4u;
label_186bd4:
    // 0x186bd4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186bd8:
    // 0x186bd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x186bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_186bdc:
    // 0x186bdc: 0x40f809  jalr        $v0
label_186be0:
    if (ctx->pc == 0x186BE0u) {
        ctx->pc = 0x186BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BDCu;
        // 0x186be0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BE4u;
        goto label_186be4;
    }
    ctx->pc = 0x186BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186BE4u);
        ctx->pc = 0x186BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BDCu;
        // 0x186be0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186BDCu, 0x186BE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186BE4u;
label_186be4:
    // 0x186be4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x186be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
label_186be8:
    // 0x186be8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x186be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_186bec:
    // 0x186bec: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x186becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_186bf0:
    // 0x186bf0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_186bf4:
    // 0x186bf4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_186bf8:
    if (ctx->pc == 0x186BF8u) {
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186BFCu;
        goto label_186bfc;
    }
    ctx->pc = 0x186BF4u;
    {
        const bool branch_taken_0x186bf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x186BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BF4u;
        // 0x186bf8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186bf4) {
            ctx->pc = 0x186C04u;
            goto label_186c04;
        }
    }
    ctx->pc = 0x186BFCu;
label_186bfc:
    // 0x186bfc: 0xc0f5222  jal         func_3D4888
label_186c00:
    if (ctx->pc == 0x186C00u) {
        ctx->pc = 0x186C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186BFCu;
        // 0x186c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C04u;
        goto label_186c04;
    }
    ctx->pc = 0x186BFCu;
    SET_GPR_U32(ctx, 31, 0x186C04u);
    ctx->pc = 0x186C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186BFCu;
    // 0x186c00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x186BFCu, 0x186C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C04u;
label_186c04:
    // 0x186c04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186c04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186c08:
    // 0x186c08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186c08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186c0c:
    // 0x186c0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186c10:
    // 0x186c10: 0x3e00008  jr          $ra
label_186c14:
    if (ctx->pc == 0x186C14u) {
        ctx->pc = 0x186C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C10u;
        // 0x186c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C18u;
        goto label_fallthrough_0x186c10;
    }
    ctx->pc = 0x186C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C10u;
        // 0x186c14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186c10:
    ctx->pc = 0x186C18u;
}
