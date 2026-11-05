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

// Function: sub_002CD958
// Address: 0x2cd958 - 0x2cd978
void sub_002CD958_0x2cd958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD958_0x2cd958");
#endif

    switch (ctx->pc) {
        case 0x2cd960u: goto label_2cd960;
        case 0x2cd968u: goto label_2cd968;
        default: break;
    }

    ctx->pc = 0x2cd958u;

    // 0x2cd958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cd960:
    // 0x2cd960: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2CD960u;
    SET_GPR_U32(ctx, 31, 0x2CD968u);
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2CD960u, 0x2CD968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD968u;
label_2cd968:
    // 0x2cd968: 0x0  nop
    ctx->pc = 0x2cd968u;
    // NOP
    // 0x2cd96c: 0x0  nop
    ctx->pc = 0x2cd96cu;
    // NOP
    // 0x2cd970: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CD970u;
    {
        const bool branch_taken_0x2cd970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd970) {
            ctx->pc = 0x2CD960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd960;
        }
    }
    ctx->pc = 0x2CD978u;
}
