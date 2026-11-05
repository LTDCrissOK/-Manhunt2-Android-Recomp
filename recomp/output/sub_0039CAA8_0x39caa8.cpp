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

// Function: sub_0039CAA8
// Address: 0x39caa8 - 0x39cad0
void sub_0039CAA8_0x39caa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CAA8_0x39caa8");
#endif

    ctx->pc = 0x39caa8u;

    // 0x39caa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39caa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39caac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39cab0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x39cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x39cab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cab8: 0x80e643e  j           func_3990F8
    ctx->pc = 0x39CAB8u;
    ctx->pc = 0x39CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CAB8u;
    // 0x39cabc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990F8u, 0x39CAB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39CAC0u;
    // 0x39cac0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39cac4: 0x0  nop
    ctx->pc = 0x39cac4u;
    // NOP
    // 0x39cac8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x39cac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x39cacc: 0x0  nop
    ctx->pc = 0x39caccu;
    // NOP
    ctx->pc = 0x39cad0u;
}
