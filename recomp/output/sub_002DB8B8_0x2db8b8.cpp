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

// Function: sub_002DB8B8
// Address: 0x2db8b8 - 0x2db8f0
void sub_002DB8B8_0x2db8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DB8B8_0x2db8b8");
#endif

    ctx->pc = 0x2db8b8u;

    // 0x2db8b8: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x2db8b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db8bc: 0x2402007e  addiu       $v0, $zero, 0x7E
    ctx->pc = 0x2db8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x2db8c0: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DB8C0u;
    {
        const bool branch_taken_0x2db8c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8C0u;
        // 0x2db8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8c0) {
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB8C8u;
    // 0x2db8c8: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x2db8c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2db8cc: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2db8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2db8d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB8D0u;
    {
        const bool branch_taken_0x2db8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DB8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8D0u;
        // 0x2db8d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8d0) {
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB8D8u;
    // 0x2db8d8: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x2db8d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2db8dc: 0x10640002  beq         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB8DCu;
    {
        const bool branch_taken_0x2db8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2DB8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB8DCu;
        // 0x2db8e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db8dc) {
            ctx->pc = 0x2DB8E8u;
            goto label_2db8e8;
        }
    }
    ctx->pc = 0x2DB8E4u;
    // 0x2db8e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2db8e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2db8e8:
    // 0x2db8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB8F0u;
}
