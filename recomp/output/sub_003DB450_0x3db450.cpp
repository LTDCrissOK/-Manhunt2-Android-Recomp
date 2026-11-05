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

// Function: sub_003DB450
// Address: 0x3db450 - 0x3db478
void sub_003DB450_0x3db450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB450_0x3db450");
#endif

    switch (ctx->pc) {
        case 0x3db460u: goto label_3db460;
        case 0x3db468u: goto label_3db468;
        default: break;
    }

    ctx->pc = 0x3db450u;

    // 0x3db450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db458: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB458u;
    SET_GPR_U32(ctx, 31, 0x3DB460u);
    ctx->pc = 0x3DB45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB458u;
    // 0x3db45c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB458u, 0x3DB460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB460u;
label_3db460:
    // 0x3db460: 0xc05fbdc  jal         func_17EF70
    ctx->pc = 0x3DB460u;
    SET_GPR_U32(ctx, 31, 0x3DB468u);
    ctx->pc = 0x3DB464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB460u;
    // 0x3db464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EF70u, 0x3DB460u, 0x3DB468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB468u;
label_3db468:
    // 0x3db468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db46c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB46Cu;
        // 0x3db470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB474u;
    // 0x3db474: 0x0  nop
    ctx->pc = 0x3db474u;
    // NOP
    ctx->pc = 0x3db478u;
}
