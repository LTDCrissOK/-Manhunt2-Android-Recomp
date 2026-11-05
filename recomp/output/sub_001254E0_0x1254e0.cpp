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

// Function: sub_001254E0
// Address: 0x1254e0 - 0x125510
void sub_001254E0_0x1254e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001254E0_0x1254e0");
#endif

    switch (ctx->pc) {
        case 0x125504u: goto label_125504;
        default: break;
    }

    ctx->pc = 0x1254e0u;

    // 0x1254e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1254e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1254e4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1254e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1254e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1254ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1254ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1254f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1254f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1254f4: 0xac43043c  sw          $v1, 0x43C($v0)
    ctx->pc = 0x1254f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1084), GPR_U32(ctx, 3));
    // 0x1254f8: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1254fc: 0xc04308e  jal         func_10C238
    ctx->pc = 0x1254FCu;
    SET_GPR_U32(ctx, 31, 0x125504u);
    ctx->pc = 0x125500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1254FCu;
    // 0x125500: 0xac400440  sw          $zero, 0x440($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1088), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C238u, 0x1254FCu, 0x125504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125504u;
label_125504:
    // 0x125504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125508: 0x3e00008  jr          $ra
    ctx->pc = 0x125508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125508u;
        // 0x12550c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125510u;
}
