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

// Function: sub_00120718
// Address: 0x120718 - 0x120788
void sub_00120718_0x120718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120718_0x120718");
#endif

    switch (ctx->pc) {
        case 0x12072cu: goto label_12072c;
        case 0x120750u: goto label_120750;
        default: break;
    }

    ctx->pc = 0x120718u;

    // 0x120718: 0x90830214  lbu         $v1, 0x214($a0)
    ctx->pc = 0x120718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x12071c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12071Cu;
    {
        const bool branch_taken_0x12071c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12071Cu;
        // 0x120720: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12071c) {
            ctx->pc = 0x120734u;
            goto label_120734;
        }
    }
    ctx->pc = 0x120724u;
    // 0x120724: 0x3e00008  jr          $ra
    ctx->pc = 0x120724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12072Cu;
label_12072c:
    // 0x12072c: 0x3e00008  jr          $ra
    ctx->pc = 0x12072Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12072Cu;
        // 0x120730: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12072Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120734u;
label_120734:
    // 0x120734: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x120734u;
    {
        const bool branch_taken_0x120734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x120738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120734u;
        // 0x120738: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120734) {
            ctx->pc = 0x120780u;
            goto label_120780;
        }
    }
    ctx->pc = 0x12073Cu;
    // 0x12073c: 0x248a0118  addiu       $t2, $a0, 0x118
    ctx->pc = 0x12073cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x120740: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120744: 0x24840114  addiu       $a0, $a0, 0x114
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 276));
    // 0x120748: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x12074c: 0x0  nop
    ctx->pc = 0x12074cu;
    // NOP
label_120750:
    // 0x120750: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x120754: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120758: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x120758u;
    {
        const bool branch_taken_0x120758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x12075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120758u;
        // 0x12075c: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120758) {
            ctx->pc = 0x120770u;
            goto label_120770;
        }
    }
    ctx->pc = 0x120760u;
    // 0x120760: 0x1471021  addu        $v0, $t2, $a3
    ctx->pc = 0x120760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x120764: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x120764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x120768: 0x1066fff0  beq         $v1, $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x120768u;
    {
        const bool branch_taken_0x120768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x12076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120768u;
        // 0x12076c: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120768) {
            ctx->pc = 0x12072Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12072c;
        }
    }
    ctx->pc = 0x120770u;
label_120770:
    // 0x120770: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x120770u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120774: 0x109182b  sltu        $v1, $t0, $t1
    ctx->pc = 0x120774u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x120778: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x120778u;
    {
        const bool branch_taken_0x120778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120778u;
        // 0x12077c: 0x83900  sll         $a3, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120778) {
            ctx->pc = 0x120750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120750;
        }
    }
    ctx->pc = 0x120780u;
label_120780:
    // 0x120780: 0x3e00008  jr          $ra
    ctx->pc = 0x120780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120780u;
        // 0x120784: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120788u;
}
