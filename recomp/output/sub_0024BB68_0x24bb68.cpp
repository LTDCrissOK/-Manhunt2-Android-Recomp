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

// Function: sub_0024BB68
// Address: 0x24bb68 - 0x24bc20
void sub_0024BB68_0x24bb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BB68_0x24bb68");
#endif

    switch (ctx->pc) {
        case 0x24bb90u: goto label_24bb90;
        case 0x24bbb8u: goto label_24bbb8;
        case 0x24bbecu: goto label_24bbec;
        case 0x24bc00u: goto label_24bc00;
        case 0x24bc0cu: goto label_24bc0c;
        default: break;
    }

    ctx->pc = 0x24bb68u;

    // 0x24bb68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bb6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bb70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24bb74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24bb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb78: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x24bb78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24bb7c: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x24bb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x24bb80: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24BB80u;
    {
        const bool branch_taken_0x24bb80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB80u;
        // 0x24bb84: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb80) {
            ctx->pc = 0x24BBACu;
            goto label_24bbac;
        }
    }
    ctx->pc = 0x24BB88u;
    // 0x24bb88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24bb88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb8c: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x24bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_24bb90:
    // 0x24bb90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24bb94: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BB94u;
    {
        const bool branch_taken_0x24bb94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB94u;
        // 0x24bb98: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb94) {
            ctx->pc = 0x24BBACu;
            goto label_24bbac;
        }
    }
    ctx->pc = 0x24BB9Cu;
    // 0x24bb9c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24bb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24bba0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24BBA0u;
    {
        const bool branch_taken_0x24bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBA0u;
        // 0x24bba4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bba0) {
            ctx->pc = 0x24BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24bb90;
        }
    }
    ctx->pc = 0x24BBA8u;
    // 0x24bba8: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x24bba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24bbac:
    // 0x24bbac: 0x24a5bb08  addiu       $a1, $a1, -0x44F8
    ctx->pc = 0x24bbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949640));
    // 0x24bbb0: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x24BBB0u;
    SET_GPR_U32(ctx, 31, 0x24BBB8u);
    ctx->pc = 0x24BBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBB0u;
    // 0x24bbb4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24BBB0u, 0x24BBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBB8u;
label_24bbb8:
    // 0x24bbb8: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x24bbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x24bbbc: 0x8c630088  lw          $v1, 0x88($v1)
    ctx->pc = 0x24bbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x24bbc0: 0x2462ffee  addiu       $v0, $v1, -0x12
    ctx->pc = 0x24bbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967278));
    // 0x24bbc4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24bbc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24bbc8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BBC8u;
    {
        const bool branch_taken_0x24bbc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24bbc8) {
            ctx->pc = 0x24BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BBC8u;
            // 0x24bbcc: 0x8e02010c  lw          $v0, 0x10C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BBF0u;
            goto label_24bbf0;
        }
    }
    ctx->pc = 0x24BBD0u;
    // 0x24bbd0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x24bbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x24bbd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24BBD4u;
    {
        const bool branch_taken_0x24bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBD4u;
        // 0x24bbd8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbd4) {
            ctx->pc = 0x24BBECu;
            goto label_24bbec;
        }
    }
    ctx->pc = 0x24BBDCu;
    // 0x24bbdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24BBDCu;
    {
        const bool branch_taken_0x24bbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BBDCu;
        // 0x24bbe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bbdc) {
            ctx->pc = 0x24BBECu;
            goto label_24bbec;
        }
    }
    ctx->pc = 0x24BBE4u;
    // 0x24bbe4: 0xc08dc16  jal         func_237058
    ctx->pc = 0x24BBE4u;
    SET_GPR_U32(ctx, 31, 0x24BBECu);
    ctx->pc = 0x24BBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBE4u;
    // 0x24bbe8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x24BBE4u, 0x24BBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BBECu;
label_24bbec:
    // 0x24bbec: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x24bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24bbf0:
    // 0x24bbf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24bbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bbf4: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x24bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x24bbf8: 0xc092d94  jal         func_24B650
    ctx->pc = 0x24BBF8u;
    SET_GPR_U32(ctx, 31, 0x24BC00u);
    ctx->pc = 0x24BBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BBF8u;
    // 0x24bbfc: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B650u, 0x24BBF8u, 0x24BC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC00u;
label_24bc00:
    // 0x24bc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24bc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bc04: 0xc08a15a  jal         func_228568
    ctx->pc = 0x24BC04u;
    SET_GPR_U32(ctx, 31, 0x24BC0Cu);
    ctx->pc = 0x24BC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BC04u;
    // 0x24bc08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x24BC04u, 0x24BC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BC0Cu;
label_24bc0c:
    // 0x24bc0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bc0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24bc10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24bc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x24BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BC14u;
        // 0x24bc18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BC1Cu;
    // 0x24bc1c: 0x0  nop
    ctx->pc = 0x24bc1cu;
    // NOP
    ctx->pc = 0x24bc20u;
}
