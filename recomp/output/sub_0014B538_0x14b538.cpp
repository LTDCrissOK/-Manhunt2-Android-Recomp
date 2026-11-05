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

// Function: sub_0014B538
// Address: 0x14b538 - 0x14b588
void sub_0014B538_0x14b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B538_0x14b538");
#endif

    switch (ctx->pc) {
        case 0x14b578u: goto label_14b578;
        default: break;
    }

    ctx->pc = 0x14b538u;

    // 0x14b538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b53c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14b53cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b544: 0x8cc20590  lw          $v0, 0x590($a2)
    ctx->pc = 0x14b544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1424)));
    // 0x14b548: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B548u;
    {
        const bool branch_taken_0x14b548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B548u;
        // 0x14b54c: 0x30a300ff  andi        $v1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b548) {
            ctx->pc = 0x14B578u;
            goto label_14b578;
        }
    }
    ctx->pc = 0x14B550u;
    // 0x14b550: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x14b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x14b554: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14b558: 0xacc20590  sw          $v0, 0x590($a2)
    ctx->pc = 0x14b558u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1424), GPR_U32(ctx, 2));
    // 0x14b55c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14b560: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b564: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x14b564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14b568: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x14b568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b56c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x14b56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14b570: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x14B570u;
    SET_GPR_U32(ctx, 31, 0x14B578u);
    ctx->pc = 0x14B574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B570u;
    // 0x14b574: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x14B570u, 0x14B578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B578u;
label_14b578:
    // 0x14b578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b57c: 0x3e00008  jr          $ra
    ctx->pc = 0x14B57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B57Cu;
        // 0x14b580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B584u;
    // 0x14b584: 0x0  nop
    ctx->pc = 0x14b584u;
    // NOP
    ctx->pc = 0x14b588u;
}
