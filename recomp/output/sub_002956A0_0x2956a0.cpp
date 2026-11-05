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

// Function: sub_002956A0
// Address: 0x2956a0 - 0x2956c8
void sub_002956A0_0x2956a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002956A0_0x2956a0");
#endif

    switch (ctx->pc) {
        case 0x2956a0u: goto label_2956a0;
        case 0x2956a4u: goto label_2956a4;
        case 0x2956a8u: goto label_2956a8;
        case 0x2956acu: goto label_2956ac;
        case 0x2956b0u: goto label_2956b0;
        case 0x2956b4u: goto label_2956b4;
        case 0x2956b8u: goto label_2956b8;
        case 0x2956bcu: goto label_2956bc;
        case 0x2956c0u: goto label_2956c0;
        case 0x2956c4u: goto label_2956c4;
        default: break;
    }

    ctx->pc = 0x2956a0u;

label_2956a0:
    // 0x2956a0: 0x2483ffe2  addiu       $v1, $a0, -0x1E
    ctx->pc = 0x2956a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
label_2956a4:
    // 0x2956a4: 0x2c62006c  sltiu       $v0, $v1, 0x6C
    ctx->pc = 0x2956a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)108) ? 1 : 0);
label_2956a8:
    // 0x2956a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2956ac:
    if (ctx->pc == 0x2956ACu) {
        ctx->pc = 0x2956ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956A8u;
        // 0x2956ac: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2956B0u;
        goto label_2956b0;
    }
    ctx->pc = 0x2956A8u;
    {
        const bool branch_taken_0x2956a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2956ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2956A8u;
        // 0x2956ac: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2956a8) {
            ctx->pc = 0x2956D0u;
            return;
        }
    }
    ctx->pc = 0x2956B0u;
label_2956b0:
    // 0x2956b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2956b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2956b4:
    // 0x2956b4: 0x2442b8d0  addiu       $v0, $v0, -0x4730
    ctx->pc = 0x2956b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949072));
label_2956b8:
    // 0x2956b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2956b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2956bc:
    // 0x2956bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2956bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2956c0:
    // 0x2956c0: 0x800008  jr          $a0
label_2956c4:
    if (ctx->pc == 0x2956C4u) {
        ctx->pc = 0x2956C8u;
        goto label_fallthrough_0x2956c0;
    }
    ctx->pc = 0x2956C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2956C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2956c0:
    ctx->pc = 0x2956C8u;
}
