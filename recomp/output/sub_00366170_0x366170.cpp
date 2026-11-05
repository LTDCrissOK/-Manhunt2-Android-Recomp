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

// Function: sub_00366170
// Address: 0x366170 - 0x366218
void sub_00366170_0x366170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366170_0x366170");
#endif

    switch (ctx->pc) {
        case 0x366184u: goto label_366184;
        case 0x3661bcu: goto label_3661bc;
        case 0x3661c8u: goto label_3661c8;
        case 0x3661d8u: goto label_3661d8;
        case 0x3661e4u: goto label_3661e4;
        case 0x3661f4u: goto label_3661f4;
        case 0x366200u: goto label_366200;
        default: break;
    }

    ctx->pc = 0x366170u;

    // 0x366170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x366178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36617c: 0xc0d9604  jal         func_365810
    ctx->pc = 0x36617Cu;
    SET_GPR_U32(ctx, 31, 0x366184u);
    ctx->pc = 0x365810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365810u, 0x36617Cu, 0x366184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366184u;
label_366184:
    // 0x366184: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x366184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366188: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x366188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36618c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x36618cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x366190: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x366190u;
    {
        const bool branch_taken_0x366190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366190u;
        // 0x366194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366190) {
            ctx->pc = 0x366204u;
            goto label_366204;
        }
    }
    ctx->pc = 0x366198u;
    // 0x366198: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x366198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x36619c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x36619cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3661a0: 0x24427050  addiu       $v0, $v0, 0x7050
    ctx->pc = 0x3661a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28752));
    // 0x3661a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3661a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3661a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3661a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3661ac: 0x800008  jr          $a0
    ctx->pc = 0x3661ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3661B4u: goto label_3661b4;
            case 0x3661D0u: goto label_3661d0;
            case 0x3661ECu: goto label_3661ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3661ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3661B4u;
label_3661b4:
    // 0x3661b4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3661B4u;
    SET_GPR_U32(ctx, 31, 0x3661BCu);
    ctx->pc = 0x3661B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661B4u;
    // 0x3661b8: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3661B4u, 0x3661BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661BCu;
label_3661bc:
    // 0x3661bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3661bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661c0: 0xc0d761a  jal         func_35D868
    ctx->pc = 0x3661C0u;
    SET_GPR_U32(ctx, 31, 0x3661C8u);
    ctx->pc = 0x3661C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661C0u;
    // 0x3661c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D868u, 0x3661C0u, 0x3661C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661C8u;
label_3661c8:
    // 0x3661c8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3661C8u;
    {
        const bool branch_taken_0x3661c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3661CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661C8u;
        // 0x3661cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3661c8) {
            ctx->pc = 0x366204u;
            goto label_366204;
        }
    }
    ctx->pc = 0x3661D0u;
label_3661d0:
    // 0x3661d0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3661D0u;
    SET_GPR_U32(ctx, 31, 0x3661D8u);
    ctx->pc = 0x3661D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661D0u;
    // 0x3661d4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3661D0u, 0x3661D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661D8u;
label_3661d8:
    // 0x3661d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3661d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661dc: 0xc0d8a4c  jal         func_362930
    ctx->pc = 0x3661DCu;
    SET_GPR_U32(ctx, 31, 0x3661E4u);
    ctx->pc = 0x3661E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661DCu;
    // 0x3661e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362930u, 0x3661DCu, 0x3661E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661E4u;
label_3661e4:
    // 0x3661e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3661E4u;
    {
        const bool branch_taken_0x3661e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3661E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661E4u;
        // 0x3661e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3661e4) {
            ctx->pc = 0x366204u;
            goto label_366204;
        }
    }
    ctx->pc = 0x3661ECu;
label_3661ec:
    // 0x3661ec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3661ECu;
    SET_GPR_U32(ctx, 31, 0x3661F4u);
    ctx->pc = 0x3661F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661ECu;
    // 0x3661f0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3661ECu, 0x3661F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3661F4u;
label_3661f4:
    // 0x3661f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3661f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661f8: 0xc0d8c32  jal         func_3630C8
    ctx->pc = 0x3661F8u;
    SET_GPR_U32(ctx, 31, 0x366200u);
    ctx->pc = 0x3661FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661F8u;
    // 0x3661fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3630C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3630C8u, 0x3661F8u, 0x366200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366200u;
label_366200:
    // 0x366200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x366200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_366204:
    // 0x366204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366208: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x366208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36620c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366210: 0x3e00008  jr          $ra
    ctx->pc = 0x366210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366210u;
        // 0x366214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366218u;
}
