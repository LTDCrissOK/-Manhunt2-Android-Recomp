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

// Function: sub_00395558
// Address: 0x395558 - 0x395590
void sub_00395558_0x395558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00395558_0x395558");
#endif

    switch (ctx->pc) {
        case 0x39556cu: goto label_39556c;
        case 0x395574u: goto label_395574;
        case 0x39557cu: goto label_39557c;
        default: break;
    }

    ctx->pc = 0x395558u;

    // 0x395558: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x395558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39555c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395560: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x395560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x395564: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x395564u;
    SET_GPR_U32(ctx, 31, 0x39556Cu);
    ctx->pc = 0x395568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395564u;
    // 0x395568: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x395564u, 0x39556Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39556Cu;
label_39556c:
    // 0x39556c: 0xc0e5564  jal         func_395590
    ctx->pc = 0x39556Cu;
    SET_GPR_U32(ctx, 31, 0x395574u);
    ctx->pc = 0x395570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39556Cu;
    // 0x395570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395590u, 0x39556Cu, 0x395574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395574u;
label_395574:
    // 0x395574: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x395574u;
    SET_GPR_U32(ctx, 31, 0x39557Cu);
    ctx->pc = 0x395578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395574u;
    // 0x395578: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x395574u, 0x39557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39557Cu;
label_39557c:
    // 0x39557c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39557cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395588: 0x3e00008  jr          $ra
    ctx->pc = 0x395588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395588u;
        // 0x39558c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395590u;
}
