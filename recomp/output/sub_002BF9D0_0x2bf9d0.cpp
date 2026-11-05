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

// Function: sub_002BF9D0
// Address: 0x2bf9d0 - 0x2bfa30
void sub_002BF9D0_0x2bf9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF9D0_0x2bf9d0");
#endif

    switch (ctx->pc) {
        case 0x2bf9e4u: goto label_2bf9e4;
        case 0x2bf9f8u: goto label_2bf9f8;
        case 0x2bfa18u: goto label_2bfa18;
        default: break;
    }

    ctx->pc = 0x2bf9d0u;

    // 0x2bf9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf9dc: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF9DCu;
    SET_GPR_U32(ctx, 31, 0x2BF9E4u);
    ctx->pc = 0x2BF9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9DCu;
    // 0x2bf9e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF9DCu, 0x2BF9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9E4u;
label_2bf9e4:
    // 0x2bf9e4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf9e8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf9ec: 0x24633a88  addiu       $v1, $v1, 0x3A88
    ctx->pc = 0x2bf9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14984));
    // 0x2bf9f0: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BF9F0u;
    SET_GPR_U32(ctx, 31, 0x2BF9F8u);
    ctx->pc = 0x2BF9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF9F0u;
    // 0x2bf9f4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BF9F0u, 0x2BF9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF9F8u;
label_2bf9f8:
    // 0x2bf9f8: 0x24034002  addiu       $v1, $zero, 0x4002
    ctx->pc = 0x2bf9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
    // 0x2bf9fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2bf9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfa00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfa04: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfa04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfa08: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfa08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfa0c: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bfa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bfa10: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BFA10u;
    SET_GPR_U32(ctx, 31, 0x2BFA18u);
    ctx->pc = 0x2BFA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFA10u;
    // 0x2bfa14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BFA10u, 0x2BFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFA18u;
label_2bfa18:
    // 0x2bfa18: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfa18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfa1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfa1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfa20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfa20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfa24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfa24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfa28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFA28u;
        // 0x2bfa2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFA30u;
}
