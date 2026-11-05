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

// Function: sub_00358DB8
// Address: 0x358db8 - 0x358e58
void sub_00358DB8_0x358db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358DB8_0x358db8");
#endif

    switch (ctx->pc) {
        case 0x358de4u: goto label_358de4;
        case 0x358e10u: goto label_358e10;
        case 0x358e18u: goto label_358e18;
        default: break;
    }

    ctx->pc = 0x358db8u;

    // 0x358db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358dbc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x358dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x358dc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x358dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x358dc4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x358dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x358dc8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x358dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x358dcc: 0x2610d3c0  addiu       $s0, $s0, -0x2C40
    ctx->pc = 0x358dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955968));
    // 0x358dd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x358dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x358dd4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x358dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358dd8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x358dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x358ddc: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x358DDCu;
    SET_GPR_U32(ctx, 31, 0x358DE4u);
    ctx->pc = 0x358DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358DDCu;
    // 0x358de0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x358DDCu, 0x358DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358DE4u;
label_358de4:
    // 0x358de4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x358DE4u;
    {
        const bool branch_taken_0x358de4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x358de4) {
            ctx->pc = 0x358DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358DE4u;
            // 0x358de8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358DECu;
            goto label_358dec;
        }
    }
    ctx->pc = 0x358DECu;
label_358dec:
    // 0x358dec: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x358decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x358df0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x358df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358df4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x358df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x358df8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358dfc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x358dfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358e00: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x358E00u;
    {
        const bool branch_taken_0x358e00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x358E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E00u;
        // 0x358e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e00) {
            ctx->pc = 0x358E30u;
            goto label_358e30;
        }
    }
    ctx->pc = 0x358E08u;
    // 0x358e08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x358e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x358e0c: 0x0  nop
    ctx->pc = 0x358e0cu;
    // NOP
label_358e10:
    // 0x358e10: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x358E10u;
    SET_GPR_U32(ctx, 31, 0x358E18u);
    ctx->pc = 0x358E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358E10u;
    // 0x358e14: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x358E10u, 0x358E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358E18u;
label_358e18:
    // 0x358e18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358E18u;
    {
        const bool branch_taken_0x358e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E18u;
        // 0x358e1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e18) {
            ctx->pc = 0x358E30u;
            goto label_358e30;
        }
    }
    ctx->pc = 0x358E20u;
    // 0x358e20: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x358e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x358e24: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x358E24u;
    {
        const bool branch_taken_0x358e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x358e24) {
            ctx->pc = 0x358E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358E24u;
            // 0x358e28: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358e10;
        }
    }
    ctx->pc = 0x358E2Cu;
    // 0x358e2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358e30:
    // 0x358e30: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x358E30u;
    {
        const bool branch_taken_0x358e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358e30) {
            ctx->pc = 0x358E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358E30u;
            // 0x358e34: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358E3Cu;
            goto label_358e3c;
        }
    }
    ctx->pc = 0x358E38u;
    // 0x358e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358e3c:
    // 0x358e3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358e40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x358e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358e44: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x358e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358e48: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x358e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x358E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E4Cu;
        // 0x358e50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358E54u;
    // 0x358e54: 0x0  nop
    ctx->pc = 0x358e54u;
    // NOP
    ctx->pc = 0x358e58u;
}
