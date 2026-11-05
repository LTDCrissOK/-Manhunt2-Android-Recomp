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

// Function: sub_00143C50
// Address: 0x143c50 - 0x143d28
void sub_00143C50_0x143c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C50_0x143c50");
#endif

    switch (ctx->pc) {
        case 0x143c90u: goto label_143c90;
        case 0x143cb0u: goto label_143cb0;
        case 0x143cd4u: goto label_143cd4;
        default: break;
    }

    ctx->pc = 0x143c50u;

    // 0x143c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143c58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143c64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x143c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x143c68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x143c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x143c6c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x143c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x143c70: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x143c70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x143c74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143C74u;
    {
        const bool branch_taken_0x143c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C74u;
        // 0x143c78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c74) {
            ctx->pc = 0x143C98u;
            goto label_143c98;
        }
    }
    ctx->pc = 0x143C7Cu;
    // 0x143c7c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x143c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x143c80: 0x8e050ab0  lw          $a1, 0xAB0($s0)
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x143c84: 0x92060b10  lbu         $a2, 0xB10($s0)
    ctx->pc = 0x143c84u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2832)));
    // 0x143c88: 0xc049434  jal         func_1250D0
    ctx->pc = 0x143C88u;
    SET_GPR_U32(ctx, 31, 0x143C90u);
    ctx->pc = 0x143C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C88u;
    // 0x143c8c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1250D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1250D0u, 0x143C88u, 0x143C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C90u;
label_143c90:
    // 0x143c90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x143c90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c94: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x143c94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_143c98:
    // 0x143c98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x143c98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c9c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x143C9Cu;
    {
        const bool branch_taken_0x143c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C9Cu;
        // 0x143ca0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c9c) {
            ctx->pc = 0x143D04u;
            goto label_143d04;
        }
    }
    ctx->pc = 0x143CA4u;
    // 0x143ca4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x143ca4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143ca8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143cac: 0x0  nop
    ctx->pc = 0x143cacu;
    // NOP
label_143cb0:
    // 0x143cb0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x143cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x143cb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143cb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143cbc: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x143CBCu;
    {
        const bool branch_taken_0x143cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CBCu;
        // 0x143cc0: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cbc) {
            ctx->pc = 0x143CE4u;
            goto label_143ce4;
        }
    }
    ctx->pc = 0x143CC4u;
    // 0x143cc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143cc8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x143cc8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143ccc: 0xc04e866  jal         func_13A198
    ctx->pc = 0x143CCCu;
    SET_GPR_U32(ctx, 31, 0x143CD4u);
    ctx->pc = 0x143CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143CCCu;
    // 0x143cd0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x143CCCu, 0x143CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CD4u;
label_143cd4:
    // 0x143cd4: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x143CD4u;
    {
        const bool branch_taken_0x143cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x143CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CD4u;
        // 0x143cd8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cd4) {
            ctx->pc = 0x143CE8u;
            goto label_143ce8;
        }
    }
    ctx->pc = 0x143CDCu;
    // 0x143cdc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x143ce0: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x143ce0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143ce4:
    // 0x143ce4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_143ce8:
    // 0x143ce8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x143ce8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x143cec: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x143cecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x143cf0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x143CF0u;
    {
        const bool branch_taken_0x143cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x143cf0) {
            ctx->pc = 0x143CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143CF0u;
            // 0x143cf4: 0xa2130b11  sb          $s3, 0xB11($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 2833), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143D08u;
            goto label_143d08;
        }
    }
    ctx->pc = 0x143CF8u;
    // 0x143cf8: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x143cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x143cfc: 0x5642ffec  bnel        $s2, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x143CFCu;
    {
        const bool branch_taken_0x143cfc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x143cfc) {
            ctx->pc = 0x143D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143CFCu;
            // 0x143d00: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143cb0;
        }
    }
    ctx->pc = 0x143D04u;
label_143d04:
    // 0x143d04: 0xa2130b11  sb          $s3, 0xB11($s0)
    ctx->pc = 0x143d04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2833), (uint8_t)GPR_U32(ctx, 19));
label_143d08:
    // 0x143d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143d10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143d14: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x143d14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143d18: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x143d18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x143d1c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x143d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143d20: 0x3e00008  jr          $ra
    ctx->pc = 0x143D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143D20u;
        // 0x143d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D28u;
}
