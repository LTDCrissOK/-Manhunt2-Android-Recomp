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

// Function: sub_00178DC8
// Address: 0x178dc8 - 0x178e20
void sub_00178DC8_0x178dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178DC8_0x178dc8");
#endif

    switch (ctx->pc) {
        case 0x178de4u: goto label_178de4;
        case 0x178df4u: goto label_178df4;
        case 0x178e08u: goto label_178e08;
        default: break;
    }

    ctx->pc = 0x178dc8u;

    // 0x178dc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x178dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x178dcc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x178dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x178dd0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x178dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x178dd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178dd8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x178dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x178ddc: 0xc05eca2  jal         func_17B288
    ctx->pc = 0x178DDCu;
    SET_GPR_U32(ctx, 31, 0x178DE4u);
    ctx->pc = 0x178DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DDCu;
    // 0x178de0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B288u, 0x178DDCu, 0x178DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DE4u;
label_178de4:
    // 0x178de4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178DE4u;
    {
        const bool branch_taken_0x178de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DE4u;
        // 0x178de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178de4) {
            ctx->pc = 0x178DFCu;
            goto label_178dfc;
        }
    }
    ctx->pc = 0x178DECu;
    // 0x178dec: 0xc05a60c  jal         func_169830
    ctx->pc = 0x178DECu;
    SET_GPR_U32(ctx, 31, 0x178DF4u);
    ctx->pc = 0x178DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DECu;
    // 0x178df0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169830u, 0x178DECu, 0x178DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DF4u;
label_178df4:
    // 0x178df4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x178DF4u;
    {
        const bool branch_taken_0x178df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DF4u;
        // 0x178df8: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178df4) {
            ctx->pc = 0x178E0Cu;
            goto label_178e0c;
        }
    }
    ctx->pc = 0x178DFCu;
label_178dfc:
    // 0x178dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x178dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178e00: 0xc05ec2e  jal         func_17B0B8
    ctx->pc = 0x178E00u;
    SET_GPR_U32(ctx, 31, 0x178E08u);
    ctx->pc = 0x178E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178E00u;
    // 0x178e04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B0B8u, 0x178E00u, 0x178E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E08u;
label_178e08:
    // 0x178e08: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x178e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_178e0c:
    // 0x178e0c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x178e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x178e10: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x178e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x178e14: 0x3e00008  jr          $ra
    ctx->pc = 0x178E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E14u;
        // 0x178e18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E1Cu;
    // 0x178e1c: 0x0  nop
    ctx->pc = 0x178e1cu;
    // NOP
    ctx->pc = 0x178e20u;
}
