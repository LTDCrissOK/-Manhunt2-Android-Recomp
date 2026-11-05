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

// Function: sub_00168DF0
// Address: 0x168df0 - 0x168e38
void sub_00168DF0_0x168df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168DF0_0x168df0");
#endif

    switch (ctx->pc) {
        case 0x168e14u: goto label_168e14;
        case 0x168e20u: goto label_168e20;
        default: break;
    }

    ctx->pc = 0x168df0u;

    // 0x168df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x168df4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168dfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x168dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e00: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x168e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x168e04: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x168E04u;
    {
        const bool branch_taken_0x168e04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x168E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E04u;
        // 0x168e08: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168e04) {
            ctx->pc = 0x168E20u;
            goto label_168e20;
        }
    }
    ctx->pc = 0x168E0Cu;
    // 0x168e0c: 0xc05a33a  jal         func_168CE8
    ctx->pc = 0x168E0Cu;
    SET_GPR_U32(ctx, 31, 0x168E14u);
    ctx->pc = 0x168E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E0Cu;
    // 0x168e10: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168CE8u, 0x168E0Cu, 0x168E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E14u;
label_168e14:
    // 0x168e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168e18: 0xc05a312  jal         func_168C48
    ctx->pc = 0x168E18u;
    SET_GPR_U32(ctx, 31, 0x168E20u);
    ctx->pc = 0x168E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168E18u;
    // 0x168e1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168C48u, 0x168E18u, 0x168E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168E20u;
label_168e20:
    // 0x168e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168e28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x168e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x168E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168E2Cu;
        // 0x168e30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168E34u;
    // 0x168e34: 0x0  nop
    ctx->pc = 0x168e34u;
    // NOP
    ctx->pc = 0x168e38u;
}
