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

// Function: sub_003E2610
// Address: 0x3e2610 - 0x3e2670
void sub_003E2610_0x3e2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2610_0x3e2610");
#endif

    switch (ctx->pc) {
        case 0x3e2638u: goto label_3e2638;
        case 0x3e2640u: goto label_3e2640;
        case 0x3e2648u: goto label_3e2648;
        case 0x3e265cu: goto label_3e265c;
        default: break;
    }

    ctx->pc = 0x3e2610u;

    // 0x3e2610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2614: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e261c: 0x24423378  addiu       $v0, $v0, 0x3378
    ctx->pc = 0x3e261cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13176));
    // 0x3e2620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e2624: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2628: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e2628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e262c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e262cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2630: 0xc0f899c  jal         func_3E2670
    ctx->pc = 0x3E2630u;
    SET_GPR_U32(ctx, 31, 0x3E2638u);
    ctx->pc = 0x3E2634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2630u;
    // 0x3e2634: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2670u, 0x3E2630u, 0x3E2638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2638u;
label_3e2638:
    // 0x3e2638: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x3E2638u;
    SET_GPR_U32(ctx, 31, 0x3E2640u);
    ctx->pc = 0x3E263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2638u;
    // 0x3e263c: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x3E2638u, 0x3E2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2640u;
label_3e2640:
    // 0x3e2640: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x3E2640u;
    SET_GPR_U32(ctx, 31, 0x3E2648u);
    ctx->pc = 0x3E2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2640u;
    // 0x3e2644: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x3E2640u, 0x3E2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2648u;
label_3e2648:
    // 0x3e2648: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e2648u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e264c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E264Cu;
    {
        const bool branch_taken_0x3e264c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E264Cu;
        // 0x3e2650: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e264c) {
            ctx->pc = 0x3E2660u;
            goto label_3e2660;
        }
    }
    ctx->pc = 0x3E2654u;
    // 0x3e2654: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2654u;
    SET_GPR_U32(ctx, 31, 0x3E265Cu);
    ctx->pc = 0x3E2658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2654u;
    // 0x3e2658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2654u, 0x3E265Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E265Cu;
label_3e265c:
    // 0x3e265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2660:
    // 0x3e2660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2664: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2668: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2668u;
        // 0x3e266c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2670u;
}
