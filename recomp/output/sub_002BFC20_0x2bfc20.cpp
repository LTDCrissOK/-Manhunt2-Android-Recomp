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

// Function: sub_002BFC20
// Address: 0x2bfc20 - 0x2bfc80
void sub_002BFC20_0x2bfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFC20_0x2bfc20");
#endif

    switch (ctx->pc) {
        case 0x2bfc34u: goto label_2bfc34;
        case 0x2bfc48u: goto label_2bfc48;
        case 0x2bfc68u: goto label_2bfc68;
        default: break;
    }

    ctx->pc = 0x2bfc20u;

    // 0x2bfc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bfc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bfc24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bfc28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bfc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bfc2c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BFC2Cu;
    SET_GPR_U32(ctx, 31, 0x2BFC34u);
    ctx->pc = 0x2BFC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC2Cu;
    // 0x2bfc30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BFC2Cu, 0x2BFC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC34u;
label_2bfc34:
    // 0x2bfc34: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bfc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bfc38: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bfc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bfc3c: 0x24633a08  addiu       $v1, $v1, 0x3A08
    ctx->pc = 0x2bfc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14856));
    // 0x2bfc40: 0xc0b0326  jal         func_2C0C98
    ctx->pc = 0x2BFC40u;
    SET_GPR_U32(ctx, 31, 0x2BFC48u);
    ctx->pc = 0x2BFC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC40u;
    // 0x2bfc44: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0C98u, 0x2BFC40u, 0x2BFC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC48u;
label_2bfc48:
    // 0x2bfc48: 0x24034010  addiu       $v1, $zero, 0x4010
    ctx->pc = 0x2bfc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16400));
    // 0x2bfc4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2bfc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bfc50: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bfc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bfc54: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bfc54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bfc58: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bfc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bfc5c: 0x2484513c  addiu       $a0, $a0, 0x513C
    ctx->pc = 0x2bfc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20796));
    // 0x2bfc60: 0xc0f9ef4  jal         func_3E7BD0
    ctx->pc = 0x2BFC60u;
    SET_GPR_U32(ctx, 31, 0x2BFC68u);
    ctx->pc = 0x2BFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFC60u;
    // 0x2bfc64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7BD0u, 0x2BFC60u, 0x2BFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFC68u;
label_2bfc68:
    // 0x2bfc68: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bfc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bfc6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bfc6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfc70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bfc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bfc74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bfc74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bfc78: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFC78u;
        // 0x2bfc7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFC80u;
}
