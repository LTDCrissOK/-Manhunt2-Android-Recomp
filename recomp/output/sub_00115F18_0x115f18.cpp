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

// Function: sub_00115F18
// Address: 0x115f18 - 0x115f48
void sub_00115F18_0x115f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115F18_0x115f18");
#endif

    switch (ctx->pc) {
        case 0x115f2cu: goto label_115f2c;
        case 0x115f34u: goto label_115f34;
        default: break;
    }

    ctx->pc = 0x115f18u;

    // 0x115f18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115f1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115f20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115f24: 0xc04597e  jal         func_1165F8
    ctx->pc = 0x115F24u;
    SET_GPR_U32(ctx, 31, 0x115F2Cu);
    ctx->pc = 0x115F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F24u;
    // 0x115f28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1165F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1165F8u, 0x115F24u, 0x115F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F2Cu;
label_115f2c:
    // 0x115f2c: 0xc0459b4  jal         func_1166D0
    ctx->pc = 0x115F2Cu;
    SET_GPR_U32(ctx, 31, 0x115F34u);
    ctx->pc = 0x115F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F2Cu;
    // 0x115f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1166D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1166D0u, 0x115F2Cu, 0x115F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F34u;
label_115f34:
    // 0x115f34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115f34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115f38: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x115F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F3Cu;
        // 0x115f40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115F44u;
    // 0x115f44: 0x0  nop
    ctx->pc = 0x115f44u;
    // NOP
    ctx->pc = 0x115f48u;
}
