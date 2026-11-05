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

// Function: sub_0028A010
// Address: 0x28a010 - 0x28a090
void sub_0028A010_0x28a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A010_0x28a010");
#endif

    switch (ctx->pc) {
        case 0x28a030u: goto label_28a030;
        case 0x28a048u: goto label_28a048;
        case 0x28a064u: goto label_28a064;
        case 0x28a074u: goto label_28a074;
        case 0x28a07cu: goto label_28a07c;
        default: break;
    }

    ctx->pc = 0x28a010u;

    // 0x28a010: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a014: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a018: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a01c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a020: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a028: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A028u;
    SET_GPR_U32(ctx, 31, 0x28A030u);
    ctx->pc = 0x28A02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A028u;
    // 0x28a02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A028u, 0x28A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A030u;
label_28a030:
    // 0x28a030: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a034: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a038: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a03c: 0x24a5aeb8  addiu       $a1, $a1, -0x5148
    ctx->pc = 0x28a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946488));
    // 0x28a040: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A040u;
    SET_GPR_U32(ctx, 31, 0x28A048u);
    ctx->pc = 0x28A044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A040u;
    // 0x28a044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A040u, 0x28A048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A048u;
label_28a048:
    // 0x28a048: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a04c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a04cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a050: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a05c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A05Cu;
    SET_GPR_U32(ctx, 31, 0x28A064u);
    ctx->pc = 0x28A060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A05Cu;
    // 0x28a060: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A05Cu, 0x28A064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A064u;
label_28a064:
    // 0x28a064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a068: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a06c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A06Cu;
    SET_GPR_U32(ctx, 31, 0x28A074u);
    ctx->pc = 0x28A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A06Cu;
    // 0x28a070: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A06Cu, 0x28A074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A074u;
label_28a074:
    // 0x28a074: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A074u;
    SET_GPR_U32(ctx, 31, 0x28A07Cu);
    ctx->pc = 0x28A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A074u;
    // 0x28a078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A074u, 0x28A07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A07Cu;
label_28a07c:
    // 0x28a07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a084: 0x3e00008  jr          $ra
    ctx->pc = 0x28A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A084u;
        // 0x28a088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A08Cu;
    // 0x28a08c: 0x0  nop
    ctx->pc = 0x28a08cu;
    // NOP
    ctx->pc = 0x28a090u;
}
