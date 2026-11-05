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

// Function: sub_00177DB0
// Address: 0x177db0 - 0x177e20
void sub_00177DB0_0x177db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177DB0_0x177db0");
#endif

    switch (ctx->pc) {
        case 0x177dd0u: goto label_177dd0;
        case 0x177de0u: goto label_177de0;
        case 0x177df0u: goto label_177df0;
        default: break;
    }

    ctx->pc = 0x177db0u;

    // 0x177db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x177db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x177db4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x177db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177dbc: 0x91020158  lbu         $v0, 0x158($t0)
    ctx->pc = 0x177dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 344)));
    // 0x177dc0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x177DC0u;
    {
        const bool branch_taken_0x177dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DC0u;
        // 0x177dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dc0) {
            ctx->pc = 0x177DE8u;
            goto label_177de8;
        }
    }
    ctx->pc = 0x177DC8u;
    // 0x177dc8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x177DC8u;
    {
        const bool branch_taken_0x177dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DC8u;
        // 0x177dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dc8) {
            ctx->pc = 0x177E14u;
            goto label_177e14;
        }
    }
    ctx->pc = 0x177DD0u;
label_177dd0:
    // 0x177dd0: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x177dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x177dd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x177dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177dd8: 0xc05e4fc  jal         func_1793F0
    ctx->pc = 0x177DD8u;
    SET_GPR_U32(ctx, 31, 0x177DE0u);
    ctx->pc = 0x177DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177DD8u;
    // 0x177ddc: 0x8c4400dc  lw          $a0, 0xDC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1793F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1793F0u, 0x177DD8u, 0x177DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177DE0u;
label_177de0:
    // 0x177de0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x177DE0u;
    {
        const bool branch_taken_0x177de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DE0u;
        // 0x177de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177de0) {
            ctx->pc = 0x177E18u;
            goto label_177e18;
        }
    }
    ctx->pc = 0x177DE8u;
label_177de8:
    // 0x177de8: 0x250900d8  addiu       $t1, $t0, 0xD8
    ctx->pc = 0x177de8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 216));
    // 0x177dec: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x177decu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_177df0:
    // 0x177df0: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x177df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x177df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177df8: 0x1065fff5  beq         $v1, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x177DF8u;
    {
        const bool branch_taken_0x177df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x177DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DF8u;
        // 0x177dfc: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177df8) {
            ctx->pc = 0x177DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177dd0;
        }
    }
    ctx->pc = 0x177E00u;
    // 0x177e00: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177e04: 0x2ce30010  sltiu       $v1, $a3, 0x10
    ctx->pc = 0x177e04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177e08: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x177E08u;
    {
        const bool branch_taken_0x177e08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177e08) {
            ctx->pc = 0x177E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177E08u;
            // 0x177e0c: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177df0;
        }
    }
    ctx->pc = 0x177E10u;
    // 0x177e10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x177e10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_177e14:
    // 0x177e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177e18:
    // 0x177e18: 0x3e00008  jr          $ra
    ctx->pc = 0x177E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E18u;
        // 0x177e1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E20u;
}
