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

// Function: sub_00175700
// Address: 0x175700 - 0x175728
void sub_00175700_0x175700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175700_0x175700");
#endif

    switch (ctx->pc) {
        case 0x17571cu: goto label_17571c;
        default: break;
    }

    ctx->pc = 0x175700u;

    // 0x175700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175708: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x175708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x17570c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17570Cu;
    {
        const bool branch_taken_0x17570c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17570Cu;
        // 0x175710: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17570c) {
            ctx->pc = 0x175720u;
            goto label_175720;
        }
    }
    ctx->pc = 0x175714u;
    // 0x175714: 0xc05826e  jal         func_1609B8
    ctx->pc = 0x175714u;
    SET_GPR_U32(ctx, 31, 0x17571Cu);
    ctx->pc = 0x1609B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1609B8u, 0x175714u, 0x17571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17571Cu;
label_17571c:
    // 0x17571c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175720:
    // 0x175720: 0x3e00008  jr          $ra
    ctx->pc = 0x175720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175720u;
        // 0x175724: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175728u;
}
