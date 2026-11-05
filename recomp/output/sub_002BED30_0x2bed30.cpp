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

// Function: sub_002BED30
// Address: 0x2bed30 - 0x2bed90
void sub_002BED30_0x2bed30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED30_0x2bed30");
#endif

    switch (ctx->pc) {
        case 0x2bed44u: goto label_2bed44;
        case 0x2bed58u: goto label_2bed58;
        case 0x2bed78u: goto label_2bed78;
        default: break;
    }

    ctx->pc = 0x2bed30u;

    // 0x2bed30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bed34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bed38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bed3c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BED3Cu;
    SET_GPR_U32(ctx, 31, 0x2BED44u);
    ctx->pc = 0x2BED40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED3Cu;
    // 0x2bed40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BED3Cu, 0x2BED44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED44u;
label_2bed44:
    // 0x2bed44: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bed48: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bed48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bed4c: 0x24633bc8  addiu       $v1, $v1, 0x3BC8
    ctx->pc = 0x2bed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15304));
    // 0x2bed50: 0xc0b004e  jal         func_2C0138
    ctx->pc = 0x2BED50u;
    SET_GPR_U32(ctx, 31, 0x2BED58u);
    ctx->pc = 0x2BED54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED50u;
    // 0x2bed54: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0138u, 0x2BED50u, 0x2BED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED58u;
label_2bed58:
    // 0x2bed58: 0x24031080  addiu       $v1, $zero, 0x1080
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
    // 0x2bed5c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2bed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bed60: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bed60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bed64: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bed64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bed68: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bed68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bed6c: 0x24845188  addiu       $a0, $a0, 0x5188
    ctx->pc = 0x2bed6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20872));
    // 0x2bed70: 0xc0f9ea8  jal         func_3E7AA0
    ctx->pc = 0x2BED70u;
    SET_GPR_U32(ctx, 31, 0x2BED78u);
    ctx->pc = 0x2BED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BED70u;
    // 0x2bed74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7AA0u, 0x2BED70u, 0x2BED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED78u;
label_2bed78:
    // 0x2bed78: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bed78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bed7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bed7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bed80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bed84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bed84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bed88: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BED88u;
        // 0x2bed8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED90u;
}
