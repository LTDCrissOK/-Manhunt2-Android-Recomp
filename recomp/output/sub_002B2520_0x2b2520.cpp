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

// Function: sub_002B2520
// Address: 0x2b2520 - 0x2b25c0
void sub_002B2520_0x2b2520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2520_0x2b2520");
#endif

    switch (ctx->pc) {
        case 0x2b2558u: goto label_2b2558;
        case 0x2b2574u: goto label_2b2574;
        case 0x2b2580u: goto label_2b2580;
        default: break;
    }

    ctx->pc = 0x2b2520u;

    // 0x2b2520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b2524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2528: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b252c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b252cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2530: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b2534: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b2534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2538: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b2538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b253c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b253cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2540: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b2540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b2544: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b2544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b2548: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B2548u;
    {
        const bool branch_taken_0x2b2548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B254Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2548u;
        // 0x2b254c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2548) {
            ctx->pc = 0x2B25A0u;
            goto label_2b25a0;
        }
    }
    ctx->pc = 0x2B2550u;
    // 0x2b2550: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2b2550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2b2554: 0x0  nop
    ctx->pc = 0x2b2554u;
    // NOP
label_2b2558:
    // 0x2b2558: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2b2558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2b255c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b255cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b2560: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b2560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b2564: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2B2564u;
    {
        const bool branch_taken_0x2b2564 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2564) {
            ctx->pc = 0x2B2568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2564u;
            // 0x2b2568: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2590u;
            goto label_2b2590;
        }
    }
    ctx->pc = 0x2B256Cu;
    // 0x2b256c: 0xc083bae  jal         func_20EEB8
    ctx->pc = 0x2B256Cu;
    SET_GPR_U32(ctx, 31, 0x2B2574u);
    ctx->pc = 0x20EEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EEB8u, 0x2B256Cu, 0x2B2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2574u;
label_2b2574:
    // 0x2b2574: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2b2574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b2578: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B2578u;
    SET_GPR_U32(ctx, 31, 0x2B2580u);
    ctx->pc = 0x2B257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2578u;
    // 0x2b257c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B2578u, 0x2B2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2580u;
label_2b2580:
    // 0x2b2580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b2580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2584: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2b2584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b2588: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x2b2588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x2b258c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b258cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b2590:
    // 0x2b2590: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b2594: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2b2594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b2598: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2B2598u;
    {
        const bool branch_taken_0x2b2598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2598) {
            ctx->pc = 0x2B259Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2598u;
            // 0x2b259c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2558;
        }
    }
    ctx->pc = 0x2B25A0u;
label_2b25a0:
    // 0x2b25a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b25a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b25a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b25a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b25a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b25ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b25acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b25b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b25b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b25b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b25b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b25b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B25B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25B8u;
        // 0x2b25bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B25B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B25C0u;
}
