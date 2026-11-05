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

// Function: sub_00131400
// Address: 0x131400 - 0x131490
void sub_00131400_0x131400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131400_0x131400");
#endif

    switch (ctx->pc) {
        case 0x131418u: goto label_131418;
        case 0x13145cu: goto label_13145c;
        case 0x13146cu: goto label_13146c;
        case 0x13147cu: goto label_13147c;
        default: break;
    }

    ctx->pc = 0x131400u;

    // 0x131400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131408: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x131408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13140c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13140cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131410: 0xc043920  jal         func_10E480
    ctx->pc = 0x131410u;
    SET_GPR_U32(ctx, 31, 0x131418u);
    ctx->pc = 0x131414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131410u;
    // 0x131414: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131410u, 0x131418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131418u;
label_131418:
    // 0x131418: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x131418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13141c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x13141Cu;
    {
        const bool branch_taken_0x13141c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13141Cu;
        // 0x131420: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13141c) {
            ctx->pc = 0x13147Cu;
            goto label_13147c;
        }
    }
    ctx->pc = 0x131424u;
    // 0x131424: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x131424u;
    {
        const bool branch_taken_0x131424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x131428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131424u;
        // 0x131428: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131424) {
            ctx->pc = 0x131464u;
            goto label_131464;
        }
    }
    ctx->pc = 0x13142Cu;
    // 0x13142c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13142Cu;
    {
        const bool branch_taken_0x13142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13142c) {
            ctx->pc = 0x131430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13142Cu;
            // 0x131430: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131444u;
            goto label_131444;
        }
    }
    ctx->pc = 0x131434u;
    // 0x131434: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x131434u;
    {
        const bool branch_taken_0x131434 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x131438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131434u;
        // 0x131438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131434) {
            ctx->pc = 0x131454u;
            goto label_131454;
        }
    }
    ctx->pc = 0x13143Cu;
    // 0x13143c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x13143Cu;
    {
        const bool branch_taken_0x13143c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13143Cu;
        // 0x131440: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13143c) {
            ctx->pc = 0x131484u;
            goto label_131484;
        }
    }
    ctx->pc = 0x131444u;
label_131444:
    // 0x131444: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x131444u;
    {
        const bool branch_taken_0x131444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x131448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131444u;
        // 0x131448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131444) {
            ctx->pc = 0x131474u;
            goto label_131474;
        }
    }
    ctx->pc = 0x13144Cu;
    // 0x13144c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13144Cu;
    {
        const bool branch_taken_0x13144c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13144Cu;
        // 0x131450: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13144c) {
            ctx->pc = 0x131484u;
            goto label_131484;
        }
    }
    ctx->pc = 0x131454u;
label_131454:
    // 0x131454: 0xc095354  jal         func_254D50
    ctx->pc = 0x131454u;
    SET_GPR_U32(ctx, 31, 0x13145Cu);
    ctx->pc = 0x254D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D50u, 0x131454u, 0x13145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13145Cu;
label_13145c:
    // 0x13145c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13145Cu;
    {
        const bool branch_taken_0x13145c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13145Cu;
        // 0x131460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13145c) {
            ctx->pc = 0x131480u;
            goto label_131480;
        }
    }
    ctx->pc = 0x131464u;
label_131464:
    // 0x131464: 0xc09535a  jal         func_254D68
    ctx->pc = 0x131464u;
    SET_GPR_U32(ctx, 31, 0x13146Cu);
    ctx->pc = 0x254D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D68u, 0x131464u, 0x13146Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13146Cu;
label_13146c:
    // 0x13146c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13146Cu;
    {
        const bool branch_taken_0x13146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13146Cu;
        // 0x131470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13146c) {
            ctx->pc = 0x131480u;
            goto label_131480;
        }
    }
    ctx->pc = 0x131474u;
label_131474:
    // 0x131474: 0xc095360  jal         func_254D80
    ctx->pc = 0x131474u;
    SET_GPR_U32(ctx, 31, 0x13147Cu);
    ctx->pc = 0x254D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D80u, 0x131474u, 0x13147Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13147Cu;
label_13147c:
    // 0x13147c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13147cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131480:
    // 0x131480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_131484:
    // 0x131484: 0x3e00008  jr          $ra
    ctx->pc = 0x131484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131484u;
        // 0x131488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13148Cu;
    // 0x13148c: 0x0  nop
    ctx->pc = 0x13148cu;
    // NOP
    ctx->pc = 0x131490u;
}
