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

// Function: sub_00396DB8
// Address: 0x396db8 - 0x396e08
void sub_00396DB8_0x396db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396DB8_0x396db8");
#endif

    switch (ctx->pc) {
        case 0x396dd4u: goto label_396dd4;
        case 0x396df8u: goto label_396df8;
        default: break;
    }

    ctx->pc = 0x396db8u;

    // 0x396db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x396db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x396dbc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x396dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x396dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x396dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396dc4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x396DC4u;
    {
        const bool branch_taken_0x396dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x396DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DC4u;
        // 0x396dc8: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396dc4) {
            ctx->pc = 0x396DF8u;
            goto label_396df8;
        }
    }
    ctx->pc = 0x396DCCu;
    // 0x396dcc: 0xc0f2628  jal         func_3C98A0
    ctx->pc = 0x396DCCu;
    SET_GPR_U32(ctx, 31, 0x396DD4u);
    ctx->pc = 0x396DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396DCCu;
    // 0x396dd0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98A0u, 0x396DCCu, 0x396DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396DD4u;
label_396dd4:
    // 0x396dd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x396dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396dd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x396dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396ddc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x396ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x396de0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396DE0u;
    {
        const bool branch_taken_0x396de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x396DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DE0u;
        // 0x396de4: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396de0) {
            ctx->pc = 0x396DF0u;
            goto label_396df0;
        }
    }
    ctx->pc = 0x396DE8u;
    // 0x396de8: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x396DE8u;
    {
        const bool branch_taken_0x396de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x396DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396DE8u;
        // 0x396dec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396de8) {
            ctx->pc = 0x396DFCu;
            goto label_396dfc;
        }
    }
    ctx->pc = 0x396DF0u;
label_396df0:
    // 0x396df0: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x396DF0u;
    SET_GPR_U32(ctx, 31, 0x396DF8u);
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x396DF0u, 0x396DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396DF8u;
label_396df8:
    // 0x396df8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x396df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_396dfc:
    // 0x396dfc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x396dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x396e00: 0x3e00008  jr          $ra
    ctx->pc = 0x396E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396E00u;
        // 0x396e04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396E00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396E08u;
}
