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

// Function: sub_0011B968
// Address: 0x11b968 - 0x11b988
void sub_0011B968_0x11b968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B968_0x11b968");
#endif

    switch (ctx->pc) {
        case 0x11b97cu: goto label_11b97c;
        default: break;
    }

    ctx->pc = 0x11b968u;

    // 0x11b968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11b974: 0xc046e4e  jal         func_11B938
    ctx->pc = 0x11B974u;
    SET_GPR_U32(ctx, 31, 0x11B97Cu);
    ctx->pc = 0x11B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B974u;
    // 0x11b978: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B938u, 0x11B974u, 0x11B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B97Cu;
label_11b97c:
    // 0x11b97c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b980: 0x3e00008  jr          $ra
    ctx->pc = 0x11B980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B980u;
        // 0x11b984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B988u;
}
