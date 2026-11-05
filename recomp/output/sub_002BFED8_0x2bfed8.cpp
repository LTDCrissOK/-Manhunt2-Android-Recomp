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

// Function: sub_002BFED8
// Address: 0x2bfed8 - 0x2bff38
void sub_002BFED8_0x2bfed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFED8_0x2bfed8");
#endif

    switch (ctx->pc) {
        case 0x2bfeecu: goto label_2bfeec;
        case 0x2bff00u: goto label_2bff00;
        case 0x2bff20u: goto label_2bff20;
        default: break;
    }

    ctx->pc = 0x2bfed8u;

    // 0x2bfed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfedc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfee4: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFEE4u;
    SET_GPR_U32(ctx, 31, 0x2BFEECu);
    ctx->pc = 0x2BFEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFEE4u;
    // 0x2bfee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFEE4u, 0x2BFEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEECu;
label_2bfeec:
    // 0x2bfeec: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfef0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfef4: 0x246339a8  addiu       $v1, $v1, 0x39A8
    ctx->pc = 0x2bfef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14760));
    // 0x2bfef8: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BFEF8u;
    SET_GPR_U32(ctx, 31, 0x2BFF00u);
    ctx->pc = 0x2BFEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFEF8u;
    // 0x2bfefc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BFEF8u, 0x2BFF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF00u;
label_2bff00:
    // 0x2bff00: 0x24034080  addiu       $v1, $zero, 0x4080
    ctx->pc = 0x2bff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
    // 0x2bff04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bff08: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bff08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bff0c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bff0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bff10: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bff10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bff14: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bff14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bff18: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BFF18u;
    SET_GPR_U32(ctx, 31, 0x2BFF20u);
    ctx->pc = 0x2BFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF18u;
    // 0x2bff1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BFF18u, 0x2BFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF20u;
label_2bff20:
    // 0x2bff20: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bff20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bff24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bff24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bff2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bff2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bff30: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF30u;
        // 0x2bff34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFF38u;
}
