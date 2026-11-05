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

// Function: sub_001D4238
// Address: 0x1d4238 - 0x1d4278
void sub_001D4238_0x1d4238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4238_0x1d4238");
#endif

    switch (ctx->pc) {
        case 0x1d4250u: goto label_1d4250;
        default: break;
    }

    ctx->pc = 0x1d4238u;

    // 0x1d4238: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d4238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d423c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d423cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4240: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4240u;
    {
        const bool branch_taken_0x1d4240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4240u;
        // 0x1d4244: 0x8c86000c  lw          $a2, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4240) {
            ctx->pc = 0x1D4270u;
            goto label_1d4270;
        }
    }
    ctx->pc = 0x1D4248u;
    // 0x1d4248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d424c: 0x0  nop
    ctx->pc = 0x1d424cu;
    // NOP
label_1d4250:
    // 0x1d4250: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x1d4250u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d4254: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4254u;
    {
        const bool branch_taken_0x1d4254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d4254) {
            ctx->pc = 0x1D4258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4254u;
            // 0x1d4258: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4264u;
            goto label_1d4264;
        }
    }
    ctx->pc = 0x1D425Cu;
    // 0x1d425c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D425Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D425Cu;
        // 0x1d4260: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D425Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4264u;
label_1d4264:
    // 0x1d4264: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1d4264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d4268: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D4268u;
    {
        const bool branch_taken_0x1d4268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D426Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4268u;
        // 0x1d426c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4268) {
            ctx->pc = 0x1D4250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4250;
        }
    }
    ctx->pc = 0x1D4270u;
label_1d4270:
    // 0x1d4270: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4270u;
        // 0x1d4274: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4278u;
}
