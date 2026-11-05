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

// Function: sub_00125520
// Address: 0x125520 - 0x125550
void sub_00125520_0x125520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125520_0x125520");
#endif

    switch (ctx->pc) {
        case 0x125534u: goto label_125534;
        case 0x125544u: goto label_125544;
        default: break;
    }

    ctx->pc = 0x125520u;

    // 0x125520: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x125524: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125524u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12552c: 0xc04785a  jal         func_11E168
    ctx->pc = 0x12552Cu;
    SET_GPR_U32(ctx, 31, 0x125534u);
    ctx->pc = 0x125530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12552Cu;
    // 0x125530: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x12552Cu, 0x125534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125534u;
label_125534:
    // 0x125534: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x125534u;
    {
        const bool branch_taken_0x125534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125534u;
        // 0x125538: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125534) {
            ctx->pc = 0x125548u;
            goto label_125548;
        }
    }
    ctx->pc = 0x12553Cu;
    // 0x12553c: 0xc043eba  jal         func_10FAE8
    ctx->pc = 0x12553Cu;
    SET_GPR_U32(ctx, 31, 0x125544u);
    ctx->pc = 0x125540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12553Cu;
    // 0x125540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAE8u, 0x12553Cu, 0x125544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125544u;
label_125544:
    // 0x125544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125548:
    // 0x125548: 0x3e00008  jr          $ra
    ctx->pc = 0x125548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12554Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125548u;
        // 0x12554c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125550u;
}
