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

// Function: sub_003D5A98
// Address: 0x3d5a98 - 0x3d5ab0
void sub_003D5A98_0x3d5a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5A98_0x3d5a98");
#endif

    switch (ctx->pc) {
        case 0x3d5a98u: goto label_3d5a98;
        case 0x3d5a9cu: goto label_3d5a9c;
        case 0x3d5aa0u: goto label_3d5aa0;
        case 0x3d5aa4u: goto label_3d5aa4;
        case 0x3d5aa8u: goto label_3d5aa8;
        case 0x3d5aacu: goto label_3d5aac;
        default: break;
    }

    ctx->pc = 0x3d5a98u;

label_3d5a98:
    // 0x3d5a98: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3d5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3d5a9c:
    // 0x3d5a9c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d5a9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3d5aa0:
    // 0x3d5aa0: 0x8c43ede4  lw          $v1, -0x121C($v0)
    ctx->pc = 0x3d5aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962660)));
label_3d5aa4:
    // 0x3d5aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d5aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3d5aa8:
    // 0x3d5aa8: 0x60f809  jalr        $v1
label_3d5aac:
    if (ctx->pc == 0x3D5AACu) {
        ctx->pc = 0x3D5AB0u;
        goto label_fallthrough_0x3d5aa8;
    }
    ctx->pc = 0x3D5AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D5AB0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5AA8u, 0x3D5AB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x3d5aa8:
    ctx->pc = 0x3D5AB0u;
}
