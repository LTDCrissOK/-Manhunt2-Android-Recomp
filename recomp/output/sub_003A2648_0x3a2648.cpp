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

// Function: sub_003A2648
// Address: 0x3a2648 - 0x3a26e8
void sub_003A2648_0x3a2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2648_0x3a2648");
#endif

    switch (ctx->pc) {
        case 0x3a2670u: goto label_3a2670;
        case 0x3a267cu: goto label_3a267c;
        case 0x3a269cu: goto label_3a269c;
        default: break;
    }

    ctx->pc = 0x3a2648u;

    // 0x3a2648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a2648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a264c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a264cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a2654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a2658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a265c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a265cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a2660: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2660u;
    {
        const bool branch_taken_0x3a2660 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2660u;
        // 0x3a2664: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2660) {
            ctx->pc = 0x3A2674u;
            goto label_3a2674;
        }
    }
    ctx->pc = 0x3A2668u;
    // 0x3a2668: 0xc0e8780  jal         func_3A1E00
    ctx->pc = 0x3A2668u;
    SET_GPR_U32(ctx, 31, 0x3A2670u);
    ctx->pc = 0x3A1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1E00u, 0x3A2668u, 0x3A2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2670u;
label_3a2670:
    // 0x3a2670: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2670u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a2674:
    // 0x3a2674: 0xc0e897e  jal         func_3A25F8
    ctx->pc = 0x3A2674u;
    SET_GPR_U32(ctx, 31, 0x3A267Cu);
    ctx->pc = 0x3A2678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2674u;
    // 0x3a2678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25F8u, 0x3A2674u, 0x3A267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A267Cu;
label_3a267c:
    // 0x3a267c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3a267cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x3a2680: 0x24726978  addiu       $s2, $v1, 0x6978
    ctx->pc = 0x3a2680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 27000));
    // 0x3a2684: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2688: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a2688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a268c: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3A268Cu;
    {
        const bool branch_taken_0x3a268c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A268Cu;
        // 0x3a2690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a268c) {
            ctx->pc = 0x3A26C8u;
            goto label_3a26c8;
        }
    }
    ctx->pc = 0x3A2694u;
    // 0x3a2694: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x3A2694u;
    SET_GPR_U32(ctx, 31, 0x3A269Cu);
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x3A2694u, 0x3A269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A269Cu;
label_3a269c:
    // 0x3a269c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a269cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a26a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a26a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a26a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a26a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a26acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a26b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3a26b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a26b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a26b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a26b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a26b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a26bc: 0x24a5d1e8  addiu       $a1, $a1, -0x2E18
    ctx->pc = 0x3a26bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955496));
    // 0x3a26c0: 0x80efefa  j           func_3BFBE8
    ctx->pc = 0x3A26C0u;
    ctx->pc = 0x3A26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A26C0u;
    // 0x3a26c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    sub_003BFBE8_0x3bfbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A26C8u;
label_3a26c8:
    // 0x3a26c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a26c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a26cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a26ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a26d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a26d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a26d4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a26d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a26d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A26D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A26D8u;
        // 0x3a26dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A26D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A26E0u;
    // 0x3a26e0: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x3a26e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x3a26e4: 0x0  nop
    ctx->pc = 0x3a26e4u;
    // NOP
    ctx->pc = 0x3a26e8u;
}
