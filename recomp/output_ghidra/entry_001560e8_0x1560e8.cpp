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

// Function: entry_001560e8
// Address: 0x1560e8 - 0x156108
void entry_001560e8_0x1560e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560e8_0x1560e8");
#endif

    switch (ctx->pc) {
        case 0x1560e8u: goto label_1560e8;
        case 0x1560ecu: goto label_1560ec;
        case 0x1560f0u: goto label_1560f0;
        case 0x1560f4u: goto label_1560f4;
        case 0x1560f8u: goto label_1560f8;
        case 0x1560fcu: goto label_1560fc;
        case 0x156100u: goto label_156100;
        case 0x156104u: goto label_156104;
        default: break;
    }

    ctx->pc = 0x1560e8u;

label_1560e8:
    // 0x1560e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1560e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1560ec:
    // 0x1560ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1560ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1560f0:
    // 0x1560f0: 0x800008  jr          $a0
label_1560f4:
    if (ctx->pc == 0x1560F4u) {
        ctx->pc = 0x1560F8u;
        goto label_1560f8;
    }
    ctx->pc = 0x1560F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1560F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1560F8u;
label_1560f8:
    // 0x1560f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1560f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1560fc:
    // 0x1560fc: 0xc04da5c  jal         func_136970
label_156100:
    if (ctx->pc == 0x156100u) {
        ctx->pc = 0x156100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560FCu;
        // 0x156100: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156104u;
        goto label_156104;
    }
    ctx->pc = 0x1560FCu;
    SET_GPR_U32(ctx, 31, 0x156104u);
    ctx->pc = 0x156100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1560FCu;
    // 0x156100: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1560FCu, 0x156104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156104u;
label_156104:
    // 0x156104: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x156104u;
    {
        const bool branch_taken_0x156104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x156104) {
            ctx->pc = 0x156144u;
            return;
        }
    }
    ctx->pc = 0x15610Cu;
}
