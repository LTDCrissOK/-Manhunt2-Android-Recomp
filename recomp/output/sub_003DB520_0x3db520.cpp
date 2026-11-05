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

// Function: sub_003DB520
// Address: 0x3db520 - 0x3db548
void sub_003DB520_0x3db520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB520_0x3db520");
#endif

    switch (ctx->pc) {
        case 0x3db530u: goto label_3db530;
        case 0x3db538u: goto label_3db538;
        default: break;
    }

    ctx->pc = 0x3db520u;

    // 0x3db520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db528: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB528u;
    SET_GPR_U32(ctx, 31, 0x3DB530u);
    ctx->pc = 0x3DB52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB528u;
    // 0x3db52c: 0x24040430  addiu       $a0, $zero, 0x430 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB528u, 0x3DB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB530u;
label_3db530:
    // 0x3db530: 0xc05fd06  jal         func_17F418
    ctx->pc = 0x3DB530u;
    SET_GPR_U32(ctx, 31, 0x3DB538u);
    ctx->pc = 0x3DB534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB530u;
    // 0x3db534: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F418u, 0x3DB530u, 0x3DB538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB538u;
label_3db538:
    // 0x3db538: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db53c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB53Cu;
        // 0x3db540: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB544u;
    // 0x3db544: 0x0  nop
    ctx->pc = 0x3db544u;
    // NOP
    ctx->pc = 0x3db548u;
}
