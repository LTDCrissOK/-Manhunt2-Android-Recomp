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

// Function: sub_003DAF00
// Address: 0x3daf00 - 0x3daf28
void sub_003DAF00_0x3daf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAF00_0x3daf00");
#endif

    switch (ctx->pc) {
        case 0x3daf10u: goto label_3daf10;
        case 0x3daf18u: goto label_3daf18;
        default: break;
    }

    ctx->pc = 0x3daf00u;

    // 0x3daf00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3daf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3daf04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3daf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3daf08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAF08u;
    SET_GPR_U32(ctx, 31, 0x3DAF10u);
    ctx->pc = 0x3DAF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF08u;
    // 0x3daf0c: 0x24040720  addiu       $a0, $zero, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAF08u, 0x3DAF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF10u;
label_3daf10:
    // 0x3daf10: 0xc051efc  jal         func_147BF0
    ctx->pc = 0x3DAF10u;
    SET_GPR_U32(ctx, 31, 0x3DAF18u);
    ctx->pc = 0x3DAF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAF10u;
    // 0x3daf14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF0u, 0x3DAF10u, 0x3DAF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAF18u;
label_3daf18:
    // 0x3daf18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3daf18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3daf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAF1Cu;
        // 0x3daf20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAF24u;
    // 0x3daf24: 0x0  nop
    ctx->pc = 0x3daf24u;
    // NOP
    ctx->pc = 0x3daf28u;
}
