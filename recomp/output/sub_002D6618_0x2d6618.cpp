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

// Function: sub_002D6618
// Address: 0x2d6618 - 0x2d6670
void sub_002D6618_0x2d6618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6618_0x2d6618");
#endif

    switch (ctx->pc) {
        case 0x2d6628u: goto label_2d6628;
        default: break;
    }

    ctx->pc = 0x2d6618u;

    // 0x2d6618: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x2d6618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d661c: 0x18e00008  blez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D661Cu;
    {
        const bool branch_taken_0x2d661c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2D6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D661Cu;
        // 0x2d6620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d661c) {
            ctx->pc = 0x2D6640u;
            goto label_2d6640;
        }
    }
    ctx->pc = 0x2D6624u;
    // 0x2d6624: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x2d6624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2d6628:
    // 0x2d6628: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d6628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d662c: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D662Cu;
    {
        const bool branch_taken_0x2d662c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2D6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D662Cu;
        // 0x2d6630: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d662c) {
            ctx->pc = 0x2D6664u;
            goto label_2d6664;
        }
    }
    ctx->pc = 0x2D6634u;
    // 0x2d6634: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x2d6634u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2d6638: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6638u;
    {
        const bool branch_taken_0x2d6638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6638u;
        // 0x2d663c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6638) {
            ctx->pc = 0x2D6628u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6628;
        }
    }
    ctx->pc = 0x2D6640u;
label_2d6640:
    // 0x2d6640: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d6640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d6644: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2d6644u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2d6648: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D6648u;
    {
        const bool branch_taken_0x2d6648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6648u;
        // 0x2d664c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6648) {
            ctx->pc = 0x2D6664u;
            goto label_2d6664;
        }
    }
    ctx->pc = 0x2D6650u;
    // 0x2d6650: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d6654: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x2d6654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x2d6658: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2d6658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d665c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d665cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d6660: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x2d6660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
label_2d6664:
    // 0x2d6664: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D666Cu;
    // 0x2d666c: 0x0  nop
    ctx->pc = 0x2d666cu;
    // NOP
    ctx->pc = 0x2d6670u;
}
