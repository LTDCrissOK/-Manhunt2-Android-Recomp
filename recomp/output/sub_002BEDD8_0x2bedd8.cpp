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

// Function: sub_002BEDD8
// Address: 0x2bedd8 - 0x2bee38
void sub_002BEDD8_0x2bedd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEDD8_0x2bedd8");
#endif

    switch (ctx->pc) {
        case 0x2bedecu: goto label_2bedec;
        case 0x2bee00u: goto label_2bee00;
        case 0x2bee20u: goto label_2bee20;
        default: break;
    }

    ctx->pc = 0x2bedd8u;

    // 0x2bedd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bedd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2beddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2beddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bede0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bede0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bede4: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BEDE4u;
    SET_GPR_U32(ctx, 31, 0x2BEDECu);
    ctx->pc = 0x2BEDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDE4u;
    // 0x2bede8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BEDE4u, 0x2BEDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEDECu;
label_2bedec:
    // 0x2bedec: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bedecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bedf0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bedf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bedf4: 0x24633ba8  addiu       $v1, $v1, 0x3BA8
    ctx->pc = 0x2bedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15272));
    // 0x2bedf8: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BEDF8u;
    SET_GPR_U32(ctx, 31, 0x2BEE00u);
    ctx->pc = 0x2BEDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEDF8u;
    // 0x2bedfc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BEDF8u, 0x2BEE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE00u;
label_2bee00:
    // 0x2bee00: 0x24032001  addiu       $v1, $zero, 0x2001
    ctx->pc = 0x2bee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x2bee04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bee08: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bee08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bee0c: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bee0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bee10: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bee10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bee14: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bee14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bee18: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BEE18u;
    SET_GPR_U32(ctx, 31, 0x2BEE20u);
    ctx->pc = 0x2BEE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEE18u;
    // 0x2bee1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BEE18u, 0x2BEE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEE20u;
label_2bee20:
    // 0x2bee20: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bee20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bee24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bee24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bee28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bee2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bee2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bee30: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEE30u;
        // 0x2bee34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEE38u;
}
