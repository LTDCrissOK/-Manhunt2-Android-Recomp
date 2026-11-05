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

// Function: sub_0039A6B8
// Address: 0x39a6b8 - 0x39a6e0
void sub_0039A6B8_0x39a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A6B8_0x39a6b8");
#endif

    switch (ctx->pc) {
        case 0x39a6c8u: goto label_39a6c8;
        case 0x39a6d0u: goto label_39a6d0;
        default: break;
    }

    ctx->pc = 0x39a6b8u;

    // 0x39a6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39a6bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39a6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39a6c0: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39A6C0u;
    SET_GPR_U32(ctx, 31, 0x39A6C8u);
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39A6C0u, 0x39A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A6C8u;
label_39a6c8:
    // 0x39a6c8: 0xc0e69b8  jal         func_39A6E0
    ctx->pc = 0x39A6C8u;
    SET_GPR_U32(ctx, 31, 0x39A6D0u);
    ctx->pc = 0x39A6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A6E0u, 0x39A6C8u, 0x39A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A6D0u;
label_39a6d0:
    // 0x39a6d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39a6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a6d4: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x39A6D4u;
    ctx->pc = 0x39A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A6D4u;
    // 0x39a6d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x39A6DCu;
    // 0x39a6dc: 0x0  nop
    ctx->pc = 0x39a6dcu;
    // NOP
    ctx->pc = 0x39a6e0u;
}
