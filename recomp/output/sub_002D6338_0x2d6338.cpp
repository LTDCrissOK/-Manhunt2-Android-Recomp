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

// Function: sub_002D6338
// Address: 0x2d6338 - 0x2d6378
void sub_002D6338_0x2d6338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6338_0x2d6338");
#endif

    switch (ctx->pc) {
        case 0x2d634cu: goto label_2d634c;
        case 0x2d6364u: goto label_2d6364;
        default: break;
    }

    ctx->pc = 0x2d6338u;

    // 0x2d6338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d633c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d6340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d6344: 0xc0b589e  jal         func_2D6278
    ctx->pc = 0x2D6344u;
    SET_GPR_U32(ctx, 31, 0x2D634Cu);
    ctx->pc = 0x2D6348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6344u;
    // 0x2d6348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6278u, 0x2D6344u, 0x2D634Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D634Cu;
label_2d634c:
    // 0x2d634c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D634Cu;
    {
        const bool branch_taken_0x2d634c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D6350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D634Cu;
        // 0x2d6350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d634c) {
            ctx->pc = 0x2D635Cu;
            goto label_2d635c;
        }
    }
    ctx->pc = 0x2D6354u;
    // 0x2d6354: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6354u;
    {
        const bool branch_taken_0x2d6354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6354u;
        // 0x2d6358: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6354) {
            ctx->pc = 0x2D6364u;
            goto label_2d6364;
        }
    }
    ctx->pc = 0x2D635Cu;
label_2d635c:
    // 0x2d635c: 0xc0b574c  jal         func_2D5D30
    ctx->pc = 0x2D635Cu;
    SET_GPR_U32(ctx, 31, 0x2D6364u);
    ctx->pc = 0x2D6360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D635Cu;
    // 0x2d6360: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5D30u, 0x2D635Cu, 0x2D6364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6364u;
label_2d6364:
    // 0x2d6364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d6368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d636c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D636Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D636Cu;
        // 0x2d6370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D636Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6374u;
    // 0x2d6374: 0x0  nop
    ctx->pc = 0x2d6374u;
    // NOP
    ctx->pc = 0x2d6378u;
}
