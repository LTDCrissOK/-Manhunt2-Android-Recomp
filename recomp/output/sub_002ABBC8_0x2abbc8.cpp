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

// Function: sub_002ABBC8
// Address: 0x2abbc8 - 0x2abce0
void sub_002ABBC8_0x2abbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABBC8_0x2abbc8");
#endif

    switch (ctx->pc) {
        case 0x2abc08u: goto label_2abc08;
        case 0x2abc1cu: goto label_2abc1c;
        case 0x2abc28u: goto label_2abc28;
        case 0x2abc34u: goto label_2abc34;
        case 0x2abc40u: goto label_2abc40;
        case 0x2abc5cu: goto label_2abc5c;
        case 0x2abc78u: goto label_2abc78;
        case 0x2abc88u: goto label_2abc88;
        case 0x2abca0u: goto label_2abca0;
        case 0x2abcacu: goto label_2abcac;
        case 0x2abcb4u: goto label_2abcb4;
        case 0x2abcc0u: goto label_2abcc0;
        default: break;
    }

    ctx->pc = 0x2abbc8u;

    // 0x2abbc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2abbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2abbcc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2abbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2abbd0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2abbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2abbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abbd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2abbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2abbdc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x2abbdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2abbe0: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x2abbe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2abbe4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2abbe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2abbe8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2ABBE8u;
    {
        const bool branch_taken_0x2abbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abbe8) {
            ctx->pc = 0x2ABC00u;
            goto label_2abc00;
        }
    }
    ctx->pc = 0x2ABBF0u;
    // 0x2abbf0: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x2abbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abbf4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2abbf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2abbf8: 0x50400032  beql        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x2ABBF8u;
    {
        const bool branch_taken_0x2abbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abbf8) {
            ctx->pc = 0x2ABBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABBF8u;
            // 0x2abbfc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABCC4u;
            goto label_2abcc4;
        }
    }
    ctx->pc = 0x2ABC00u;
label_2abc00:
    // 0x2abc00: 0xc0ab35e  jal         func_2ACD78
    ctx->pc = 0x2ABC00u;
    SET_GPR_U32(ctx, 31, 0x2ABC08u);
    ctx->pc = 0x2ABC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC00u;
    // 0x2abc04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACD78u, 0x2ABC00u, 0x2ABC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC08u;
label_2abc08:
    // 0x2abc08: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2abc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2abc0c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2ABC0Cu;
    {
        const bool branch_taken_0x2abc0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abc0c) {
            ctx->pc = 0x2ABC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABC0Cu;
            // 0x2abc10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC38u;
            goto label_2abc38;
        }
    }
    ctx->pc = 0x2ABC14u;
    // 0x2abc14: 0xc0aaf38  jal         func_2ABCE0
    ctx->pc = 0x2ABC14u;
    SET_GPR_U32(ctx, 31, 0x2ABC1Cu);
    ctx->pc = 0x2ABC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC14u;
    // 0x2abc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABCE0u, 0x2ABC14u, 0x2ABC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC1Cu;
label_2abc1c:
    // 0x2abc1c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2abc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2abc20: 0xc0ab386  jal         func_2ACE18
    ctx->pc = 0x2ABC20u;
    SET_GPR_U32(ctx, 31, 0x2ABC28u);
    ctx->pc = 0x2ABC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC20u;
    // 0x2abc24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE18u, 0x2ABC20u, 0x2ABC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC28u;
label_2abc28:
    // 0x2abc28: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x2abc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2abc2c: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2ABC2Cu;
    SET_GPR_U32(ctx, 31, 0x2ABC34u);
    ctx->pc = 0x2ABC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC2Cu;
    // 0x2abc30: 0x8e050020  lw          $a1, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2ABC2Cu, 0x2ABC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC34u;
label_2abc34:
    // 0x2abc34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2abc34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2abc38:
    // 0x2abc38: 0xc0aaeb0  jal         func_2ABAC0
    ctx->pc = 0x2ABC38u;
    SET_GPR_U32(ctx, 31, 0x2ABC40u);
    ctx->pc = 0x2ABC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC38u;
    // 0x2abc3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABAC0u, 0x2ABC38u, 0x2ABC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC40u;
