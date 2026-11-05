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

// Function: sub_003EECB0
// Address: 0x3eecb0 - 0x3eed80
void sub_003EECB0_0x3eecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EECB0_0x3eecb0");
#endif

    switch (ctx->pc) {
        case 0x3eed48u: goto label_3eed48;
        case 0x3eed54u: goto label_3eed54;
        case 0x3eed68u: goto label_3eed68;
        default: break;
    }

    ctx->pc = 0x3eecb0u;

    // 0x3eecb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3eecb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eecb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eecb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eecbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3eecbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eecc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3eecc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3eecc4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3eecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3eecc8: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EECC8u;
    {
        const bool branch_taken_0x3eecc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eecc8) {
            ctx->pc = 0x3EECCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EECC8u;
            // 0x3eeccc: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EECDCu;
            goto label_3eecdc;
        }
    }
    ctx->pc = 0x3EECD0u;
    // 0x3eecd0: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x3eecd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x3eecd4: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3eecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3eecd8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3eecdc:
    // 0x3eecdc: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EECDCu;
    {
        const bool branch_taken_0x3eecdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eecdc) {
            ctx->pc = 0x3EECE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EECDCu;
            // 0x3eece0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EECF0u;
            goto label_3eecf0;
        }
    }
    ctx->pc = 0x3EECE4u;
    // 0x3eece4: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x3eece4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x3eece8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3eece8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3eecec: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3eececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3eecf0:
    // 0x3eecf0: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EECF0u;
    {
        const bool branch_taken_0x3eecf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eecf0) {
            ctx->pc = 0x3EECF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EECF0u;
            // 0x3eecf4: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED04u;
            goto label_3eed04;
        }
    }
    ctx->pc = 0x3EECF8u;
    // 0x3eecf8: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x3eecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3eecfc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3eecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3eed00: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x3eed00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3eed04:
    // 0x3eed04: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EED04u;
    {
        const bool branch_taken_0x3eed04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eed04) {
            ctx->pc = 0x3EED08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EED04u;
            // 0x3eed08: 0x8e2300a4  lw          $v1, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED18u;
            goto label_3eed18;
        }
    }
    ctx->pc = 0x3EED0Cu;
    // 0x3eed0c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x3eed0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x3eed10: 0xac6200a4  sw          $v0, 0xA4($v1)
    ctx->pc = 0x3eed10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 164), GPR_U32(ctx, 2));
    // 0x3eed14: 0x8e2300a4  lw          $v1, 0xA4($s1)
    ctx->pc = 0x3eed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_3eed18:
    // 0x3eed18: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EED18u;
    {
        const bool branch_taken_0x3eed18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eed18) {
            ctx->pc = 0x3EED1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EED18u;
            // 0x3eed1c: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EED2Cu;
            goto label_3eed2c;
        }
    }
    ctx->pc = 0x3EED20u;
    // 0x3eed20: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x3eed20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x3eed24: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x3eed24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
    // 0x3eed28: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3eed28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3eed2c:
    // 0x3eed2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3eed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3eed30: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3EED30u;
    {
        const bool branch_taken_0x3eed30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED30u;
        // 0x3eed34: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed30) {
            ctx->pc = 0x3EED68u;
            goto label_3eed68;
        }
    }
    ctx->pc = 0x3EED38u;
    // 0x3eed38: 0x263000a0  addiu       $s0, $s1, 0xA0
    ctx->pc = 0x3eed38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x3eed3c: 0x12300008  beq         $s1, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3EED3Cu;
    {
        const bool branch_taken_0x3eed3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3EED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED3Cu;
        // 0x3eed40: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed3c) {
            ctx->pc = 0x3EED60u;
            goto label_3eed60;
        }
    }
    ctx->pc = 0x3EED44u;
    // 0x3eed44: 0x0  nop
    ctx->pc = 0x3eed44u;
    // NOP
label_3eed48:
    // 0x3eed48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eed48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eed4c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3EED4Cu;
    SET_GPR_U32(ctx, 31, 0x3EED54u);
    ctx->pc = 0x3EED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED4Cu;
    // 0x3eed50: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3EED4Cu, 0x3EED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED54u;
label_3eed54:
    // 0x3eed54: 0x0  nop
    ctx->pc = 0x3eed54u;
    // NOP
    // 0x3eed58: 0x1630fffb  bne         $s1, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EED58u;
    {
        const bool branch_taken_0x3eed58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EED5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED58u;
        // 0x3eed5c: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eed58) {
            ctx->pc = 0x3EED48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eed48;
        }
    }
    ctx->pc = 0x3EED60u;
label_3eed60:
    // 0x3eed60: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EED60u;
    SET_GPR_U32(ctx, 31, 0x3EED68u);
    ctx->pc = 0x3EED64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EED60u;
    // 0x3eed64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EED60u, 0x3EED68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EED68u;
label_3eed68:
    // 0x3eed68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eed68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eed6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eed6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eed70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3eed70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eed74: 0x3e00008  jr          $ra
    ctx->pc = 0x3EED74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EED74u;
        // 0x3eed78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EED74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EED7Cu;
    // 0x3eed7c: 0x0  nop
    ctx->pc = 0x3eed7cu;
    // NOP
    ctx->pc = 0x3eed80u;
}
