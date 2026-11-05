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

// Function: sub_00370E20
// Address: 0x370e20 - 0x370f10
void sub_00370E20_0x370e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370E20_0x370e20");
#endif

    switch (ctx->pc) {
        case 0x370e7cu: goto label_370e7c;
        case 0x370eacu: goto label_370eac;
        case 0x370eb4u: goto label_370eb4;
        case 0x370ec4u: goto label_370ec4;
        case 0x370ed0u: goto label_370ed0;
        case 0x370ee8u: goto label_370ee8;
        default: break;
    }

    ctx->pc = 0x370e20u;

    // 0x370e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370e24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370e2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x370e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370e34: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x370e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x370e38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x370E38u;
    {
        const bool branch_taken_0x370e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x370e38) {
            ctx->pc = 0x370E4Cu;
            goto label_370e4c;
        }
    }
    ctx->pc = 0x370E40u;
    // 0x370e40: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x370e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x370e44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x370e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x370e48: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x370e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_370e4c:
    // 0x370e4c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x370e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x370e50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x370e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370e54: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x370E54u;
    {
        const bool branch_taken_0x370e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x370E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E54u;
        // 0x370e58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e54) {
            ctx->pc = 0x370EFCu;
            goto label_370efc;
        }
    }
    ctx->pc = 0x370E5Cu;
    // 0x370e5c: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x370e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x370e60: 0x50430027  beql        $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x370E60u;
    {
        const bool branch_taken_0x370e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x370e60) {
            ctx->pc = 0x370E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370E60u;
            // 0x370e64: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370F00u;
            goto label_370f00;
        }
    }
    ctx->pc = 0x370E68u;
    // 0x370e68: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x370e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x370e6c: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x370E6Cu;
    {
        const bool branch_taken_0x370e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x370e6c) {
            ctx->pc = 0x370E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370E6Cu;
            // 0x370e70: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370F00u;
            goto label_370f00;
        }
    }
    ctx->pc = 0x370E74u;
    // 0x370e74: 0xc0dc2b8  jal         func_370AE0
    ctx->pc = 0x370E74u;
    SET_GPR_U32(ctx, 31, 0x370E7Cu);
    ctx->pc = 0x370AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AE0u, 0x370E74u, 0x370E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370E7Cu;
label_370e7c:
    // 0x370e7c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x370E7Cu;
    {
        const bool branch_taken_0x370e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E7Cu;
        // 0x370e80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e7c) {
            ctx->pc = 0x370EFCu;
            goto label_370efc;
        }
    }
    ctx->pc = 0x370E84u;
    // 0x370e84: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x370e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x370e88: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x370e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x370e8c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x370E8Cu;
    {
        const bool branch_taken_0x370e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x370E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370E8Cu;
        // 0x370e90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370e8c) {
            ctx->pc = 0x370EDCu;
            goto label_370edc;
        }
    }
    ctx->pc = 0x370E94u;
    // 0x370e94: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x370e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x370e98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x370e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370e9c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x370e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x370ea0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x370ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x370ea4: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x370EA4u;
    SET_GPR_U32(ctx, 31, 0x370EACu);
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x370EA4u, 0x370EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EACu;
label_370eac:
    // 0x370eac: 0xc0dc2b4  jal         func_370AD0
    ctx->pc = 0x370EACu;
    SET_GPR_U32(ctx, 31, 0x370EB4u);
    ctx->pc = 0x370EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EACu;
    // 0x370eb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AD0u, 0x370EACu, 0x370EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EB4u;
label_370eb4:
    // 0x370eb4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x370eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x370eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x370eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ebc: 0xc0dc2b4  jal         func_370AD0
    ctx->pc = 0x370EBCu;
    SET_GPR_U32(ctx, 31, 0x370EC4u);
    ctx->pc = 0x370EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EBCu;
    // 0x370ec0: 0x2484f900  addiu       $a0, $a0, -0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AD0u, 0x370EBCu, 0x370EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EC4u;
label_370ec4:
    // 0x370ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370ec8: 0xc0dcc82  jal         func_373208
    ctx->pc = 0x370EC8u;
    SET_GPR_U32(ctx, 31, 0x370ED0u);
    ctx->pc = 0x370ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370EC8u;
    // 0x370ecc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373208u, 0x370EC8u, 0x370ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370ED0u;
label_370ed0:
    // 0x370ed0: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x370ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x370ed4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x370ED4u;
    {
        const bool branch_taken_0x370ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x370ed4) {
            ctx->pc = 0x370EE0u;
            goto label_370ee0;
        }
    }
    ctx->pc = 0x370EDCu;
label_370edc:
    // 0x370edc: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x370edcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_370ee0:
    // 0x370ee0: 0xc0dcb10  jal         func_372C40
    ctx->pc = 0x370EE0u;
    SET_GPR_U32(ctx, 31, 0x370EE8u);
    ctx->pc = 0x372C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372C40u, 0x370EE0u, 0x370EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370EE8u;
label_370ee8:
    // 0x370ee8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x370ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x370eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x370eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x370ef0: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x370ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x370ef4: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x370ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x370ef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370ef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_370efc:
    // 0x370efc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_370f00:
    // 0x370f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x370f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370f04: 0x3e00008  jr          $ra
    ctx->pc = 0x370F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F04u;
        // 0x370f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F0Cu;
    // 0x370f0c: 0x0  nop
    ctx->pc = 0x370f0cu;
    // NOP
    ctx->pc = 0x370f10u;
}
