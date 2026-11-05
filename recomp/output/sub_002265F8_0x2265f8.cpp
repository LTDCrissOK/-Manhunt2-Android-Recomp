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

// Function: sub_002265F8
// Address: 0x2265f8 - 0x226630
void sub_002265F8_0x2265f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002265F8_0x2265f8");
#endif

    switch (ctx->pc) {
        case 0x226624u: goto label_226624;
        default: break;
    }

    ctx->pc = 0x2265f8u;

    // 0x2265f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2265f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2265fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2265fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226600: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x226600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x226604: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226604u;
    {
        const bool branch_taken_0x226604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226604u;
        // 0x226608: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226604) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x22660Cu;
    // 0x22660c: 0x8c850268  lw          $a1, 0x268($a0)
    ctx->pc = 0x22660cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 616)));
    // 0x226610: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x226610u;
    {
        const bool branch_taken_0x226610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x226614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226610u;
        // 0x226614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226610) {
            ctx->pc = 0x226628u;
            goto label_226628;
        }
    }
    ctx->pc = 0x226618u;
    // 0x226618: 0x8c870260  lw          $a3, 0x260($a0)
    ctx->pc = 0x226618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 608)));
    // 0x22661c: 0xc040b0e  jal         func_102C38
    ctx->pc = 0x22661Cu;
    SET_GPR_U32(ctx, 31, 0x226624u);
    ctx->pc = 0x226620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22661Cu;
    // 0x226620: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102C38u, 0x22661Cu, 0x226624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226624u;
label_226624:
    // 0x226624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226628:
    // 0x226628: 0x3e00008  jr          $ra
    ctx->pc = 0x226628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226628u;
        // 0x22662c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226630u;
}
