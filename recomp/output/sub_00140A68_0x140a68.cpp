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

// Function: sub_00140A68
// Address: 0x140a68 - 0x140b18
void sub_00140A68_0x140a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140A68_0x140a68");
#endif

    switch (ctx->pc) {
        case 0x140a68u: goto label_140a68;
        case 0x140a6cu: goto label_140a6c;
        case 0x140a70u: goto label_140a70;
        case 0x140a74u: goto label_140a74;
        case 0x140a78u: goto label_140a78;
        case 0x140a7cu: goto label_140a7c;
        case 0x140a80u: goto label_140a80;
        case 0x140a84u: goto label_140a84;
        case 0x140a88u: goto label_140a88;
        case 0x140a8cu: goto label_140a8c;
        case 0x140a90u: goto label_140a90;
        case 0x140a94u: goto label_140a94;
        case 0x140a98u: goto label_140a98;
        case 0x140a9cu: goto label_140a9c;
        case 0x140aa0u: goto label_140aa0;
        case 0x140aa4u: goto label_140aa4;
        case 0x140aa8u: goto label_140aa8;
        case 0x140aacu: goto label_140aac;
        case 0x140ab0u: goto label_140ab0;
        case 0x140ab4u: goto label_140ab4;
        case 0x140ab8u: goto label_140ab8;
        case 0x140abcu: goto label_140abc;
        case 0x140ac0u: goto label_140ac0;
        case 0x140ac4u: goto label_140ac4;
        case 0x140ac8u: goto label_140ac8;
        case 0x140accu: goto label_140acc;
        case 0x140ad0u: goto label_140ad0;
        case 0x140ad4u: goto label_140ad4;
        case 0x140ad8u: goto label_140ad8;
        case 0x140adcu: goto label_140adc;
        case 0x140ae0u: goto label_140ae0;
        case 0x140ae4u: goto label_140ae4;
        case 0x140ae8u: goto label_140ae8;
        case 0x140aecu: goto label_140aec;
        case 0x140af0u: goto label_140af0;
        case 0x140af4u: goto label_140af4;
        case 0x140af8u: goto label_140af8;
        case 0x140afcu: goto label_140afc;
        case 0x140b00u: goto label_140b00;
        case 0x140b04u: goto label_140b04;
        case 0x140b08u: goto label_140b08;
        case 0x140b0cu: goto label_140b0c;
        case 0x140b10u: goto label_140b10;
        case 0x140b14u: goto label_140b14;
        default: break;
    }

    ctx->pc = 0x140a68u;

label_140a68:
    // 0x140a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_140a6c:
    // 0x140a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_140a70:
    // 0x140a70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x140a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_140a74:
    // 0x140a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_140a78:
    // 0x140a78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x140a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_140a7c:
    // 0x140a7c: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x140a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_140a80:
    // 0x140a80: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
label_140a84:
    if (ctx->pc == 0x140A84u) {
        ctx->pc = 0x140A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A80u;
        // 0x140a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A88u;
        goto label_140a88;
    }
    ctx->pc = 0x140A80u;
    {
        const bool branch_taken_0x140a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140a80) {
            ctx->pc = 0x140A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140A80u;
            // 0x140a84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140B08u;
            goto label_140b08;
        }
    }
    ctx->pc = 0x140A88u;
label_140a88:
    // 0x140a88: 0xc04db02  jal         func_136C08
label_140a8c:
    if (ctx->pc == 0x140A8Cu) {
        ctx->pc = 0x140A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A88u;
        // 0x140a8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A90u;
        goto label_140a90;
    }
    ctx->pc = 0x140A88u;
    SET_GPR_U32(ctx, 31, 0x140A90u);
    ctx->pc = 0x140A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140A88u;
    // 0x140a8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x140A88u, 0x140A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140A90u;
label_140a90:
    // 0x140a90: 0x10000003  b           . + 4 + (0x3 << 2)
label_140a94:
    if (ctx->pc == 0x140A94u) {
        ctx->pc = 0x140A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A90u;
        // 0x140a94: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140A98u;
        goto label_140a98;
    }
    ctx->pc = 0x140A90u;
    {
        const bool branch_taken_0x140a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140A90u;
        // 0x140a94: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140a90) {
            ctx->pc = 0x140AA0u;
            goto label_140aa0;
        }
    }
    ctx->pc = 0x140A98u;
