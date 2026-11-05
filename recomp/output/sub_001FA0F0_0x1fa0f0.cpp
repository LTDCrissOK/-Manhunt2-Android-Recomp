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

// Function: sub_001FA0F0
// Address: 0x1fa0f0 - 0x1fa150
void sub_001FA0F0_0x1fa0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA0F0_0x1fa0f0");
#endif

    switch (ctx->pc) {
        case 0x1fa114u: goto label_1fa114;
        case 0x1fa120u: goto label_1fa120;
        case 0x1fa134u: goto label_1fa134;
        case 0x1fa140u: goto label_1fa140;
        default: break;
    }

    ctx->pc = 0x1fa0f0u;

    // 0x1fa0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fa0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fa0f4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fa0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fa0f8: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FA0F8u;
    {
        const bool branch_taken_0x1fa0f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA0F8u;
        // 0x1fa0fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa0f8) {
            ctx->pc = 0x1FA140u;
            goto label_1fa140;
        }
    }
    ctx->pc = 0x1FA100u;
    // 0x1fa100: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA100u;
    {
        const bool branch_taken_0x1fa100 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA100u;
        // 0x1fa104: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa100) {
            ctx->pc = 0x1FA144u;
            goto label_1fa144;
        }
    }
    ctx->pc = 0x1FA108u;
    // 0x1fa108: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fa108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fa10c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1FA10Cu;
    SET_GPR_U32(ctx, 31, 0x1FA114u);
    ctx->pc = 0x1FA110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA10Cu;
    // 0x1fa110: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1FA10Cu, 0x1FA114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA114u;
label_1fa114:
    // 0x1fa114: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fa118: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1FA118u;
    SET_GPR_U32(ctx, 31, 0x1FA120u);
    ctx->pc = 0x1FA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA118u;
    // 0x1fa11c: 0x24840468  addiu       $a0, $a0, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1FA118u, 0x1FA120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA120u;
label_1fa120:
    // 0x1fa120: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fa120u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fa124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fa124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fa128: 0x24840470  addiu       $a0, $a0, 0x470
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1136));
    // 0x1fa12c: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x1FA12Cu;
    SET_GPR_U32(ctx, 31, 0x1FA134u);
    ctx->pc = 0x1FA130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA12Cu;
    // 0x1fa130: 0x24a5ff78  addiu       $a1, $a1, -0x88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x1FA12Cu, 0x1FA134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA134u;
label_1fa134:
    // 0x1fa134: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fa134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fa138: 0xc07d7a4  jal         func_1F5E90
    ctx->pc = 0x1FA138u;
    SET_GPR_U32(ctx, 31, 0x1FA140u);
    ctx->pc = 0x1FA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA138u;
    // 0x1fa13c: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5E90u, 0x1FA138u, 0x1FA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA140u;
label_1fa140:
    // 0x1fa140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fa144:
    // 0x1fa144: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA144u;
        // 0x1fa148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA14Cu;
    // 0x1fa14c: 0x0  nop
    ctx->pc = 0x1fa14cu;
    // NOP
    ctx->pc = 0x1fa150u;
}
