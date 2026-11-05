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

// Function: sub_003A5780
// Address: 0x3a5780 - 0x3a57c0
void sub_003A5780_0x3a5780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5780_0x3a5780");
#endif

    switch (ctx->pc) {
        case 0x3a57a0u: goto label_3a57a0;
        default: break;
    }

    ctx->pc = 0x3a5780u;

    // 0x3a5780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a5784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a5788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a5788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a578c: 0x80e8d14  j           func_3A3450
    ctx->pc = 0x3A578Cu;
    ctx->pc = 0x3A5790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A578Cu;
    // 0x3a5790: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3450u, 0x3A578Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A5794u;
    // 0x3a5794: 0x0  nop
    ctx->pc = 0x3a5794u;
    // NOP
    // 0x3a5798: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a5798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a579c: 0x0  nop
    ctx->pc = 0x3a579cu;
    // NOP
label_3a57a0:
    // 0x3a57a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a57a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a57a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a57a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a57a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a57a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a57ac: 0x80e8d26  j           func_3A3498
    ctx->pc = 0x3A57ACu;
    ctx->pc = 0x3A57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A57ACu;
    // 0x3a57b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3498u, 0x3A57ACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3A57B4u;
    // 0x3a57b4: 0x0  nop
    ctx->pc = 0x3a57b4u;
    // NOP
    // 0x3a57b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a57b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a57bc: 0x0  nop
    ctx->pc = 0x3a57bcu;
    // NOP
    ctx->pc = 0x3a57c0u;
}
