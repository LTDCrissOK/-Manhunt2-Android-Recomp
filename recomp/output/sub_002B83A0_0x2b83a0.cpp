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

// Function: sub_002B83A0
// Address: 0x2b83a0 - 0x2b8418
void sub_002B83A0_0x2b83a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B83A0_0x2b83a0");
#endif

    switch (ctx->pc) {
        case 0x2b83b4u: goto label_2b83b4;
        case 0x2b83ccu: goto label_2b83cc;
        case 0x2b83f0u: goto label_2b83f0;
        default: break;
    }

    ctx->pc = 0x2b83a0u;

    // 0x2b83a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b83a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b83a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b83a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b83a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b83a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b83ac: 0xc0ad83a  jal         func_2B60E8
    ctx->pc = 0x2B83ACu;
    SET_GPR_U32(ctx, 31, 0x2B83B4u);
    ctx->pc = 0x2B83B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83ACu;
    // 0x2b83b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60E8u, 0x2B83ACu, 0x2B83B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83B4u;
label_2b83b4:
    // 0x2b83b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B83B4u;
    {
        const bool branch_taken_0x2b83b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b83b4) {
            ctx->pc = 0x2B83B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B83B4u;
            // 0x2b83b8: 0x8e0358f8  lw          $v1, 0x58F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B83D8u;
            goto label_2b83d8;
        }
    }
    ctx->pc = 0x2B83BCu;
    // 0x2b83bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b83bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b83c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b83c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b83c4: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B83C4u;
    SET_GPR_U32(ctx, 31, 0x2B83CCu);
    ctx->pc = 0x2B83C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83C4u;
    // 0x2b83c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B83C4u, 0x2B83CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83CCu;
label_2b83cc:
    // 0x2b83cc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b83ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b83d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B83D0u;
    {
        const bool branch_taken_0x2b83d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B83D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83D0u;
        // 0x2b83d4: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83d0) {
            ctx->pc = 0x2B8404u;
            goto label_2b8404;
        }
    }
    ctx->pc = 0x2B83D8u;
label_2b83d8:
    // 0x2b83d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b83d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b83dc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B83DCu;
    {
        const bool branch_taken_0x2b83dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B83E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83DCu;
        // 0x2b83e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83dc) {
            ctx->pc = 0x2B83FCu;
            goto label_2b83fc;
        }
    }
    ctx->pc = 0x2B83E4u;
    // 0x2b83e4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2b83e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b83e8: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B83E8u;
    SET_GPR_U32(ctx, 31, 0x2B83F0u);
    ctx->pc = 0x2B83ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B83E8u;
    // 0x2b83ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B83E8u, 0x2B83F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B83F0u;
label_2b83f0:
    // 0x2b83f0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2b83f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b83f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B83F4u;
    {
        const bool branch_taken_0x2b83f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B83F4u;
        // 0x2b83f8: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b83f4) {
            ctx->pc = 0x2B8404u;
            goto label_2b8404;
        }
    }
    ctx->pc = 0x2B83FCu;
label_2b83fc:
    // 0x2b83fc: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8400: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2b8400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b8404:
    // 0x2b8404: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b8408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b840c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b840cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8410: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8410u;
        // 0x2b8414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8418u;
}
