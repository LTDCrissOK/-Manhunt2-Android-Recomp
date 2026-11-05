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

// Function: sub_0017F6C0
// Address: 0x17f6c0 - 0x17f750
void sub_0017F6C0_0x17f6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F6C0_0x17f6c0");
#endif

    switch (ctx->pc) {
        case 0x17f708u: goto label_17f708;
        case 0x17f71cu: goto label_17f71c;
        default: break;
    }

    ctx->pc = 0x17f6c0u;

    // 0x17f6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f6c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f6cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f6d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17f6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17f6d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17f6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17f6d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f6dc: 0x10a20016  beq         $a1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x17F6DCu;
    {
        const bool branch_taken_0x17f6dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6DCu;
        // 0x17f6e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6dc) {
            ctx->pc = 0x17F738u;
            goto label_17f738;
        }
    }
    ctx->pc = 0x17F6E4u;
    // 0x17f6e4: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x17F6E4u;
    {
        const bool branch_taken_0x17f6e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6E4u;
        // 0x17f6e8: 0xae250004  sw          $a1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6e4) {
            ctx->pc = 0x17F738u;
            goto label_17f738;
        }
    }
    ctx->pc = 0x17F6ECu;
    // 0x17f6ec: 0x92220410  lbu         $v0, 0x410($s1)
    ctx->pc = 0x17f6ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x17f6f0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F6F0u;
    {
        const bool branch_taken_0x17f6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f6f0) {
            ctx->pc = 0x17F6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F6F0u;
            // 0x17f6f4: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F73Cu;
            goto label_17f73c;
        }
    }
    ctx->pc = 0x17F6F8u;
    // 0x17f6f8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17F6F8u;
    {
        const bool branch_taken_0x17f6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F6F8u;
        // 0x17f6fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6f8) {
            ctx->pc = 0x17F734u;
            goto label_17f734;
        }
    }
    ctx->pc = 0x17F700u;
    // 0x17f700: 0x24120009  addiu       $s2, $zero, 0x9
    ctx->pc = 0x17f700u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17f704: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x17f704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_17f708:
    // 0x17f708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f70c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17f710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17f710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f714: 0xc060164  jal         func_180590
    ctx->pc = 0x17F714u;
    SET_GPR_U32(ctx, 31, 0x17F71Cu);
    ctx->pc = 0x17F718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F714u;
    // 0x17f718: 0xac520024  sw          $s2, 0x24($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180590u, 0x17F714u, 0x17F71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F71Cu;
label_17f71c:
    // 0x17f71c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f720: 0x92220410  lbu         $v0, 0x410($s1)
    ctx->pc = 0x17f720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1040)));
    // 0x17f724: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x17f724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17f728: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x17f728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17f72c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F72Cu;
    {
        const bool branch_taken_0x17f72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F72Cu;
        // 0x17f730: 0x101140  sll         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f72c) {
            ctx->pc = 0x17F708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17f708;
        }
    }
    ctx->pc = 0x17F734u;
label_17f734:
    // 0x17f734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f738:
    // 0x17f738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17f73c:
    // 0x17f73c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17f73cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f740: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17f740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17f744: 0x3e00008  jr          $ra
    ctx->pc = 0x17F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F744u;
        // 0x17f748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F74Cu;
    // 0x17f74c: 0x0  nop
    ctx->pc = 0x17f74cu;
    // NOP
    ctx->pc = 0x17f750u;
}
