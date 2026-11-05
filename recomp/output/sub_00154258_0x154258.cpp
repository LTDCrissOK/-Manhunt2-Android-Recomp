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

// Function: sub_00154258
// Address: 0x154258 - 0x1542a0
void sub_00154258_0x154258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154258_0x154258");
#endif

    switch (ctx->pc) {
        case 0x154270u: goto label_154270;
        case 0x154288u: goto label_154288;
        default: break;
    }

    ctx->pc = 0x154258u;

    // 0x154258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x154260: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x154260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x154264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x154264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154268: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x154268u;
    SET_GPR_U32(ctx, 31, 0x154270u);
    ctx->pc = 0x15426Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154268u;
    // 0x15426c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x154268u, 0x154270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154270u;
label_154270:
    // 0x154270: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154274: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154274u;
    {
        const bool branch_taken_0x154274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x154278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154274u;
        // 0x154278: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154274) {
            ctx->pc = 0x15428Cu;
            goto label_15428c;
        }
    }
    ctx->pc = 0x15427Cu;
    // 0x15427c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154280: 0xc04da5c  jal         func_136970
    ctx->pc = 0x154280u;
    SET_GPR_U32(ctx, 31, 0x154288u);
    ctx->pc = 0x154284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154280u;
    // 0x154284: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x154280u, 0x154288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154288u;
label_154288:
    // 0x154288: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15428c:
    // 0x15428c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15428cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x154290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x154290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x154294: 0x3e00008  jr          $ra
    ctx->pc = 0x154294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154294u;
        // 0x154298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15429Cu;
    // 0x15429c: 0x0  nop
    ctx->pc = 0x15429cu;
    // NOP
    ctx->pc = 0x1542a0u;
}
