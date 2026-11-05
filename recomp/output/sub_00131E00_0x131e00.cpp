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

// Function: sub_00131E00
// Address: 0x131e00 - 0x131e50
void sub_00131E00_0x131e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131E00_0x131e00");
#endif

    switch (ctx->pc) {
        case 0x131e20u: goto label_131e20;
        case 0x131e28u: goto label_131e28;
        default: break;
    }

    ctx->pc = 0x131e00u;

    // 0x131e00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131e04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131e08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131e0c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x131e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131e14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131e18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131e1c: 0x0  nop
    ctx->pc = 0x131e1cu;
    // NOP
label_131e20:
    // 0x131e20: 0xc04c794  jal         func_131E50
    ctx->pc = 0x131E20u;
    SET_GPR_U32(ctx, 31, 0x131E28u);
    ctx->pc = 0x131E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131E20u;
    // 0x131e24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E50u, 0x131E20u, 0x131E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E28u;
label_131e28:
    // 0x131e28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x131e28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131e2c: 0x2e020020  sltiu       $v0, $s0, 0x20
    ctx->pc = 0x131e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x131e30: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131E30u;
    {
        const bool branch_taken_0x131e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x131E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E30u;
        // 0x131e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131e30) {
            ctx->pc = 0x131E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131e20;
        }
    }
    ctx->pc = 0x131E38u;
    // 0x131e38: 0xae200218  sw          $zero, 0x218($s1)
    ctx->pc = 0x131e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
    // 0x131e3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131e40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131e44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131e48: 0x3e00008  jr          $ra
    ctx->pc = 0x131E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131E48u;
        // 0x131e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131E50u;
}
