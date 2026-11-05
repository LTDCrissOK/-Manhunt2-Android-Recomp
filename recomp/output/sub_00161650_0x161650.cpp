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

// Function: sub_00161650
// Address: 0x161650 - 0x161688
void sub_00161650_0x161650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161650_0x161650");
#endif

    switch (ctx->pc) {
        case 0x161664u: goto label_161664;
        case 0x16166cu: goto label_16166c;
        case 0x161678u: goto label_161678;
        default: break;
    }

    ctx->pc = 0x161650u;

    // 0x161650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161658: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x161658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16165c: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x16165Cu;
    SET_GPR_U32(ctx, 31, 0x161664u);
    ctx->pc = 0x161660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16165Cu;
    // 0x161660: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x16165Cu, 0x161664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161664u;
label_161664:
    // 0x161664: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x161664u;
    SET_GPR_U32(ctx, 31, 0x16166Cu);
    ctx->pc = 0x161668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161664u;
    // 0x161668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x161664u, 0x16166Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16166Cu;
label_16166c:
    // 0x16166c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x16166cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x161670: 0xc058c66  jal         func_163198
    ctx->pc = 0x161670u;
    SET_GPR_U32(ctx, 31, 0x161678u);
    ctx->pc = 0x161674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161670u;
    // 0x161674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163198u, 0x161670u, 0x161678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161678u;
label_161678:
    // 0x161678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16167c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16167cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161680: 0x3e00008  jr          $ra
    ctx->pc = 0x161680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161680u;
        // 0x161684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161688u;
}
