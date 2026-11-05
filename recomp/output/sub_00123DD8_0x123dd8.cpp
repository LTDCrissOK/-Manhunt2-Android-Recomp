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

// Function: sub_00123DD8
// Address: 0x123dd8 - 0x123e38
void sub_00123DD8_0x123dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123DD8_0x123dd8");
#endif

    switch (ctx->pc) {
        case 0x123e00u: goto label_123e00;
        case 0x123e14u: goto label_123e14;
        default: break;
    }

    ctx->pc = 0x123dd8u;

    // 0x123dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123de4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123de8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123df4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123df4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123df8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123DF8u;
    SET_GPR_U32(ctx, 31, 0x123E00u);
    ctx->pc = 0x123DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DF8u;
    // 0x123dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123DF8u, 0x123E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E00u;
label_123e00:
    // 0x123e00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123E00u;
    {
        const bool branch_taken_0x123e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E00u;
        // 0x123e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e00) {
            ctx->pc = 0x123E1Cu;
            goto label_123e1c;
        }
    }
    ctx->pc = 0x123E08u;
    // 0x123e08: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123e0c: 0xc04303e  jal         func_10C0F8
    ctx->pc = 0x123E0Cu;
    SET_GPR_U32(ctx, 31, 0x123E14u);
    ctx->pc = 0x123E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E0Cu;
    // 0x123e10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C0F8u, 0x123E0Cu, 0x123E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E14u;
label_123e14:
    // 0x123e14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123E14u;
    {
        const bool branch_taken_0x123e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E14u;
        // 0x123e18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123e14) {
            ctx->pc = 0x123E24u;
            goto label_123e24;
        }
    }
    ctx->pc = 0x123E1Cu;
label_123e1c:
    // 0x123e1c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123e24:
    // 0x123e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123e2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123e30: 0x3e00008  jr          $ra
    ctx->pc = 0x123E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123E30u;
        // 0x123e34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123E38u;
}
