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

// Function: sub_0013C058
// Address: 0x13c058 - 0x13c088
void sub_0013C058_0x13c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C058_0x13c058");
#endif

    switch (ctx->pc) {
        case 0x13c06cu: goto label_13c06c;
        case 0x13c078u: goto label_13c078;
        default: break;
    }

    ctx->pc = 0x13c058u;

    // 0x13c058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c05c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c060: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13c060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13c064: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x13C064u;
    SET_GPR_U32(ctx, 31, 0x13C06Cu);
    ctx->pc = 0x13C068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C064u;
    // 0x13c068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x13C064u, 0x13C06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C06Cu;
label_13c06c:
    // 0x13c06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13c06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c070: 0xc04f1a8  jal         func_13C6A0
    ctx->pc = 0x13C070u;
    SET_GPR_U32(ctx, 31, 0x13C078u);
    ctx->pc = 0x13C074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C070u;
    // 0x13c074: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6A0u, 0x13C070u, 0x13C078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C078u;
label_13c078:
    // 0x13c078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c07c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13c07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c080: 0x3e00008  jr          $ra
    ctx->pc = 0x13C080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C080u;
        // 0x13c084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C088u;
}
