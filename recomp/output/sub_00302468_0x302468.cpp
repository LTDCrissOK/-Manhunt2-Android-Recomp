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

// Function: sub_00302468
// Address: 0x302468 - 0x302488
void sub_00302468_0x302468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302468_0x302468");
#endif

    switch (ctx->pc) {
        case 0x30247cu: goto label_30247c;
        default: break;
    }

    ctx->pc = 0x302468u;

    // 0x302468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30246c: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x30246cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x302470: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x302470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x302474: 0xc0b8dca  jal         func_2E3728
    ctx->pc = 0x302474u;
    SET_GPR_U32(ctx, 31, 0x30247Cu);
    ctx->pc = 0x302478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302474u;
    // 0x302478: 0x24845870  addiu       $a0, $a0, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3728u, 0x302474u, 0x30247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30247Cu;
label_30247c:
    // 0x30247c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30247cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x302480: 0x3e00008  jr          $ra
    ctx->pc = 0x302480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302480u;
        // 0x302484: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302488u;
}
