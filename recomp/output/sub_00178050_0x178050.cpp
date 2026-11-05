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

// Function: sub_00178050
// Address: 0x178050 - 0x178088
void sub_00178050_0x178050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178050_0x178050");
#endif

    switch (ctx->pc) {
        case 0x178064u: goto label_178064;
        default: break;
    }

    ctx->pc = 0x178050u;

    // 0x178050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178054: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178058: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x178058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17805c: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x17805Cu;
    SET_GPR_U32(ctx, 31, 0x178064u);
    ctx->pc = 0x178060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17805Cu;
    // 0x178060: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x17805Cu, 0x178064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178064u;
label_178064:
    // 0x178064: 0xa2000159  sb          $zero, 0x159($s0)
    ctx->pc = 0x178064u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 345), (uint8_t)GPR_U32(ctx, 0));
    // 0x178068: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x178068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x17806c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17806cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178074: 0x3e00008  jr          $ra
    ctx->pc = 0x178074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178074u;
        // 0x178078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17807Cu;
    // 0x17807c: 0x0  nop
    ctx->pc = 0x17807cu;
    // NOP
    // 0x178080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x178080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x178084: 0x0  nop
    ctx->pc = 0x178084u;
    // NOP
    ctx->pc = 0x178088u;
}
