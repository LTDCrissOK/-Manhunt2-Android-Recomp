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

// Function: sub_0028AA70
// Address: 0x28aa70 - 0x28aaf0
void sub_0028AA70_0x28aa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AA70_0x28aa70");
#endif

    switch (ctx->pc) {
        case 0x28aa90u: goto label_28aa90;
        case 0x28aaa8u: goto label_28aaa8;
        case 0x28aac4u: goto label_28aac4;
        case 0x28aad4u: goto label_28aad4;
        case 0x28aadcu: goto label_28aadc;
        default: break;
    }

    ctx->pc = 0x28aa70u;

    // 0x28aa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28aa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28aa74: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28aa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28aa78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28aa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28aa7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28aa7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28aa84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28aa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aa88: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28AA88u;
    SET_GPR_U32(ctx, 31, 0x28AA90u);
    ctx->pc = 0x28AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AA88u;
    // 0x28aa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28AA88u, 0x28AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AA90u;
label_28aa90:
    // 0x28aa90: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28aa94: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28aa98: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28aa9c: 0x24a5af50  addiu       $a1, $a1, -0x50B0
    ctx->pc = 0x28aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946640));
    // 0x28aaa0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28AAA0u;
    SET_GPR_U32(ctx, 31, 0x28AAA8u);
    ctx->pc = 0x28AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAA0u;
    // 0x28aaa4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28AAA0u, 0x28AAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAA8u;
label_28aaa8:
    // 0x28aaa8: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28aaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28aaac: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28aaacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28aab0: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28aab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28aab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28aab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aabc: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28AABCu;
    SET_GPR_U32(ctx, 31, 0x28AAC4u);
    ctx->pc = 0x28AAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AABCu;
    // 0x28aac0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28AABCu, 0x28AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAC4u;
label_28aac4:
    // 0x28aac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28aac8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28aacc: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28AACCu;
    SET_GPR_U32(ctx, 31, 0x28AAD4u);
    ctx->pc = 0x28AAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AACCu;
    // 0x28aad0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28AACCu, 0x28AAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AAD4u;
label_28aad4:
    // 0x28aad4: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28AAD4u;
    SET_GPR_U32(ctx, 31, 0x28AADCu);
    ctx->pc = 0x28AAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AAD4u;
    // 0x28aad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28AAD4u, 0x28AADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AADCu;
label_28aadc:
    // 0x28aadc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28aadcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28aae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28aae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28aae4: 0x3e00008  jr          $ra
    ctx->pc = 0x28AAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AAE4u;
        // 0x28aae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AAECu;
    // 0x28aaec: 0x0  nop
    ctx->pc = 0x28aaecu;
    // NOP
    ctx->pc = 0x28aaf0u;
}
