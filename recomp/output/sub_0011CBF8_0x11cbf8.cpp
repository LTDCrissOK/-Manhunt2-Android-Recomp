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

// Function: sub_0011CBF8
// Address: 0x11cbf8 - 0x11cc70
void sub_0011CBF8_0x11cbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CBF8_0x11cbf8");
#endif

    switch (ctx->pc) {
        case 0x11cc0cu: goto label_11cc0c;
        case 0x11cc1cu: goto label_11cc1c;
        case 0x11cc38u: goto label_11cc38;
        case 0x11cc4cu: goto label_11cc4c;
        default: break;
    }

    ctx->pc = 0x11cbf8u;

    // 0x11cbf8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11cbfc: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x11cbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x11cc00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cc00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc04: 0xc09e062  jal         func_278188
    ctx->pc = 0x11CC04u;
    SET_GPR_U32(ctx, 31, 0x11CC0Cu);
    ctx->pc = 0x11CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC04u;
    // 0x11cc08: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CC04u, 0x11CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC0Cu;
label_11cc0c:
    // 0x11cc0c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11cc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11cc10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc14: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CC14u;
    SET_GPR_U32(ctx, 31, 0x11CC1Cu);
    ctx->pc = 0x11CC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC14u;
    // 0x11cc18: 0x24a5bd80  addiu       $a1, $a1, -0x4280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CC14u, 0x11CC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC1Cu;
label_11cc1c:
    // 0x11cc1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CC1Cu;
    {
        const bool branch_taken_0x11cc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC1Cu;
        // 0x11cc20: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc1c) {
            ctx->pc = 0x11CC2Cu;
            goto label_11cc2c;
        }
    }
    ctx->pc = 0x11CC24u;
    // 0x11cc24: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11CC24u;
    {
        const bool branch_taken_0x11cc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC24u;
        // 0x11cc28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc24) {
            ctx->pc = 0x11CC64u;
            goto label_11cc64;
        }
    }
    ctx->pc = 0x11CC2Cu;
label_11cc2c:
    // 0x11cc2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc30: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CC30u;
    SET_GPR_U32(ctx, 31, 0x11CC38u);
    ctx->pc = 0x11CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC30u;
    // 0x11cc34: 0x24a5bd88  addiu       $a1, $a1, -0x4278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CC30u, 0x11CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC38u;
label_11cc38:
    // 0x11cc38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11CC38u;
    {
        const bool branch_taken_0x11cc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC38u;
        // 0x11cc3c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc38) {
            ctx->pc = 0x11CC60u;
            goto label_11cc60;
        }
    }
    ctx->pc = 0x11CC40u;
    // 0x11cc40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11cc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc44: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11CC44u;
    SET_GPR_U32(ctx, 31, 0x11CC4Cu);
    ctx->pc = 0x11CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC44u;
    // 0x11cc48: 0x24a5bd90  addiu       $a1, $a1, -0x4270 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11CC44u, 0x11CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC4Cu;
label_11cc4c:
    // 0x11cc4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x11cc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11cc50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11cc54: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11cc54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11cc58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11CC58u;
    {
        const bool branch_taken_0x11cc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC58u;
        // 0x11cc5c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc58) {
            ctx->pc = 0x11CC64u;
            goto label_11cc64;
        }
    }
    ctx->pc = 0x11CC60u;
label_11cc60:
    // 0x11cc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11cc64:
    // 0x11cc64: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x11cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11cc68: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC68u;
        // 0x11cc6c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC70u;
}
