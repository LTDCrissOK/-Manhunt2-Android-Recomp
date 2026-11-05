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

// Function: sub_003DAD00
// Address: 0x3dad00 - 0x3dad28
void sub_003DAD00_0x3dad00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAD00_0x3dad00");
#endif

    switch (ctx->pc) {
        case 0x3dad10u: goto label_3dad10;
        case 0x3dad18u: goto label_3dad18;
        default: break;
    }

    ctx->pc = 0x3dad00u;

    // 0x3dad00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dad00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dad04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dad08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAD08u;
    SET_GPR_U32(ctx, 31, 0x3DAD10u);
    ctx->pc = 0x3DAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD08u;
    // 0x3dad0c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAD08u, 0x3DAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD10u;
label_3dad10:
    // 0x3dad10: 0xc04b41e  jal         func_12D078
    ctx->pc = 0x3DAD10u;
    SET_GPR_U32(ctx, 31, 0x3DAD18u);
    ctx->pc = 0x3DAD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAD10u;
    // 0x3dad14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D078u, 0x3DAD10u, 0x3DAD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAD18u;
label_3dad18:
    // 0x3dad18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dad18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dad1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAD1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAD1Cu;
        // 0x3dad20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAD1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAD24u;
    // 0x3dad24: 0x0  nop
    ctx->pc = 0x3dad24u;
    // NOP
    ctx->pc = 0x3dad28u;
}