label_140a98:
    // 0x140a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_140a9c:
    // 0x140a9c: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x140a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_140aa0:
    // 0x140aa0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x140aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_140aa4:
    // 0x140aa4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x140aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_140aa8:
    // 0x140aa8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_140aac:
    if (ctx->pc == 0x140AACu) {
        ctx->pc = 0x140AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AA8u;
        // 0x140aac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140AB0u;
        goto label_140ab0;
    }
    ctx->pc = 0x140AA8u;
    {
        const bool branch_taken_0x140aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140aa8) {
            ctx->pc = 0x140AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AA8u;
            // 0x140aac: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140AF8u;
            goto label_140af8;
        }
    }
    ctx->pc = 0x140AB0u;
label_140ab0:
    // 0x140ab0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x140ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_140ab4:
    // 0x140ab4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x140ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_140ab8:
    // 0x140ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_140abc:
    // 0x140abc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x140abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_140ac0:
    // 0x140ac0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140ac4:
    // 0x140ac4: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_140ac8:
    if (ctx->pc == 0x140AC8u) {
        ctx->pc = 0x140AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AC4u;
        // 0x140ac8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140ACCu;
        goto label_140acc;
    }
    ctx->pc = 0x140AC4u;
    {
        const bool branch_taken_0x140ac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140ac4) {
            ctx->pc = 0x140AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AC4u;
            // 0x140ac8: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140a98;
        }
    }
    ctx->pc = 0x140ACCu;
label_140acc:
    // 0x140acc: 0xc050328  jal         func_140CA0
label_140ad0:
    if (ctx->pc == 0x140AD0u) {
        ctx->pc = 0x140AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140ACCu;
        // 0x140ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140AD4u;
        goto label_140ad4;
    }
    ctx->pc = 0x140ACCu;
    SET_GPR_U32(ctx, 31, 0x140AD4u);
    ctx->pc = 0x140AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140ACCu;
    // 0x140ad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140CA0u, 0x140ACCu, 0x140AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AD4u;
label_140ad4:
    // 0x140ad4: 0x8e050520  lw          $a1, 0x520($s0)
    ctx->pc = 0x140ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
label_140ad8:
    // 0x140ad8: 0xc04d80c  jal         func_136030
label_140adc:
    if (ctx->pc == 0x140ADCu) {
        ctx->pc = 0x140ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AD8u;
        // 0x140adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140AE0u;
        goto label_140ae0;
    }
    ctx->pc = 0x140AD8u;
    SET_GPR_U32(ctx, 31, 0x140AE0u);
    ctx->pc = 0x140ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140AD8u;
    // 0x140adc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x140AD8u, 0x140AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140AE0u;
label_140ae0:
    // 0x140ae0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x140ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_140ae4:
    // 0x140ae4: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x140ae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_140ae8:
    // 0x140ae8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x140ae8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140aec:
    // 0x140aec: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_140af0:
    if (ctx->pc == 0x140AF0u) {
        ctx->pc = 0x140AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AECu;
        // 0x140af0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140AF4u;
        goto label_140af4;
    }
    ctx->pc = 0x140AECu;
    {
        const bool branch_taken_0x140aec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x140aec) {
            ctx->pc = 0x140AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x140AECu;
            // 0x140af0: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x140A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_140a98;
        }
    }
    ctx->pc = 0x140AF4u;
label_140af4:
    // 0x140af4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x140af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_140af8:
    // 0x140af8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x140af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_140afc:
    // 0x140afc: 0x40f809  jalr        $v0
label_140b00:
    if (ctx->pc == 0x140B00u) {
        ctx->pc = 0x140B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AFCu;
        // 0x140b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B04u;
        goto label_140b04;
    }
    ctx->pc = 0x140AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140B04u);
        ctx->pc = 0x140B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140AFCu;
        // 0x140b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140AFCu, 0x140B04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140B04u;
label_140b04:
    // 0x140b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_140b08:
    // 0x140b08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x140b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_140b0c:
    // 0x140b0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x140b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_140b10:
    // 0x140b10: 0x3e00008  jr          $ra
label_140b14:
    if (ctx->pc == 0x140B14u) {
        ctx->pc = 0x140B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B10u;
        // 0x140b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140B18u;
        goto label_fallthrough_0x140b10;
    }
    ctx->pc = 0x140B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140B10u;
        // 0x140b14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x140b10:
    ctx->pc = 0x140B18u;
}
