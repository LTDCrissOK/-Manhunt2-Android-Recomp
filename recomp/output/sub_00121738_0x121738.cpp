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

// Function: sub_00121738
// Address: 0x121738 - 0x1217a8
void sub_00121738_0x121738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121738_0x121738");
#endif

    switch (ctx->pc) {
        case 0x121760u: goto label_121760;
        case 0x121770u: goto label_121770;
        case 0x121784u: goto label_121784;
        default: break;
    }

    ctx->pc = 0x121738u;

    // 0x121738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12173c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12173cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121740: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121744: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121748: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12174c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12174cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121750: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121754: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121758: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121758u;
    SET_GPR_U32(ctx, 31, 0x121760u);
    ctx->pc = 0x12175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121758u;
    // 0x12175c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121758u, 0x121760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121760u;
label_121760:
    // 0x121760: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121760u;
    {
        const bool branch_taken_0x121760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121760u;
        // 0x121764: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121760) {
            ctx->pc = 0x121790u;
            goto label_121790;
        }
    }
    ctx->pc = 0x121768u;
    // 0x121768: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121768u;
    SET_GPR_U32(ctx, 31, 0x121770u);
    ctx->pc = 0x12176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121768u;
    // 0x12176c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121768u, 0x121770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121770u;
label_121770:
    // 0x121770: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121770u;
    {
        const bool branch_taken_0x121770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121770u;
        // 0x121774: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121770) {
            ctx->pc = 0x12178Cu;
            goto label_12178c;
        }
    }
    ctx->pc = 0x121778u;
    // 0x121778: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12177c: 0xc042714  jal         func_109C50
    ctx->pc = 0x12177Cu;
    SET_GPR_U32(ctx, 31, 0x121784u);
    ctx->pc = 0x121780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12177Cu;
    // 0x121780: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109C50u, 0x12177Cu, 0x121784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121784u;
label_121784:
    // 0x121784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121784u;
    {
        const bool branch_taken_0x121784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121784u;
        // 0x121788: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121784) {
            ctx->pc = 0x121794u;
            goto label_121794;
        }
    }
    ctx->pc = 0x12178Cu;
label_12178c:
    // 0x12178c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12178cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_121790:
    // 0x121790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121794:
    // 0x121794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x121794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121798: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x121798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12179c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12179cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1217a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1217A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1217A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1217A0u;
        // 0x1217a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1217A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1217A8u;
}
