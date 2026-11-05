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

// Function: sub_00399DB0
// Address: 0x399db0 - 0x399e00
void sub_00399DB0_0x399db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399DB0_0x399db0");
#endif

    switch (ctx->pc) {
        case 0x399dc4u: goto label_399dc4;
        case 0x399dd0u: goto label_399dd0;
        case 0x399dd8u: goto label_399dd8;
        default: break;
    }

    ctx->pc = 0x399db0u;

    // 0x399db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399db8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399dbc: 0xc0e673a  jal         func_399CE8
    ctx->pc = 0x399DBCu;
    SET_GPR_U32(ctx, 31, 0x399DC4u);
    ctx->pc = 0x399DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399DBCu;
    // 0x399dc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x399DBCu, 0x399DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DC4u;
label_399dc4:
    // 0x399dc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x399DC4u;
    {
        const bool branch_taken_0x399dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DC4u;
        // 0x399dc8: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399dc4) {
            ctx->pc = 0x399DDCu;
            goto label_399ddc;
        }
    }
    ctx->pc = 0x399DCCu;
    // 0x399dcc: 0x0  nop
    ctx->pc = 0x399dccu;
    // NOP
label_399dd0:
    // 0x399dd0: 0xc0e57a4  jal         func_395E90
    ctx->pc = 0x399DD0u;
    SET_GPR_U32(ctx, 31, 0x399DD8u);
    ctx->pc = 0x395E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E90u, 0x399DD0u, 0x399DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399DD8u;
label_399dd8:
    // 0x399dd8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x399dd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_399ddc:
    // 0x399ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399de0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x399DE0u;
    {
        const bool branch_taken_0x399de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399de0) {
            ctx->pc = 0x399DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399dd0;
        }
    }
    ctx->pc = 0x399DE8u;
    // 0x399de8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x399de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x399dec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x399DECu;
    {
        const bool branch_taken_0x399dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x399DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DECu;
        // 0x399df0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399dec) {
            ctx->pc = 0x399DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399dd0;
        }
    }
    ctx->pc = 0x399DF4u;
    // 0x399df4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399df4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399df8: 0x3e00008  jr          $ra
    ctx->pc = 0x399DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399DF8u;
        // 0x399dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399E00u;
}
