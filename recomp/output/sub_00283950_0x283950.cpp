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

// Function: sub_00283950
// Address: 0x283950 - 0x283a40
void sub_00283950_0x283950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283950_0x283950");
#endif

    switch (ctx->pc) {
        case 0x283988u: goto label_283988;
        default: break;
    }

    ctx->pc = 0x283950u;

    // 0x283950: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x283950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x283954: 0x24060412  addiu       $a2, $zero, 0x412
    ctx->pc = 0x283954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x283958: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x283958u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x28395c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28395Cu;
    {
        const bool branch_taken_0x28395c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28395Cu;
        // 0x283960: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28395c) {
            ctx->pc = 0x283970u;
            goto label_283970;
        }
    }
    ctx->pc = 0x283964u;
    // 0x283964: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283968: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283968u;
    {
        const bool branch_taken_0x283968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283968u;
        // 0x28396c: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283968) {
            ctx->pc = 0x2839ACu;
            goto label_2839ac;
        }
    }
    ctx->pc = 0x283970u;
label_283970:
    // 0x283970: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x283974: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x283974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283978: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x28397c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283980: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x283984: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283984u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283988:
    // 0x283988: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283988u;
    {
        const bool branch_taken_0x283988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283988) {
            ctx->pc = 0x28398Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283988u;
            // 0x28398c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839ACu;
            goto label_2839ac;
        }
    }
    ctx->pc = 0x283990u;
    // 0x283990: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283990u;
    {
        const bool branch_taken_0x283990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x283994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283990u;
        // 0x283994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283990) {
            ctx->pc = 0x2839ACu;
            goto label_2839ac;
        }
    }
    ctx->pc = 0x283998u;
    // 0x283998: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28399c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28399cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2839a0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2839A0u;
    {
        const bool branch_taken_0x2839a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839a0) {
            ctx->pc = 0x2839A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839A0u;
            // 0x2839a4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283988;
        }
    }
    ctx->pc = 0x2839A8u;
    // 0x2839a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2839a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2839ac:
    // 0x2839ac: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2839ACu;
    {
        const bool branch_taken_0x2839ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2839ac) {
            ctx->pc = 0x2839B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839ACu;
            // 0x2839b0: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839E8u;
            goto label_2839e8;
        }
    }
    ctx->pc = 0x2839B4u;
    // 0x2839b4: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x2839b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x2839b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2839B8u;
    {
        const bool branch_taken_0x2839b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839B8u;
        // 0x2839bc: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839b8) {
            ctx->pc = 0x2839D4u;
            goto label_2839d4;
        }
    }
    ctx->pc = 0x2839C0u;
    // 0x2839c0: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2839c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2839c4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2839c8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2839c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2839cc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2839CCu;
    {
        const bool branch_taken_0x2839cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2839cc) {
            ctx->pc = 0x2839D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2839CCu;
            // 0x2839d0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2839DCu;
            goto label_2839dc;
        }
    }
    ctx->pc = 0x2839D4u;
label_2839d4:
    // 0x2839d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2839D4u;
    {
        const bool branch_taken_0x2839d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839D4u;
        // 0x2839d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839d4) {
            ctx->pc = 0x2839E0u;
            goto label_2839e0;
        }
    }
    ctx->pc = 0x2839DCu;
label_2839dc:
    // 0x2839dc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2839dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2839e0:
    // 0x2839e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2839E0u;
    {
        const bool branch_taken_0x2839e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2839E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839E0u;
        // 0x2839e4: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839e0) {
            ctx->pc = 0x283A2Cu;
            goto label_283a2c;
        }
    }
    ctx->pc = 0x2839E8u;
label_2839e8:
    // 0x2839e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2839e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2839ec: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2839ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2839f0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2839F0u;
    {
        const bool branch_taken_0x2839f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2839F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2839F0u;
        // 0x2839f4: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2839f0) {
            ctx->pc = 0x283A08u;
            goto label_283a08;
        }
    }
    ctx->pc = 0x2839F8u;
    // 0x2839f8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2839f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2839fc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2839fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x283a00: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283A00u;
    {
        const bool branch_taken_0x283a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283a00) {
            ctx->pc = 0x283A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283A00u;
            // 0x283a04: 0xac800044  sw          $zero, 0x44($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283A08u;
            goto label_283a08;
        }
    }
    ctx->pc = 0x283A08u;
label_283a08:
    // 0x283a08: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x283a0c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x283a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x283a10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283A10u;
    {
        const bool branch_taken_0x283a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A10u;
        // 0x283a14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a10) {
            ctx->pc = 0x283A24u;
            goto label_283a24;
        }
    }
    ctx->pc = 0x283A18u;
    // 0x283a18: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x283a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x283a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x283A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A1Cu;
        // 0x283a20: 0xac620044  sw          $v0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A24u;
label_283a24:
    // 0x283a24: 0x3e00008  jr          $ra
    ctx->pc = 0x283A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A24u;
        // 0x283a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A2Cu;
label_283a2c:
    // 0x283a2c: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x283a30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a34: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x283a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
    // 0x283a38: 0x3e00008  jr          $ra
    ctx->pc = 0x283A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A38u;
        // 0x283a3c: 0xac60005c  sw          $zero, 0x5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283A40u;
}
