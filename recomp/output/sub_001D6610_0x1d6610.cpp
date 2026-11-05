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

// Function: sub_001D6610
// Address: 0x1d6610 - 0x1d66b0
void sub_001D6610_0x1d6610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6610_0x1d6610");
#endif

    switch (ctx->pc) {
        case 0x1d6624u: goto label_1d6624;
        case 0x1d662cu: goto label_1d662c;
        case 0x1d6640u: goto label_1d6640;
        case 0x1d6648u: goto label_1d6648;
        case 0x1d6654u: goto label_1d6654;
        case 0x1d6664u: goto label_1d6664;
        case 0x1d666cu: goto label_1d666c;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d667cu: goto label_1d667c;
        case 0x1d6684u: goto label_1d6684;
        case 0x1d668cu: goto label_1d668c;
        case 0x1d6694u: goto label_1d6694;
        case 0x1d66a0u: goto label_1d66a0;
        default: break;
    }

    ctx->pc = 0x1d6610u;

    // 0x1d6610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6614: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1d6614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1d6618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d661c: 0xc075e12  jal         func_1D7848
    ctx->pc = 0x1D661Cu;
    SET_GPR_U32(ctx, 31, 0x1D6624u);
    ctx->pc = 0x1D6620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D661Cu;
    // 0x1d6620: 0x2484d5f0  addiu       $a0, $a0, -0x2A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7848u, 0x1D661Cu, 0x1D6624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6624u;
label_1d6624:
    // 0x1d6624: 0xc0759ac  jal         func_1D66B0
    ctx->pc = 0x1D6624u;
    SET_GPR_U32(ctx, 31, 0x1D662Cu);
    ctx->pc = 0x1D66B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66B0u, 0x1D6624u, 0x1D662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D662Cu;
label_1d662c:
    // 0x1d662c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x1d662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x1d6630: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1d6630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1d6634: 0x8c44f060  lw          $a0, -0xFA0($v0)
    ctx->pc = 0x1d6634u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF060u));
    // 0x1d6638: 0xc0a0e90  jal         func_283A40
    ctx->pc = 0x1D6638u;
    SET_GPR_U32(ctx, 31, 0x1D6640u);
    ctx->pc = 0x1D663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6638u;
    // 0x1d663c: 0x24a557a0  addiu       $a1, $a1, 0x57A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x1D6638u, 0x1D6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6640u;
label_1d6640:
    // 0x1d6640: 0xc0da54c  jal         func_369530
    ctx->pc = 0x1D6640u;
    SET_GPR_U32(ctx, 31, 0x1D6648u);
    ctx->pc = 0x369530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369530u, 0x1D6640u, 0x1D6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6648u;
label_1d6648:
    // 0x1d6648: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1d664c: 0xc0b6768  jal         func_2D9DA0
    ctx->pc = 0x1D664Cu;
    SET_GPR_U32(ctx, 31, 0x1D6654u);
    ctx->pc = 0x1D6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D664Cu;
    // 0x1d6650: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DA0u, 0x1D664Cu, 0x1D6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6654u;
label_1d6654:
    // 0x1d6654: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D6654u;
    {
        const bool branch_taken_0x1d6654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6654) {
            ctx->pc = 0x1D6658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6654u;
            // 0x1d6658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D66A4u;
            goto label_1d66a4;
        }
    }
    ctx->pc = 0x1D665Cu;
    // 0x1d665c: 0xc0cd006  jal         func_334018
    ctx->pc = 0x1D665Cu;
    SET_GPR_U32(ctx, 31, 0x1D6664u);
    ctx->pc = 0x334018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334018u, 0x1D665Cu, 0x1D6664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6664u;
label_1d6664:
    // 0x1d6664: 0xc0d42e0  jal         func_350B80
    ctx->pc = 0x1D6664u;
    SET_GPR_U32(ctx, 31, 0x1D666Cu);
    ctx->pc = 0x350B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350B80u, 0x1D6664u, 0x1D666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D666Cu;
label_1d666c:
    // 0x1d666c: 0xc0759e2  jal         func_1D6788
    ctx->pc = 0x1D666Cu;
    SET_GPR_U32(ctx, 31, 0x1D6674u);
    ctx->pc = 0x1D6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6788u, 0x1D666Cu, 0x1D6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6674u;
label_1d6674:
    // 0x1d6674: 0xc0d3b8e  jal         func_34EE38
    ctx->pc = 0x1D6674u;
    SET_GPR_U32(ctx, 31, 0x1D667Cu);
    ctx->pc = 0x34EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34EE38u, 0x1D6674u, 0x1D667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D667Cu;
label_1d667c:
    // 0x1d667c: 0xc0c3dc2  jal         func_30F708
    ctx->pc = 0x1D667Cu;
    SET_GPR_U32(ctx, 31, 0x1D6684u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x1D667Cu, 0x1D6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6684u;
label_1d6684:
    // 0x1d6684: 0xc0c46dc  jal         func_311B70
    ctx->pc = 0x1D6684u;
    SET_GPR_U32(ctx, 31, 0x1D668Cu);
    ctx->pc = 0x1D6688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6684u;
    // 0x1d6688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311B70u, 0x1D6684u, 0x1D668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D668Cu;
label_1d668c:
    // 0x1d668c: 0xc0abb7e  jal         func_2AEDF8
    ctx->pc = 0x1D668Cu;
    SET_GPR_U32(ctx, 31, 0x1D6694u);
    ctx->pc = 0x2AEDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDF8u, 0x1D668Cu, 0x1D6694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6694u;
label_1d6694:
    // 0x1d6694: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d6698: 0xc082944  jal         func_20A510
    ctx->pc = 0x1D6698u;
    SET_GPR_U32(ctx, 31, 0x1D66A0u);
    ctx->pc = 0x1D669Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6698u;
    // 0x1d669c: 0x2484c100  addiu       $a0, $a0, -0x3F00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A510u, 0x1D6698u, 0x1D66A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66A0u;
label_1d66a0:
    // 0x1d66a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d66a4:
    // 0x1d66a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d66a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66A8u;
        // 0x1d66ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D66B0u;
}
