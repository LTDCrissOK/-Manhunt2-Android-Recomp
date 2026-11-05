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

// Function: sub_00289610
// Address: 0x289610 - 0x289690
void sub_00289610_0x289610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289610_0x289610");
#endif

    switch (ctx->pc) {
        case 0x289630u: goto label_289630;
        case 0x289648u: goto label_289648;
        case 0x289664u: goto label_289664;
        case 0x289674u: goto label_289674;
        case 0x28967cu: goto label_28967c;
        default: break;
    }

    ctx->pc = 0x289610u;

    // 0x289610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289614: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28961c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289628: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289628u;
    SET_GPR_U32(ctx, 31, 0x289630u);
    ctx->pc = 0x28962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289628u;
    // 0x28962c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289628u, 0x289630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289630u;
label_289630:
    // 0x289630: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x289630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x289634: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289638: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x289638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28963c: 0x24a5ae10  addiu       $a1, $a1, -0x51F0
    ctx->pc = 0x28963cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946320));
    // 0x289640: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289640u;
    SET_GPR_U32(ctx, 31, 0x289648u);
    ctx->pc = 0x289644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289640u;
    // 0x289644: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289640u, 0x289648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289648u;
label_289648:
    // 0x289648: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x289648u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28964c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28964cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289650: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x289650u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x289654: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28965c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28965Cu;
    SET_GPR_U32(ctx, 31, 0x289664u);
    ctx->pc = 0x289660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28965Cu;
    // 0x289660: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28965Cu, 0x289664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289664u;
label_289664:
    // 0x289664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289668: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x289668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28966c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28966Cu;
    SET_GPR_U32(ctx, 31, 0x289674u);
    ctx->pc = 0x289670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28966Cu;
    // 0x289670: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28966Cu, 0x289674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289674u;
label_289674:
    // 0x289674: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x289674u;
    SET_GPR_U32(ctx, 31, 0x28967Cu);
    ctx->pc = 0x289678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289674u;
    // 0x289678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x289674u, 0x28967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28967Cu;
label_28967c:
    // 0x28967c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28967cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289684: 0x3e00008  jr          $ra
    ctx->pc = 0x289684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289684u;
        // 0x289688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28968Cu;
    // 0x28968c: 0x0  nop
    ctx->pc = 0x28968cu;
    // NOP
    ctx->pc = 0x289690u;
}
