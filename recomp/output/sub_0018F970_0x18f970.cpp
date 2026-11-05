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

// Function: sub_0018F970
// Address: 0x18f970 - 0x18f990
void sub_0018F970_0x18f970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F970_0x18f970");
#endif

    switch (ctx->pc) {
        case 0x18f980u: goto label_18f980;
        default: break;
    }

    ctx->pc = 0x18f970u;

    // 0x18f970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18f970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18f974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f978: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x18F978u;
    SET_GPR_U32(ctx, 31, 0x18F980u);
    ctx->pc = 0x18F97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F978u;
    // 0x18f97c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x18F978u, 0x18F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F980u;
label_18f980:
    // 0x18f980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f984: 0x3e00008  jr          $ra
    ctx->pc = 0x18F984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F984u;
        // 0x18f988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F98Cu;
    // 0x18f98c: 0x0  nop
    ctx->pc = 0x18f98cu;
    // NOP
    ctx->pc = 0x18f990u;
}
