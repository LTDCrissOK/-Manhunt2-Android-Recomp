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

// Function: sub_0013BDC0
// Address: 0x13bdc0 - 0x13be50
void sub_0013BDC0_0x13bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BDC0_0x13bdc0");
#endif

    switch (ctx->pc) {
        case 0x13bdd4u: goto label_13bdd4;
        case 0x13bdf0u: goto label_13bdf0;
        case 0x13be20u: goto label_13be20;
        case 0x13be28u: goto label_13be28;
        case 0x13be38u: goto label_13be38;
        default: break;
    }

    ctx->pc = 0x13bdc0u;

    // 0x13bdc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13bdc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13bdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13bdc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13bdcc: 0xc04f70e  jal         func_13DC38
    ctx->pc = 0x13BDCCu;
    SET_GPR_U32(ctx, 31, 0x13BDD4u);
    ctx->pc = 0x13BDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BDCCu;
    // 0x13bdd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC38u, 0x13BDCCu, 0x13BDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BDD4u;
label_13bdd4:
    // 0x13bdd4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x13bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x13bdd8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13bdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13bddc: 0x24420698  addiu       $v0, $v0, 0x698
    ctx->pc = 0x13bddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1688));
    // 0x13bde0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x13bde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x13bde4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x13bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x13bde8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x13bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13bdec: 0x0  nop
    ctx->pc = 0x13bdecu;
    // NOP
label_13bdf0:
    // 0x13bdf0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x13bdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x13bdf4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x13bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13bdf8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x13bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x13bdfc: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x13bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x13be00: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13BE00u;
    {
        const bool branch_taken_0x13be00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x13BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE00u;
        // 0x13be04: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13be00) {
            ctx->pc = 0x13BDF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13bdf0;
        }
    }
    ctx->pc = 0x13BE08u;
    // 0x13be08: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x13be08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x13be0c: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x13be0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x13be10: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x13be10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x13be14: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x13be14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x13be18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13BE18u;
    SET_GPR_U32(ctx, 31, 0x13BE20u);
    ctx->pc = 0x13BE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE18u;
    // 0x13be1c: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13BE18u, 0x13BE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE20u;
label_13be20:
    // 0x13be20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13BE20u;
    SET_GPR_U32(ctx, 31, 0x13BE28u);
    ctx->pc = 0x13BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE20u;
    // 0x13be24: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13BE20u, 0x13BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE28u;
label_13be28:
    // 0x13be28: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x13be28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
    // 0x13be2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be30: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x13BE30u;
    SET_GPR_U32(ctx, 31, 0x13BE38u);
    ctx->pc = 0x13BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BE30u;
    // 0x13be34: 0xae000210  sw          $zero, 0x210($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x13BE30u, 0x13BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BE38u;
label_13be38:
    // 0x13be38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13be38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13be3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13be3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13be40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13be40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13be44: 0x3e00008  jr          $ra
    ctx->pc = 0x13BE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BE44u;
        // 0x13be48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BE4Cu;
    // 0x13be4c: 0x0  nop
    ctx->pc = 0x13be4cu;
    // NOP
    ctx->pc = 0x13be50u;
}
