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

// Function: sub_00120558
// Address: 0x120558 - 0x120598
void sub_00120558_0x120558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120558_0x120558");
#endif

    ctx->pc = 0x120558u;

    // 0x120558: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x120558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x12055c: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x12055cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x120560: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x120560u;
    {
        const bool branch_taken_0x120560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120560u;
        // 0x120564: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120560) {
            ctx->pc = 0x12058Cu;
            goto label_12058c;
        }
    }
    ctx->pc = 0x120568u;
    // 0x120568: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x120568u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12056c: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x12056cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x120570: 0xac600114  sw          $zero, 0x114($v1)
    ctx->pc = 0x120570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 0));
    // 0x120574: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x120574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120578: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x120578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x12057c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120580: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x120580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x120584: 0xaca0011c  sw          $zero, 0x11C($a1)
    ctx->pc = 0x120584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 284), GPR_U32(ctx, 0));
    // 0x120588: 0xac400120  sw          $zero, 0x120($v0)
    ctx->pc = 0x120588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 0));
label_12058c:
    // 0x12058c: 0x3e00008  jr          $ra
    ctx->pc = 0x12058Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12058Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120594u;
    // 0x120594: 0x0  nop
    ctx->pc = 0x120594u;
    // NOP
    ctx->pc = 0x120598u;
}
