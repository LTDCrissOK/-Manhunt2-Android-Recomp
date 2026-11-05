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

// Function: sub_00128610
// Address: 0x128610 - 0x1286c0
void sub_00128610_0x128610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128610_0x128610");
#endif

    switch (ctx->pc) {
        case 0x12863cu: goto label_12863c;
        case 0x128648u: goto label_128648;
        case 0x128670u: goto label_128670;
        case 0x12867cu: goto label_12867c;
        case 0x128690u: goto label_128690;
        case 0x1286a4u: goto label_1286a4;
        case 0x1286b0u: goto label_1286b0;
        default: break;
    }

    ctx->pc = 0x128610u;

    // 0x128610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128614: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x128614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x128618: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x128618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12861c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12861cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128620: 0x8e020428  lw          $v0, 0x428($s0)
    ctx->pc = 0x128620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1064)));
    // 0x128624: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x128624u;
    {
        const bool branch_taken_0x128624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x128628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128624u;
        // 0x128628: 0x8e02042c  lw          $v0, 0x42C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128624) {
            ctx->pc = 0x128650u;
            goto label_128650;
        }
    }
    ctx->pc = 0x12862Cu;
    // 0x12862c: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12862Cu;
    {
        const bool branch_taken_0x12862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12862c) {
            ctx->pc = 0x128630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12862Cu;
            // 0x128630: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1286B4u;
            goto label_1286b4;
        }
    }
    ctx->pc = 0x128634u;
    // 0x128634: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x128634u;
    SET_GPR_U32(ctx, 31, 0x12863Cu);
    ctx->pc = 0x128638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128634u;
    // 0x128638: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x128634u, 0x12863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12863Cu;
label_12863c:
    // 0x12863c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128640: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x128640u;
    SET_GPR_U32(ctx, 31, 0x128648u);
    ctx->pc = 0x128644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128640u;
    // 0x128644: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x128640u, 0x128648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128648u;
label_128648:
    // 0x128648: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x128648u;
    {
        const bool branch_taken_0x128648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12864Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128648u;
        // 0x12864c: 0xae020430  sw          $v0, 0x430($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128648) {
            ctx->pc = 0x128684u;
            goto label_128684;
        }
    }
    ctx->pc = 0x128650u;
label_128650:
    // 0x128650: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x128650u;
    {
        const bool branch_taken_0x128650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x128650) {
            ctx->pc = 0x128654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128650u;
            // 0x128654: 0x8e020430  lw          $v0, 0x430($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128660u;
            goto label_128660;
        }
    }
    ctx->pc = 0x128658u;
    // 0x128658: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x128658u;
    {
        const bool branch_taken_0x128658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128658u;
        // 0x12865c: 0xae000430  sw          $zero, 0x430($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128658) {
            ctx->pc = 0x1286B0u;
            goto label_1286b0;
        }
    }
    ctx->pc = 0x128660u;
label_128660:
    // 0x128660: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x128660u;
    {
        const bool branch_taken_0x128660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128660u;
        // 0x128664: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128660) {
            ctx->pc = 0x1286A8u;
            goto label_1286a8;
        }
    }
    ctx->pc = 0x128668u;
    // 0x128668: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x128668u;
    SET_GPR_U32(ctx, 31, 0x128670u);
    ctx->pc = 0x12866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128668u;
    // 0x12866c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x128668u, 0x128670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128670u;
label_128670:
    // 0x128670: 0x8e050430  lw          $a1, 0x430($s0)
    ctx->pc = 0x128670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1072)));
    // 0x128674: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x128674u;
    SET_GPR_U32(ctx, 31, 0x12867Cu);
    ctx->pc = 0x128678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128674u;
    // 0x128678: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x128674u, 0x12867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12867Cu;
label_12867c:
    // 0x12867c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12867Cu;
    {
        const bool branch_taken_0x12867c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12867c) {
            ctx->pc = 0x128680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12867Cu;
            // 0x128680: 0xae000430  sw          $zero, 0x430($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 1072), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128698u;
            goto label_128698;
        }
    }
    ctx->pc = 0x128684u;
label_128684:
    // 0x128684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128688: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x128688u;
    SET_GPR_U32(ctx, 31, 0x128690u);
    ctx->pc = 0x12868Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128688u;
    // 0x12868c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x128688u, 0x128690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128690u;
label_128690:
    // 0x128690: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x128690u;
    {
        const bool branch_taken_0x128690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x128694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128690u;
        // 0x128694: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128690) {
            ctx->pc = 0x1286B4u;
            goto label_1286b4;
        }
    }
    ctx->pc = 0x128698u;
label_128698:
    // 0x128698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x128698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12869c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12869Cu;
    SET_GPR_U32(ctx, 31, 0x1286A4u);
    ctx->pc = 0x1286A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12869Cu;
    // 0x1286a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12869Cu, 0x1286A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286A4u;
label_1286a4:
    // 0x1286a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1286a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1286a8:
    // 0x1286a8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1286A8u;
    SET_GPR_U32(ctx, 31, 0x1286B0u);
    ctx->pc = 0x1286ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1286A8u;
    // 0x1286ac: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1286A8u, 0x1286B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1286B0u;
label_1286b0:
    // 0x1286b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1286b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1286b4:
    // 0x1286b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1286b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1286b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1286B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1286BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1286B8u;
        // 0x1286bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1286B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1286C0u;
}
