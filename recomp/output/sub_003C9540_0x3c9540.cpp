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

// Function: sub_003C9540
// Address: 0x3c9540 - 0x3c9680
void sub_003C9540_0x3c9540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9540_0x3c9540");
#endif

    switch (ctx->pc) {
        case 0x3c9574u: goto label_3c9574;
        case 0x3c9588u: goto label_3c9588;
        case 0x3c9598u: goto label_3c9598;
        case 0x3c95a8u: goto label_3c95a8;
        case 0x3c95b8u: goto label_3c95b8;
        case 0x3c95c0u: goto label_3c95c0;
        case 0x3c95c8u: goto label_3c95c8;
        case 0x3c95d8u: goto label_3c95d8;
        case 0x3c95e8u: goto label_3c95e8;
        case 0x3c95f8u: goto label_3c95f8;
        case 0x3c9608u: goto label_3c9608;
        case 0x3c9618u: goto label_3c9618;
        case 0x3c9628u: goto label_3c9628;
        case 0x3c9638u: goto label_3c9638;
        case 0x3c9648u: goto label_3c9648;
        case 0x3c9658u: goto label_3c9658;
        case 0x3c9668u: goto label_3c9668;
        case 0x3c9678u: goto label_3c9678;
        default: break;
    }

    ctx->pc = 0x3c9540u;

    // 0x3c9540: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c9540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c9544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3c9544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3c9548: 0x8c62d5dc  lw          $v0, -0x2A24($v1)
    ctx->pc = 0x3c9548u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42D5DCu));
    // 0x3c954c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c954cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c9550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c9550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3c9554: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C9554u;
    {
        const bool branch_taken_0x3c9554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9554u;
        // 0x3c9558: 0xac62d5dc  sw          $v0, -0x2A24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c9554) {
            ctx->pc = 0x3C9574u;
            goto label_3c9574;
        }
    }
    ctx->pc = 0x3C955Cu;
    // 0x3c955c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c9560: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x3c9560u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x3c9564: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c9564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c9568: 0x8c44d6c8  lw          $a0, -0x2938($v0)
    ctx->pc = 0x3c9568u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42D6C8u));
    // 0x3c956c: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x3C956Cu;
    SET_GPR_U32(ctx, 31, 0x3C9574u);
    ctx->pc = 0x3C9570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C956Cu;
    // 0x3c9570: 0xaca3d5d8  sw          $v1, -0x2A28($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294956504), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x3C956Cu, 0x3C9574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C9574u;
label_3c9574:
    // 0x3c9574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c9574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c9578: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C9578u;
        // 0x3c957c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9580u;
    // 0x3c9580: 0x24030000  addiu       $v1, $zero, 0x0
    ctx->pc = 0x3c9580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x3c9584: 0xc  syscall     0
    ctx->pc = 0x3c9584u;
    ctx->pc = 0x3C9588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9588:
    // 0x3c9588: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9590u;
    // 0x3c9590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c9590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c9594: 0xc  syscall     0
    ctx->pc = 0x3c9594u;
    ctx->pc = 0x3C9598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9598:
    // 0x3c9598: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95A0u;
    // 0x3c95a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c95a4: 0xc  syscall     0
    ctx->pc = 0x3c95a4u;
    ctx->pc = 0x3C95A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95a8:
    // 0x3c95a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95B0u;
    // 0x3c95b0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c95b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c95b4: 0xc  syscall     0
    ctx->pc = 0x3c95b4u;
    ctx->pc = 0x3C95B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95b8:
    // 0x3c95b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95C0u;
label_3c95c0:
    // 0x3c95c0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c95c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c95c4: 0xc  syscall     0
    ctx->pc = 0x3c95c4u;
    ctx->pc = 0x3C95C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95c8:
    // 0x3c95c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95D0u;
    // 0x3c95d0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3c95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3c95d4: 0xc  syscall     0
    ctx->pc = 0x3c95d4u;
    ctx->pc = 0x3C95D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95d8:
    // 0x3c95d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95E0u;
    // 0x3c95e0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3c95e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3c95e4: 0xc  syscall     0
    ctx->pc = 0x3c95e4u;
    ctx->pc = 0x3C95E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95e8:
    // 0x3c95e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C95F0u;
    // 0x3c95f0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3c95f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3c95f4: 0xc  syscall     0
    ctx->pc = 0x3c95f4u;
    ctx->pc = 0x3C95F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c95f8:
    // 0x3c95f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C95F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C95F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9600u;
    // 0x3c9600: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3c9600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c9604: 0xc  syscall     0
    ctx->pc = 0x3c9604u;
    ctx->pc = 0x3C9608u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9608:
    // 0x3c9608: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9610u;
    // 0x3c9610: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3c9610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3c9614: 0xc  syscall     0
    ctx->pc = 0x3c9614u;
    ctx->pc = 0x3C9618u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9618:
    // 0x3c9618: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9620u;
    // 0x3c9620: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x3c9620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3c9624: 0xc  syscall     0
    ctx->pc = 0x3c9624u;
    ctx->pc = 0x3C9628u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9628:
    // 0x3c9628: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9630u;
    // 0x3c9630: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x3c9630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3c9634: 0xc  syscall     0
    ctx->pc = 0x3c9634u;
    ctx->pc = 0x3C9638u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9638:
    // 0x3c9638: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9640u;
    // 0x3c9640: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x3c9640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3c9644: 0xc  syscall     0
    ctx->pc = 0x3c9644u;
    ctx->pc = 0x3C9648u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9648:
    // 0x3c9648: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9650u;
    // 0x3c9650: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3c9650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3c9654: 0xc  syscall     0
    ctx->pc = 0x3c9654u;
    ctx->pc = 0x3C9658u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9658:
    // 0x3c9658: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9660u;
    // 0x3c9660: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3c9660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3c9664: 0xc  syscall     0
    ctx->pc = 0x3c9664u;
    ctx->pc = 0x3C9668u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9668:
    // 0x3c9668: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9670u;
    // 0x3c9670: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x3c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3c9674: 0xc  syscall     0
    ctx->pc = 0x3c9674u;
    ctx->pc = 0x3C9678u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9678:
    // 0x3c9678: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9680u;
}
