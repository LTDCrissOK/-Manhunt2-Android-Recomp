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

// Function: sub_003160A8
// Address: 0x3160a8 - 0x316118
void sub_003160A8_0x3160a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003160A8_0x3160a8");
#endif

    switch (ctx->pc) {
        case 0x3160c0u: goto label_3160c0;
        default: break;
    }

    ctx->pc = 0x3160a8u;

    // 0x3160a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3160a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3160ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3160acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3160b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3160b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3160b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3160b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3160b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3160B8u;
    SET_GPR_U32(ctx, 31, 0x3160C0u);
    ctx->pc = 0x3160BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3160B8u;
    // 0x3160bc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3160B8u, 0x3160C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3160C0u;
label_3160c0:
    // 0x3160c0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3160c4: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3160C4u;
    {
        const bool branch_taken_0x3160c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3160C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160C4u;
        // 0x3160c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160c4) {
            ctx->pc = 0x316100u;
            goto label_316100;
        }
    }
    ctx->pc = 0x3160CCu;
    // 0x3160cc: 0x82040004  lb          $a0, 0x4($s0)
    ctx->pc = 0x3160ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3160d0: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x3160d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x3160d4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3160D4u;
    {
        const bool branch_taken_0x3160d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3160D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160D4u;
        // 0x3160d8: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160d4) {
            ctx->pc = 0x3160E4u;
            goto label_3160e4;
        }
    }
    ctx->pc = 0x3160DCu;
    // 0x3160dc: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3160DCu;
    {
        const bool branch_taken_0x3160dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3160E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160DCu;
        // 0x3160e0: 0x2402004f  addiu       $v0, $zero, 0x4F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160dc) {
            ctx->pc = 0x3160ECu;
            goto label_3160ec;
        }
    }
    ctx->pc = 0x3160E4u;
label_3160e4:
    // 0x3160e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3160E4u;
    {
        const bool branch_taken_0x3160e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3160E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160E4u;
        // 0x3160e8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160e4) {
            ctx->pc = 0x316100u;
            goto label_316100;
        }
    }
    ctx->pc = 0x3160ECu;
label_3160ec:
    // 0x3160ec: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3160ECu;
    {
        const bool branch_taken_0x3160ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3160F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160ECu;
        // 0x3160f0: 0x2402006f  addiu       $v0, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160ec) {
            ctx->pc = 0x3160FCu;
            goto label_3160fc;
        }
    }
    ctx->pc = 0x3160F4u;
    // 0x3160f4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3160F4u;
    {
        const bool branch_taken_0x3160f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3160F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3160F4u;
        // 0x3160f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3160f4) {
            ctx->pc = 0x316104u;
            goto label_316104;
        }
    }
    ctx->pc = 0x3160FCu;
label_3160fc:
    // 0x3160fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x3160fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_316100:
    // 0x316100: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x316100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_316104:
    // 0x316104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x316104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316108: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x316108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31610c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31610cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x316110: 0x3e00008  jr          $ra
    ctx->pc = 0x316110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316110u;
        // 0x316114: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316118u;
}
