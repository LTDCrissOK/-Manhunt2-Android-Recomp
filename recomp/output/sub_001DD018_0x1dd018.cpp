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

// Function: sub_001DD018
// Address: 0x1dd018 - 0x1dd040
void sub_001DD018_0x1dd018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD018_0x1dd018");
#endif

    switch (ctx->pc) {
        case 0x1dd02cu: goto label_1dd02c;
        default: break;
    }

    ctx->pc = 0x1dd018u;

    // 0x1dd018: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd01c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1dd01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd020: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd024: 0xc0773f0  jal         func_1DCFC0
    ctx->pc = 0x1DD024u;
    SET_GPR_U32(ctx, 31, 0x1DD02Cu);
    ctx->pc = 0x1DD028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD024u;
    // 0x1dd028: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCFC0u, 0x1DD024u, 0x1DD02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD02Cu;
label_1dd02c:
    // 0x1dd02c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd02cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd030: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD030u;
        // 0x1dd034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD038u;
    // 0x1dd038: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1dd038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dd03c: 0x0  nop
    ctx->pc = 0x1dd03cu;
    // NOP
    ctx->pc = 0x1dd040u;
}
