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

// Function: sub_003B1328
// Address: 0x3b1328 - 0x3b1358
void sub_003B1328_0x3b1328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1328_0x3b1328");
#endif

    ctx->pc = 0x3b1328u;

    // 0x3b1328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b132c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B132Cu;
    {
        const bool branch_taken_0x3b132c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B132Cu;
        // 0x3b1330: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b132c) {
            ctx->pc = 0x3B1348u;
            goto label_3b1348;
        }
    }
    ctx->pc = 0x3B1334u;
    // 0x3b1334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1338: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b1338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b133c: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b133cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b1340: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3B1340u;
    ctx->pc = 0x3B1344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1340u;
    // 0x3b1344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3B1348u;
label_3b1348:
    // 0x3b1348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b1348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b134c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B134Cu;
        // 0x3b1350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1354u;
    // 0x3b1354: 0x0  nop
    ctx->pc = 0x3b1354u;
    // NOP
    ctx->pc = 0x3b1358u;
}
