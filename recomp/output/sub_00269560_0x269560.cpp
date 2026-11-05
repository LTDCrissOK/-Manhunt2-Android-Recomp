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

// Function: sub_00269560
// Address: 0x269560 - 0x269580
void sub_00269560_0x269560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269560_0x269560");
#endif

    switch (ctx->pc) {
        case 0x269570u: goto label_269570;
        default: break;
    }

    ctx->pc = 0x269560u;

    // 0x269560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x269560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x269564: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269568: 0xc0837d8  jal         func_20DF60
    ctx->pc = 0x269568u;
    SET_GPR_U32(ctx, 31, 0x269570u);
    ctx->pc = 0x20DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF60u, 0x269568u, 0x269570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269570u;
label_269570:
    // 0x269570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269574: 0x3e00008  jr          $ra
    ctx->pc = 0x269574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269574u;
        // 0x269578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26957Cu;
    // 0x26957c: 0x0  nop
    ctx->pc = 0x26957cu;
    // NOP
    ctx->pc = 0x269580u;
}
