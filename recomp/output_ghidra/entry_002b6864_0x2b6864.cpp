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

// Function: entry_002b6864
// Address: 0x2b6864 - 0x2b6884
void entry_002b6864_0x2b6864(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002b6864_0x2b6864");
#endif

    switch (ctx->pc) {
        case 0x2b687cu: goto label_2b687c;
        default: break;
    }

    ctx->pc = 0x2b6864u;

    // 0x2b6864: 0x3c060047  lui         $a2, 0x47
    ctx->pc = 0x2b6864u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)71 << 16));
    // 0x2b6868: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b686c: 0x24c6fb98  addiu       $a2, $a2, -0x468
    ctx->pc = 0x2b686cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966168));
    // 0x2b6870: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2b6870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6874: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x2B6874u;
    SET_GPR_U32(ctx, 31, 0x2B687Cu);
    ctx->pc = 0x2B6878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6874u;
    // 0x2b6878: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2B6874u, 0x2B687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B687Cu;
label_2b687c:
    // 0x2b687c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6880: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2b6880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->pc = 0x2b6884u;
}
