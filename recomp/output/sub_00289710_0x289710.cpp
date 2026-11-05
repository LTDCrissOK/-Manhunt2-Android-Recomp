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

// Function: sub_00289710
// Address: 0x289710 - 0x289790
void sub_00289710_0x289710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289710_0x289710");
#endif

    switch (ctx->pc) {
        case 0x289730u: goto label_289730;
        case 0x289748u: goto label_289748;
        case 0x289764u: goto label_289764;
        case 0x289774u: goto label_289774;
        case 0x28977cu: goto label_28977c;
        default: break;
    }

    ctx->pc = 0x289710u;

    // 0x289710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289714: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289718: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28971c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289728: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289728u;
    SET_GPR_U32(ctx, 31, 0x289730u);
    ctx->pc = 0x28972Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289728u;
    // 0x28972c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289728u, 0x289730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289730u;
label_289730:
    // 0x289730: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x289730u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x289734: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289738: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x289738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28973c: 0x24a5ae20  addiu       $a1, $a1, -0x51E0
    ctx->pc = 0x28973cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946336));
    // 0x289740: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289740u;
    SET_GPR_U32(ctx, 31, 0x289748u);
    ctx->pc = 0x289744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289740u;
    // 0x289744: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289740u, 0x289748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289748u;
label_289748:
    // 0x289748: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x289748u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28974c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28974cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289750: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x289750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x289754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28975c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28975Cu;
    SET_GPR_U32(ctx, 31, 0x289764u);
    ctx->pc = 0x289760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28975Cu;
    // 0x289760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28975Cu, 0x289764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289764u;
label_289764:
    // 0x289764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289768: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x289768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28976c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28976Cu;
    SET_GPR_U32(ctx, 31, 0x289774u);
    ctx->pc = 0x289770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28976Cu;
    // 0x289770: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28976Cu, 0x289774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289774u;
label_289774:
    // 0x289774: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x289774u;
    SET_GPR_U32(ctx, 31, 0x28977Cu);
    ctx->pc = 0x289778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289774u;
    // 0x289778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x289774u, 0x28977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28977Cu;
label_28977c:
    // 0x28977c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28977cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289780: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289784: 0x3e00008  jr          $ra
    ctx->pc = 0x289784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289784u;
        // 0x289788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28978Cu;
    // 0x28978c: 0x0  nop
    ctx->pc = 0x28978cu;
    // NOP
    ctx->pc = 0x289790u;
}
