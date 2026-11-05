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

// Function: sub_00135DB0
// Address: 0x135db0 - 0x135e20
void sub_00135DB0_0x135db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135DB0_0x135db0");
#endif

    switch (ctx->pc) {
        case 0x135dd0u: goto label_135dd0;
        case 0x135dd8u: goto label_135dd8;
        case 0x135de8u: goto label_135de8;
        default: break;
    }

    ctx->pc = 0x135db0u;

    // 0x135db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x135db8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x135db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x135dbc: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x135dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x135dc0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x135DC0u;
    {
        const bool branch_taken_0x135dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x135dc0) {
            ctx->pc = 0x135DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135DC0u;
            // 0x135dc4: 0x8c860004  lw          $a2, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x135DE0u;
            goto label_135de0;
        }
    }
    ctx->pc = 0x135DC8u;
    // 0x135dc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x135DC8u;
    {
        const bool branch_taken_0x135dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DC8u;
        // 0x135dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135dc8) {
            ctx->pc = 0x135E0Cu;
            goto label_135e0c;
        }
    }
    ctx->pc = 0x135DD0u;
label_135dd0:
    // 0x135dd0: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x135DD0u;
    SET_GPR_U32(ctx, 31, 0x135DD8u);
    ctx->pc = 0x135DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135DD0u;
    // 0x135dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x135DD0u, 0x135DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135DD8u;
label_135dd8:
    // 0x135dd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x135DD8u;
    {
        const bool branch_taken_0x135dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DD8u;
        // 0x135ddc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135dd8) {
            ctx->pc = 0x135E0Cu;
            goto label_135e0c;
        }
    }
    ctx->pc = 0x135DE0u;
label_135de0:
    // 0x135de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x135de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135de4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x135de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_135de8:
    // 0x135de8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x135de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x135dec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x135decu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135df0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x135DF0u;
    {
        const bool branch_taken_0x135df0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x135DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135DF0u;
        // 0x135df4: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135df0) {
            ctx->pc = 0x135DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135dd0;
        }
    }
    ctx->pc = 0x135DF8u;
    // 0x135df8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x135df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x135dfc: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x135dfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x135e00: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x135E00u;
    {
        const bool branch_taken_0x135e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E00u;
        // 0x135e04: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135e00) {
            ctx->pc = 0x135DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135de8;
        }
    }
    ctx->pc = 0x135E08u;
    // 0x135e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135e0c:
    // 0x135e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135e10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x135e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x135e14: 0x3e00008  jr          $ra
    ctx->pc = 0x135E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135E14u;
        // 0x135e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x135E1Cu;
    // 0x135e1c: 0x0  nop
    ctx->pc = 0x135e1cu;
    // NOP
    ctx->pc = 0x135e20u;
}
