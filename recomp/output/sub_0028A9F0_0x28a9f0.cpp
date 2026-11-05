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

// Function: sub_0028A9F0
// Address: 0x28a9f0 - 0x28aa70
void sub_0028A9F0_0x28a9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A9F0_0x28a9f0");
#endif

    switch (ctx->pc) {
        case 0x28aa10u: goto label_28aa10;
        case 0x28aa28u: goto label_28aa28;
        case 0x28aa44u: goto label_28aa44;
        case 0x28aa54u: goto label_28aa54;
        case 0x28aa5cu: goto label_28aa5c;
        default: break;
    }

    ctx->pc = 0x28a9f0u;

    // 0x28a9f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a9f4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a9f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a9fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28aa04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28aa04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa08: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28AA08u;
    SET_GPR_U32(ctx, 31, 0x28AA10u);
    ctx->pc = 0x28AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA08u;
    // 0x28aa0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28AA08u, 0x28AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA10u;
label_28aa10:
    // 0x28aa10: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28aa14: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28aa14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28aa18: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28aa1c: 0x24a5af48  addiu       $a1, $a1, -0x50B8
    ctx->pc = 0x28aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946632));
    // 0x28aa20: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28AA20u;
    SET_GPR_U32(ctx, 31, 0x28AA28u);
    ctx->pc = 0x28AA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA20u;
    // 0x28aa24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28AA20u, 0x28AA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA28u;
label_28aa28:
    // 0x28aa28: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28aa28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28aa2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28aa2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28aa30: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28aa30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28aa34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa3c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28AA3Cu;
    SET_GPR_U32(ctx, 31, 0x28AA44u);
    ctx->pc = 0x28AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA3Cu;
    // 0x28aa40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28AA3Cu, 0x28AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA44u;
label_28aa44:
    // 0x28aa44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa48: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28aa4c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28AA4Cu;
    SET_GPR_U32(ctx, 31, 0x28AA54u);
    ctx->pc = 0x28AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA4Cu;
    // 0x28aa50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28AA4Cu, 0x28AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA54u;
label_28aa54:
    // 0x28aa54: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28AA54u;
    SET_GPR_U32(ctx, 31, 0x28AA5Cu);
    ctx->pc = 0x28AA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA54u;
    // 0x28aa58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28AA54u, 0x28AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA5Cu;
label_28aa5c:
    // 0x28aa5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28aa5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aa60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28aa64: 0x3e00008  jr          $ra
    ctx->pc = 0x28AA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AA64u;
        // 0x28aa68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AA6Cu;
    // 0x28aa6c: 0x0  nop
    ctx->pc = 0x28aa6cu;
    // NOP
    ctx->pc = 0x28aa70u;
}
