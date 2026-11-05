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

// Function: sub_002BF5C8
// Address: 0x2bf5c8 - 0x2bf628
void sub_002BF5C8_0x2bf5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF5C8_0x2bf5c8");
#endif

    switch (ctx->pc) {
        case 0x2bf5dcu: goto label_2bf5dc;
        case 0x2bf5f0u: goto label_2bf5f0;
        case 0x2bf610u: goto label_2bf610;
        default: break;
    }

    ctx->pc = 0x2bf5c8u;

    // 0x2bf5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf5d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf5d4: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF5D4u;
    SET_GPR_U32(ctx, 31, 0x2BF5DCu);
    ctx->pc = 0x2BF5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5D4u;
    // 0x2bf5d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF5D4u, 0x2BF5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5DCu;
label_2bf5dc:
    // 0x2bf5dc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf5e0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf5e4: 0x24633ae8  addiu       $v1, $v1, 0x3AE8
    ctx->pc = 0x2bf5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15080));
    // 0x2bf5e8: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BF5E8u;
    SET_GPR_U32(ctx, 31, 0x2BF5F0u);
    ctx->pc = 0x2BF5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF5E8u;
    // 0x2bf5ec: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BF5E8u, 0x2BF5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF5F0u;
label_2bf5f0:
    // 0x2bf5f0: 0x24032040  addiu       $v1, $zero, 0x2040
    ctx->pc = 0x2bf5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
    // 0x2bf5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bf5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bf5f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf5fc: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bf5fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf600: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bf600u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf604: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bf604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bf608: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BF608u;
    SET_GPR_U32(ctx, 31, 0x2BF610u);
    ctx->pc = 0x2BF60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF608u;
    // 0x2bf60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BF608u, 0x2BF610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF610u;
label_2bf610:
    // 0x2bf610: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bf610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bf614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bf618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf61c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf61cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf620: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF620u;
        // 0x2bf624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF628u;
}
