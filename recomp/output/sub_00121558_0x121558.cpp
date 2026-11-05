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

// Function: sub_00121558
// Address: 0x121558 - 0x1215c8
void sub_00121558_0x121558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121558_0x121558");
#endif

    switch (ctx->pc) {
        case 0x121580u: goto label_121580;
        case 0x121590u: goto label_121590;
        case 0x1215a4u: goto label_1215a4;
        default: break;
    }

    ctx->pc = 0x121558u;

    // 0x121558: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12155c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121560: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121564: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121564u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121568: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12156c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12156cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121570: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121574: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121578: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121578u;
    SET_GPR_U32(ctx, 31, 0x121580u);
    ctx->pc = 0x12157Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121578u;
    // 0x12157c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121578u, 0x121580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121580u;
label_121580:
    // 0x121580: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121580u;
    {
        const bool branch_taken_0x121580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121580u;
        // 0x121584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121580) {
            ctx->pc = 0x1215B0u;
            goto label_1215b0;
        }
    }
    ctx->pc = 0x121588u;
    // 0x121588: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121588u;
    SET_GPR_U32(ctx, 31, 0x121590u);
    ctx->pc = 0x12158Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121588u;
    // 0x12158c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121588u, 0x121590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121590u;
label_121590:
    // 0x121590: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121590u;
    {
        const bool branch_taken_0x121590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121590u;
        // 0x121594: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121590) {
            ctx->pc = 0x1215ACu;
            goto label_1215ac;
        }
    }
    ctx->pc = 0x121598u;
    // 0x121598: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12159c: 0xc0425de  jal         func_109778
    ctx->pc = 0x12159Cu;
    SET_GPR_U32(ctx, 31, 0x1215A4u);
    ctx->pc = 0x1215A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12159Cu;
    // 0x1215a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109778u, 0x12159Cu, 0x1215A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1215A4u;
label_1215a4:
    // 0x1215a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1215A4u;
    {
        const bool branch_taken_0x1215a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1215A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215A4u;
        // 0x1215a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1215a4) {
            ctx->pc = 0x1215B4u;
            goto label_1215b4;
        }
    }
    ctx->pc = 0x1215ACu;
label_1215ac:
    // 0x1215ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1215acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1215b0:
    // 0x1215b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1215b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1215b4:
    // 0x1215b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1215b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1215b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1215b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1215bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1215bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1215c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1215C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1215C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1215C0u;
        // 0x1215c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1215C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1215C8u;
}
