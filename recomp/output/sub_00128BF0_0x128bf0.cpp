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

// Function: sub_00128BF0
// Address: 0x128bf0 - 0x128c14
void sub_00128BF0_0x128bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128BF0_0x128bf0");
#endif

    switch (ctx->pc) {
        case 0x128bf0u: goto label_128bf0;
        case 0x128bf4u: goto label_128bf4;
        case 0x128bf8u: goto label_128bf8;
        case 0x128bfcu: goto label_128bfc;
        case 0x128c00u: goto label_128c00;
        case 0x128c04u: goto label_128c04;
        case 0x128c08u: goto label_128c08;
        case 0x128c0cu: goto label_128c0c;
        case 0x128c10u: goto label_128c10;
        default: break;
    }

    ctx->pc = 0x128bf0u;

label_128bf0:
    // 0x128bf0: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x128bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_128bf4:
    // 0x128bf4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_128bf8:
    if (ctx->pc == 0x128BF8u) {
        ctx->pc = 0x128BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BF4u;
        // 0x128bf8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x128BFCu;
        goto label_128bfc;
    }
    ctx->pc = 0x128BF4u;
    {
        const bool branch_taken_0x128bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BF4u;
        // 0x128bf8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128bf4) {
            ctx->pc = 0x128C3Cu;
            return;
        }
    }
    ctx->pc = 0x128BFCu;
label_128bfc:
    // 0x128bfc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x128bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_128c00:
    // 0x128c00: 0x2442ce20  addiu       $v0, $v0, -0x31E0
    ctx->pc = 0x128c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954528));
label_128c04:
    // 0x128c04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x128c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_128c08:
    // 0x128c08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x128c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_128c0c:
    // 0x128c0c: 0x800008  jr          $a0
label_128c10:
    if (ctx->pc == 0x128C10u) {
        ctx->pc = 0x128C14u;
        goto label_fallthrough_0x128c0c;
    }
    ctx->pc = 0x128C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128C0Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x128c0c:
    ctx->pc = 0x128C14u;
}
