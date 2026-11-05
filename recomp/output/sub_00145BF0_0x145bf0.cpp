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

// Function: sub_00145BF0
// Address: 0x145bf0 - 0x145c30
void sub_00145BF0_0x145bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145BF0_0x145bf0");
#endif

    switch (ctx->pc) {
        case 0x145c08u: goto label_145c08;
        case 0x145c1cu: goto label_145c1c;
        default: break;
    }

    ctx->pc = 0x145bf0u;

    // 0x145bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145bf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c00: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x145C00u;
    SET_GPR_U32(ctx, 31, 0x145C08u);
    ctx->pc = 0x145C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C00u;
    // 0x145c04: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x145C00u, 0x145C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C08u;
label_145c08:
    // 0x145c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145c0c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x145C0Cu;
    {
        const bool branch_taken_0x145c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C0Cu;
        // 0x145c10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c0c) {
            ctx->pc = 0x145C20u;
            goto label_145c20;
        }
    }
    ctx->pc = 0x145C14u;
    // 0x145c14: 0xc051754  jal         func_145D50
    ctx->pc = 0x145C14u;
    SET_GPR_U32(ctx, 31, 0x145C1Cu);
    ctx->pc = 0x145C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C14u;
    // 0x145c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145D50u, 0x145C14u, 0x145C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C1Cu;
label_145c1c:
    // 0x145c1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145c20:
    // 0x145c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145c24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145c28: 0x3e00008  jr          $ra
    ctx->pc = 0x145C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C28u;
        // 0x145c2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145C30u;
}
