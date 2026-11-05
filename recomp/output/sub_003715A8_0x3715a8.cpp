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

// Function: sub_003715A8
// Address: 0x3715a8 - 0x3715d0
void sub_003715A8_0x3715a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003715A8_0x3715a8");
#endif

    switch (ctx->pc) {
        case 0x3715bcu: goto label_3715bc;
        default: break;
    }

    ctx->pc = 0x3715a8u;

    // 0x3715a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3715a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3715ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3715acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3715b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3715b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3715b4: 0xc0dc556  jal         func_371558
    ctx->pc = 0x3715B4u;
    SET_GPR_U32(ctx, 31, 0x3715BCu);
    ctx->pc = 0x3715B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3715B4u;
    // 0x3715b8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x371558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371558u, 0x3715B4u, 0x3715BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3715BCu;
label_3715bc:
    // 0x3715bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3715bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3715c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3715C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3715C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3715C0u;
        // 0x3715c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3715C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3715C8u;
    // 0x3715c8: 0x0  nop
    ctx->pc = 0x3715c8u;
    // NOP
    // 0x3715cc: 0x0  nop
    ctx->pc = 0x3715ccu;
    // NOP
    ctx->pc = 0x3715d0u;
}
