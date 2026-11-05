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

// Function: entry_001560b8
// Address: 0x1560b8 - 0x1560c8
void entry_001560b8_0x1560b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001560b8_0x1560b8");
#endif

    switch (ctx->pc) {
        case 0x1560c0u: goto label_1560c0;
        default: break;
    }

    ctx->pc = 0x1560b8u;

    // 0x1560b8: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x1560B8u;
    SET_GPR_U32(ctx, 31, 0x1560C0u);
    ctx->pc = 0x1560BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1560B8u;
    // 0x1560bc: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x1560B8u, 0x1560C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560C0u;
label_1560c0:
    // 0x1560c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1560c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1560c4: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1560C4u;
    {
        const bool branch_taken_0x1560c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1560c4) {
            ctx->pc = 0x156144u;
            return;
        }
    }
    ctx->pc = 0x1560CCu;
}
