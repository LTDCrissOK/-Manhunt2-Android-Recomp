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

// Function: sub_002820F8
// Address: 0x2820f8 - 0x282138
void sub_002820F8_0x2820f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002820F8_0x2820f8");
#endif

    switch (ctx->pc) {
        case 0x282120u: goto label_282120;
        default: break;
    }

    ctx->pc = 0x2820f8u;

    // 0x2820f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2820f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2820fc: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x2820fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x282100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282104: 0x24a52138  addiu       $a1, $a1, 0x2138
    ctx->pc = 0x282104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8504));
    // 0x282108: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x282108u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x28210c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x282110: 0x2610f620  addiu       $s0, $s0, -0x9E0
    ctx->pc = 0x282110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964768));
    // 0x282114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x282114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282118: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x282118u;
    SET_GPR_U32(ctx, 31, 0x282120u);
    ctx->pc = 0x28211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282118u;
    // 0x28211c: 0xae0000b8  sw          $zero, 0xB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x282118u, 0x282120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282120u;
label_282120:
    // 0x282120: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x282120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x282124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x282124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x282128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28212c: 0x3e00008  jr          $ra
    ctx->pc = 0x28212Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28212Cu;
        // 0x282130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28212Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282134u;
    // 0x282134: 0x0  nop
    ctx->pc = 0x282134u;
    // NOP
    ctx->pc = 0x282138u;
}
