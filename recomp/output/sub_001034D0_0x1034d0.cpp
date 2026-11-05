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

// Function: sub_001034D0
// Address: 0x1034d0 - 0x103570
void sub_001034D0_0x1034d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001034D0_0x1034d0");
#endif

    switch (ctx->pc) {
        case 0x103510u: goto label_103510;
        case 0x103524u: goto label_103524;
        default: break;
    }

    ctx->pc = 0x1034d0u;

    // 0x1034d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1034d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1034d4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1034d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1034d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1034d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1034dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1034dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1034e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1034e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1034e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1034e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1034e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034ec: 0x8c430704  lw          $v1, 0x704($v0)
    ctx->pc = 0x1034ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F0704u));
    // 0x1034f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1034f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1034f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1034f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1034f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1034f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1034fc: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1034FCu;
    {
        const bool branch_taken_0x1034fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x103500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034FCu;
        // 0x103500: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034fc) {
            ctx->pc = 0x103548u;
            goto label_103548;
        }
    }
    ctx->pc = 0x103504u;
    // 0x103504: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x103504u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x103508: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x103508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10350c: 0x0  nop
    ctx->pc = 0x10350cu;
    // NOP
label_103510:
    // 0x103510: 0x8e42070c  lw          $v0, 0x70C($s2)
    ctx->pc = 0x103510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1804)));
    // 0x103514: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x103514u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103518: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x103518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x10351c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x10351Cu;
    SET_GPR_U32(ctx, 31, 0x103524u);
    ctx->pc = 0x103520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10351Cu;
    // 0x103520: 0x8c440018  lw          $a0, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x10351Cu, 0x103524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103524u;
label_103524:
    // 0x103524: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x103524u;
    {
        const bool branch_taken_0x103524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103524) {
            ctx->pc = 0x103528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103524u;
            // 0x103528: 0x8e820704  lw          $v0, 0x704($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1796)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103538u;
            goto label_103538;
        }
    }
    ctx->pc = 0x10352Cu;
    // 0x10352c: 0x8e42070c  lw          $v0, 0x70C($s2)
    ctx->pc = 0x10352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1804)));
    // 0x103530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x103530u;
    {
        const bool branch_taken_0x103530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103530u;
        // 0x103534: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103530) {
            ctx->pc = 0x10354Cu;
            goto label_10354c;
        }
    }
    ctx->pc = 0x103538u;
label_103538:
    // 0x103538: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x103538u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x10353c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10353cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x103540: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x103540u;
    {
        const bool branch_taken_0x103540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x103544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103540u;
        // 0x103544: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103540) {
            ctx->pc = 0x103510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103510;
        }
    }
    ctx->pc = 0x103548u;
label_103548:
    // 0x103548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x103548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10354c:
    // 0x10354c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10354cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103550: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x103550u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x103554: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x103554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103558: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x103558u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10355c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10355cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103560: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x103560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x103564: 0x3e00008  jr          $ra
    ctx->pc = 0x103564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103564u;
        // 0x103568: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10356Cu;
    // 0x10356c: 0x0  nop
    ctx->pc = 0x10356cu;
    // NOP
    ctx->pc = 0x103570u;
}
