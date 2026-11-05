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

// Function: sub_00336F48
// Address: 0x336f48 - 0x336f78
void sub_00336F48_0x336f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336F48_0x336f48");
#endif

    switch (ctx->pc) {
        case 0x336f64u: goto label_336f64;
        default: break;
    }

    ctx->pc = 0x336f48u;

    // 0x336f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336f4c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336F4Cu;
    {
        const bool branch_taken_0x336f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F4Cu;
        // 0x336f50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f4c) {
            ctx->pc = 0x336F5Cu;
            goto label_336f5c;
        }
    }
    ctx->pc = 0x336F54u;
    // 0x336f54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336F54u;
    {
        const bool branch_taken_0x336f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F54u;
        // 0x336f58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f54) {
            ctx->pc = 0x336F68u;
            goto label_336f68;
        }
    }
    ctx->pc = 0x336F5Cu;
label_336f5c:
    // 0x336f5c: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x336F5Cu;
    SET_GPR_U32(ctx, 31, 0x336F64u);
    ctx->pc = 0x336F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336F5Cu;
    // 0x336f60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x336F5Cu, 0x336F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336F64u;
label_336f64:
    // 0x336f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336f68:
    // 0x336f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x336F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F6Cu;
        // 0x336f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336F74u;
    // 0x336f74: 0x0  nop
    ctx->pc = 0x336f74u;
    // NOP
    ctx->pc = 0x336f78u;
}
