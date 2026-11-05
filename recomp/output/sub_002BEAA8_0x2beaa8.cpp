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

// Function: sub_002BEAA8
// Address: 0x2beaa8 - 0x2beb08
void sub_002BEAA8_0x2beaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BEAA8_0x2beaa8");
#endif

    switch (ctx->pc) {
        case 0x2beabcu: goto label_2beabc;
        case 0x2bead0u: goto label_2bead0;
        case 0x2beaf0u: goto label_2beaf0;
        default: break;
    }

    ctx->pc = 0x2beaa8u;

    // 0x2beaa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2beaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2beaac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2beaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2beab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2beab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2beab4: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BEAB4u;
    SET_GPR_U32(ctx, 31, 0x2BEABCu);
    ctx->pc = 0x2BEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAB4u;
    // 0x2beab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BEAB4u, 0x2BEABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEABCu;
label_2beabc:
    // 0x2beabc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2beabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2beac0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2beac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2beac4: 0x24633c48  addiu       $v1, $v1, 0x3C48
    ctx->pc = 0x2beac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15432));
    // 0x2beac8: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BEAC8u;
    SET_GPR_U32(ctx, 31, 0x2BEAD0u);
    ctx->pc = 0x2BEACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAC8u;
    // 0x2beacc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BEAC8u, 0x2BEAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAD0u;
label_2bead0:
    // 0x2bead0: 0x24031008  addiu       $v1, $zero, 0x1008
    ctx->pc = 0x2bead0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
    // 0x2bead4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bead4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bead8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bead8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2beadc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2beadcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2beae0: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2beae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2beae4: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2beae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2beae8: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BEAE8u;
    SET_GPR_U32(ctx, 31, 0x2BEAF0u);
    ctx->pc = 0x2BEAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEAE8u;
    // 0x2beaec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BEAE8u, 0x2BEAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEAF0u;
label_2beaf0:
    // 0x2beaf0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2beaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2beaf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2beaf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2beaf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2beaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2beafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2beafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2beb00: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEB00u;
        // 0x2beb04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEB08u;
}
