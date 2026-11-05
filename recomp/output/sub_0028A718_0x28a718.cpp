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

// Function: sub_0028A718
// Address: 0x28a718 - 0x28a7a8
void sub_0028A718_0x28a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A718_0x28a718");
#endif

    switch (ctx->pc) {
        case 0x28a738u: goto label_28a738;
        case 0x28a750u: goto label_28a750;
        case 0x28a76cu: goto label_28a76c;
        case 0x28a77cu: goto label_28a77c;
        case 0x28a784u: goto label_28a784;
        case 0x28a798u: goto label_28a798;
        default: break;
    }

    ctx->pc = 0x28a718u;

    // 0x28a718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a71c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a71cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a724: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a728: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a72c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a72cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a730: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A730u;
    SET_GPR_U32(ctx, 31, 0x28A738u);
    ctx->pc = 0x28A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A730u;
    // 0x28a734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A730u, 0x28A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A738u;
label_28a738:
    // 0x28a738: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x28a738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x28a73c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a740: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x28a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28a744: 0x24a5af20  addiu       $a1, $a1, -0x50E0
    ctx->pc = 0x28a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946592));
    // 0x28a748: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x28A748u;
    SET_GPR_U32(ctx, 31, 0x28A750u);
    ctx->pc = 0x28A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A748u;
    // 0x28a74c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x28A748u, 0x28A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A750u;
label_28a750:
    // 0x28a750: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a750u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a754: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28a754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a758: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a75c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28a75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a764: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28A764u;
    SET_GPR_U32(ctx, 31, 0x28A76Cu);
    ctx->pc = 0x28A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A764u;
    // 0x28a768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28A764u, 0x28A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A76Cu;
label_28a76c:
    // 0x28a76c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a770: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28a770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28a774: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A774u;
    SET_GPR_U32(ctx, 31, 0x28A77Cu);
    ctx->pc = 0x28A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A774u;
    // 0x28a778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A774u, 0x28A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A77Cu;
label_28a77c:
    // 0x28a77c: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A77Cu;
    SET_GPR_U32(ctx, 31, 0x28A784u);
    ctx->pc = 0x28A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A77Cu;
    // 0x28a780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A77Cu, 0x28A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A784u;
label_28a784:
    // 0x28a784: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28a78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a790: 0xc0dadb8  jal         func_36B6E0
    ctx->pc = 0x28A790u;
    SET_GPR_U32(ctx, 31, 0x28A798u);
    ctx->pc = 0x28A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A790u;
    // 0x28a794: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B6E0u, 0x28A790u, 0x28A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A798u;
label_28a798:
    // 0x28a798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a79c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a7a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A7A0u;
        // 0x28a7a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A7A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A7A8u;
}
