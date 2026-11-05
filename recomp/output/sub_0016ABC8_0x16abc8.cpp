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

// Function: sub_0016ABC8
// Address: 0x16abc8 - 0x16ad40
void sub_0016ABC8_0x16abc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ABC8_0x16abc8");
#endif

    switch (ctx->pc) {
        case 0x16ac4cu: goto label_16ac4c;
        case 0x16ac5cu: goto label_16ac5c;
        case 0x16ac6cu: goto label_16ac6c;
        case 0x16acb0u: goto label_16acb0;
        case 0x16acd8u: goto label_16acd8;
        default: break;
    }

    ctx->pc = 0x16abc8u;

    // 0x16abc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16abc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16abcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16abccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16abd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16abd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16abd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16abd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abd8: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x16abd8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x16abdc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16abe0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x16abe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x16abe4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x16abe8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16abe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16abec: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x16abf0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16abf4: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16abf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16abfc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x16ac00: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x16AC00u;
    {
        const bool branch_taken_0x16ac00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16ac00) {
            ctx->pc = 0x16AC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AC00u;
            // 0x16ac04: 0xae0001a8  sw          $zero, 0x1A8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AC08u;
            goto label_16ac08;
        }
    }
    ctx->pc = 0x16AC08u;
label_16ac08:
    // 0x16ac08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ac0c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16ac10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ac14: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16AC14u;
    {
        const bool branch_taken_0x16ac14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC14u;
        // 0x16ac18: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac14) {
            ctx->pc = 0x16AC44u;
            goto label_16ac44;
        }
    }
    ctx->pc = 0x16AC1Cu;
    // 0x16ac1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AC1Cu;
    {
        const bool branch_taken_0x16ac1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC1Cu;
        // 0x16ac20: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac1c) {
            ctx->pc = 0x16AC34u;
            goto label_16ac34;
        }
    }
    ctx->pc = 0x16AC24u;
    // 0x16ac24: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AC24u;
    {
        const bool branch_taken_0x16ac24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC24u;
        // 0x16ac28: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac24) {
            ctx->pc = 0x16AC54u;
            goto label_16ac54;
        }
    }
    ctx->pc = 0x16AC2Cu;
    // 0x16ac2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x16AC2Cu;
    {
        const bool branch_taken_0x16ac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC2Cu;
        // 0x16ac30: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac2c) {
            ctx->pc = 0x16AC74u;
            goto label_16ac74;
        }
    }
    ctx->pc = 0x16AC34u;
label_16ac34:
    // 0x16ac34: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16AC34u;
    {
        const bool branch_taken_0x16ac34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC34u;
        // 0x16ac38: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac34) {
            ctx->pc = 0x16AC64u;
            goto label_16ac64;
        }
    }
    ctx->pc = 0x16AC3Cu;
    // 0x16ac3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x16AC3Cu;
    {
        const bool branch_taken_0x16ac3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC3Cu;
        // 0x16ac40: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac3c) {
            ctx->pc = 0x16AC74u;
            goto label_16ac74;
        }
    }
    ctx->pc = 0x16AC44u;
label_16ac44:
    // 0x16ac44: 0xc05ada4  jal         func_16B690
    ctx->pc = 0x16AC44u;
    SET_GPR_U32(ctx, 31, 0x16AC4Cu);
    ctx->pc = 0x16AC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC44u;
    // 0x16ac48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B690u, 0x16AC44u, 0x16AC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC4Cu;
label_16ac4c:
    // 0x16ac4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16AC4Cu;
    {
        const bool branch_taken_0x16ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC4Cu;
        // 0x16ac50: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac4c) {
            ctx->pc = 0x16AC70u;
            goto label_16ac70;
        }
    }
    ctx->pc = 0x16AC54u;
