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

// Function: sub_0019E910
// Address: 0x19e910 - 0x19e948
void sub_0019E910_0x19e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E910_0x19e910");
#endif

    switch (ctx->pc) {
        case 0x19e928u: goto label_19e928;
        case 0x19e938u: goto label_19e938;
        default: break;
    }

    ctx->pc = 0x19e910u;

    // 0x19e910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19e91c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e920: 0xc064a9a  jal         func_192A68
    ctx->pc = 0x19E920u;
    SET_GPR_U32(ctx, 31, 0x19E928u);
    ctx->pc = 0x19E924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E920u;
    // 0x19e924: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A68u, 0x19E920u, 0x19E928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E928u;
label_19e928:
    // 0x19e928: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E928u;
    {
        const bool branch_taken_0x19e928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e928) {
            ctx->pc = 0x19E92Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E928u;
            // 0x19e92c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E93Cu;
            goto label_19e93c;
        }
    }
    ctx->pc = 0x19E930u;
    // 0x19e930: 0xc067b7e  jal         func_19EDF8
    ctx->pc = 0x19E930u;
    SET_GPR_U32(ctx, 31, 0x19E938u);
    ctx->pc = 0x19E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E930u;
    // 0x19e934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EDF8u, 0x19E930u, 0x19E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E938u;
label_19e938:
    // 0x19e938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e93c:
    // 0x19e93c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19e93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e940: 0x3e00008  jr          $ra
    ctx->pc = 0x19E940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E940u;
        // 0x19e944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E948u;
}
