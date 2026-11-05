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

// Function: sub_001FA9E8
// Address: 0x1fa9e8 - 0x1faae0
void sub_001FA9E8_0x1fa9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA9E8_0x1fa9e8");
#endif

    switch (ctx->pc) {
        case 0x1faa68u: goto label_1faa68;
        case 0x1faa80u: goto label_1faa80;
        case 0x1faa9cu: goto label_1faa9c;
        case 0x1faaacu: goto label_1faaac;
        case 0x1faac0u: goto label_1faac0;
        default: break;
    }

    ctx->pc = 0x1fa9e8u;

    // 0x1fa9e8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1fa9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1fa9ec: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa9ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa9f0: 0x90c3931c  lbu         $v1, -0x6CE4($a2)
    ctx->pc = 0x1fa9f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F931Cu));
    // 0x1fa9f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1fa9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1fa9f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa9fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1fa9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1faa00: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1faa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1faa04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1faa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1faa08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1faa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1faa0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1faa0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa10: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1faa10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1faa14: 0x2c420029  sltiu       $v0, $v0, 0x29
    ctx->pc = 0x1faa14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x1faa18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAA18u;
    {
        const bool branch_taken_0x1faa18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA18u;
        // 0x1faa1c: 0xa0c3931c  sb          $v1, -0x6CE4($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294939420), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa18) {
            ctx->pc = 0x1FAA28u;
            goto label_1faa28;
        }
    }
    ctx->pc = 0x1FAA20u;
    // 0x1faa20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1faa20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faa24: 0xa0c2931c  sb          $v0, -0x6CE4($a2)
    ctx->pc = 0x1faa24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939420), (uint8_t)GPR_U32(ctx, 2));
label_1faa28:
    // 0x1faa28: 0x34028de0  ori         $v0, $zero, 0x8DE0
    ctx->pc = 0x1faa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1faa2c: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x1faa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x1faa30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1faa30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1faa34: 0x90c4931c  lbu         $a0, -0x6CE4($a2)
    ctx->pc = 0x1faa34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939420)));
    // 0x1faa38: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x1faa38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1faa3c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1faa3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1faa40: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1faa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1faa44: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FAA44u;
    {
        const bool branch_taken_0x1faa44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA44u;
        // 0x1faa48: 0xa204003a  sb          $a0, 0x3A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 58), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa44) {
            ctx->pc = 0x1FAAC0u;
            goto label_1faac0;
        }
    }
    ctx->pc = 0x1FAA4Cu;
    // 0x1faa4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1faa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faa50: 0x90c6931c  lbu         $a2, -0x6CE4($a2)
    ctx->pc = 0x1faa50u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294939420)));
    // 0x1faa54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1faa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1faa58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1faa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1faa5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa60: 0xc07eac6  jal         func_1FAB18
    ctx->pc = 0x1FAA60u;
    SET_GPR_U32(ctx, 31, 0x1FAA68u);
    ctx->pc = 0x1FAA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA60u;
    // 0x1faa64: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB18u, 0x1FAA60u, 0x1FAA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA68u;
label_1faa68:
    // 0x1faa68: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAA68u;
    {
        const bool branch_taken_0x1faa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1faa68) {
            ctx->pc = 0x1FAA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FAA68u;
            // 0x1faa6c: 0x92020000  lbu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FAA88u;
            goto label_1faa88;
        }
    }
    ctx->pc = 0x1FAA70u;
    // 0x1faa70: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1faa70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1faa74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1faa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faa78: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1FAA78u;
    SET_GPR_U32(ctx, 31, 0x1FAA80u);
    ctx->pc = 0x1FAA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA78u;
    // 0x1faa7c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1FAA78u, 0x1FAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA80u;
label_1faa80:
    // 0x1faa80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FAA80u;
    {
        const bool branch_taken_0x1faa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA80u;
        // 0x1faa84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa80) {
            ctx->pc = 0x1FAAC4u;
            goto label_1faac4;
        }
    }
    ctx->pc = 0x1FAA88u;
label_1faa88:
    // 0x1faa88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1faa88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1faa8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAA8Cu;
    {
        const bool branch_taken_0x1faa8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA8Cu;
        // 0x1faa90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa8c) {
            ctx->pc = 0x1FAAA4u;
            goto label_1faaa4;
        }
    }
    ctx->pc = 0x1FAA94u;
    // 0x1faa94: 0xc07eb1e  jal         func_1FAC78
    ctx->pc = 0x1FAA94u;
    SET_GPR_U32(ctx, 31, 0x1FAA9Cu);
    ctx->pc = 0x1FAA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAA94u;
    // 0x1faa98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC78u, 0x1FAA94u, 0x1FAA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAA9Cu;
label_1faa9c:
    // 0x1faa9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAA9Cu;
    {
        const bool branch_taken_0x1faa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAA9Cu;
        // 0x1faaa0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faa9c) {
            ctx->pc = 0x1FAAB0u;
            goto label_1faab0;
        }
    }
    ctx->pc = 0x1FAAA4u;
label_1faaa4:
    // 0x1faaa4: 0xc07eb3a  jal         func_1FACE8
    ctx->pc = 0x1FAAA4u;
    SET_GPR_U32(ctx, 31, 0x1FAAACu);
    ctx->pc = 0x1FAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAAA4u;
    // 0x1faaa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACE8u, 0x1FAAA4u, 0x1FAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAACu;
label_1faaac:
    // 0x1faaac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1faaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1faab0:
    // 0x1faab0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FAAB0u;
    {
        const bool branch_taken_0x1faab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAB0u;
        // 0x1faab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faab0) {
            ctx->pc = 0x1FAAC4u;
            goto label_1faac4;
        }
    }
    ctx->pc = 0x1FAAB8u;
    // 0x1faab8: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1FAAB8u;
    SET_GPR_U32(ctx, 31, 0x1FAAC0u);
    ctx->pc = 0x1FAABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAAB8u;
    // 0x1faabc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1FAAB8u, 0x1FAAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAAC0u;
label_1faac0:
    // 0x1faac0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1faac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1faac4:
    // 0x1faac4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1faac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1faac8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1faac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1faacc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1faaccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1faad0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1faad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1faad4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAAD4u;
        // 0x1faad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAADCu;
    // 0x1faadc: 0x0  nop
    ctx->pc = 0x1faadcu;
    // NOP
    ctx->pc = 0x1faae0u;
}