label_16ac54:
    // 0x16ac54: 0xc05aee2  jal         func_16BB88
    ctx->pc = 0x16AC54u;
    SET_GPR_U32(ctx, 31, 0x16AC5Cu);
    ctx->pc = 0x16AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC54u;
    // 0x16ac58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BB88u, 0x16AC54u, 0x16AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC5Cu;
label_16ac5c:
    // 0x16ac5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC5Cu;
    {
        const bool branch_taken_0x16ac5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AC5Cu;
        // 0x16ac60: 0x26030008  addiu       $v1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac5c) {
            ctx->pc = 0x16AC70u;
            goto label_16ac70;
        }
    }
    ctx->pc = 0x16AC64u;
label_16ac64:
    // 0x16ac64: 0xc05afc8  jal         func_16BF20
    ctx->pc = 0x16AC64u;
    SET_GPR_U32(ctx, 31, 0x16AC6Cu);
    ctx->pc = 0x16AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16AC64u;
    // 0x16ac68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF20u, 0x16AC64u, 0x16AC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC6Cu;
label_16ac6c:
    // 0x16ac6c: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x16ac6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_16ac70:
    // 0x16ac70: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_16ac74:
    // 0x16ac74: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x16ac74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ac78: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x16ac78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ac7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16ac7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16ac80: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ac84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ac88: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AC88u;
    {
        const bool branch_taken_0x16ac88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ac88) {
            ctx->pc = 0x16ACA0u;
            goto label_16aca0;
        }
    }
    ctx->pc = 0x16AC90u;
    // 0x16ac90: 0x9202002d  lbu         $v0, 0x2D($s0)
    ctx->pc = 0x16ac90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 45)));
    // 0x16ac94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ac98: 0xa202002d  sb          $v0, 0x2D($s0)
    ctx->pc = 0x16ac98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ac9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16ac9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16aca0:
    // 0x16aca0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16ACA0u;
    {
        const bool branch_taken_0x16aca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aca0) {
            ctx->pc = 0x16ACA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ACA0u;
            // 0x16aca4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ACB4u;
            goto label_16acb4;
        }
    }
    ctx->pc = 0x16ACA8u;
    // 0x16aca8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16ACA8u;
    SET_GPR_U32(ctx, 31, 0x16ACB0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16ACA8u, 0x16ACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACB0u;
label_16acb0:
    // 0x16acb0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x16acb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_16acb4:
    // 0x16acb4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16acb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acb8: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16acbc: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x16acbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16acc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16acc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16acc4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x16acc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16acc8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16ACC8u;
    {
        const bool branch_taken_0x16acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ACC8u;
        // 0x16accc: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acc8) {
            ctx->pc = 0x16AD10u;
            goto label_16ad10;
        }
    }
    ctx->pc = 0x16ACD0u;
    // 0x16acd0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x16acd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16acd4: 0x0  nop
    ctx->pc = 0x16acd4u;
    // NOP
label_16acd8:
    // 0x16acd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16acdc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16ace0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16ace4: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x16ace8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16acec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16acf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16acf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16acf8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x16acf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x16acfc: 0x9202002c  lbu         $v0, 0x2C($s0)
    ctx->pc = 0x16acfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16ad00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x16ad00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16ad04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x16AD04u;
    {
        const bool branch_taken_0x16ad04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD04u;
        // 0x16ad08: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad04) {
            ctx->pc = 0x16ACD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16acd8;
        }
    }
    ctx->pc = 0x16AD0Cu;
    // 0x16ad0c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_16ad10:
    // 0x16ad10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ad10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ad14: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16ad18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16ad18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ad1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16ad1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16ad20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x16ad20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16ad24: 0x9203002c  lbu         $v1, 0x2C($s0)
    ctx->pc = 0x16ad24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16ad28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16ad28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ad2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16ad30: 0xa203002c  sb          $v1, 0x2C($s0)
    ctx->pc = 0x16ad30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x16ad34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ad34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ad38: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD38u;
        // 0x16ad3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AD40u;
}
