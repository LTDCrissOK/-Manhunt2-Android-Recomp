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

// Function: sub_00337008
// Address: 0x337008 - 0x337038
void sub_00337008_0x337008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337008_0x337008");
#endif

    switch (ctx->pc) {
        case 0x337024u: goto label_337024;
        default: break;
    }

    ctx->pc = 0x337008u;

    // 0x337008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33700c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33700Cu;
    {
        const bool branch_taken_0x33700c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x337010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33700Cu;
        // 0x337010: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33700c) {
            ctx->pc = 0x33701Cu;
            goto label_33701c;
        }
    }
    ctx->pc = 0x337014u;
    // 0x337014: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337014u;
    {
        const bool branch_taken_0x337014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337014u;
        // 0x337018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337014) {
            ctx->pc = 0x337028u;
            goto label_337028;
        }
    }
    ctx->pc = 0x33701Cu;
label_33701c:
    // 0x33701c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x33701Cu;
    SET_GPR_U32(ctx, 31, 0x337024u);
    ctx->pc = 0x337020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33701Cu;
    // 0x337020: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x33701Cu, 0x337024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337024u;
label_337024:
    // 0x337024: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337028:
    // 0x337028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33702c: 0x3e00008  jr          $ra
    ctx->pc = 0x33702Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33702Cu;
        // 0x337030: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33702Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337034u;
    // 0x337034: 0x0  nop
    ctx->pc = 0x337034u;
    // NOP
    ctx->pc = 0x337038u;
}
