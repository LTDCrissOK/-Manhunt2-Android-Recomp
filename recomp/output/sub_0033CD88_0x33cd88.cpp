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

// Function: sub_0033CD88
// Address: 0x33cd88 - 0x33cdac
void sub_0033CD88_0x33cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CD88_0x33cd88");
#endif

    switch (ctx->pc) {
        case 0x33cd88u: goto label_33cd88;
        case 0x33cd8cu: goto label_33cd8c;
        case 0x33cd90u: goto label_33cd90;
        case 0x33cd94u: goto label_33cd94;
        case 0x33cd98u: goto label_33cd98;
        case 0x33cd9cu: goto label_33cd9c;
        case 0x33cda0u: goto label_33cda0;
        case 0x33cda4u: goto label_33cda4;
        case 0x33cda8u: goto label_33cda8;
        default: break;
    }

    ctx->pc = 0x33cd88u;

label_33cd88:
    // 0x33cd88: 0x2ca20009  sltiu       $v0, $a1, 0x9
    ctx->pc = 0x33cd88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_33cd8c:
    // 0x33cd8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_33cd90:
    if (ctx->pc == 0x33CD90u) {
        ctx->pc = 0x33CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD8Cu;
        // 0x33cd90: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33CD94u;
        goto label_33cd94;
    }
    ctx->pc = 0x33CD8Cu;
    {
        const bool branch_taken_0x33cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33CD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CD8Cu;
        // 0x33cd90: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33cd8c) {
            ctx->pc = 0x33CDC4u;
            return;
        }
    }
    ctx->pc = 0x33CD94u;
label_33cd94:
    // 0x33cd94: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x33cd94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_33cd98:
    // 0x33cd98: 0x24426170  addiu       $v0, $v0, 0x6170
    ctx->pc = 0x33cd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24944));
label_33cd9c:
    // 0x33cd9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_33cda0:
    // 0x33cda0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x33cda0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33cda4:
    // 0x33cda4: 0x800008  jr          $a0
label_33cda8:
    if (ctx->pc == 0x33CDA8u) {
        ctx->pc = 0x33CDACu;
        goto label_fallthrough_0x33cda4;
    }
    ctx->pc = 0x33CDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CDA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x33cda4:
    ctx->pc = 0x33CDACu;
}
