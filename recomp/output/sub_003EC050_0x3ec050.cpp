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

// Function: sub_003EC050
// Address: 0x3ec050 - 0x3ec078
void sub_003EC050_0x3ec050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EC050_0x3ec050");
#endif

    switch (ctx->pc) {
        case 0x3ec06cu: goto label_3ec06c;
        default: break;
    }

    ctx->pc = 0x3ec050u;

    // 0x3ec050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ec050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ec054: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ec054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ec058: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ec058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ec05c: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x3ec05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3ec060: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3ec060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3ec064: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3EC064u;
    SET_GPR_U32(ctx, 31, 0x3EC06Cu);
    ctx->pc = 0x3EC068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EC064u;
    // 0x3ec068: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3EC064u, 0x3EC06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EC06Cu;
label_3ec06c:
    // 0x3ec06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ec06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ec070: 0x3e00008  jr          $ra
    ctx->pc = 0x3EC070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EC070u;
        // 0x3ec074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EC070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EC078u;
}
