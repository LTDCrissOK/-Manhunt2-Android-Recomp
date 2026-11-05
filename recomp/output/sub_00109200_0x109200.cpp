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

// Function: sub_00109200
// Address: 0x109200 - 0x109218
void sub_00109200_0x109200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109200_0x109200");
#endif

    switch (ctx->pc) {
        case 0x109208u: goto label_109208;
        default: break;
    }

    ctx->pc = 0x109200u;

    // 0x109200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_109208:
    // 0x109208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10920c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109210: 0x3e00008  jr          $ra
    ctx->pc = 0x109210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109210u;
        // 0x109214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109218u;
}
