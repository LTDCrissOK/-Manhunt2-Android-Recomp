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

// Function: sub_001721D0
// Address: 0x1721d0 - 0x172200
void sub_001721D0_0x1721d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001721D0_0x1721d0");
#endif

    switch (ctx->pc) {
        case 0x1721e4u: goto label_1721e4;
        case 0x1721ecu: goto label_1721ec;
        default: break;
    }

    ctx->pc = 0x1721d0u;

    // 0x1721d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1721d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1721d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1721d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1721d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1721d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1721dc: 0xc04f820  jal         func_13E080
    ctx->pc = 0x1721DCu;
    SET_GPR_U32(ctx, 31, 0x1721E4u);
    ctx->pc = 0x1721E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721DCu;
    // 0x1721e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x1721DCu, 0x1721E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721E4u;
label_1721e4:
    // 0x1721e4: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x1721E4u;
    SET_GPR_U32(ctx, 31, 0x1721ECu);
    ctx->pc = 0x1721E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1721E4u;
    // 0x1721e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x1721E4u, 0x1721ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1721ECu;
label_1721ec:
    // 0x1721ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1721ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1721f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1721f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1721f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1721F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721F4u;
        // 0x1721f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1721FCu;
    // 0x1721fc: 0x0  nop
    ctx->pc = 0x1721fcu;
    // NOP
    ctx->pc = 0x172200u;
}
