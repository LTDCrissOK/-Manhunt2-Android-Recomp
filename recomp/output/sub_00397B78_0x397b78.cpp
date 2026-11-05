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

// Function: sub_00397B78
// Address: 0x397b78 - 0x397be8
void sub_00397B78_0x397b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397B78_0x397b78");
#endif

    ctx->pc = 0x397b78u;

    // 0x397b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x397b7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x397b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397b84: 0x80ea17e  j           func_3A85F8
    ctx->pc = 0x397B84u;
    ctx->pc = 0x397B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397B84u;
    // 0x397b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85F8u, 0x397B84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x397B8Cu;
    // 0x397b8c: 0x0  nop
    ctx->pc = 0x397b8cu;
    // NOP
    // 0x397b90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397b94: 0x0  nop
    ctx->pc = 0x397b94u;
    // NOP
    // 0x397b98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397b9c: 0x0  nop
    ctx->pc = 0x397b9cu;
    // NOP
    // 0x397ba0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397ba4: 0x0  nop
    ctx->pc = 0x397ba4u;
    // NOP
    // 0x397ba8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bac: 0x0  nop
    ctx->pc = 0x397bacu;
    // NOP
    // 0x397bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bb4: 0x0  nop
    ctx->pc = 0x397bb4u;
    // NOP
    // 0x397bb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bbc: 0x0  nop
    ctx->pc = 0x397bbcu;
    // NOP
    // 0x397bc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bc4: 0x0  nop
    ctx->pc = 0x397bc4u;
    // NOP
    // 0x397bc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bcc: 0x0  nop
    ctx->pc = 0x397bccu;
    // NOP
    // 0x397bd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bd4: 0x0  nop
    ctx->pc = 0x397bd4u;
    // NOP
    // 0x397bd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397bdc: 0x0  nop
    ctx->pc = 0x397bdcu;
    // NOP
    // 0x397be0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x397be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x397be4: 0x0  nop
    ctx->pc = 0x397be4u;
    // NOP
    ctx->pc = 0x397be8u;
}
