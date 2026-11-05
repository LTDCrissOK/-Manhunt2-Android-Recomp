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

// Function: sub_0028A090
// Address: 0x28a090 - 0x28a110
void sub_0028A090_0x28a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A090_0x28a090");
#endif

    switch (ctx->pc) {
        case 0x28a0b0u: goto label_28a0b0;
        case 0x28a0c8u: goto label_28a0c8;
        case 0x28a0e4u: goto label_28a0e4;
        case 0x28a0f4u: goto label_28a0f4;
        case 0x28a0fcu: goto label_28a0fc;
        default: break;
    }

    ctx->pc = 0x28a090u;

    // 0x28a090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a094: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a09c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a0a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0a8: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A0A8u;
    SET_GPR_U32(ctx, 31, 0x28A0B0u);
    ctx->pc = 0x28A0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0A8u;
    // 0x28a0ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A0A8u, 0x28A0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0B0u;
label_28a0b0:
    // 0x28a0b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a0b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a0b8: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a0bc: 0x24a5aec0  addiu       $a1, $a1, -0x5140
    ctx->pc = 0x28a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946496));
    // 0x28a0c0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A0C0u;
    SET_GPR_U32(ctx, 31, 0x28A0C8u);
    ctx->pc = 0x28A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0C0u;
    // 0x28a0c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A0C0u, 0x28A0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0C8u;
label_28a0c8:
    // 0x28a0c8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a0cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a0d0: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a0d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a0d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0dc: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A0DCu;
    SET_GPR_U32(ctx, 31, 0x28A0E4u);
    ctx->pc = 0x28A0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0DCu;
    // 0x28a0e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A0DCu, 0x28A0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0E4u;
label_28a0e4:
    // 0x28a0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a0ec: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A0ECu;
    SET_GPR_U32(ctx, 31, 0x28A0F4u);
    ctx->pc = 0x28A0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0ECu;
    // 0x28a0f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A0ECu, 0x28A0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0F4u;
label_28a0f4:
    // 0x28a0f4: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A0F4u;
    SET_GPR_U32(ctx, 31, 0x28A0FCu);
    ctx->pc = 0x28A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A0F4u;
    // 0x28a0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A0F4u, 0x28A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A0FCu;
label_28a0fc:
    // 0x28a0fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a0fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a104: 0x3e00008  jr          $ra
    ctx->pc = 0x28A104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A104u;
        // 0x28a108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A10Cu;
    // 0x28a10c: 0x0  nop
    ctx->pc = 0x28a10cu;
    // NOP
    ctx->pc = 0x28a110u;
}
