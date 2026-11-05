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

// Function: sub_003DC800
// Address: 0x3dc800 - 0x3dc860
void sub_003DC800_0x3dc800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC800_0x3dc800");
#endif

    switch (ctx->pc) {
        case 0x3dc810u: goto label_3dc810;
        case 0x3dc820u: goto label_3dc820;
        default: break;
    }

    ctx->pc = 0x3dc800u;

    // 0x3dc800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dc804: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dc808: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3DC808u;
    {
        const bool branch_taken_0x3dc808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC808u;
        // 0x3dc80c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc808) {
            ctx->pc = 0x3DC834u;
            goto label_3dc834;
        }
    }
    ctx->pc = 0x3DC810u;
label_3dc810:
    // 0x3dc810: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DC810u;
    {
        const bool branch_taken_0x3dc810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3dc810) {
            ctx->pc = 0x3DC828u;
            goto label_3dc828;
        }
    }
    ctx->pc = 0x3DC818u;
    // 0x3dc818: 0xc0f71dc  jal         func_3DC770
    ctx->pc = 0x3DC818u;
    SET_GPR_U32(ctx, 31, 0x3DC820u);
    ctx->pc = 0x3DC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC818u;
    // 0x3dc81c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x3DC818u, 0x3DC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC820u;
label_3dc820:
    // 0x3dc820: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3DC820u;
    {
        const bool branch_taken_0x3dc820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC820u;
        // 0x3dc824: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc820) {
            ctx->pc = 0x3DC858u;
            goto label_3dc858;
        }
    }
    ctx->pc = 0x3DC828u;
label_3dc828:
    // 0x3dc828: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DC828u;
    {
        const bool branch_taken_0x3dc828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC828u;
        // 0x3dc82c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc828) {
            ctx->pc = 0x3DC850u;
            goto label_3dc850;
        }
    }
    ctx->pc = 0x3DC830u;
    // 0x3dc830: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3dc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3dc834:
    // 0x3dc834: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dc834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3dc838: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3dc838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dc83c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DC83Cu;
    {
        const bool branch_taken_0x3dc83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC83Cu;
        // 0x3dc840: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc83c) {
            ctx->pc = 0x3DC84Cu;
            goto label_3dc84c;
        }
    }
    ctx->pc = 0x3DC844u;
    // 0x3dc844: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3DC844u;
    {
        const bool branch_taken_0x3dc844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC844u;
        // 0x3dc848: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc844) {
            ctx->pc = 0x3DC850u;
            goto label_3dc850;
        }
    }
    ctx->pc = 0x3DC84Cu;
label_3dc84c:
    // 0x3dc84c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3dc84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3dc850:
    // 0x3dc850: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3DC850u;
    {
        const bool branch_taken_0x3dc850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC850u;
        // 0x3dc854: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc850) {
            ctx->pc = 0x3DC810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc810;
        }
    }
    ctx->pc = 0x3DC858u;
label_3dc858:
    // 0x3dc858: 0x3e00008  jr          $ra
    ctx->pc = 0x3DC858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DC85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC858u;
        // 0x3dc85c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DC860u;
}
