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

// Function: sub_0010ADF0
// Address: 0x10adf0 - 0x10ae58
void sub_0010ADF0_0x10adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010ADF0_0x10adf0");
#endif

    switch (ctx->pc) {
        case 0x10ae04u: goto label_10ae04;
        case 0x10ae2cu: goto label_10ae2c;
        default: break;
    }

    ctx->pc = 0x10adf0u;

    // 0x10adf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10adf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10adf8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10adfc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10ADFCu;
    SET_GPR_U32(ctx, 31, 0x10AE04u);
    ctx->pc = 0x10AE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ADFCu;
    // 0x10ae00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10ADFCu, 0x10AE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE04u;
label_10ae04:
    // 0x10ae04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ae08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ae08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ae0c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10ae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10ae10: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x10ae10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10ae14: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x10ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x10ae18: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x10AE18u;
    {
        const bool branch_taken_0x10ae18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE18u;
        // 0x10ae1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ae18) {
            ctx->pc = 0x10AE44u;
            goto label_10ae44;
        }
    }
    ctx->pc = 0x10AE20u;
    // 0x10ae20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ae20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ae24: 0xc043a20  jal         func_10E880
    ctx->pc = 0x10AE24u;
    SET_GPR_U32(ctx, 31, 0x10AE2Cu);
    ctx->pc = 0x10AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE24u;
    // 0x10ae28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E880u, 0x10AE24u, 0x10AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE2Cu;
label_10ae2c:
    // 0x10ae2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x10ae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x10ae30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10ae30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae34: 0x8c85a9d4  lw          $a1, -0x562C($a0)
    ctx->pc = 0x10ae34u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x10ae38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ae3c: 0xae030264  sw          $v1, 0x264($s0)
    ctx->pc = 0x10ae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 3));
    // 0x10ae40: 0xae050260  sw          $a1, 0x260($s0)
    ctx->pc = 0x10ae40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 5));
label_10ae44:
    // 0x10ae44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ae48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ae4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE4Cu;
        // 0x10ae50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AE54u;
    // 0x10ae54: 0x0  nop
    ctx->pc = 0x10ae54u;
    // NOP
    ctx->pc = 0x10ae58u;
}
