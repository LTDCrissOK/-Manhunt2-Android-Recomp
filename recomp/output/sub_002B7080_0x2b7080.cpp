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

// Function: sub_002B7080
// Address: 0x2b7080 - 0x2b70b0
void sub_002B7080_0x2b7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7080_0x2b7080");
#endif

    switch (ctx->pc) {
        case 0x2b7090u: goto label_2b7090;
        case 0x2b7098u: goto label_2b7098;
        default: break;
    }

    ctx->pc = 0x2b7080u;

    // 0x2b7080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b7084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7088: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7088u;
    SET_GPR_U32(ctx, 31, 0x2B7090u);
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7088u, 0x2B7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7090u;
label_2b7090:
    // 0x2b7090: 0xc0ace90  jal         func_2B3A40
    ctx->pc = 0x2B7090u;
    SET_GPR_U32(ctx, 31, 0x2B7098u);
    ctx->pc = 0x2B7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7090u;
    // 0x2b7094: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A40u, 0x2B7090u, 0x2B7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7098u;
label_2b7098:
    // 0x2b7098: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2b7098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2b709c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b709cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b70a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b70a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b70a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B70A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B70A4u;
        // 0x2b70a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B70A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B70ACu;
    // 0x2b70ac: 0x0  nop
    ctx->pc = 0x2b70acu;
    // NOP
    ctx->pc = 0x2b70b0u;
}
