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

// Function: sub_003DAF78
// Address: 0x3daf78 - 0x3dafa0
void sub_003DAF78_0x3daf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAF78_0x3daf78");
#endif

    switch (ctx->pc) {
        case 0x3daf88u: goto label_3daf88;
        case 0x3daf90u: goto label_3daf90;
        default: break;
    }

    ctx->pc = 0x3daf78u;

    // 0x3daf78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daf7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daf80: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAF80u;
    SET_GPR_U32(ctx, 31, 0x3DAF88u);
    ctx->pc = 0x3DAF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF80u;
    // 0x3daf84: 0x24040570  addiu       $a0, $zero, 0x570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAF80u, 0x3DAF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF88u;
label_3daf88:
    // 0x3daf88: 0xc05345a  jal         func_14D168
    ctx->pc = 0x3DAF88u;
    SET_GPR_U32(ctx, 31, 0x3DAF90u);
    ctx->pc = 0x3DAF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF88u;
    // 0x3daf8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D168u, 0x3DAF88u, 0x3DAF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF90u;
label_3daf90:
    // 0x3daf90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daf94: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF94u;
        // 0x3daf98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAF9Cu;
    // 0x3daf9c: 0x0  nop
    ctx->pc = 0x3daf9cu;
    // NOP
    ctx->pc = 0x3dafa0u;
}
