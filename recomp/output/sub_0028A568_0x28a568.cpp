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

// Function: sub_0028A568
// Address: 0x28a568 - 0x28a5f8
void sub_0028A568_0x28a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A568_0x28a568");
#endif

    switch (ctx->pc) {
        case 0x28a588u: goto label_28a588;
        case 0x28a5a0u: goto label_28a5a0;
        case 0x28a5bcu: goto label_28a5bc;
        case 0x28a5ccu: goto label_28a5cc;
        case 0x28a5d4u: goto label_28a5d4;
        case 0x28a5e8u: goto label_28a5e8;
        default: break;
    }

    ctx->pc = 0x28a568u;

    // 0x28a568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a56c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a56cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a574: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a578: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a580: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A580u;
    SET_GPR_U32(ctx, 31, 0x28A588u);
    ctx->pc = 0x28A584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A580u;
    // 0x28a584: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A580u, 0x28A588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A588u;
label_28a588:
    // 0x28a588: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a58c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a590: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a594: 0x24a5af08  addiu       $a1, $a1, -0x50F8
    ctx->pc = 0x28a594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946568));
    // 0x28a598: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A598u;
    SET_GPR_U32(ctx, 31, 0x28A5A0u);
    ctx->pc = 0x28A59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A598u;
    // 0x28a59c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A598u, 0x28A5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5A0u;
label_28a5a0:
    // 0x28a5a0: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a5a4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a5a8: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a5ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a5acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5b4: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A5B4u;
    SET_GPR_U32(ctx, 31, 0x28A5BCu);
    ctx->pc = 0x28A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5B4u;
    // 0x28a5b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A5B4u, 0x28A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5BCu;
label_28a5bc:
    // 0x28a5bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a5c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a5c4: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A5C4u;
    SET_GPR_U32(ctx, 31, 0x28A5CCu);
    ctx->pc = 0x28A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5C4u;
    // 0x28a5c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A5C4u, 0x28A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5CCu;
label_28a5cc:
    // 0x28a5cc: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A5CCu;
    SET_GPR_U32(ctx, 31, 0x28A5D4u);
    ctx->pc = 0x28A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5CCu;
    // 0x28a5d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A5CCu, 0x28A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5D4u;
label_28a5d4:
    // 0x28a5d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a5e0: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A5E0u;
    SET_GPR_U32(ctx, 31, 0x28A5E8u);
    ctx->pc = 0x28A5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A5E0u;
    // 0x28a5e4: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A5E0u, 0x28A5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A5E8u;
label_28a5e8:
    // 0x28a5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a5ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A5F0u;
        // 0x28a5f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A5F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A5F8u;
}
