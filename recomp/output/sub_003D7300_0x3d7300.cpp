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

// Function: sub_003D7300
// Address: 0x3d7300 - 0x3d7330
void sub_003D7300_0x3d7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7300_0x3d7300");
#endif

    switch (ctx->pc) {
        case 0x3d7314u: goto label_3d7314;
        default: break;
    }

    ctx->pc = 0x3d7300u;

    // 0x3d7300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d7304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d7304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d7308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d730c: 0xc0f5c96  jal         func_3D7258
    ctx->pc = 0x3D730Cu;
    SET_GPR_U32(ctx, 31, 0x3D7314u);
    ctx->pc = 0x3D7310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D730Cu;
    // 0x3d7310: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7258u, 0x3D730Cu, 0x3D7314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7314u;
label_3d7314:
    // 0x3d7314: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x3d7314u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x3d7318: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d731c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d731cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d7320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d7320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7324: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7324u;
        // 0x3d7328: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D732Cu;
    // 0x3d732c: 0x0  nop
    ctx->pc = 0x3d732cu;
    // NOP
    ctx->pc = 0x3d7330u;
}
