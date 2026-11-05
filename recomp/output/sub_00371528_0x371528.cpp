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

// Function: sub_00371528
// Address: 0x371528 - 0x371558
void sub_00371528_0x371528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371528_0x371528");
#endif

    switch (ctx->pc) {
        case 0x371538u: goto label_371538;
        default: break;
    }

    ctx->pc = 0x371528u;

    // 0x371528: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x371528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37152c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x37152cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x371530: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x371530u;
    {
        const bool branch_taken_0x371530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x371530) {
            ctx->pc = 0x371550u;
            goto label_371550;
        }
    }
    ctx->pc = 0x371538u;
label_371538:
    // 0x371538: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x371538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x37153c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x37153cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x371540: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x371540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371544: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x371544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x371548: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x371548u;
    {
        const bool branch_taken_0x371548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371548u;
        // 0x37154c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371548) {
            ctx->pc = 0x371538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_371538;
        }
    }
    ctx->pc = 0x371550u;
label_371550:
    // 0x371550: 0x3e00008  jr          $ra
    ctx->pc = 0x371550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371558u;
}
