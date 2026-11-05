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

// Function: sub_0016BAD8
// Address: 0x16bad8 - 0x16bb88
void sub_0016BAD8_0x16bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BAD8_0x16bad8");
#endif

    switch (ctx->pc) {
        case 0x16bafcu: goto label_16bafc;
        case 0x16bb28u: goto label_16bb28;
        default: break;
    }

    ctx->pc = 0x16bad8u;

    // 0x16bad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16badc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16badcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16bae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bae8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16bae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16baec: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x16BAECu;
    {
        const bool branch_taken_0x16baec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BAECu;
        // 0x16baf0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16baec) {
            ctx->pc = 0x16BB70u;
            goto label_16bb70;
        }
    }
    ctx->pc = 0x16BAF4u;
    // 0x16baf4: 0xc05af0a  jal         func_16BC28
    ctx->pc = 0x16BAF4u;
    SET_GPR_U32(ctx, 31, 0x16BAFCu);
    ctx->pc = 0x16BC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC28u, 0x16BAF4u, 0x16BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BAFCu;
label_16bafc:
    // 0x16bafc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x16bafcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb00: 0x92020194  lbu         $v0, 0x194($s0)
    ctx->pc = 0x16bb00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x16bb04: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x16bb04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x16bb08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x16BB08u;
    {
        const bool branch_taken_0x16bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB08u;
        // 0x16bb0c: 0x260a0154  addiu       $t2, $s0, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb08) {
            ctx->pc = 0x16BB58u;
            goto label_16bb58;
        }
    }
    ctx->pc = 0x16BB10u;
    // 0x16bb10: 0x92060194  lbu         $a2, 0x194($s0)
    ctx->pc = 0x16bb10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x16bb14: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x16bb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16bb18: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16BB18u;
    {
        const bool branch_taken_0x16bb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB18u;
        // 0x16bb1c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb18) {
            ctx->pc = 0x16BB58u;
            goto label_16bb58;
        }
    }
    ctx->pc = 0x16BB20u;
    // 0x16bb20: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x16bb20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bb24: 0x0  nop
    ctx->pc = 0x16bb24u;
    // NOP
label_16bb28:
    // 0x16bb28: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x16bb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x16bb2c: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x16bb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16bb30: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x16bb30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16bb34: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16bb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16bb38: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x16bb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x16bb3c: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x16bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x16bb40: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x16bb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16bb44: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x16bb44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16bb48: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16bb4c: 0x126202b  sltu        $a0, $t1, $a2
    ctx->pc = 0x16bb4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x16bb50: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16BB50u;
    {
        const bool branch_taken_0x16bb50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB50u;
        // 0x16bb54: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bb50) {
            ctx->pc = 0x16BB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16bb28;
        }
    }
    ctx->pc = 0x16BB58u;
label_16bb58:
    // 0x16bb58: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x16bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x16bb5c: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x16bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x16bb60: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x16bb60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x16bb64: 0x92030194  lbu         $v1, 0x194($s0)
    ctx->pc = 0x16bb64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x16bb68: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16bb6c: 0xa2030194  sb          $v1, 0x194($s0)
    ctx->pc = 0x16bb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 3));
label_16bb70:
    // 0x16bb70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bb70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bb74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bb74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bb78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x16BB7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BB7Cu;
        // 0x16bb80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BB7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BB84u;
    // 0x16bb84: 0x0  nop
    ctx->pc = 0x16bb84u;
    // NOP
    ctx->pc = 0x16bb88u;
}
