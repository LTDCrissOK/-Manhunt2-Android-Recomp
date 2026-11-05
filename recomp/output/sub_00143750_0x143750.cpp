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

// Function: sub_00143750
// Address: 0x143750 - 0x143788
void sub_00143750_0x143750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143750_0x143750");
#endif

    switch (ctx->pc) {
        case 0x14376cu: goto label_14376c;
        case 0x143774u: goto label_143774;
        default: break;
    }

    ctx->pc = 0x143750u;

    // 0x143750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143754: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x143754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x143758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14375c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143764: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143764u;
    SET_GPR_U32(ctx, 31, 0x14376Cu);
    ctx->pc = 0x143768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143764u;
    // 0x143768: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143764u, 0x14376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0xc04ecde  jal         func_13B378
    ctx->pc = 0x14376Cu;
    SET_GPR_U32(ctx, 31, 0x143774u);
    ctx->pc = 0x143770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14376Cu;
    // 0x143770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B378u, 0x14376Cu, 0x143774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143774u;
label_143774:
    // 0x143774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143778: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x143778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14377c: 0x3e00008  jr          $ra
    ctx->pc = 0x14377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14377Cu;
        // 0x143780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14377Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143784u;
    // 0x143784: 0x0  nop
    ctx->pc = 0x143784u;
    // NOP
    ctx->pc = 0x143788u;
}
