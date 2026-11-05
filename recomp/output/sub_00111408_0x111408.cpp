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

// Function: sub_00111408
// Address: 0x111408 - 0x1114b0
void sub_00111408_0x111408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111408_0x111408");
#endif

    switch (ctx->pc) {
        case 0x111440u: goto label_111440;
        case 0x11145cu: goto label_11145c;
        case 0x11146cu: goto label_11146c;
        case 0x11147cu: goto label_11147c;
        case 0x111494u: goto label_111494;
        default: break;
    }

    ctx->pc = 0x111408u;

    // 0x111408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11140c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x111410: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x111410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x111414: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x111414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x111418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11141c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x111420: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x111420u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111424: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111428: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x111428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
    // 0x11142c: 0x38500009  xori        $s0, $v0, 0x9
    ctx->pc = 0x11142cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x111430: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x111430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x111434: 0x2e100001  sltiu       $s0, $s0, 0x1
    ctx->pc = 0x111434u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x111438: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x111438u;
    SET_GPR_U32(ctx, 31, 0x111440u);
    ctx->pc = 0x11143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111438u;
    // 0x11143c: 0x50800a  movz        $s0, $v0, $s0 (Delay Slot)
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x111438u, 0x111440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111440u;
label_111440:
    // 0x111440: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x111440u;
    {
        const bool branch_taken_0x111440 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x111440) {
            ctx->pc = 0x111474u;
            goto label_111474;
        }
    }
    ctx->pc = 0x111448u;
    // 0x111448: 0x8e250294  lw          $a1, 0x294($s1)
    ctx->pc = 0x111448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 660)));
    // 0x11144c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x11144Cu;
    {
        const bool branch_taken_0x11144c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11144c) {
            ctx->pc = 0x111474u;
            goto label_111474;
        }
    }
    ctx->pc = 0x111454u;
    // 0x111454: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x111454u;
    SET_GPR_U32(ctx, 31, 0x11145Cu);
    ctx->pc = 0x111458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111454u;
    // 0x111458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x111454u, 0x11145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11145Cu;
label_11145c:
    // 0x11145c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11145Cu;
    {
        const bool branch_taken_0x11145c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11145Cu;
        // 0x111460: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11145c) {
            ctx->pc = 0x111474u;
            goto label_111474;
        }
    }
    ctx->pc = 0x111464u;
    // 0x111464: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x111464u;
    SET_GPR_U32(ctx, 31, 0x11146Cu);
    ctx->pc = 0x111468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111464u;
    // 0x111468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x111464u, 0x11146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11146Cu;
label_11146c:
    // 0x11146c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11146Cu;
    {
        const bool branch_taken_0x11146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11146Cu;
        // 0x111470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11146c) {
            ctx->pc = 0x111498u;
            goto label_111498;
        }
    }
    ctx->pc = 0x111474u;
label_111474:
    // 0x111474: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x111474u;
    SET_GPR_U32(ctx, 31, 0x11147Cu);
    ctx->pc = 0x111478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111474u;
    // 0x111478: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x111474u, 0x11147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11147Cu;
label_11147c:
    // 0x11147c: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x11147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x111480: 0xae320298  sw          $s2, 0x298($s1)
    ctx->pc = 0x111480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 18));
    // 0x111484: 0xae220294  sw          $v0, 0x294($s1)
    ctx->pc = 0x111484u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 2));
    // 0x111488: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x111488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11148c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x11148Cu;
    SET_GPR_U32(ctx, 31, 0x111494u);
    ctx->pc = 0x111490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11148Cu;
    // 0x111490: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x11148Cu, 0x111494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111494u;
label_111494:
    // 0x111494: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x111494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_111498:
    // 0x111498: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x111498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11149c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11149cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1114a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1114a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1114a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1114a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1114a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1114A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1114ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1114A8u;
        // 0x1114ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1114A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1114B0u;
}
