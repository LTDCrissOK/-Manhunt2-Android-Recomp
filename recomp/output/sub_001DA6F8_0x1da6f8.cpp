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

// Function: sub_001DA6F8
// Address: 0x1da6f8 - 0x1da750
void sub_001DA6F8_0x1da6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA6F8_0x1da6f8");
#endif

    switch (ctx->pc) {
        case 0x1da718u: goto label_1da718;
        case 0x1da724u: goto label_1da724;
        case 0x1da734u: goto label_1da734;
        default: break;
    }

    ctx->pc = 0x1da6f8u;

    // 0x1da6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da6fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da704: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da70c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1da70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da710: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1DA710u;
    SET_GPR_U32(ctx, 31, 0x1DA718u);
    ctx->pc = 0x1DA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA710u;
    // 0x1da714: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1DA710u, 0x1DA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA718u;
label_1da718:
    // 0x1da718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da71c: 0xc0769a6  jal         func_1DA698
    ctx->pc = 0x1DA71Cu;
    SET_GPR_U32(ctx, 31, 0x1DA724u);
    ctx->pc = 0x1DA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA71Cu;
    // 0x1da720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA698u, 0x1DA71Cu, 0x1DA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA724u;
label_1da724:
    // 0x1da724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1da724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da728: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1da728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1da72c: 0xc076574  jal         func_1D95D0
    ctx->pc = 0x1DA72Cu;
    SET_GPR_U32(ctx, 31, 0x1DA734u);
    ctx->pc = 0x1DA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA72Cu;
    // 0x1da730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x1DA72Cu, 0x1DA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA734u;
label_1da734:
    // 0x1da734: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1da734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da740: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da744: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA744u;
        // 0x1da748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA74Cu;
    // 0x1da74c: 0x0  nop
    ctx->pc = 0x1da74cu;
    // NOP
    ctx->pc = 0x1da750u;
}
