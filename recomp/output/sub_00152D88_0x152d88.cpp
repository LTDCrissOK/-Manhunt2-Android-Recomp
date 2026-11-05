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

// Function: sub_00152D88
// Address: 0x152d88 - 0x152df0
void sub_00152D88_0x152d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152D88_0x152d88");
#endif

    switch (ctx->pc) {
        case 0x152d9cu: goto label_152d9c;
        case 0x152dacu: goto label_152dac;
        case 0x152dbcu: goto label_152dbc;
        case 0x152dccu: goto label_152dcc;
        case 0x152ddcu: goto label_152ddc;
        default: break;
    }

    ctx->pc = 0x152d88u;

    // 0x152d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x152d94: 0xc054b7c  jal         func_152DF0
    ctx->pc = 0x152D94u;
    SET_GPR_U32(ctx, 31, 0x152D9Cu);
    ctx->pc = 0x152D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152D94u;
    // 0x152d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152DF0u, 0x152D94u, 0x152D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152D9Cu;
label_152d9c:
    // 0x152d9c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x152D9Cu;
    {
        const bool branch_taken_0x152d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152d9c) {
            ctx->pc = 0x152DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152D9Cu;
            // 0x152da0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152DE0u;
            goto label_152de0;
        }
    }
    ctx->pc = 0x152DA4u;
    // 0x152da4: 0xc054b84  jal         func_152E10
    ctx->pc = 0x152DA4u;
    SET_GPR_U32(ctx, 31, 0x152DACu);
    ctx->pc = 0x152DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DA4u;
    // 0x152da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152E10u, 0x152DA4u, 0x152DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DACu;
label_152dac:
    // 0x152dac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x152DACu;
    {
        const bool branch_taken_0x152dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152dac) {
            ctx->pc = 0x152DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152DACu;
            // 0x152db0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152DE0u;
            goto label_152de0;
        }
    }
    ctx->pc = 0x152DB4u;
    // 0x152db4: 0xc054b94  jal         func_152E50
    ctx->pc = 0x152DB4u;
    SET_GPR_U32(ctx, 31, 0x152DBCu);
    ctx->pc = 0x152DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DB4u;
    // 0x152db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152E50u, 0x152DB4u, 0x152DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DBCu;
label_152dbc:
    // 0x152dbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x152DBCu;
    {
        const bool branch_taken_0x152dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152dbc) {
            ctx->pc = 0x152DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152DBCu;
            // 0x152dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152DE0u;
            goto label_152de0;
        }
    }
    ctx->pc = 0x152DC4u;
    // 0x152dc4: 0xc054ba6  jal         func_152E98
    ctx->pc = 0x152DC4u;
    SET_GPR_U32(ctx, 31, 0x152DCCu);
    ctx->pc = 0x152DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DC4u;
    // 0x152dc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152E98u, 0x152DC4u, 0x152DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DCCu;
label_152dcc:
    // 0x152dcc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x152DCCu;
    {
        const bool branch_taken_0x152dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152dcc) {
            ctx->pc = 0x152DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152DCCu;
            // 0x152dd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x152DE0u;
            goto label_152de0;
        }
    }
    ctx->pc = 0x152DD4u;
    // 0x152dd4: 0xc054bb8  jal         func_152EE0
    ctx->pc = 0x152DD4u;
    SET_GPR_U32(ctx, 31, 0x152DDCu);
    ctx->pc = 0x152DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152DD4u;
    // 0x152dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152EE0u, 0x152DD4u, 0x152DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152DDCu;
label_152ddc:
    // 0x152ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_152de0:
    // 0x152de0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152de4: 0x3e00008  jr          $ra
    ctx->pc = 0x152DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152DE4u;
        // 0x152de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152DECu;
    // 0x152dec: 0x0  nop
    ctx->pc = 0x152decu;
    // NOP
    ctx->pc = 0x152df0u;
}
