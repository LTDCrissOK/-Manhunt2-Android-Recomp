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

// Function: sub_003DF920
// Address: 0x3df920 - 0x3df960
void sub_003DF920_0x3df920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF920_0x3df920");
#endif

    switch (ctx->pc) {
        case 0x3df920u: goto label_3df920;
        case 0x3df924u: goto label_3df924;
        case 0x3df928u: goto label_3df928;
        case 0x3df92cu: goto label_3df92c;
        case 0x3df930u: goto label_3df930;
        case 0x3df934u: goto label_3df934;
        case 0x3df938u: goto label_3df938;
        case 0x3df93cu: goto label_3df93c;
        case 0x3df940u: goto label_3df940;
        case 0x3df944u: goto label_3df944;
        case 0x3df948u: goto label_3df948;
        case 0x3df94cu: goto label_3df94c;
        case 0x3df950u: goto label_3df950;
        case 0x3df954u: goto label_3df954;
        case 0x3df958u: goto label_3df958;
        case 0x3df95cu: goto label_3df95c;
        default: break;
    }

    ctx->pc = 0x3df920u;

label_3df920:
    // 0x3df920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3df920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3df924:
    // 0x3df924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3df924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3df928:
    // 0x3df928: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x3df928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3df92c:
    // 0x3df92c: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x3df92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
label_3df930:
    // 0x3df930: 0x40f809  jalr        $v0
label_3df934:
    if (ctx->pc == 0x3DF934u) {
        ctx->pc = 0x3DF938u;
        goto label_3df938;
    }
    ctx->pc = 0x3DF930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DF938u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF930u, 0x3DF938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DF938u;
label_3df938:
    // 0x3df938: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3df938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3df93c:
    // 0x3df93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3df93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3df940:
    // 0x3df940: 0x3e00008  jr          $ra
label_3df944:
    if (ctx->pc == 0x3DF944u) {
        ctx->pc = 0x3DF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF940u;
        // 0x3df944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DF948u;
        goto label_3df948;
    }
    ctx->pc = 0x3DF940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF940u;
        // 0x3df944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF948u;
label_3df948:
    // 0x3df948: 0xac820230  sw          $v0, 0x230($a0)
    ctx->pc = 0x3df948u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 2));
label_3df94c:
    // 0x3df94c: 0x0  nop
    ctx->pc = 0x3df94cu;
    // NOP
label_3df950:
    // 0x3df950: 0x8c6202e0  lw          $v0, 0x2E0($v1)
    ctx->pc = 0x3df950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 736)));
label_3df954:
    // 0x3df954: 0x0  nop
    ctx->pc = 0x3df954u;
    // NOP
label_3df958:
    // 0x3df958: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3df958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3df95c:
    // 0x3df95c: 0x0  nop
    ctx->pc = 0x3df95cu;
    // NOP
    ctx->pc = 0x3df960u;
}
