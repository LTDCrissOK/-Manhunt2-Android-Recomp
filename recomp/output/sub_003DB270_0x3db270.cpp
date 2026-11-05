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

// Function: sub_003DB270
// Address: 0x3db270 - 0x3db298
void sub_003DB270_0x3db270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB270_0x3db270");
#endif

    switch (ctx->pc) {
        case 0x3db280u: goto label_3db280;
        case 0x3db288u: goto label_3db288;
        default: break;
    }

    ctx->pc = 0x3db270u;

    // 0x3db270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db278: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB278u;
    SET_GPR_U32(ctx, 31, 0x3DB280u);
    ctx->pc = 0x3DB27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB278u;
    // 0x3db27c: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB278u, 0x3DB280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB280u;
label_3db280:
    // 0x3db280: 0xc04bfd4  jal         func_12FF50
    ctx->pc = 0x3DB280u;
    SET_GPR_U32(ctx, 31, 0x3DB288u);
    ctx->pc = 0x3DB284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB280u;
    // 0x3db284: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF50u, 0x3DB280u, 0x3DB288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB288u;
label_3db288:
    // 0x3db288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db28c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB28Cu;
        // 0x3db290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB294u;
    // 0x3db294: 0x0  nop
    ctx->pc = 0x3db294u;
    // NOP
    ctx->pc = 0x3db298u;
}
