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

// Function: sub_002BB6F8
// Address: 0x2bb6f8 - 0x2bb730
void sub_002BB6F8_0x2bb6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB6F8_0x2bb6f8");
#endif

    switch (ctx->pc) {
        case 0x2bb704u: goto label_2bb704;
        default: break;
    }

    ctx->pc = 0x2bb6f8u;

    // 0x2bb6f8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BB6F8u;
    {
        const bool branch_taken_0x2bb6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB6F8u;
        // 0x2bb6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb6f8) {
            ctx->pc = 0x2BB720u;
            goto label_2bb720;
        }
    }
    ctx->pc = 0x2BB700u;
    // 0x2bb700: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2bb700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2bb704:
    // 0x2bb704: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB704u;
    {
        const bool branch_taken_0x2bb704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB704u;
        // 0x2bb708: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb704) {
            ctx->pc = 0x2BB720u;
            goto label_2bb720;
        }
    }
    ctx->pc = 0x2BB70Cu;
    // 0x2bb70c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BB70Cu;
    {
        const bool branch_taken_0x2bb70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB70Cu;
        // 0x2bb710: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb70c) {
            ctx->pc = 0x2BB720u;
            goto label_2bb720;
        }
    }
    ctx->pc = 0x2BB714u;
    // 0x2bb714: 0x28a20203  slti        $v0, $a1, 0x203
    ctx->pc = 0x2bb714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)515) ? 1 : 0);
    // 0x2bb718: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2BB718u;
    {
        const bool branch_taken_0x2bb718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb718) {
            ctx->pc = 0x2BB71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB718u;
            // 0x2bb71c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb704;
        }
    }
    ctx->pc = 0x2BB720u;
label_2bb720:
    // 0x2bb720: 0x28a30202  slti        $v1, $a1, 0x202
    ctx->pc = 0x2bb720u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)514) ? 1 : 0);
    // 0x2bb724: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2bb724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb728: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB728u;
        // 0x2bb72c: 0xa3100b  movn        $v0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB730u;
}
