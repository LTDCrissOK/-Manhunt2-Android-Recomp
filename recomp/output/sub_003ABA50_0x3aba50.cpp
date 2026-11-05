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

// Function: sub_003ABA50
// Address: 0x3aba50 - 0x3abb28
void sub_003ABA50_0x3aba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABA50_0x3aba50");
#endif

    switch (ctx->pc) {
        case 0x3abab8u: goto label_3abab8;
        case 0x3abb00u: goto label_3abb00;
        default: break;
    }

    ctx->pc = 0x3aba50u;

    // 0x3aba50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aba54: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABA54u;
    {
        const bool branch_taken_0x3aba54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABA54u;
        // 0x3aba58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aba54) {
            ctx->pc = 0x3ABA78u;
            goto label_3aba78;
        }
    }
    ctx->pc = 0x3ABA5Cu;
    // 0x3aba5c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aba60: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aba60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aba64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aba64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aba68: 0x2484f128  addiu       $a0, $a0, -0xED8
    ctx->pc = 0x3aba68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963496));
    // 0x3aba6c: 0x24a5f098  addiu       $a1, $a1, -0xF68
    ctx->pc = 0x3aba6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    // 0x3aba70: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3ABA70u;
    ctx->pc = 0x3ABA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA70u;
    // 0x3aba74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABA78u;
label_3aba78:
    // 0x3aba78: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3aba78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3aba7c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ABA7Cu;
    {
        const bool branch_taken_0x3aba7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aba7c) {
            ctx->pc = 0x3ABA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABA7Cu;
            // 0x3aba80: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABAA0u;
            goto label_3abaa0;
        }
    }
    ctx->pc = 0x3ABA84u;
    // 0x3aba84: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3aba84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3aba88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3aba88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3aba8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3aba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aba90: 0x2484f138  addiu       $a0, $a0, -0xEC8
    ctx->pc = 0x3aba90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963512));
    // 0x3aba94: 0x24a5f0c8  addiu       $a1, $a1, -0xF38
    ctx->pc = 0x3aba94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    // 0x3aba98: 0x80ead68  j           func_3AB5A0
    ctx->pc = 0x3ABA98u;
    ctx->pc = 0x3ABA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABA98u;
    // 0x3aba9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    sub_003AB5A0_0x3ab5a0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ABAA0u;
label_3abaa0:
    // 0x3abaa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3abaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abaa4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x3abaa4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3abaa8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3abaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3abaac: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3ABAACu;
    {
        const bool branch_taken_0x3abaac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3ABAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAACu;
        // 0x3abab0: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abaac) {
            ctx->pc = 0x3ABAE0u;
            goto label_3abae0;
        }
    }
    ctx->pc = 0x3ABAB4u;
    // 0x3abab4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3abab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3abab8:
    // 0x3abab8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x3abab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x3ababc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3ababcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3abac0: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x3abac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3abac4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x3abac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x3abac8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3abac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3abacc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3abaccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3abad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3abad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3abad4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3abad4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3abad8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3ABAD8u;
    {
        const bool branch_taken_0x3abad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABAD8u;
        // 0x3abadc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abad8) {
            ctx->pc = 0x3ABAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abab8;
        }
    }
    ctx->pc = 0x3ABAE0u;
label_3abae0:
    // 0x3abae0: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x3abae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3abae4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3abae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3abae8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3abae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3abaec: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x3abaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x3abaf0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3abaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3abaf4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3abaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3abaf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3abaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x3abafc: 0x0  nop
    ctx->pc = 0x3abafcu;
    // NOP
label_3abb00:
    // 0x3abb00: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3abb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3abb04: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3abb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3abb08: 0x0  nop
    ctx->pc = 0x3abb08u;
    // NOP
    // 0x3abb0c: 0x0  nop
    ctx->pc = 0x3abb0cu;
    // NOP
    // 0x3abb10: 0x0  nop
    ctx->pc = 0x3abb10u;
    // NOP
    // 0x3abb14: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3ABB14u;
    {
        const bool branch_taken_0x3abb14 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x3ABB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB14u;
        // 0x3abb18: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abb14) {
            ctx->pc = 0x3ABB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3abb00;
        }
    }
    ctx->pc = 0x3ABB1Cu;
    // 0x3abb1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3abb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abb20: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABB20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB20u;
        // 0x3abb24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABB20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABB28u;
}
