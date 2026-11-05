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

// Function: sub_001384F8
// Address: 0x1384f8 - 0x1385a8
void sub_001384F8_0x1384f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001384F8_0x1384f8");
#endif

    switch (ctx->pc) {
        case 0x138544u: goto label_138544;
        case 0x138554u: goto label_138554;
        case 0x138564u: goto label_138564;
        case 0x138588u: goto label_138588;
        default: break;
    }

    ctx->pc = 0x1384f8u;

    // 0x1384f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1384f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1384fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1384fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x138500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x138504: 0x9082046c  lbu         $v0, 0x46C($a0)
    ctx->pc = 0x138504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x138508: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x138508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13850c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13850cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138514: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x138514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138518: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x138518u;
    {
        const bool branch_taken_0x138518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138518u;
        // 0x13851c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138518) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x138520u;
    // 0x138520: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x138520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x138524: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x138524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x138528: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x138528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13852c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138530: 0x8c500108  lw          $s0, 0x108($v0)
    ctx->pc = 0x138530u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x138534: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x138534u;
    {
        const bool branch_taken_0x138534 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x138538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138534u;
        // 0x138538: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138534) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x13853Cu;
    // 0x13853c: 0xc0666c2  jal         func_199B08
    ctx->pc = 0x13853Cu;
    SET_GPR_U32(ctx, 31, 0x138544u);
    ctx->pc = 0x199B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199B08u, 0x13853Cu, 0x138544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138544u;
label_138544:
    // 0x138544: 0x10500014  beq         $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x138544u;
    {
        const bool branch_taken_0x138544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x138548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138544u;
        // 0x138548: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138544) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x13854Cu;
    // 0x13854c: 0xc0666e0  jal         func_199B80
    ctx->pc = 0x13854Cu;
    SET_GPR_U32(ctx, 31, 0x138554u);
    ctx->pc = 0x199B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199B80u, 0x13854Cu, 0x138554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138554u;
label_138554:
    // 0x138554: 0x10500010  beq         $v0, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x138554u;
    {
        const bool branch_taken_0x138554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x138558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138554u;
        // 0x138558: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138554) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x13855Cu;
    // 0x13855c: 0xc0666a4  jal         func_199A90
    ctx->pc = 0x13855Cu;
    SET_GPR_U32(ctx, 31, 0x138564u);
    ctx->pc = 0x199A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A90u, 0x13855Cu, 0x138564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138564u;
label_138564:
    // 0x138564: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x138564u;
    {
        const bool branch_taken_0x138564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x138568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138564u;
        // 0x138568: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138564) {
            ctx->pc = 0x138574u;
            goto label_138574;
        }
    }
    ctx->pc = 0x13856Cu;
    // 0x13856c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13856Cu;
    {
        const bool branch_taken_0x13856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13856Cu;
        // 0x138570: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13856c) {
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x138574u;
label_138574:
    // 0x138574: 0x8c4308e4  lw          $v1, 0x8E4($v0)
    ctx->pc = 0x138574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2276)));
    // 0x138578: 0x50700007  beql        $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x138578u;
    {
        const bool branch_taken_0x138578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x138578) {
            ctx->pc = 0x13857Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138578u;
            // 0x13857c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138598u;
            goto label_138598;
        }
    }
    ctx->pc = 0x138580u;
    // 0x138580: 0xc0666fe  jal         func_199BF8
    ctx->pc = 0x138580u;
    SET_GPR_U32(ctx, 31, 0x138588u);
    ctx->pc = 0x199BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199BF8u, 0x138580u, 0x138588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138588u;
label_138588:
    // 0x138588: 0x502026  xor         $a0, $v0, $s0
    ctx->pc = 0x138588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x13858c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x13858cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x138590: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x138590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x138594: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x138594u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_138598:
    // 0x138598: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138598u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13859c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13859cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1385a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1385A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1385A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385A0u;
        // 0x1385a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1385A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1385A8u;
}
