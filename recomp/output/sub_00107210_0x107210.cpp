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

// Function: sub_00107210
// Address: 0x107210 - 0x107230
void sub_00107210_0x107210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107210_0x107210");
#endif

    switch (ctx->pc) {
        case 0x107224u: goto label_107224;
        default: break;
    }

    ctx->pc = 0x107210u;

    // 0x107210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x107214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10721c: 0xc041c6a  jal         func_1071A8
    ctx->pc = 0x10721Cu;
    SET_GPR_U32(ctx, 31, 0x107224u);
    ctx->pc = 0x107220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10721Cu;
    // 0x107220: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1071A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1071A8u, 0x10721Cu, 0x107224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107224u;
label_107224:
    // 0x107224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107228: 0x3e00008  jr          $ra
    ctx->pc = 0x107228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107228u;
        // 0x10722c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107230u;
}
