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

// Function: sub_00115590
// Address: 0x115590 - 0x1155b4
void sub_00115590_0x115590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115590_0x115590");
#endif

    switch (ctx->pc) {
        case 0x115590u: goto label_115590;
        case 0x115594u: goto label_115594;
        case 0x115598u: goto label_115598;
        case 0x11559cu: goto label_11559c;
        case 0x1155a0u: goto label_1155a0;
        case 0x1155a4u: goto label_1155a4;
        case 0x1155a8u: goto label_1155a8;
        case 0x1155acu: goto label_1155ac;
        case 0x1155b0u: goto label_1155b0;
        default: break;
    }

    ctx->pc = 0x115590u;

label_115590:
    // 0x115590: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x115590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_115594:
    // 0x115594: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_115598:
    if (ctx->pc == 0x115598u) {
        ctx->pc = 0x115598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115594u;
        // 0x115598: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11559Cu;
        goto label_11559c;
    }
    ctx->pc = 0x115594u;
    {
        const bool branch_taken_0x115594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115594u;
        // 0x115598: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115594) {
            ctx->pc = 0x1155DCu;
            return;
        }
    }
    ctx->pc = 0x11559Cu;
label_11559c:
    // 0x11559c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11559cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1155a0:
    // 0x1155a0: 0x2442b020  addiu       $v0, $v0, -0x4FE0
    ctx->pc = 0x1155a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946848));
label_1155a4:
    // 0x1155a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1155a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1155a8:
    // 0x1155a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1155a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1155ac:
    // 0x1155ac: 0x800008  jr          $a0
label_1155b0:
    if (ctx->pc == 0x1155B0u) {
        ctx->pc = 0x1155B4u;
        goto label_fallthrough_0x1155ac;
    }
    ctx->pc = 0x1155ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1155ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1155ac:
    ctx->pc = 0x1155B4u;
}
