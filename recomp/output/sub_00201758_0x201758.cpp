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

// Function: sub_00201758
// Address: 0x201758 - 0x2017c0
void sub_00201758_0x201758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201758_0x201758");
#endif

    switch (ctx->pc) {
        case 0x201770u: goto label_201770;
        case 0x201788u: goto label_201788;
        default: break;
    }

    ctx->pc = 0x201758u;

    // 0x201758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20175c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x201760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201764: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x201764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x201768: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x201768u;
    SET_GPR_U32(ctx, 31, 0x201770u);
    ctx->pc = 0x20176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201768u;
    // 0x20176c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x201768u, 0x201770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201770u;
label_201770:
    // 0x201770: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x201770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201774: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x201774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x201778: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x201778u;
    {
        const bool branch_taken_0x201778 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x20177Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201778u;
        // 0x20177c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201778) {
            ctx->pc = 0x2017A8u;
            goto label_2017a8;
        }
    }
    ctx->pc = 0x201780u;
    // 0x201780: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x201780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x201784: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x201784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_201788:
    // 0x201788: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x201788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20178c: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20178Cu;
    {
        const bool branch_taken_0x20178c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20178c) {
            ctx->pc = 0x201790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20178Cu;
            // 0x201790: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20179Cu;
            goto label_20179c;
        }
    }
    ctx->pc = 0x201794u;
    // 0x201794: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x201794u;
    {
        const bool branch_taken_0x201794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201794u;
        // 0x201798: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201794) {
            ctx->pc = 0x2017ACu;
            goto label_2017ac;
        }
    }
    ctx->pc = 0x20179Cu;
label_20179c:
    // 0x20179c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x20179cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2017a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2017A0u;
    {
        const bool branch_taken_0x2017a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2017A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017A0u;
        // 0x2017a4: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017a0) {
            ctx->pc = 0x201788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201788;
        }
    }
    ctx->pc = 0x2017A8u;
label_2017a8:
    // 0x2017a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2017a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2017ac:
    // 0x2017ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2017acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2017b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2017b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2017b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2017B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2017B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017B4u;
        // 0x2017b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2017B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2017BCu;
    // 0x2017bc: 0x0  nop
    ctx->pc = 0x2017bcu;
    // NOP
    ctx->pc = 0x2017c0u;
}
