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

// Function: sub_002B25C0
// Address: 0x2b25c0 - 0x2b2668
void sub_002B25C0_0x2b25c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B25C0_0x2b25c0");
#endif

    switch (ctx->pc) {
        case 0x2b25f0u: goto label_2b25f0;
        case 0x2b260cu: goto label_2b260c;
        default: break;
    }

    ctx->pc = 0x2b25c0u;

    // 0x2b25c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b25c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b25c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b25c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b25c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b25c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b25cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b25ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b25d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b25d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b25d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b25d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b25dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b25dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b25e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b25e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B25E4u;
    {
        const bool branch_taken_0x2b25e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B25E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25E4u;
        // 0x2b25e8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25e4) {
            ctx->pc = 0x2B263Cu;
            goto label_2b263c;
        }
    }
    ctx->pc = 0x2B25ECu;
    // 0x2b25ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2b25ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2b25f0:
    // 0x2b25f0: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2b25f0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2b25f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2b25f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b25f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b25fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B25FCu;
    {
        const bool branch_taken_0x2b25fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25FCu;
        // 0x2b2600: 0x244400f8  addiu       $a0, $v0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b25fc) {
            ctx->pc = 0x2B2628u;
            goto label_2b2628;
        }
    }
    ctx->pc = 0x2B2604u;
    // 0x2b2604: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2B2604u;
    SET_GPR_U32(ctx, 31, 0x2B260Cu);
    ctx->pc = 0x2B2608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2604u;
    // 0x2b2608: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2B2604u, 0x2B260Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B260Cu;
label_2b260c:
    // 0x2b260c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2b260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b2610: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B2610u;
    {
        const bool branch_taken_0x2b2610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2610) {
            ctx->pc = 0x2B2614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2610u;
            // 0x2b2614: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B262Cu;
            goto label_2b262c;
        }
    }
    ctx->pc = 0x2B2618u;
    // 0x2b2618: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2b2618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2b261c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2b2620: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B2620u;
    {
        const bool branch_taken_0x2b2620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2620u;
        // 0x2b2624: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2620) {
            ctx->pc = 0x2B2640u;
            goto label_2b2640;
        }
    }
    ctx->pc = 0x2B2628u;
label_2b2628:
    // 0x2b2628: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b2628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b262c:
    // 0x2b262c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b262cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b2630: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2b2630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b2634: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B2634u;
    {
        const bool branch_taken_0x2b2634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b2634) {
            ctx->pc = 0x2B2638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2634u;
            // 0x2b2638: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B25F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b25f0;
        }
    }
    ctx->pc = 0x2B263Cu;
label_2b263c:
    // 0x2b263c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b263cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b2640:
    // 0x2b2640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b2640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b2644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b2648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b2648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b264c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b264cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b2650: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b2650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2654: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2654u;
        // 0x2b2658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B265Cu;
    // 0x2b265c: 0x0  nop
    ctx->pc = 0x2b265cu;
    // NOP
    // 0x2b2660: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b2660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b2664: 0x0  nop
    ctx->pc = 0x2b2664u;
    // NOP
    ctx->pc = 0x2b2668u;
}
