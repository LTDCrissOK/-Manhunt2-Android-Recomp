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

// Function: sub_001561BC
// Address: 0x1561bc - 0x1561cc
void sub_001561BC_0x1561bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001561BC_0x1561bc");
#endif

    ctx->pc = 0x1561bcu;

    // 0x1561bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1561c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1561c4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1561C4u;
    SET_GPR_U32(ctx, 31, 0x1561CCu);
    ctx->pc = 0x1561C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561C4u;
    // 0x1561c8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1561C4u, 0x1561CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561CCu;
}
