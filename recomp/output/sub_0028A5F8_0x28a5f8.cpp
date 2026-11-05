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

// Function: sub_0028A5F8
// Address: 0x28a5f8 - 0x28a688
void sub_0028A5F8_0x28a5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A5F8_0x28a5f8");
#endif

    switch (ctx->pc) {
        case 0x28a618u: goto label_28a618;
        case 0x28a630u: goto label_28a630;
        case 0x28a64cu: goto label_28a64c;
        case 0x28a65cu: goto label_28a65c;
        case 0x28a664u: goto label_28a664;
        case 0x28a678u: goto label_28a678;
        default: break;
    }

    ctx->pc = 0x28a5f8u;

    // 0x28a5f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a5fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a600: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a604: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a610: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A610u;
    SET_GPR_U32(ctx, 31, 0x28A618u);
    ctx->pc = 0x28A614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A610u;
    // 0x28a614: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A610u, 0x28A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A618u;
label_28a618:
    // 0x28a618: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a61c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a620: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a624: 0x24a5af10  addiu       $a1, $a1, -0x50F0
    ctx->pc = 0x28a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946576));
    // 0x28a628: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A628u;
    SET_GPR_U32(ctx, 31, 0x28A630u);
    ctx->pc = 0x28A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A628u;
    // 0x28a62c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A628u, 0x28A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A630u;
label_28a630:
    // 0x28a630: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a630u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a634: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a634u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a638: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a644: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A644u;
    SET_GPR_U32(ctx, 31, 0x28A64Cu);
    ctx->pc = 0x28A648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A644u;
    // 0x28a648: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A644u, 0x28A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A64Cu;
label_28a64c:
    // 0x28a64c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a654: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A654u;
    SET_GPR_U32(ctx, 31, 0x28A65Cu);
    ctx->pc = 0x28A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A654u;
    // 0x28a658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A654u, 0x28A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A65Cu;
label_28a65c:
    // 0x28a65c: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A65Cu;
    SET_GPR_U32(ctx, 31, 0x28A664u);
    ctx->pc = 0x28A660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A65Cu;
    // 0x28a660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A65Cu, 0x28A664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A664u;
label_28a664:
    // 0x28a664: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a668: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a66c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a670: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A670u;
    SET_GPR_U32(ctx, 31, 0x28A678u);
    ctx->pc = 0x28A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A670u;
    // 0x28a674: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A670u, 0x28A678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A678u;
label_28a678:
    // 0x28a678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a67c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a67cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a680: 0x3e00008  jr          $ra
    ctx->pc = 0x28A680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A680u;
        // 0x28a684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A688u;
}
