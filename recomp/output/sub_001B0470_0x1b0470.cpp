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

// Function: sub_001B0470
// Address: 0x1b0470 - 0x1b0520
void sub_001B0470_0x1b0470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0470_0x1b0470");
#endif

    switch (ctx->pc) {
        case 0x1b049cu: goto label_1b049c;
        case 0x1b04c8u: goto label_1b04c8;
        case 0x1b04d8u: goto label_1b04d8;
        case 0x1b04f4u: goto label_1b04f4;
        default: break;
    }

    ctx->pc = 0x1b0470u;

    // 0x1b0470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b0470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b0474: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b0474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b0478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b0478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b047c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b047cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b0480: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b0480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b0484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0488: 0x8c84009c  lw          $a0, 0x9C($a0)
    ctx->pc = 0x1b0488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1b048c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B048Cu;
    {
        const bool branch_taken_0x1b048c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B048Cu;
        // 0x1b0490: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b048c) {
            ctx->pc = 0x1B04FCu;
            goto label_1b04fc;
        }
    }
    ctx->pc = 0x1B0494u;
    // 0x1b0494: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B0494u;
    SET_GPR_U32(ctx, 31, 0x1B049Cu);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B0494u, 0x1B049Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B049Cu;
label_1b049c:
    // 0x1b049c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b049cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04a0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1B04A0u;
    {
        const bool branch_taken_0x1b04a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04A0u;
        // 0x1b04a4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04a0) {
            ctx->pc = 0x1B0500u;
            goto label_1b0500;
        }
    }
    ctx->pc = 0x1B04A8u;
    // 0x1b04a8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1b04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1b04ac: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1b04acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1b04b0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1B04B0u;
    {
        const bool branch_taken_0x1b04b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04B0u;
        // 0x1b04b4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04b0) {
            ctx->pc = 0x1B0500u;
            goto label_1b0500;
        }
    }
    ctx->pc = 0x1B04B8u;
    // 0x1b04b8: 0x8e110274  lw          $s1, 0x274($s0)
    ctx->pc = 0x1b04b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x1b04bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b04bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b04c0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B04C0u;
    SET_GPR_U32(ctx, 31, 0x1B04C8u);
    ctx->pc = 0x1B04C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04C0u;
    // 0x1b04c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B04C0u, 0x1B04C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04C8u;
label_1b04c8:
    // 0x1b04c8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B04C8u;
    {
        const bool branch_taken_0x1b04c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b04c8) {
            ctx->pc = 0x1B04CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B04C8u;
            // 0x1b04cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B04D0u;
    // 0x1b04d0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1B04D0u;
    SET_GPR_U32(ctx, 31, 0x1B04D8u);
    ctx->pc = 0x1B04D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04D0u;
    // 0x1b04d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1B04D0u, 0x1B04D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04D8u;
label_1b04d8:
    // 0x1b04d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b04d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b04dc: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B04DCu;
    {
        const bool branch_taken_0x1b04dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b04dc) {
            ctx->pc = 0x1B04E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B04DCu;
            // 0x1b04e0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B04E4u;
            goto label_1b04e4;
        }
    }
    ctx->pc = 0x1B04E4u;
label_1b04e4:
    // 0x1b04e4: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B04E4u;
    {
        const bool branch_taken_0x1b04e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B04E4u;
        // 0x1b04e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b04e4) {
            ctx->pc = 0x1B04FCu;
            goto label_1b04fc;
        }
    }
    ctx->pc = 0x1B04ECu;
    // 0x1b04ec: 0xc098750  jal         func_261D40
    ctx->pc = 0x1B04ECu;
    SET_GPR_U32(ctx, 31, 0x1B04F4u);
    ctx->pc = 0x1B04F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B04ECu;
    // 0x1b04f0: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261D40u, 0x1B04ECu, 0x1B04F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B04F4u;
label_1b04f4:
    // 0x1b04f4: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x1b04f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x1b04f8: 0x43980b  movn        $s3, $v0, $v1
    ctx->pc = 0x1b04f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_1b04fc:
    // 0x1b04fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b04fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b0500:
    // 0x1b0500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b0500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b0504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b0508: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b0508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b050c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b050cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b0510: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0514: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0514u;
        // 0x1b0518: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B051Cu;
    // 0x1b051c: 0x0  nop
    ctx->pc = 0x1b051cu;
    // NOP
    ctx->pc = 0x1b0520u;
}
