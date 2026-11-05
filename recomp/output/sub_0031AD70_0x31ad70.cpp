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

// Function: sub_0031AD70
// Address: 0x31ad70 - 0x31ad90
void sub_0031AD70_0x31ad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AD70_0x31ad70");
#endif

    switch (ctx->pc) {
        case 0x31ad84u: goto label_31ad84;
        default: break;
    }

    ctx->pc = 0x31ad70u;

    // 0x31ad70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ad74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31ad74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ad78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ad7c: 0xc0c6adc  jal         func_31AB70
    ctx->pc = 0x31AD7Cu;
    SET_GPR_U32(ctx, 31, 0x31AD84u);
    ctx->pc = 0x31AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AD7Cu;
    // 0x31ad80: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB70u, 0x31AD7Cu, 0x31AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AD84u;
label_31ad84:
    // 0x31ad84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31ad84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ad88: 0x3e00008  jr          $ra
    ctx->pc = 0x31AD88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AD88u;
        // 0x31ad8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AD88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AD90u;
}
