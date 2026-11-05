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

// Function: sub_003ADAE0
// Address: 0x3adae0 - 0x3adc00
void sub_003ADAE0_0x3adae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADAE0_0x3adae0");
#endif

    switch (ctx->pc) {
        case 0x3adb28u: goto label_3adb28;
        case 0x3adb7cu: goto label_3adb7c;
        case 0x3adb88u: goto label_3adb88;
        case 0x3adb98u: goto label_3adb98;
        case 0x3adbd8u: goto label_3adbd8;
        default: break;
    }

    ctx->pc = 0x3adae0u;

    // 0x3adae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3adae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3adae4: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3adae4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3adae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3adae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3adaec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3adaecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3adaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3adaf4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3adaf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adaf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3adaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3adafc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3adafcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3adb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3adb04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3adb04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3adb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3adb0c: 0x25033720  addiu       $v1, $t0, 0x3720
    ctx->pc = 0x3adb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 14112));
    // 0x3adb10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3adb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3adb14: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3adb14u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x423720u));
    // 0x3adb18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ADB18u;
    {
        const bool branch_taken_0x3adb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB18u;
        // 0x3adb1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb18) {
            ctx->pc = 0x3ADB4Cu;
            goto label_3adb4c;
        }
    }
    ctx->pc = 0x3ADB20u;
    // 0x3adb20: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3adb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3adb24: 0x0  nop
    ctx->pc = 0x3adb24u;
    // NOP
label_3adb28:
    // 0x3adb28: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x3adb28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3adb2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3ADB2Cu;
    {
        const bool branch_taken_0x3adb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB2Cu;
        // 0x3adb30: 0x24630104  addiu       $v1, $v1, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb2c) {
            ctx->pc = 0x3ADB4Cu;
            goto label_3adb4c;
        }
    }
    ctx->pc = 0x3ADB34u;
    // 0x3adb34: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x3adb34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3adb38: 0x0  nop
    ctx->pc = 0x3adb38u;
    // NOP
    // 0x3adb3c: 0x0  nop
    ctx->pc = 0x3adb3cu;
    // NOP
    // 0x3adb40: 0x0  nop
    ctx->pc = 0x3adb40u;
    // NOP
    // 0x3adb44: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3ADB44u;
    {
        const bool branch_taken_0x3adb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3adb44) {
            ctx->pc = 0x3ADB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ADB44u;
            // 0x3adb48: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ADB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3adb28;
        }
    }
    ctx->pc = 0x3ADB4Cu;
label_3adb4c:
    // 0x3adb4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3adb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3adb50: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3ADB50u;
    {
        const bool branch_taken_0x3adb50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3ADB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB50u;
        // 0x3adb54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb50) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADB58u;
    // 0x3adb58: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3adb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x3adb5c: 0x25033720  addiu       $v1, $t0, 0x3720
    ctx->pc = 0x3adb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 14112));
    // 0x3adb60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3adb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3adb64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3adb64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adb68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3adb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3adb6c: 0x24060104  addiu       $a2, $zero, 0x104
    ctx->pc = 0x3adb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x3adb70: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3adb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3adb74: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3ADB74u;
    SET_GPR_U32(ctx, 31, 0x3ADB7Cu);
    ctx->pc = 0x3ADB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB74u;
    // 0x3adb78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3ADB74u, 0x3ADB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB7Cu;
label_3adb7c:
    // 0x3adb7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3adb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3adb80: 0xc0ec3aa  jal         func_3B0EA8
    ctx->pc = 0x3ADB80u;
    SET_GPR_U32(ctx, 31, 0x3ADB88u);
    ctx->pc = 0x3ADB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB80u;
    // 0x3adb84: 0xa6030000  sh          $v1, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0EA8u, 0x3ADB80u, 0x3ADB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB88u;
label_3adb88:
    // 0x3adb88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3ADB88u;
    {
        const bool branch_taken_0x3adb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB88u;
        // 0x3adb8c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb88) {
            ctx->pc = 0x3ADBA0u;
            goto label_3adba0;
        }
    }
    ctx->pc = 0x3ADB90u;
    // 0x3adb90: 0xc0eb700  jal         func_3ADC00
    ctx->pc = 0x3ADB90u;
    SET_GPR_U32(ctx, 31, 0x3ADB98u);
    ctx->pc = 0x3ADB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADB90u;
    // 0x3adb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADC00u, 0x3ADB90u, 0x3ADB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADB98u;
label_3adb98:
    // 0x3adb98: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3ADB98u;
    {
        const bool branch_taken_0x3adb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADB98u;
        // 0x3adb9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3adb98) {
            ctx->pc = 0x3ADBDCu;
            goto label_3adbdc;
        }
    }
    ctx->pc = 0x3ADBA0u;
label_3adba0:
    // 0x3adba0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3adba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3adba4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3adba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3adba8: 0x2442da58  addiu       $v0, $v0, -0x25A8
    ctx->pc = 0x3adba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957656));
    // 0x3adbac: 0x2463da88  addiu       $v1, $v1, -0x2578
    ctx->pc = 0x3adbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957704));
    // 0x3adbb0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x3adbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x3adbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3adbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3adbb8: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x3adbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x3adbbc: 0xae13003c  sw          $s3, 0x3C($s0)
    ctx->pc = 0x3adbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 19));
    // 0x3adbc0: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x3adbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x3adbc4: 0xae120044  sw          $s2, 0x44($s0)
    ctx->pc = 0x3adbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 18));
    // 0x3adbc8: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x3adbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x3adbcc: 0xae10007c  sw          $s0, 0x7C($s0)
    ctx->pc = 0x3adbccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 16));
    // 0x3adbd0: 0xc0eb6aa  jal         func_3ADAA8
    ctx->pc = 0x3ADBD0u;
    SET_GPR_U32(ctx, 31, 0x3ADBD8u);
    ctx->pc = 0x3ADBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ADBD0u;
    // 0x3adbd4: 0xae100084  sw          $s0, 0x84($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAA8u, 0x3ADBD0u, 0x3ADBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ADBD8u;
label_3adbd8:
    // 0x3adbd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3adbd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3adbdc:
    // 0x3adbdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3adbdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3adbe0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3adbe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3adbe4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3adbe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3adbe8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3adbe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3adbec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3adbecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3adbf0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3adbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3adbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADBF4u;
        // 0x3adbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADBFCu;
    // 0x3adbfc: 0x0  nop
    ctx->pc = 0x3adbfcu;
    // NOP
    ctx->pc = 0x3adc00u;
}
