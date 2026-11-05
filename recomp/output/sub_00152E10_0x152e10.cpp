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

// Function: sub_00152E10
// Address: 0x152e10 - 0x152e50
void sub_00152E10_0x152e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152E10_0x152e10");
#endif

    switch (ctx->pc) {
        case 0x152e28u: goto label_152e28;
        case 0x152e3cu: goto label_152e3c;
        default: break;
    }

    ctx->pc = 0x152e10u;

    // 0x152e10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x152e14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152e18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x152e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x152e1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152e1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152e20: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x152E20u;
    SET_GPR_U32(ctx, 31, 0x152E28u);
    ctx->pc = 0x152E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E20u;
    // 0x152e24: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x152E20u, 0x152E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E28u;
label_152e28:
    // 0x152e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x152e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152e2c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x152E2Cu;
    {
        const bool branch_taken_0x152e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x152E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E2Cu;
        // 0x152e30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152e2c) {
            ctx->pc = 0x152E40u;
            goto label_152e40;
        }
    }
    ctx->pc = 0x152E34u;
    // 0x152e34: 0xc054bdc  jal         func_152F70
    ctx->pc = 0x152E34u;
    SET_GPR_U32(ctx, 31, 0x152E3Cu);
    ctx->pc = 0x152E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152E34u;
    // 0x152e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F70u, 0x152E34u, 0x152E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152E3Cu;
label_152e3c:
    // 0x152e3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x152e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_152e40:
    // 0x152e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152e44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x152e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152e48: 0x3e00008  jr          $ra
    ctx->pc = 0x152E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152E48u;
        // 0x152e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152E50u;
}
