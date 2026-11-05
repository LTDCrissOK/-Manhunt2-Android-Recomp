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

// Function: sub_002BFF78
// Address: 0x2bff78 - 0x2bffd8
void sub_002BFF78_0x2bff78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFF78_0x2bff78");
#endif

    switch (ctx->pc) {
        case 0x2bff8cu: goto label_2bff8c;
        case 0x2bffa0u: goto label_2bffa0;
        case 0x2bffc0u: goto label_2bffc0;
        default: break;
    }

    ctx->pc = 0x2bff78u;

    // 0x2bff78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bff78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bff7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bff7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bff80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bff84: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFF84u;
    SET_GPR_U32(ctx, 31, 0x2BFF8Cu);
    ctx->pc = 0x2BFF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF84u;
    // 0x2bff88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFF84u, 0x2BFF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF8Cu;
label_2bff8c:
    // 0x2bff8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bff90: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bff94: 0x24633988  addiu       $v1, $v1, 0x3988
    ctx->pc = 0x2bff94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14728));
    // 0x2bff98: 0xc0b0210  jal         func_2C0840
    ctx->pc = 0x2BFF98u;
    SET_GPR_U32(ctx, 31, 0x2BFFA0u);
    ctx->pc = 0x2BFF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF98u;
    // 0x2bff9c: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0840u, 0x2BFF98u, 0x2BFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFA0u;
label_2bffa0:
    // 0x2bffa0: 0x24034100  addiu       $v1, $zero, 0x4100
    ctx->pc = 0x2bffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16640));
    // 0x2bffa4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2bffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bffa8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bffac: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bffacu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bffb0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bffb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bffb4: 0x248450f0  addiu       $a0, $a0, 0x50F0
    ctx->pc = 0x2bffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20720));
    // 0x2bffb8: 0xc0f9f40  jal         func_3E7D00
    ctx->pc = 0x2BFFB8u;
    SET_GPR_U32(ctx, 31, 0x2BFFC0u);
    ctx->pc = 0x2BFFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFFB8u;
    // 0x2bffbc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7D00u, 0x2BFFB8u, 0x2BFFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFC0u;
label_2bffc0:
    // 0x2bffc0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bffc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bffc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bffc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bffcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bffccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bffd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFFD0u;
        // 0x2bffd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFFD8u;
}
