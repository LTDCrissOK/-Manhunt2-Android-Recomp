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

// Function: sub_002B3740
// Address: 0x2b3740 - 0x2b3780
void sub_002B3740_0x2b3740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3740_0x2b3740");
#endif

    switch (ctx->pc) {
        case 0x2b375cu: goto label_2b375c;
        case 0x2b3764u: goto label_2b3764;
        case 0x2b3770u: goto label_2b3770;
        default: break;
    }

    ctx->pc = 0x2b3740u;

    // 0x2b3740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3744: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b3748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b374c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2b3750: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b3750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3754: 0xc0acd92  jal         func_2B3648
    ctx->pc = 0x2B3754u;
    SET_GPR_U32(ctx, 31, 0x2B375Cu);
    ctx->pc = 0x2B3758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3754u;
    // 0x2b3758: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3648u, 0x2B3754u, 0x2B375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B375Cu;
label_2b375c:
    // 0x2b375c: 0xc0eee9a  jal         func_3BBA68
    ctx->pc = 0x2B375Cu;
    SET_GPR_U32(ctx, 31, 0x2B3764u);
    ctx->pc = 0x2B3760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B375Cu;
    // 0x2b3760: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BBA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BBA68u, 0x2B375Cu, 0x2B3764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3764u;
label_2b3764:
    // 0x2b3764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b3764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3768: 0xc0acd6a  jal         func_2B35A8
    ctx->pc = 0x2B3768u;
    SET_GPR_U32(ctx, 31, 0x2B3770u);
    ctx->pc = 0x2B376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3768u;
    // 0x2b376c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B35A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B35A8u, 0x2B3768u, 0x2B3770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3770u;
label_2b3770:
    // 0x2b3770: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b3778: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3778u;
        // 0x2b377c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3780u;
}
