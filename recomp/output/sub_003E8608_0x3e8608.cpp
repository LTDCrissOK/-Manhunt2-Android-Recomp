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

// Function: sub_003E8608
// Address: 0x3e8608 - 0x3e8628
void sub_003E8608_0x3e8608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8608_0x3e8608");
#endif

    switch (ctx->pc) {
        case 0x3e8618u: goto label_3e8618;
        default: break;
    }

    ctx->pc = 0x3e8608u;

    // 0x3e8608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e860c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e860cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8610: 0xc0b0340  jal         func_2C0D00
    ctx->pc = 0x3E8610u;
    SET_GPR_U32(ctx, 31, 0x3E8618u);
    ctx->pc = 0x3E8614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8610u;
    // 0x3e8614: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D00u, 0x3E8610u, 0x3E8618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8618u;
label_3e8618:
    // 0x3e8618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e861c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E861Cu;
        // 0x3e8620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8624u;
    // 0x3e8624: 0x0  nop
    ctx->pc = 0x3e8624u;
    // NOP
    ctx->pc = 0x3e8628u;
}
