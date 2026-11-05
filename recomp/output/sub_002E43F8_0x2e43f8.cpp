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

// Function: sub_002E43F8
// Address: 0x2e43f8 - 0x2e4458
void sub_002E43F8_0x2e43f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E43F8_0x2e43f8");
#endif

    switch (ctx->pc) {
        case 0x2e4420u: goto label_2e4420;
        case 0x2e4434u: goto label_2e4434;
        case 0x2e4448u: goto label_2e4448;
        default: break;
    }

    ctx->pc = 0x2e43f8u;

    // 0x2e43f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e43f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e43fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2e43fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2e4400: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E4400u;
    {
        const bool branch_taken_0x2e4400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4400u;
        // 0x2e4404: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4400) {
            ctx->pc = 0x2E4448u;
            goto label_2e4448;
        }
    }
    ctx->pc = 0x2E4408u;
    // 0x2e4408: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E4408u;
    {
        const bool branch_taken_0x2e4408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4408u;
        // 0x2e440c: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4408) {
            ctx->pc = 0x2E4448u;
            goto label_2e4448;
        }
    }
    ctx->pc = 0x2E4410u;
    // 0x2e4410: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e4410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4414: 0x24844af0  addiu       $a0, $a0, 0x4AF0
    ctx->pc = 0x2e4414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19184));
    // 0x2e4418: 0xc0b8fc2  jal         func_2E3F08
    ctx->pc = 0x2E4418u;
    SET_GPR_U32(ctx, 31, 0x2E4420u);
    ctx->pc = 0x2E441Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4418u;
    // 0x2e441c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F08u, 0x2E4418u, 0x2E4420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4420u;
label_2e4420:
    // 0x2e4420: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2e4420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2e4424: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e4424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e4428: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2e4428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
    // 0x2e442c: 0xc0b8fc2  jal         func_2E3F08
    ctx->pc = 0x2E442Cu;
    SET_GPR_U32(ctx, 31, 0x2E4434u);
    ctx->pc = 0x2E4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E442Cu;
    // 0x2e4430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F08u, 0x2E442Cu, 0x2E4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4434u;
label_2e4434:
    // 0x2e4434: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2e4434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2e4438: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e4438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e443c: 0x24844b10  addiu       $a0, $a0, 0x4B10
    ctx->pc = 0x2e443cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19216));
    // 0x2e4440: 0xc0b8fc2  jal         func_2E3F08
    ctx->pc = 0x2E4440u;
    SET_GPR_U32(ctx, 31, 0x2E4448u);
    ctx->pc = 0x2E4444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4440u;
    // 0x2e4444: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3F08u, 0x2E4440u, 0x2E4448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4448u;
label_2e4448:
    // 0x2e4448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e4448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e444c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E444Cu;
        // 0x2e4450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4454u;
    // 0x2e4454: 0x0  nop
    ctx->pc = 0x2e4454u;
    // NOP
    ctx->pc = 0x2e4458u;
}
