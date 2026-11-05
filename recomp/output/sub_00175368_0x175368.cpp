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

// Function: sub_00175368
// Address: 0x175368 - 0x1753d8
void sub_00175368_0x175368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175368_0x175368");
#endif

    switch (ctx->pc) {
        case 0x175390u: goto label_175390;
        case 0x1753ccu: goto label_1753cc;
        default: break;
    }

    ctx->pc = 0x175368u;

    // 0x175368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17536c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175370: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x175370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x175374: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x175374u;
    {
        const bool branch_taken_0x175374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175374u;
        // 0x175378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175374) {
            ctx->pc = 0x1753CCu;
            goto label_1753cc;
        }
    }
    ctx->pc = 0x17537Cu;
    // 0x17537c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x175380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175384: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x175384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175388: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x175388u;
    {
        const bool branch_taken_0x175388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17538Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175388u;
        // 0x17538c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175388) {
            ctx->pc = 0x1753B0u;
            goto label_1753b0;
        }
    }
    ctx->pc = 0x175390u;
label_175390:
    // 0x175390: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x175390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x175394: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x175394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x175398: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x175398u;
    {
        const bool branch_taken_0x175398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175398) {
            ctx->pc = 0x17539Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175398u;
            // 0x17539c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1753C4u;
            goto label_1753c4;
        }
    }
    ctx->pc = 0x1753A0u;
    // 0x1753a0: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x1753a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x1753a4: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1753A4u;
    {
        const bool branch_taken_0x1753a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1753A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753A4u;
        // 0x1753a8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1753a4) {
            ctx->pc = 0x1753CCu;
            goto label_1753cc;
        }
    }
    ctx->pc = 0x1753ACu;
    // 0x1753ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1753acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1753b0:
    // 0x1753b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1753b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1753b4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1753B4u;
    {
        const bool branch_taken_0x1753b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753b4) {
            ctx->pc = 0x1753B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1753B4u;
            // 0x1753b8: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x175390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175390;
        }
    }
    ctx->pc = 0x1753BCu;
    // 0x1753bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1753bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1753c0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1753c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1753c4:
    // 0x1753c4: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x1753C4u;
    SET_GPR_U32(ctx, 31, 0x1753CCu);
    ctx->pc = 0x1753C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1753C4u;
    // 0x1753c8: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x1753C4u, 0x1753CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753CCu;
label_1753cc:
    // 0x1753cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1753ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1753d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1753D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1753D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1753D0u;
        // 0x1753d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1753D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1753D8u;
}
