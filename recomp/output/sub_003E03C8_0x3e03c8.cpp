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

// Function: sub_003E03C8
// Address: 0x3e03c8 - 0x3e0450
void sub_003E03C8_0x3e03c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E03C8_0x3e03c8");
#endif

    switch (ctx->pc) {
        case 0x3e03fcu: goto label_3e03fc;
        case 0x3e0410u: goto label_3e0410;
        case 0x3e0424u: goto label_3e0424;
        default: break;
    }

    ctx->pc = 0x3e03c8u;

    // 0x3e03c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e03c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e03cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e03ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e03d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e03d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e03d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e03d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e03d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e03d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e03dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e03dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e03e0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e03e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e03e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e03e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e03e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3e03e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e03ec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3e03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3e03f0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3e03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3e03f4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3E03F4u;
    SET_GPR_U32(ctx, 31, 0x3E03FCu);
    ctx->pc = 0x3E03F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E03F4u;
    // 0x3e03f8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3E03F4u, 0x3E03FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E03FCu;
label_3e03fc:
    // 0x3e03fc: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x3e03fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3e0400: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e0400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0404: 0x2129823  subu        $s3, $s0, $s2
    ctx->pc = 0x3e0404u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3e0408: 0xc0f80d8  jal         func_3E0360
    ctx->pc = 0x3E0408u;
    SET_GPR_U32(ctx, 31, 0x3E0410u);
    ctx->pc = 0x3E040Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E0408u;
    // 0x3e040c: 0x26650001  addiu       $a1, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0360u, 0x3E0408u, 0x3E0410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0410u;
label_3e0410:
    // 0x3e0410: 0x12120005  beq         $s0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E0410u;
    {
        const bool branch_taken_0x3e0410 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x3E0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0410u;
        // 0x3e0414: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0410) {
            ctx->pc = 0x3E0428u;
            goto label_3e0428;
        }
    }
    ctx->pc = 0x3E0418u;
    // 0x3e0418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3e0418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e041c: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x3E041Cu;
    SET_GPR_U32(ctx, 31, 0x3E0424u);
    ctx->pc = 0x3E0420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E041Cu;
    // 0x3e0420: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x3E041Cu, 0x3E0424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0424u;
label_3e0424:
    // 0x3e0424: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3e0424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3e0428:
    // 0x3e0428: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x3e0428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x3e042c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3e042cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e0430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e0434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e0434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e0438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e0438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e043c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e043cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e0440: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e0440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e0444: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x3e0444u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3e0448: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0448u;
        // 0x3e044c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0450u;
}
