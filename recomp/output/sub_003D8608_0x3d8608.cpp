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

// Function: sub_003D8608
// Address: 0x3d8608 - 0x3d8658
void sub_003D8608_0x3d8608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8608_0x3d8608");
#endif

    switch (ctx->pc) {
        case 0x3d862cu: goto label_3d862c;
        case 0x3d8644u: goto label_3d8644;
        default: break;
    }

    ctx->pc = 0x3d8608u;

    // 0x3d8608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d8608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d860c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d860cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d8610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8614: 0x8c627218  lw          $v0, 0x7218($v1)
    ctx->pc = 0x3d8614u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6C7218u));
    // 0x3d8618: 0x24707218  addiu       $s0, $v1, 0x7218
    ctx->pc = 0x3d8618u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 29208));
    // 0x3d861c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D861Cu;
    {
        const bool branch_taken_0x3d861c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D861Cu;
        // 0x3d8620: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d861c) {
            ctx->pc = 0x3D8644u;
            goto label_3d8644;
        }
    }
    ctx->pc = 0x3D8624u;
    // 0x3d8624: 0xc0f5e2e  jal         func_3D78B8
    ctx->pc = 0x3D8624u;
    SET_GPR_U32(ctx, 31, 0x3D862Cu);
    ctx->pc = 0x3D78B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D78B8u, 0x3D8624u, 0x3D862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D862Cu;
label_3d862c:
    // 0x3d862c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d862cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d8630: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3d8630u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3d8634: 0x24a52868  addiu       $a1, $a1, 0x2868
    ctx->pc = 0x3d8634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10344));
    // 0x3d8638: 0x24c62d68  addiu       $a2, $a2, 0x2D68
    ctx->pc = 0x3d8638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11624));
    // 0x3d863c: 0xc0f5cb0  jal         func_3D72C0
    ctx->pc = 0x3D863Cu;
    SET_GPR_U32(ctx, 31, 0x3D8644u);
    ctx->pc = 0x3D8640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D863Cu;
    // 0x3d8640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D72C0u, 0x3D863Cu, 0x3D8644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8644u;
label_3d8644:
    // 0x3d8644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d8644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8648: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d8648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d864c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d864cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8650: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8650u;
        // 0x3d8654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8658u;
}
