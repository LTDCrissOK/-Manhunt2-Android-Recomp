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

// Function: sub_001AF570
// Address: 0x1af570 - 0x1af598
void sub_001AF570_0x1af570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF570_0x1af570");
#endif

    switch (ctx->pc) {
        case 0x1af588u: goto label_1af588;
        default: break;
    }

    ctx->pc = 0x1af570u;

    // 0x1af570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af574: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af57c: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x1af57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1af580: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF580u;
    SET_GPR_U32(ctx, 31, 0x1AF588u);
    ctx->pc = 0x1AF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF580u;
    // 0x1af584: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF580u, 0x1AF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF588u;
label_1af588:
    // 0x1af588: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af588u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af58c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF58Cu;
        // 0x1af590: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF58Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF594u;
    // 0x1af594: 0x0  nop
    ctx->pc = 0x1af594u;
    // NOP
    ctx->pc = 0x1af598u;
}
