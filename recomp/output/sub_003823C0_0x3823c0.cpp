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

// Function: sub_003823C0
// Address: 0x3823c0 - 0x382470
void sub_003823C0_0x3823c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003823C0_0x3823c0");
#endif

    switch (ctx->pc) {
        case 0x3823c0u: goto label_3823c0;
        case 0x3823c4u: goto label_3823c4;
        case 0x3823c8u: goto label_3823c8;
        case 0x3823ccu: goto label_3823cc;
        case 0x3823d0u: goto label_3823d0;
        case 0x3823d4u: goto label_3823d4;
        case 0x3823d8u: goto label_3823d8;
        case 0x3823dcu: goto label_3823dc;
        case 0x3823e0u: goto label_3823e0;
        case 0x3823e4u: goto label_3823e4;
        case 0x3823e8u: goto label_3823e8;
        case 0x3823ecu: goto label_3823ec;
        case 0x3823f0u: goto label_3823f0;
        case 0x3823f4u: goto label_3823f4;
        case 0x3823f8u: goto label_3823f8;
        case 0x3823fcu: goto label_3823fc;
        case 0x382400u: goto label_382400;
        case 0x382404u: goto label_382404;
        case 0x382408u: goto label_382408;
        case 0x38240cu: goto label_38240c;
        case 0x382410u: goto label_382410;
        case 0x382414u: goto label_382414;
        case 0x382418u: goto label_382418;
        case 0x38241cu: goto label_38241c;
        case 0x382420u: goto label_382420;
        case 0x382424u: goto label_382424;
        case 0x382428u: goto label_382428;
        case 0x38242cu: goto label_38242c;
        case 0x382430u: goto label_382430;
        case 0x382434u: goto label_382434;
        case 0x382438u: goto label_382438;
        case 0x38243cu: goto label_38243c;
        case 0x382440u: goto label_382440;
        case 0x382444u: goto label_382444;
        case 0x382448u: goto label_382448;
        case 0x38244cu: goto label_38244c;
        case 0x382450u: goto label_382450;
        case 0x382454u: goto label_382454;
        case 0x382458u: goto label_382458;
        case 0x38245cu: goto label_38245c;
        case 0x382460u: goto label_382460;
        case 0x382464u: goto label_382464;
        case 0x382468u: goto label_382468;
        case 0x38246cu: goto label_38246c;
        default: break;
    }

    ctx->pc = 0x3823c0u;

label_3823c0:
    // 0x3823c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3823c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3823c4:
    // 0x3823c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3823c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3823c8:
    // 0x3823c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3823c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3823cc:
    // 0x3823cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3823ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3823d0:
    // 0x3823d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3823d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3823d4:
    // 0x3823d4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_3823d8:
    if (ctx->pc == 0x3823D8u) {
        ctx->pc = 0x3823D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823D4u;
        // 0x3823d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823DCu;
        goto label_3823dc;
    }
    ctx->pc = 0x3823D4u;
    {
        const bool branch_taken_0x3823d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3823D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823D4u;
        // 0x3823d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3823d4) {
            ctx->pc = 0x3823E4u;
            goto label_3823e4;
        }
    }
    ctx->pc = 0x3823DCu;
label_3823dc:
    // 0x3823dc: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x3823dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_3823e0:
    // 0x3823e0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3823e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3823e4:
    // 0x3823e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3823e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3823e8:
    // 0x3823e8: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x3823e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_3823ec:
    // 0x3823ec: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3823ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_3823f0:
    // 0x3823f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_3823f4:
    if (ctx->pc == 0x3823F4u) {
        ctx->pc = 0x3823F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3823F0u;
        // 0x3823f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3823F8u;
        goto label_3823f8;
    }
    ctx->pc = 0x3823F0u;
    {
        const bool branch_taken_0x3823f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3823f0) {
            ctx->pc = 0x3823F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3823F0u;
            // 0x3823f4: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38240Cu;
            goto label_38240c;
        }
    }
    ctx->pc = 0x3823F8u;
label_3823f8:
    // 0x3823f8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x3823f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_3823fc:
    // 0x3823fc: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3823fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_382400:
    // 0x382400: 0x40f809  jalr        $v0
label_382404:
    if (ctx->pc == 0x382404u) {
        ctx->pc = 0x382404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382400u;
        // 0x382404: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382408u;
        goto label_382408;
    }
    ctx->pc = 0x382400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x382408u);
        ctx->pc = 0x382404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382400u;
        // 0x382404: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382400u, 0x382408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382408u;
label_382408:
    // 0x382408: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x382408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38240c:
    // 0x38240c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x38240cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_382410:
    // 0x382410: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_382414:
    if (ctx->pc == 0x382414u) {
        ctx->pc = 0x382414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382410u;
        // 0x382414: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382418u;
        goto label_382418;
    }
    ctx->pc = 0x382410u;
    {
        const bool branch_taken_0x382410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x382410) {
            ctx->pc = 0x382414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382410u;
            // 0x382414: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382428u;
            goto label_382428;
        }
    }
    ctx->pc = 0x382418u;
label_382418:
    // 0x382418: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x382418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_38241c:
    // 0x38241c: 0xc0e0b78  jal         func_382DE0
label_382420:
    if (ctx->pc == 0x382420u) {
        ctx->pc = 0x382420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38241Cu;
        // 0x382420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382424u;
        goto label_382424;
    }
    ctx->pc = 0x38241Cu;
    SET_GPR_U32(ctx, 31, 0x382424u);
    ctx->pc = 0x382420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38241Cu;
    // 0x382420: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382DE0u, 0x38241Cu, 0x382424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382424u;
label_382424:
    // 0x382424: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x382424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_382428:
    // 0x382428: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x382428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_38242c:
    // 0x38242c: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x38242cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
label_382430:
    // 0x382430: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x382430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_382434:
    // 0x382434: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x382434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_382438:
    // 0x382438: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x382438u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
label_38243c:
    // 0x38243c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_382440:
    if (ctx->pc == 0x382440u) {
        ctx->pc = 0x382440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38243Cu;
        // 0x382440: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382444u;
        goto label_382444;
    }
    ctx->pc = 0x38243Cu;
    {
        const bool branch_taken_0x38243c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38243Cu;
        // 0x382440: 0xae020038  sw          $v0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38243c) {
            ctx->pc = 0x38245Cu;
            goto label_38245c;
        }
    }
    ctx->pc = 0x382444u;
label_382444:
    // 0x382444: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x382444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_382448:
    // 0x382448: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x382448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38244c:
    // 0x38244c: 0x60f809  jalr        $v1
label_382450:
    if (ctx->pc == 0x382450u) {
        ctx->pc = 0x382450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38244Cu;
        // 0x382450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382454u;
        goto label_382454;
    }
    ctx->pc = 0x38244Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x382454u);
        ctx->pc = 0x382450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38244Cu;
        // 0x382450: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38244Cu, 0x382454u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x382454u;
label_382454:
    // 0x382454: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x382454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
label_382458:
    // 0x382458: 0xfe220038  sd          $v0, 0x38($s1)
    ctx->pc = 0x382458u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 2));
label_38245c:
    // 0x38245c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x38245cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_382460:
    // 0x382460: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x382460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382464:
    // 0x382464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_382468:
    // 0x382468: 0x3e00008  jr          $ra
label_38246c:
    if (ctx->pc == 0x38246Cu) {
        ctx->pc = 0x38246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382468u;
        // 0x38246c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382470u;
        goto label_fallthrough_0x382468;
    }
    ctx->pc = 0x382468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38246Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382468u;
        // 0x38246c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x382468:
    ctx->pc = 0x382470u;
}
