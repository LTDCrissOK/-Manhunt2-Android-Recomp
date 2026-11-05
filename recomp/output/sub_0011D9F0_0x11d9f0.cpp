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

// Function: sub_0011D9F0
// Address: 0x11d9f0 - 0x11da50
void sub_0011D9F0_0x11d9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D9F0_0x11d9f0");
#endif

    switch (ctx->pc) {
        case 0x11da10u: goto label_11da10;
        case 0x11da24u: goto label_11da24;
        default: break;
    }

    ctx->pc = 0x11d9f0u;

    // 0x11d9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d9f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d9f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11d9f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d9fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11d9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11da00: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11da00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11da04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11da04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da08: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11DA08u;
    SET_GPR_U32(ctx, 31, 0x11DA10u);
    ctx->pc = 0x11DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA08u;
    // 0x11da0c: 0x24a5c288  addiu       $a1, $a1, -0x3D78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11DA08u, 0x11DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA10u;
label_11da10:
    // 0x11da10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DA10u;
    {
        const bool branch_taken_0x11da10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA10u;
        // 0x11da14: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da10) {
            ctx->pc = 0x11DA38u;
            goto label_11da38;
        }
    }
    ctx->pc = 0x11DA18u;
    // 0x11da18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11da18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11da1c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11DA1Cu;
    SET_GPR_U32(ctx, 31, 0x11DA24u);
    ctx->pc = 0x11DA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DA1Cu;
    // 0x11da20: 0x24a5c298  addiu       $a1, $a1, -0x3D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11DA1Cu, 0x11DA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DA24u;
label_11da24:
    // 0x11da24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11da24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11da28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11da2c: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11da2cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11da30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11DA30u;
    {
        const bool branch_taken_0x11da30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA30u;
        // 0x11da34: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11da30) {
            ctx->pc = 0x11DA3Cu;
            goto label_11da3c;
        }
    }
    ctx->pc = 0x11DA38u;
label_11da38:
    // 0x11da38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11da38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11da3c:
    // 0x11da3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11da3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11da40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11da40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11da44: 0x3e00008  jr          $ra
    ctx->pc = 0x11DA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DA44u;
        // 0x11da48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DA4Cu;
    // 0x11da4c: 0x0  nop
    ctx->pc = 0x11da4cu;
    // NOP
    ctx->pc = 0x11da50u;
}
