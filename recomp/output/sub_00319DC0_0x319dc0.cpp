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

// Function: sub_00319DC0
// Address: 0x319dc0 - 0x319e00
void sub_00319DC0_0x319dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319DC0_0x319dc0");
#endif

    switch (ctx->pc) {
        case 0x319dd0u: goto label_319dd0;
        case 0x319de4u: goto label_319de4;
        case 0x319df4u: goto label_319df4;
        default: break;
    }

    ctx->pc = 0x319dc0u;

    // 0x319dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x319dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x319dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x319dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x319dc8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x319DC8u;
    SET_GPR_U32(ctx, 31, 0x319DD0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x319DC8u, 0x319DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DD0u;
label_319dd0:
    // 0x319dd0: 0x904300f4  lbu         $v1, 0xF4($v0)
    ctx->pc = 0x319dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x319dd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x319DD4u;
    {
        const bool branch_taken_0x319dd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x319dd4) {
            ctx->pc = 0x319DECu;
            goto label_319dec;
        }
    }
    ctx->pc = 0x319DDCu;
    // 0x319ddc: 0xc0c673c  jal         func_319CF0
    ctx->pc = 0x319DDCu;
    SET_GPR_U32(ctx, 31, 0x319DE4u);
    ctx->pc = 0x319DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319DDCu;
    // 0x319de0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CF0u, 0x319DDCu, 0x319DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DE4u;
label_319de4:
    // 0x319de4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x319DE4u;
    {
        const bool branch_taken_0x319de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DE4u;
        // 0x319de8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319de4) {
            ctx->pc = 0x319DF8u;
            goto label_319df8;
        }
    }
    ctx->pc = 0x319DECu;
label_319dec:
    // 0x319dec: 0xc0c6762  jal         func_319D88
    ctx->pc = 0x319DECu;
    SET_GPR_U32(ctx, 31, 0x319DF4u);
    ctx->pc = 0x319D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319D88u, 0x319DECu, 0x319DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319DF4u;
label_319df4:
    // 0x319df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_319df8:
    // 0x319df8: 0x3e00008  jr          $ra
    ctx->pc = 0x319DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x319DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319DF8u;
        // 0x319dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319E00u;
}
