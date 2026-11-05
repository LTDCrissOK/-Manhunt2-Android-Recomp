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

// Function: sub_00161450
// Address: 0x161450 - 0x161490
void sub_00161450_0x161450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161450_0x161450");
#endif

    switch (ctx->pc) {
        case 0x16147cu: goto label_16147c;
        default: break;
    }

    ctx->pc = 0x161450u;

    // 0x161450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161454: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x161454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x161458: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16145c: 0x2ca50010  sltiu       $a1, $a1, 0x10
    ctx->pc = 0x16145cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x161460: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x161460u;
    {
        const bool branch_taken_0x161460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x161464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161460u;
        // 0x161464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161460) {
            ctx->pc = 0x161484u;
            goto label_161484;
        }
    }
    ctx->pc = 0x161468u;
    // 0x161468: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x161468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x16146c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16146Cu;
    {
        const bool branch_taken_0x16146c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16146c) {
            ctx->pc = 0x161470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16146Cu;
            // 0x161470: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161484u;
            goto label_161484;
        }
    }
    ctx->pc = 0x161474u;
    // 0x161474: 0xc04f02a  jal         func_13C0A8
    ctx->pc = 0x161474u;
    SET_GPR_U32(ctx, 31, 0x16147Cu);
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x161474u, 0x16147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16147Cu;
label_16147c:
    // 0x16147c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x16147cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x161480: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x161480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_161484:
    // 0x161484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161488: 0x3e00008  jr          $ra
    ctx->pc = 0x161488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16148Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161488u;
        // 0x16148c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161490u;
}
