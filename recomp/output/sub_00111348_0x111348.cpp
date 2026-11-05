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

// Function: sub_00111348
// Address: 0x111348 - 0x111390
void sub_00111348_0x111348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111348_0x111348");
#endif

    switch (ctx->pc) {
        case 0x111364u: goto label_111364;
        default: break;
    }

    ctx->pc = 0x111348u;

    // 0x111348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11134c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11134cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x111350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111354: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x111354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x111358: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x111358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11135c: 0xc094f8c  jal         func_253E30
    ctx->pc = 0x11135Cu;
    SET_GPR_U32(ctx, 31, 0x111364u);
    ctx->pc = 0x111360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11135Cu;
    // 0x111360: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253E30u, 0x11135Cu, 0x111364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111364u;
label_111364:
    // 0x111364: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x111364u;
    {
        const bool branch_taken_0x111364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x111368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111364u;
        // 0x111368: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111364) {
            ctx->pc = 0x111378u;
            goto label_111378;
        }
    }
    ctx->pc = 0x11136Cu;
    // 0x11136c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x111370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111370u;
    {
        const bool branch_taken_0x111370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111370u;
        // 0x111374: 0xae030258  sw          $v1, 0x258($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111370) {
            ctx->pc = 0x11137Cu;
            goto label_11137c;
        }
    }
    ctx->pc = 0x111378u;
label_111378:
    // 0x111378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x111378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11137c:
    // 0x11137c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11137cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111380: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x111380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111384: 0x3e00008  jr          $ra
    ctx->pc = 0x111384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111384u;
        // 0x111388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11138Cu;
    // 0x11138c: 0x0  nop
    ctx->pc = 0x11138cu;
    // NOP
    ctx->pc = 0x111390u;
}
