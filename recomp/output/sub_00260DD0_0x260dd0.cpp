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

// Function: sub_00260DD0
// Address: 0x260dd0 - 0x260e10
void sub_00260DD0_0x260dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260DD0_0x260dd0");
#endif

    switch (ctx->pc) {
        case 0x260df4u: goto label_260df4;
        case 0x260e00u: goto label_260e00;
        default: break;
    }

    ctx->pc = 0x260dd0u;

    // 0x260dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x260ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x260ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260de0: 0x8e020248  lw          $v0, 0x248($s0)
    ctx->pc = 0x260de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x260de4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x260DE4u;
    {
        const bool branch_taken_0x260de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260de4) {
            ctx->pc = 0x260DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260DE4u;
            // 0x260de8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260E04u;
            goto label_260e04;
        }
    }
    ctx->pc = 0x260DECu;
    // 0x260dec: 0xc0c580c  jal         func_316030
    ctx->pc = 0x260DECu;
    SET_GPR_U32(ctx, 31, 0x260DF4u);
    ctx->pc = 0x260DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DECu;
    // 0x260df0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x260DECu, 0x260DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DF4u;
label_260df4:
    // 0x260df4: 0x8e050248  lw          $a1, 0x248($s0)
    ctx->pc = 0x260df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 584)));
    // 0x260df8: 0xc0c8716  jal         func_321C58
    ctx->pc = 0x260DF8u;
    SET_GPR_U32(ctx, 31, 0x260E00u);
    ctx->pc = 0x260DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260DF8u;
    // 0x260dfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321C58u, 0x260DF8u, 0x260E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E00u;
label_260e00:
    // 0x260e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260e04:
    // 0x260e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260e08: 0x3e00008  jr          $ra
    ctx->pc = 0x260E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E08u;
        // 0x260e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260E10u;
}
