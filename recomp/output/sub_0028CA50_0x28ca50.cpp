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

// Function: sub_0028CA50
// Address: 0x28ca50 - 0x28cb48
void sub_0028CA50_0x28ca50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CA50_0x28ca50");
#endif

    switch (ctx->pc) {
        case 0x28ca88u: goto label_28ca88;
        case 0x28caa8u: goto label_28caa8;
        case 0x28cab4u: goto label_28cab4;
        default: break;
    }

    ctx->pc = 0x28ca50u;

    // 0x28ca50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28ca50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28ca54: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x28ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x28ca58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28ca5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28ca60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28ca60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ca68: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x28ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
    // 0x28ca6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28ca70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ca70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28ca78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28ca78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4A3504u));
    // 0x28ca7c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x28ca7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x28ca80: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28CA80u;
    {
        const bool branch_taken_0x28ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA80u;
        // 0x28ca84: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca80) {
            ctx->pc = 0x28CB0Cu;
            goto label_28cb0c;
        }
    }
    ctx->pc = 0x28CA88u;
label_28ca88:
    // 0x28ca88: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x28ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x28ca8c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28ca90: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28CA90u;
    {
        const bool branch_taken_0x28ca90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CA90u;
        // 0x28ca94: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca90) {
            ctx->pc = 0x28CAF8u;
            goto label_28caf8;
        }
    }
    ctx->pc = 0x28CA98u;
    // 0x28ca98: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x28ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x28ca9c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28caa0: 0xc0a34b4  jal         func_28D2D0
    ctx->pc = 0x28CAA0u;
    SET_GPR_U32(ctx, 31, 0x28CAA8u);
    ctx->pc = 0x28CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAA0u;
    // 0x28caa4: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D2D0u, 0x28CAA0u, 0x28CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAA8u;
label_28caa8:
    // 0x28caa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28caa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28caac: 0xc09c9b0  jal         func_2726C0
    ctx->pc = 0x28CAACu;
    SET_GPR_U32(ctx, 31, 0x28CAB4u);
    ctx->pc = 0x28CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28CAACu;
    // 0x28cab0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2726C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2726C0u, 0x28CAACu, 0x28CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CAB4u;
label_28cab4:
    // 0x28cab4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28CAB4u;
    {
        const bool branch_taken_0x28cab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAB4u;
        // 0x28cab8: 0x26633500  addiu       $v1, $s3, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cab4) {
            ctx->pc = 0x28CAF8u;
            goto label_28caf8;
        }
    }
    ctx->pc = 0x28CABCu;
    // 0x28cabc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28cac0: 0x28620020  slti        $v0, $v1, 0x20
    ctx->pc = 0x28cac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28cac4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28CAC4u;
    {
        const bool branch_taken_0x28cac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CAC4u;
        // 0x28cac8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cac4) {
            ctx->pc = 0x28CAF4u;
            goto label_28caf4;
        }
    }
    ctx->pc = 0x28CACCu;
    // 0x28cacc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x28caccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28cad0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28cad4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28cad8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28cadc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28cadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28cae0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28cae4: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x28cae4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x28cae8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28caec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28caf0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x28caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_28caf4:
    // 0x28caf4: 0x26633500  addiu       $v1, $s3, 0x3500
    ctx->pc = 0x28caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
label_28caf8:
    // 0x28caf8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x28cafc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CAFCu;
    {
        const bool branch_taken_0x28cafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cafc) {
            ctx->pc = 0x28CB00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CAFCu;
            // 0x28cb00: 0x26623500  addiu       $v0, $s3, 0x3500 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CB10u;
            goto label_28cb10;
        }
    }
    ctx->pc = 0x28CB04u;
    // 0x28cb04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x28cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28cb08: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x28cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_28cb0c:
    // 0x28cb0c: 0x26623500  addiu       $v0, $s3, 0x3500
    ctx->pc = 0x28cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13568));
label_28cb10:
    // 0x28cb10: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28cb14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CB14u;
    {
        const bool branch_taken_0x28cb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB14u;
        // 0x28cb18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb14) {
            ctx->pc = 0x28CB20u;
            goto label_28cb20;
        }
    }
    ctx->pc = 0x28CB1Cu;
    // 0x28cb1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x28cb1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28cb20:
    // 0x28cb20: 0x5600ffd9  bnel        $s0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x28CB20u;
    {
        const bool branch_taken_0x28cb20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cb20) {
            ctx->pc = 0x28CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28CB20u;
            // 0x28cb24: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28CA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ca88;
        }
    }
    ctx->pc = 0x28CB28u;
    // 0x28cb28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28cb28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28cb2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28cb2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28cb30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28cb30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cb34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28cb34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28cb38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28cb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x28CB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28CB3Cu;
        // 0x28cb40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28CB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28CB44u;
    // 0x28cb44: 0x0  nop
    ctx->pc = 0x28cb44u;
    // NOP
    ctx->pc = 0x28cb48u;
}
