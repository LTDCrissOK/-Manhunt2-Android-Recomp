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

// Function: sub_0012D258
// Address: 0x12d258 - 0x12d288
void sub_0012D258_0x12d258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D258_0x12d258");
#endif

    switch (ctx->pc) {
        case 0x12d278u: goto label_12d278;
        default: break;
    }

    ctx->pc = 0x12d258u;

    // 0x12d258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d25c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12d25cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d264: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x12d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12d268: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x12d268u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
    // 0x12d26c: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x12d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x12d270: 0xc04b58a  jal         func_12D628
    ctx->pc = 0x12D270u;
    SET_GPR_U32(ctx, 31, 0x12D278u);
    ctx->pc = 0x12D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D270u;
    // 0x12d274: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D628u, 0x12D270u, 0x12D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D278u;
label_12d278:
    // 0x12d278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d27c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D27Cu;
        // 0x12d280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D284u;
    // 0x12d284: 0x0  nop
    ctx->pc = 0x12d284u;
    // NOP
    ctx->pc = 0x12d288u;
}
