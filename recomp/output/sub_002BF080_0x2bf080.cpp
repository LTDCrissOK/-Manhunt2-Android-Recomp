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

// Function: sub_002BF080
// Address: 0x2bf080 - 0x2bf0e0
void sub_002BF080_0x2bf080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF080_0x2bf080");
#endif

    switch (ctx->pc) {
        case 0x2bf094u: goto label_2bf094;
        case 0x2bf0a8u: goto label_2bf0a8;
        case 0x2bf0c8u: goto label_2bf0c8;
        default: break;
    }

    ctx->pc = 0x2bf080u;

    // 0x2bf080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf08c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF08Cu;
    SET_GPR_U32(ctx, 31, 0x2BF094u);
    ctx->pc = 0x2BF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF08Cu;
    // 0x2bf090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF08Cu, 0x2BF094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF094u;
label_2bf094:
    // 0x2bf094: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf098: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf09c: 0x24633b88  addiu       $v1, $v1, 0x3B88
    ctx->pc = 0x2bf09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15240));
    // 0x2bf0a0: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BF0A0u;
    SET_GPR_U32(ctx, 31, 0x2BF0A8u);
    ctx->pc = 0x2BF0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0A0u;
    // 0x2bf0a4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BF0A0u, 0x2BF0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0A8u;
label_2bf0a8:
    // 0x2bf0a8: 0x24032002  addiu       $v1, $zero, 0x2002
    ctx->pc = 0x2bf0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8194));
    // 0x2bf0ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bf0b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf0b4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bf0b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf0b8: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bf0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf0bc: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bf0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bf0c0: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BF0C0u;
    SET_GPR_U32(ctx, 31, 0x2BF0C8u);
    ctx->pc = 0x2BF0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0C0u;
    // 0x2bf0c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BF0C0u, 0x2BF0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF0C8u;
label_2bf0c8:
    // 0x2bf0c8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bf0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bf0cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bf0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF0D8u;
        // 0x2bf0dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF0E0u;
}
