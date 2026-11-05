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

// Function: sub_00288548
// Address: 0x288548 - 0x288600
void sub_00288548_0x288548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288548_0x288548");
#endif

    switch (ctx->pc) {
        case 0x288578u: goto label_288578;
        case 0x2885a8u: goto label_2885a8;
        case 0x2885b4u: goto label_2885b4;
        case 0x2885c8u: goto label_2885c8;
        default: break;
    }

    ctx->pc = 0x288548u;

    // 0x288548: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x288548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28854c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x288550: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x288550u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x288554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x288554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x288558: 0x8e02a430  lw          $v0, -0x5BD0($s0)
    ctx->pc = 0x288558u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA430u));
    // 0x28855c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28855cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x288560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x288560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x288564: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x288564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x288568: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x288568u;
    {
        const bool branch_taken_0x288568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28856Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288568u;
        // 0x28856c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288568) {
            ctx->pc = 0x288588u;
            goto label_288588;
        }
    }
    ctx->pc = 0x288570u;
    // 0x288570: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x288570u;
    SET_GPR_U32(ctx, 31, 0x288578u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x288570u, 0x288578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288578u;
label_288578:
    // 0x288578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x288578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28857c: 0x54430018  bnel        $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28857Cu;
    {
        const bool branch_taken_0x28857c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28857c) {
            ctx->pc = 0x288580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28857Cu;
            // 0x288580: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2885E0u;
            goto label_2885e0;
        }
    }
    ctx->pc = 0x288584u;
    // 0x288584: 0xae00a430  sw          $zero, -0x5BD0($s0)
    ctx->pc = 0x288584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294943792), GPR_U32(ctx, 0));
label_288588:
    // 0x288588: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x288588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28858c: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x28858cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x288590: 0x2442c690  addiu       $v0, $v0, -0x3970
    ctx->pc = 0x288590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952592));
    // 0x288594: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x288594u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x288598: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x288598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28859c: 0x24520060  addiu       $s2, $v0, 0x60
    ctx->pc = 0x28859cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x2885a0: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x2885a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2885a4: 0x0  nop
    ctx->pc = 0x2885a4u;
    // NOP
label_2885a8:
    // 0x2885a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2885a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885ac: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2885ACu;
    SET_GPR_U32(ctx, 31, 0x2885B4u);
    ctx->pc = 0x2885B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885ACu;
    // 0x2885b0: 0x2685aab0  addiu       $a1, $s4, -0x5550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294945456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2885ACu, 0x2885B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885B4u;
label_2885b4:
    // 0x2885b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2885B4u;
    {
        const bool branch_taken_0x2885b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2885B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885B4u;
        // 0x2885b8: 0x26644ed8  addiu       $a0, $s3, 0x4ED8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885b4) {
            ctx->pc = 0x2885CCu;
            goto label_2885cc;
        }
    }
    ctx->pc = 0x2885BCu;
    // 0x2885bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2885bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2885c0: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2885C0u;
    SET_GPR_U32(ctx, 31, 0x2885C8u);
    ctx->pc = 0x2885C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2885C0u;
    // 0x2885c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2885C0u, 0x2885C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2885C8u;
label_2885c8:
    // 0x2885c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2885c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2885cc:
    // 0x2885cc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2885ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2885d0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2885d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2885d4: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2885D4u;
    {
        const bool branch_taken_0x2885d4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2885D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885D4u;
        // 0x2885d8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2885d4) {
            ctx->pc = 0x2885A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2885a8;
        }
    }
    ctx->pc = 0x2885DCu;
    // 0x2885dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2885dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2885e0:
    // 0x2885e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2885e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2885e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2885e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2885e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2885e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2885ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2885ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2885f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2885f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2885f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2885F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2885F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2885F4u;
        // 0x2885f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2885F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2885FCu;
    // 0x2885fc: 0x0  nop
    ctx->pc = 0x2885fcu;
    // NOP
    ctx->pc = 0x288600u;
}
