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

// Function: sub_001CF738
// Address: 0x1cf738 - 0x1cf7b8
void sub_001CF738_0x1cf738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF738_0x1cf738");
#endif

    switch (ctx->pc) {
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        default: break;
    }

    ctx->pc = 0x1cf738u;

label_1cf738:
    // 0x1cf738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cf73c:
    // 0x1cf73c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1cf740:
    // 0x1cf740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cf744:
    // 0x1cf744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cf748:
    // 0x1cf748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf74c:
    // 0x1cf74c: 0x8c628a78  lw          $v0, -0x7588($v1)
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937208)));
label_1cf750:
    // 0x1cf750: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1cf750u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cf754:
    // 0x1cf754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cf758:
    // 0x1cf758: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1cf75c:
    if (ctx->pc == 0x1CF75Cu) {
        ctx->pc = 0x1CF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF758u;
        // 0x1cf75c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF760u;
        goto label_1cf760;
    }
    ctx->pc = 0x1CF758u;
    {
        const bool branch_taken_0x1cf758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF758u;
        // 0x1cf75c: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf758) {
            ctx->pc = 0x1CF794u;
            goto label_1cf794;
        }
    }
    ctx->pc = 0x1CF760u;
label_1cf760:
    // 0x1cf760: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1cf764:
    // 0x1cf764: 0x24508a80  addiu       $s0, $v0, -0x7580
    ctx->pc = 0x1cf764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937216));
label_1cf768:
    // 0x1cf768: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cf768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cf76c:
    // 0x1cf76c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1cf770:
    if (ctx->pc == 0x1CF770u) {
        ctx->pc = 0x1CF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF76Cu;
        // 0x1cf770: 0x8e428a78  lw          $v0, -0x7588($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF774u;
        goto label_1cf774;
    }
    ctx->pc = 0x1CF76Cu;
    {
        const bool branch_taken_0x1cf76c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF76Cu;
        // 0x1cf770: 0x8e428a78  lw          $v0, -0x7588($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf76c) {
            ctx->pc = 0x1CF788u;
            goto label_1cf788;
        }
    }
    ctx->pc = 0x1CF774u;
label_1cf774:
    // 0x1cf774: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_1cf778:
    // 0x1cf778: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1cf778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1cf77c:
    // 0x1cf77c: 0x40f809  jalr        $v0
label_1cf780:
    if (ctx->pc == 0x1CF780u) {
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF784u;
        goto label_1cf784;
    }
    ctx->pc = 0x1CF77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CF784u);
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF77Cu, 0x1CF784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CF784u;
label_1cf784:
    // 0x1cf784: 0x8e428a78  lw          $v0, -0x7588($s2)
    ctx->pc = 0x1cf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937208)));
label_1cf788:
    // 0x1cf788: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cf78c:
    // 0x1cf78c: 0x1622fff6  bne         $s1, $v0, . + 4 + (-0xA << 2)
label_1cf790:
    if (ctx->pc == 0x1CF790u) {
        ctx->pc = 0x1CF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF78Cu;
        // 0x1cf790: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF794u;
        goto label_1cf794;
    }
    ctx->pc = 0x1CF78Cu;
    {
        const bool branch_taken_0x1cf78c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF78Cu;
        // 0x1cf790: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf78c) {
            ctx->pc = 0x1CF768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf768;
        }
    }
    ctx->pc = 0x1CF794u;
label_1cf794:
    // 0x1cf794: 0xae408a78  sw          $zero, -0x7588($s2)
    ctx->pc = 0x1cf794u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294937208), GPR_U32(ctx, 0));
label_1cf798:
    // 0x1cf798: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cf79c:
    // 0x1cf79c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf79cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cf7a0:
    // 0x1cf7a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf7a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cf7a4:
    // 0x1cf7a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cf7a8:
    // 0x1cf7a8: 0x3e00008  jr          $ra
label_1cf7ac:
    if (ctx->pc == 0x1CF7ACu) {
        ctx->pc = 0x1CF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A8u;
        // 0x1cf7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CF7B0u;
        goto label_1cf7b0;
    }
    ctx->pc = 0x1CF7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7A8u;
        // 0x1cf7ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF7B0u;
label_1cf7b0:
    // 0x1cf7b0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1cf7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_1cf7b4:
    // 0x1cf7b4: 0x0  nop
    ctx->pc = 0x1cf7b4u;
    // NOP
    ctx->pc = 0x1cf7b8u;
}
