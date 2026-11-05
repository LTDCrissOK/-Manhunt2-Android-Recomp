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

// Function: sub_002BEC90
// Address: 0x2bec90 - 0x2becf0
void sub_002BEC90_0x2bec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEC90_0x2bec90");
#endif

    switch (ctx->pc) {
        case 0x2beca4u: goto label_2beca4;
        case 0x2becb8u: goto label_2becb8;
        case 0x2becd8u: goto label_2becd8;
        default: break;
    }

    ctx->pc = 0x2bec90u;

    // 0x2bec90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bec94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bec98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bec9c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BEC9Cu;
    SET_GPR_U32(ctx, 31, 0x2BECA4u);
    ctx->pc = 0x2BECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEC9Cu;
    // 0x2beca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BEC9Cu, 0x2BECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECA4u;
label_2beca4:
    // 0x2beca4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2beca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2beca8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2beca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2becac: 0x24633be8  addiu       $v1, $v1, 0x3BE8
    ctx->pc = 0x2becacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15336));
    // 0x2becb0: 0xc0b0210  jal         func_2C0840
    ctx->pc = 0x2BECB0u;
    SET_GPR_U32(ctx, 31, 0x2BECB8u);
    ctx->pc = 0x2BECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECB0u;
    // 0x2becb4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0840u, 0x2BECB0u, 0x2BECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECB8u;
label_2becb8:
    // 0x2becb8: 0x24031040  addiu       $v1, $zero, 0x1040
    ctx->pc = 0x2becb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
    // 0x2becbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2becbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2becc0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2becc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2becc4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2becc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2becc8: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2becc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beccc: 0x248450f0  addiu       $a0, $a0, 0x50F0
    ctx->pc = 0x2becccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20720));
    // 0x2becd0: 0xc0f9f40  jal         func_3E7D00
    ctx->pc = 0x2BECD0u;
    SET_GPR_U32(ctx, 31, 0x2BECD8u);
    ctx->pc = 0x2BECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BECD0u;
    // 0x2becd4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7D00u, 0x2BECD0u, 0x2BECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BECD8u;
label_2becd8:
    // 0x2becd8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2becd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2becdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2becdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bece0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bece0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bece4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bece4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bece8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BECE8u;
        // 0x2becec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECF0u;
}
