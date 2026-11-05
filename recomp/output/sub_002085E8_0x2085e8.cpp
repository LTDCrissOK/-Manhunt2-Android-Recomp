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

// Function: sub_002085E8
// Address: 0x2085e8 - 0x208668
void sub_002085E8_0x2085e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002085E8_0x2085e8");
#endif

    switch (ctx->pc) {
        case 0x208618u: goto label_208618;
        case 0x208624u: goto label_208624;
        default: break;
    }

    ctx->pc = 0x2085e8u;

    // 0x2085e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2085e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2085ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2085ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2085f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2085f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2085f4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2085f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2085f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2085fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2085fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208600: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x208604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x208608: 0x8e42175c  lw          $v0, 0x175C($s2)
    ctx->pc = 0x208608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5980)));
    // 0x20860c: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20860Cu;
    {
        const bool branch_taken_0x20860c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x208610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20860Cu;
        // 0x208610: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20860c) {
            ctx->pc = 0x208644u;
            goto label_208644;
        }
    }
    ctx->pc = 0x208614u;
    // 0x208614: 0x2651001c  addiu       $s1, $s2, 0x1C
    ctx->pc = 0x208614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_208618:
    // 0x208618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x208618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20861c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x20861Cu;
    SET_GPR_U32(ctx, 31, 0x208624u);
    ctx->pc = 0x208620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20861Cu;
    // 0x208620: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x20861Cu, 0x208624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208624u;
label_208624:
    // 0x208624: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x208624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x208628: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208628u;
    {
        const bool branch_taken_0x208628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208628u;
        // 0x20862c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208628) {
            ctx->pc = 0x208648u;
            goto label_208648;
        }
    }
    ctx->pc = 0x208630u;
    // 0x208630: 0x8e42175c  lw          $v0, 0x175C($s2)
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5980)));
    // 0x208634: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x208634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x208638: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x208638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20863c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x20863Cu;
    {
        const bool branch_taken_0x20863c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20863Cu;
        // 0x208640: 0x263100f8  addiu       $s1, $s1, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20863c) {
            ctx->pc = 0x208618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208618;
        }
    }
    ctx->pc = 0x208644u;
label_208644:
    // 0x208644: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_208648:
    // 0x208648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x208648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20864c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20864cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x208650: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x208650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x208654: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x208654u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x208658: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x208658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20865c: 0x3e00008  jr          $ra
    ctx->pc = 0x20865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20865Cu;
        // 0x208660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208664u;
    // 0x208664: 0x0  nop
    ctx->pc = 0x208664u;
    // NOP
    ctx->pc = 0x208668u;
}
