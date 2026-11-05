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

// Function: sub_002BFAD0
// Address: 0x2bfad0 - 0x2bfb30
void sub_002BFAD0_0x2bfad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFAD0_0x2bfad0");
#endif

    switch (ctx->pc) {
        case 0x2bfae4u: goto label_2bfae4;
        case 0x2bfaf8u: goto label_2bfaf8;
        case 0x2bfb18u: goto label_2bfb18;
        default: break;
    }

    ctx->pc = 0x2bfad0u;

    // 0x2bfad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfad4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfad8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfadc: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFADCu;
    SET_GPR_U32(ctx, 31, 0x2BFAE4u);
    ctx->pc = 0x2BFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFADCu;
    // 0x2bfae0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFADCu, 0x2BFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAE4u;
label_2bfae4:
    // 0x2bfae4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfae8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfaec: 0x24633a48  addiu       $v1, $v1, 0x3A48
    ctx->pc = 0x2bfaecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14920));
    // 0x2bfaf0: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BFAF0u;
    SET_GPR_U32(ctx, 31, 0x2BFAF8u);
    ctx->pc = 0x2BFAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFAF0u;
    // 0x2bfaf4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BFAF0u, 0x2BFAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFAF8u;
label_2bfaf8:
    // 0x2bfaf8: 0x24034008  addiu       $v1, $zero, 0x4008
    ctx->pc = 0x2bfaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
    // 0x2bfafc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bfafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfb00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfb00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfb04: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfb04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfb08: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfb08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfb0c: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bfb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bfb10: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BFB10u;
    SET_GPR_U32(ctx, 31, 0x2BFB18u);
    ctx->pc = 0x2BFB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFB10u;
    // 0x2bfb14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BFB10u, 0x2BFB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFB18u;
label_2bfb18:
    // 0x2bfb18: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfb1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfb1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfb20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfb24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfb24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfb28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFB28u;
        // 0x2bfb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFB30u;
}