label_2abc40:
    // 0x2abc40: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABC40u;
    {
        const bool branch_taken_0x2abc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC40u;
        // 0x2abc44: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc40) {
            ctx->pc = 0x2ABC64u;
            goto label_2abc64;
        }
    }
    ctx->pc = 0x2ABC48u;
    // 0x2abc48: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2abc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2abc4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2ABC4Cu;
    {
        const bool branch_taken_0x2abc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC4Cu;
        // 0x2abc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc4c) {
            ctx->pc = 0x2ABC70u;
            goto label_2abc70;
        }
    }
    ctx->pc = 0x2ABC54u;
    // 0x2abc54: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ABC54u;
    SET_GPR_U32(ctx, 31, 0x2ABC5Cu);
    ctx->pc = 0x2ABC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC54u;
    // 0x2abc58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ABC54u, 0x2ABC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC5Cu;
label_2abc5c:
    // 0x2abc5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABC5Cu;
    {
        const bool branch_taken_0x2abc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC5Cu;
        // 0x2abc60: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc5c) {
            ctx->pc = 0x2ABC70u;
            goto label_2abc70;
        }
    }
    ctx->pc = 0x2ABC64u;
label_2abc64:
    // 0x2abc64: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ABC64u;
    {
        const bool branch_taken_0x2abc64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2abc64) {
            ctx->pc = 0x2ABC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABC64u;
            // 0x2abc68: 0x96060024  lhu         $a2, 0x24($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABC80u;
            goto label_2abc80;
        }
    }
    ctx->pc = 0x2ABC6Cu;
    // 0x2abc6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2abc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2abc70:
    // 0x2abc70: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x2ABC70u;
    SET_GPR_U32(ctx, 31, 0x2ABC78u);
    ctx->pc = 0x2ABC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC70u;
    // 0x2abc74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2ABC70u, 0x2ABC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC78u;
label_2abc78:
    // 0x2abc78: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2ABC78u;
    {
        const bool branch_taken_0x2abc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABC78u;
        // 0x2abc7c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abc78) {
            ctx->pc = 0x2ABCC4u;
            goto label_2abcc4;
        }
    }
    ctx->pc = 0x2ABC80u;
label_2abc80:
    // 0x2abc80: 0xc0efd60  jal         func_3BF580
    ctx->pc = 0x2ABC80u;
    SET_GPR_U32(ctx, 31, 0x2ABC88u);
    ctx->pc = 0x2ABC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC80u;
    // 0x2abc84: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF580u, 0x2ABC80u, 0x2ABC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABC88u;
label_2abc88:
    // 0x2abc88: 0x96030024  lhu         $v1, 0x24($s0)
    ctx->pc = 0x2abc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2abc8c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2abc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2abc90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2abc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2abc94: 0xa060ffff  sb          $zero, -0x1($v1)
    ctx->pc = 0x2abc94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294967295), (uint8_t)GPR_U32(ctx, 0));
    // 0x2abc98: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2ABC98u;
    SET_GPR_U32(ctx, 31, 0x2ABCA0u);
    ctx->pc = 0x2ABC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABC98u;
    // 0x2abc9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2ABC98u, 0x2ABCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCA0u;
label_2abca0:
    // 0x2abca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2abca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abca4: 0xc0ab39e  jal         func_2ACE78
    ctx->pc = 0x2ABCA4u;
    SET_GPR_U32(ctx, 31, 0x2ABCACu);
    ctx->pc = 0x2ABCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCA4u;
    // 0x2abca8: 0xa602004c  sh          $v0, 0x4C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACE78u, 0x2ABCA4u, 0x2ABCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCACu;
label_2abcac:
    // 0x2abcac: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2ABCACu;
    SET_GPR_U32(ctx, 31, 0x2ABCB4u);
    ctx->pc = 0x2ABCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCACu;
    // 0x2abcb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2ABCACu, 0x2ABCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCB4u;
label_2abcb4:
    // 0x2abcb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2abcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abcb8: 0xc0ab36c  jal         func_2ACDB0
    ctx->pc = 0x2ABCB8u;
    SET_GPR_U32(ctx, 31, 0x2ABCC0u);
    ctx->pc = 0x2ABCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABCB8u;
    // 0x2abcbc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDB0u, 0x2ABCB8u, 0x2ABCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABCC0u;
label_2abcc0:
    // 0x2abcc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2abcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2abcc4:
    // 0x2abcc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2abcc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2abcc8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2abcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2abccc: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABCCCu;
        // 0x2abcd0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABCD4u;
    // 0x2abcd4: 0x0  nop
    ctx->pc = 0x2abcd4u;
    // NOP
    // 0x2abcd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2abcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2abcdc: 0x0  nop
    ctx->pc = 0x2abcdcu;
    // NOP
    ctx->pc = 0x2abce0u;
}
