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

// Function: sub_001215C8
// Address: 0x1215c8 - 0x121658
void sub_001215C8_0x1215c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001215C8_0x1215c8");
#endif

    switch (ctx->pc) {
        case 0x1215f8u: goto label_1215f8;
        case 0x121608u: goto label_121608;
        case 0x121618u: goto label_121618;
        case 0x121630u: goto label_121630;
        default: break;
    }

    ctx->pc = 0x1215c8u;

    // 0x1215c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1215c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1215cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1215ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1215d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1215d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1215d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1215d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1215d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1215dc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1215dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1215e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1215e4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1215e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1215e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1215ec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1215ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1215f0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1215F0u;
    SET_GPR_U32(ctx, 31, 0x1215F8u);
    ctx->pc = 0x1215F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1215F0u;
    // 0x1215f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1215F0u, 0x1215F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1215F8u;
label_1215f8:
    // 0x1215f8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1215F8u;
    {
        const bool branch_taken_0x1215f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215F8u;
        // 0x1215fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215f8) {
            ctx->pc = 0x12163Cu;
            goto label_12163c;
        }
    }
    ctx->pc = 0x121600u;
    // 0x121600: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121600u;
    SET_GPR_U32(ctx, 31, 0x121608u);
    ctx->pc = 0x121604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121600u;
    // 0x121604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121600u, 0x121608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121608u;
label_121608:
    // 0x121608: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x121608u;
    {
        const bool branch_taken_0x121608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121608u;
        // 0x12160c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121608) {
            ctx->pc = 0x12163Cu;
            goto label_12163c;
        }
    }
    ctx->pc = 0x121610u;
    // 0x121610: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121610u;
    SET_GPR_U32(ctx, 31, 0x121618u);
    ctx->pc = 0x121614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121610u;
    // 0x121614: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121610u, 0x121618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121618u;
label_121618:
    // 0x121618: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x121618u;
    {
        const bool branch_taken_0x121618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12161Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121618u;
        // 0x12161c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121618) {
            ctx->pc = 0x121638u;
            goto label_121638;
        }
    }
    ctx->pc = 0x121620u;
    // 0x121620: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x121620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x121624: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x121624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121628: 0xc0425fa  jal         func_1097E8
    ctx->pc = 0x121628u;
    SET_GPR_U32(ctx, 31, 0x121630u);
    ctx->pc = 0x12162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121628u;
    // 0x12162c: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1097E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1097E8u, 0x121628u, 0x121630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121630u;
label_121630:
    // 0x121630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121630u;
    {
        const bool branch_taken_0x121630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121630u;
        // 0x121634: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121630) {
            ctx->pc = 0x121640u;
            goto label_121640;
        }
    }
    ctx->pc = 0x121638u;
label_121638:
    // 0x121638: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12163c:
    // 0x12163c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12163cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121640:
    // 0x121640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121644: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121644u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121648: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x121648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12164c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12164cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121650: 0x3e00008  jr          $ra
    ctx->pc = 0x121650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121650u;
        // 0x121654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121658u;
}
