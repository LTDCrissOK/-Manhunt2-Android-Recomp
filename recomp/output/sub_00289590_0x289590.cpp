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

// Function: sub_00289590
// Address: 0x289590 - 0x289610
void sub_00289590_0x289590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289590_0x289590");
#endif

    switch (ctx->pc) {
        case 0x2895b0u: goto label_2895b0;
        case 0x2895c8u: goto label_2895c8;
        case 0x2895e4u: goto label_2895e4;
        case 0x2895f4u: goto label_2895f4;
        case 0x2895fcu: goto label_2895fc;
        default: break;
    }

    ctx->pc = 0x289590u;

    // 0x289590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289594: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28959c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28959cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2895a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2895a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2895a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895a8: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x2895A8u;
    SET_GPR_U32(ctx, 31, 0x2895B0u);
    ctx->pc = 0x2895ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895A8u;
    // 0x2895ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x2895A8u, 0x2895B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895B0u;
label_2895b0:
    // 0x2895b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2895b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2895b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2895b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2895b8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2895b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2895bc: 0x24a5ae08  addiu       $a1, $a1, -0x51F8
    ctx->pc = 0x2895bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946312));
    // 0x2895c0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2895C0u;
    SET_GPR_U32(ctx, 31, 0x2895C8u);
    ctx->pc = 0x2895C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895C0u;
    // 0x2895c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2895C0u, 0x2895C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895C8u;
label_2895c8:
    // 0x2895c8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x2895c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x2895cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2895ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2895d0: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x2895d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x2895d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2895d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2895d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895dc: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x2895DCu;
    SET_GPR_U32(ctx, 31, 0x2895E4u);
    ctx->pc = 0x2895E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895DCu;
    // 0x2895e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x2895DCu, 0x2895E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895E4u;
label_2895e4:
    // 0x2895e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2895e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2895e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2895ec: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x2895ECu;
    SET_GPR_U32(ctx, 31, 0x2895F4u);
    ctx->pc = 0x2895F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895ECu;
    // 0x2895f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x2895ECu, 0x2895F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895F4u;
label_2895f4:
    // 0x2895f4: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x2895F4u;
    SET_GPR_U32(ctx, 31, 0x2895FCu);
    ctx->pc = 0x2895F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2895F4u;
    // 0x2895f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x2895F4u, 0x2895FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2895FCu;
label_2895fc:
    // 0x2895fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2895fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289600: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289604: 0x3e00008  jr          $ra
    ctx->pc = 0x289604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289604u;
        // 0x289608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28960Cu;
    // 0x28960c: 0x0  nop
    ctx->pc = 0x28960cu;
    // NOP
    ctx->pc = 0x289610u;
}
