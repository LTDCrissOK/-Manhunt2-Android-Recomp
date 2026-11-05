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

// Function: sub_003EE470
// Address: 0x3ee470 - 0x3ee4a0
void sub_003EE470_0x3ee470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE470_0x3ee470");
#endif

    switch (ctx->pc) {
        case 0x3ee494u: goto label_3ee494;
        default: break;
    }

    ctx->pc = 0x3ee470u;

    // 0x3ee470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ee470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ee474: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3ee474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3ee478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ee478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ee47c: 0x244243c8  addiu       $v0, $v0, 0x43C8
    ctx->pc = 0x3ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
    // 0x3ee480: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3ee480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3ee484: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EE484u;
    {
        const bool branch_taken_0x3ee484 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE484u;
        // 0x3ee488: 0xac820068  sw          $v0, 0x68($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee484) {
            ctx->pc = 0x3EE494u;
            goto label_3ee494;
        }
    }
    ctx->pc = 0x3EE48Cu;
    // 0x3ee48c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EE48Cu;
    SET_GPR_U32(ctx, 31, 0x3EE494u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EE48Cu, 0x3EE494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE494u;
label_3ee494:
    // 0x3ee494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ee494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ee498: 0x3e00008  jr          $ra
    ctx->pc = 0x3EE498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE498u;
        // 0x3ee49c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE4A0u;
}
