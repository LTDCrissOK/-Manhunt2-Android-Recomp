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

// Function: sub_0028A688
// Address: 0x28a688 - 0x28a718
void sub_0028A688_0x28a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A688_0x28a688");
#endif

    switch (ctx->pc) {
        case 0x28a6a8u: goto label_28a6a8;
        case 0x28a6c0u: goto label_28a6c0;
        case 0x28a6dcu: goto label_28a6dc;
        case 0x28a6ecu: goto label_28a6ec;
        case 0x28a6f4u: goto label_28a6f4;
        case 0x28a708u: goto label_28a708;
        default: break;
    }

    ctx->pc = 0x28a688u;

    // 0x28a688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a68c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a698: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a69c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6a0: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A6A0u;
    SET_GPR_U32(ctx, 31, 0x28A6A8u);
    ctx->pc = 0x28A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6A0u;
    // 0x28a6a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A6A0u, 0x28A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6A8u;
label_28a6a8:
    // 0x28a6a8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a6ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a6acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a6b0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a6b4: 0x24a5af18  addiu       $a1, $a1, -0x50E8
    ctx->pc = 0x28a6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946584));
    // 0x28a6b8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A6B8u;
    SET_GPR_U32(ctx, 31, 0x28A6C0u);
    ctx->pc = 0x28A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6B8u;
    // 0x28a6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A6B8u, 0x28A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6C0u;
label_28a6c0:
    // 0x28a6c0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a6c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a6c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a6c8: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a6c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a6cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6d4: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A6D4u;
    SET_GPR_U32(ctx, 31, 0x28A6DCu);
    ctx->pc = 0x28A6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6D4u;
    // 0x28a6d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A6D4u, 0x28A6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6DCu;
label_28a6dc:
    // 0x28a6dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a6e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a6e4: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A6E4u;
    SET_GPR_U32(ctx, 31, 0x28A6ECu);
    ctx->pc = 0x28A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6E4u;
    // 0x28a6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A6E4u, 0x28A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6ECu;
label_28a6ec:
    // 0x28a6ec: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A6ECu;
    SET_GPR_U32(ctx, 31, 0x28A6F4u);
    ctx->pc = 0x28A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A6ECu;
    // 0x28a6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A6ECu, 0x28A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A6F4u;
label_28a6f4:
    // 0x28a6f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a6fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a700: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A700u;
    SET_GPR_U32(ctx, 31, 0x28A708u);
    ctx->pc = 0x28A704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A700u;
    // 0x28a704: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A700u, 0x28A708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A708u;
label_28a708:
    // 0x28a708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a70c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a710: 0x3e00008  jr          $ra
    ctx->pc = 0x28A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A710u;
        // 0x28a714: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A718u;
}
