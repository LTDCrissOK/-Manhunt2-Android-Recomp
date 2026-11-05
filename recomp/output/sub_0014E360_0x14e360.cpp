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

// Function: sub_0014E360
// Address: 0x14e360 - 0x14e378
void sub_0014E360_0x14e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E360_0x14e360");
#endif

    switch (ctx->pc) {
        case 0x14e36cu: goto label_14e36c;
        default: break;
    }

    ctx->pc = 0x14e360u;

    // 0x14e360: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e364: 0xc0443c0  jal         func_110F00
    ctx->pc = 0x14E364u;
    SET_GPR_U32(ctx, 31, 0x14E36Cu);
    ctx->pc = 0x14E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E364u;
    // 0x14e368: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F00u, 0x14E364u, 0x14E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E36Cu;
label_14e36c:
    // 0x14e36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e370: 0x3e00008  jr          $ra
    ctx->pc = 0x14E370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E370u;
        // 0x14e374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E378u;
}
