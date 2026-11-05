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

// Function: sub_0037C800
// Address: 0x37c800 - 0x37c898
void sub_0037C800_0x37c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C800_0x37c800");
#endif

    ctx->pc = 0x37c800u;

    // 0x37c800: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37c800u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37c804: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c804u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c808: 0x9020800  j           func_4082000
    ctx->pc = 0x37C808u;
    ctx->pc = 0x37C80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C808u;
    // 0x37c80c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4082000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4082000u, 0x37C808u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C810u;
    // 0x37c810: 0x8430800  j           func_10C2000
    ctx->pc = 0x37C810u;
    ctx->pc = 0x37C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C810u;
    // 0x37c814: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C2000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C2000u, 0x37C810u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C818u;
    // 0x37c818: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37c818u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c81c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c81cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c820: 0x81e30b7d  lb          $v1, 0xB7D($t7)
    ctx->pc = 0x37c820u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
    // 0x37c824: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c824u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c828: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37c828u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c82c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c82cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c830: 0x800210b0  lb          $v0, 0x10B0($zero)
    ctx->pc = 0x37c830u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c834: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c834u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c838: 0x800208b0  lb          $v0, 0x8B0($zero)
    ctx->pc = 0x37c838u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x8B0u));
    // 0x37c83c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c83cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c840: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37c840u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c844: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c844u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c848: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c848u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c84c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c84cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c850: 0x81e30b7c  lb          $v1, 0xB7C($t7)
    ctx->pc = 0x37c850u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c854: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c854u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c858: 0x81e40b7c  lb          $a0, 0xB7C($t7)
    ctx->pc = 0x37c858u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c85c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c85cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c860: 0x81e30b7d  lb          $v1, 0xB7D($t7)
    ctx->pc = 0x37c860u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2941)));
    // 0x37c864: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c864u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c868: 0x81e3137d  lb          $v1, 0x137D($t7)
    ctx->pc = 0x37c868u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4989)));
    // 0x37c86c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c86cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c870: 0x81e31b7d  lb          $v1, 0x1B7D($t7)
    ctx->pc = 0x37c870u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7037)));
    // 0x37c874: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c874u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c878: 0x52020ff8  beql        $s0, $v0, . + 4 + (0xFF8 << 2)
    ctx->pc = 0x37C878u;
    {
        const bool branch_taken_0x37c878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x37c878) {
            ctx->pc = 0x37C87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C878u;
            // 0x37c87c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38085Cu;
            return;
        }
    }
    ctx->pc = 0x37C880u;
    // 0x37c880: 0x81e3237d  lb          $v1, 0x237D($t7)
    ctx->pc = 0x37c880u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9085)));
    // 0x37c884: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c884u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c888: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c888u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c88c: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x37c88cu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x37c890: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c890u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c894: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c894u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37c898u;
}
