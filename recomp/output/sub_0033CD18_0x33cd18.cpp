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

// Function: sub_0033CD18
// Address: 0x33cd18 - 0x33cd64
void sub_0033CD18_0x33cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CD18_0x33cd18");
#endif

    ctx->pc = 0x33cd18u;

    // 0x33cd18: 0x24c3fc18  addiu       $v1, $a2, -0x3E8
    ctx->pc = 0x33cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966296));
    // 0x33cd1c: 0x2c620061  sltiu       $v0, $v1, 0x61
    ctx->pc = 0x33cd1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x33cd20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x33CD20u;
    {
        const bool branch_taken_0x33cd20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD20u;
        // 0x33cd24: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd20) {
            ctx->pc = 0x33CD70u;
            return;
        }
    }
    ctx->pc = 0x33CD28u;
    // 0x33cd28: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x33cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x33cd2c: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x33cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x33cd30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33cd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33cd34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33cd38: 0x800008  jr          $a0
    ctx->pc = 0x33CD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x33CD40u: goto label_33cd40;
            case 0x33CD48u: goto label_33cd48;
            case 0x33CD50u: goto label_33cd50;
            case 0x33CD58u: goto label_33cd58;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CD38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33CD40u;
label_33cd40:
    // 0x33cd40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33CD40u;
    {
        const bool branch_taken_0x33cd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD40u;
        // 0x33cd44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd40) {
            ctx->pc = 0x33CD7Cu;
            return;
        }
    }
    ctx->pc = 0x33CD48u;
label_33cd48:
    // 0x33cd48: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33CD48u;
    {
        const bool branch_taken_0x33cd48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD48u;
        // 0x33cd4c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd48) {
            ctx->pc = 0x33CD7Cu;
            return;
        }
    }
    ctx->pc = 0x33CD50u;
label_33cd50:
    // 0x33cd50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x33CD50u;
    {
        const bool branch_taken_0x33cd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD50u;
        // 0x33cd54: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd50) {
            ctx->pc = 0x33CD7Cu;
            return;
        }
    }
    ctx->pc = 0x33CD58u;
label_33cd58:
    // 0x33cd58: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33cd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33cd5c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33CD5Cu;
    {
        const bool branch_taken_0x33cd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD5Cu;
        // 0x33cd60: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd5c) {
            ctx->pc = 0x33CD78u;
            return;
        }
    }
    ctx->pc = 0x33CD64u;
}
