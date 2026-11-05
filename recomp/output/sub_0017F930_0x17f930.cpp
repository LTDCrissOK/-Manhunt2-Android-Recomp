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

// Function: sub_0017F930
// Address: 0x17f930 - 0x17f960
void sub_0017F930_0x17f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F930_0x17f930");
#endif

    switch (ctx->pc) {
        case 0x17f94cu: goto label_17f94c;
        default: break;
    }

    ctx->pc = 0x17f930u;

    // 0x17f930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f938: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f93c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F93Cu;
    {
        const bool branch_taken_0x17f93c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F93Cu;
        // 0x17f940: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f93c) {
            ctx->pc = 0x17F954u;
            goto label_17f954;
        }
    }
    ctx->pc = 0x17F944u;
    // 0x17f944: 0xc0736a8  jal         func_1CDAA0
    ctx->pc = 0x17F944u;
    SET_GPR_U32(ctx, 31, 0x17F94Cu);
    ctx->pc = 0x1CDAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAA0u, 0x17F944u, 0x17F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F94Cu;
label_17f94c:
    // 0x17f94c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F94Cu;
    {
        const bool branch_taken_0x17f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F94Cu;
        // 0x17f950: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f94c) {
            ctx->pc = 0x17F958u;
            goto label_17f958;
        }
    }
    ctx->pc = 0x17F954u;
label_17f954:
    // 0x17f954: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17f954u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17f958:
    // 0x17f958: 0x3e00008  jr          $ra
    ctx->pc = 0x17F958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F958u;
        // 0x17f95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F960u;
}
