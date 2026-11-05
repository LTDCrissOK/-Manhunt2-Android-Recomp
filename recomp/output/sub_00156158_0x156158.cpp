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

// Function: sub_00156158
// Address: 0x156158 - 0x1561bc
void sub_00156158_0x156158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156158_0x156158");
#endif

    switch (ctx->pc) {
        case 0x156170u: goto label_156170;
        case 0x1561b4u: goto label_1561b4;
        default: break;
    }

    ctx->pc = 0x156158u;

    // 0x156158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15615c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15615cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156160: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x156160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x156164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156168: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x156168u;
    SET_GPR_U32(ctx, 31, 0x156170u);
    ctx->pc = 0x15616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156168u;
    // 0x15616c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x156168u, 0x156170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156170u;
label_156170:
    // 0x156170: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x156174: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x156174u;
    {
        const bool branch_taken_0x156174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x156178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156174u;
        // 0x156178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156174) {
            ctx->pc = 0x1561D0u;
            return;
        }
    }
    ctx->pc = 0x15617Cu;
    // 0x15617c: 0x8e020520  lw          $v0, 0x520($s0)
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1312)));
    // 0x156180: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x156184: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x156184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x156188: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x156188u;
    {
        const bool branch_taken_0x156188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156188u;
        // 0x15618c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156188) {
            ctx->pc = 0x1561CCu;
            return;
        }
    }
    ctx->pc = 0x156190u;
    // 0x156190: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x156190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156194: 0x2442ece0  addiu       $v0, $v0, -0x1320
    ctx->pc = 0x156194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962400));
    // 0x156198: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x156198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15619c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15619cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1561a0: 0x800008  jr          $a0
    ctx->pc = 0x1561A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1561A8u: goto label_1561a8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1561A8u;
label_1561a8:
    // 0x1561a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1561ac: 0xc04da5c  jal         func_136970
    ctx->pc = 0x1561ACu;
    SET_GPR_U32(ctx, 31, 0x1561B4u);
    ctx->pc = 0x1561B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561ACu;
    // 0x1561b0: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x1561ACu, 0x1561B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1561B4u;
label_1561b4:
    // 0x1561b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1561B4u;
    {
        const bool branch_taken_0x1561b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561B4u;
        // 0x1561b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561b4) {
            ctx->pc = 0x1561D0u;
            return;
        }
    }
    ctx->pc = 0x1561BCu;
}
