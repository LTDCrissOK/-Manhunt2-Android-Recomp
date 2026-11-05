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

// Function: sub_003D4818
// Address: 0x3d4818 - 0x3d4848
void sub_003D4818_0x3d4818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4818_0x3d4818");
#endif

    switch (ctx->pc) {
        case 0x3d4838u: goto label_3d4838;
        default: break;
    }

    ctx->pc = 0x3d4818u;

    // 0x3d4818: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d4818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d481c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d481cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3d4820: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d4824: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d4824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4828: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3d4828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3d482c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x3d482cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x3d4830: 0xc0f5192  jal         func_3D4648
    ctx->pc = 0x3D4830u;
    SET_GPR_U32(ctx, 31, 0x3D4838u);
    ctx->pc = 0x3D4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4830u;
    // 0x3d4834: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4648u, 0x3D4830u, 0x3D4838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4838u;
label_3d4838:
    // 0x3d4838: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d4838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d483c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D483Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D483Cu;
        // 0x3d4840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D483Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4844u;
    // 0x3d4844: 0x0  nop
    ctx->pc = 0x3d4844u;
    // NOP
    ctx->pc = 0x3d4848u;
}
