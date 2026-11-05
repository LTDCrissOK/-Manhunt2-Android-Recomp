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

// Function: sub_001B9790
// Address: 0x1b9790 - 0x1b9800
void sub_001B9790_0x1b9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9790_0x1b9790");
#endif

    switch (ctx->pc) {
        case 0x1b97a0u: goto label_1b97a0;
        case 0x1b97d8u: goto label_1b97d8;
        default: break;
    }

    ctx->pc = 0x1b9790u;

    // 0x1b9790: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b9790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9794: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9794u;
    {
        const bool branch_taken_0x1b9794 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9794u;
        // 0x1b9798: 0x3c070049  lui         $a3, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9794) {
            ctx->pc = 0x1B97B8u;
            goto label_1b97b8;
        }
    }
    ctx->pc = 0x1B979Cu;
    // 0x1b979c: 0x24e3f120  addiu       $v1, $a3, -0xEE0
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963488));
label_1b97a0:
    // 0x1b97a0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1b97a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b97a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b97a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b97a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97ac: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x1b97acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b97b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B97B0u;
    {
        const bool branch_taken_0x1b97b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97B0u;
        // 0x1b97b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97b0) {
            ctx->pc = 0x1B97A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b97a0;
        }
    }
    ctx->pc = 0x1B97B8u;
label_1b97b8:
    // 0x1b97b8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1b97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b97bc: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1b97bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b97c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B97C0u;
    {
        const bool branch_taken_0x1b97c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97C0u;
        // 0x1b97c4: 0x53080  sll         $a2, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97c0) {
            ctx->pc = 0x1B97F0u;
            goto label_1b97f0;
        }
    }
    ctx->pc = 0x1B97C8u;
    // 0x1b97c8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1b97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1b97cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b97ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b97d0: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x1b97d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
    // 0x1b97d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b97d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1b97d8:
    // 0x1b97d8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1b97d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1b97dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b97dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b97e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b97e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97e4: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x1b97e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b97e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B97E8u;
    {
        const bool branch_taken_0x1b97e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97E8u;
        // 0x1b97ec: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b97e8) {
            ctx->pc = 0x1B97D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b97d8;
        }
    }
    ctx->pc = 0x1B97F0u;
label_1b97f0:
    // 0x1b97f0: 0x24e2f120  addiu       $v0, $a3, -0xEE0
    ctx->pc = 0x1b97f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294963488));
    // 0x1b97f4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1b97f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B97F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B97FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B97F8u;
        // 0x1b97fc: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B97F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9800u;
}
