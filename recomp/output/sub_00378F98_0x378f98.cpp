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

// Function: sub_00378F98
// Address: 0x378f98 - 0x378fb8
void sub_00378F98_0x378f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00378F98_0x378f98");
#endif

    ctx->pc = 0x378f98u;

    // 0x378f98: 0x8410038  j           func_10400E0
    ctx->pc = 0x378F98u;
    ctx->pc = 0x378F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x378F98u;
    // 0x378f9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10400E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10400E0u, 0x378F98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x378FA0u;
    // 0x378fa0: 0x1e10036  tne         $t7, $at, 0
    ctx->pc = 0x378fa0u;
    if (GPR_U64(ctx, 15) != GPR_U64(ctx, 1)) { runtime->handleTrap(rdram, ctx); }
    // 0x378fa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378fa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378fa8: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x378fa8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x378FA8 raw=0x48000800");
    // 0x378fac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378facu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x378fb0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x378fb0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x378fb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x378fb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x378fb8u;
}
