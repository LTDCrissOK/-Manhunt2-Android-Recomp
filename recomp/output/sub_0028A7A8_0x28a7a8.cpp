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

// Function: sub_0028A7A8
// Address: 0x28a7a8 - 0x28a828
void sub_0028A7A8_0x28a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A7A8_0x28a7a8");
#endif

    switch (ctx->pc) {
        case 0x28a7c8u: goto label_28a7c8;
        case 0x28a7e0u: goto label_28a7e0;
        case 0x28a7fcu: goto label_28a7fc;
        case 0x28a80cu: goto label_28a80c;
        case 0x28a814u: goto label_28a814;
        default: break;
    }

    ctx->pc = 0x28a7a8u;

    // 0x28a7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a7ac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a7acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a7b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a7b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7c0: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A7C0u;
    SET_GPR_U32(ctx, 31, 0x28A7C8u);
    ctx->pc = 0x28A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7C0u;
    // 0x28a7c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A7C0u, 0x28A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7C8u;
label_28a7c8:
    // 0x28a7c8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a7cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a7d0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a7d4: 0x24a5af28  addiu       $a1, $a1, -0x50D8
    ctx->pc = 0x28a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946600));
    // 0x28a7d8: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A7D8u;
    SET_GPR_U32(ctx, 31, 0x28A7E0u);
    ctx->pc = 0x28A7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7D8u;
    // 0x28a7dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A7D8u, 0x28A7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7E0u;
label_28a7e0:
    // 0x28a7e0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a7e4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a7e8: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a7ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a7f4: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A7F4u;
    SET_GPR_U32(ctx, 31, 0x28A7FCu);
    ctx->pc = 0x28A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A7F4u;
    // 0x28a7f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A7F4u, 0x28A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A7FCu;
label_28a7fc:
    // 0x28a7fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a804: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A804u;
    SET_GPR_U32(ctx, 31, 0x28A80Cu);
    ctx->pc = 0x28A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A804u;
    // 0x28a808: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A804u, 0x28A80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A80Cu;
label_28a80c:
    // 0x28a80c: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A80Cu;
    SET_GPR_U32(ctx, 31, 0x28A814u);
    ctx->pc = 0x28A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A80Cu;
    // 0x28a810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A80Cu, 0x28A814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A814u;
label_28a814:
    // 0x28a814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a818: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a81c: 0x3e00008  jr          $ra
    ctx->pc = 0x28A81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A81Cu;
        // 0x28a820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A824u;
    // 0x28a824: 0x0  nop
    ctx->pc = 0x28a824u;
    // NOP
    ctx->pc = 0x28a828u;
}
