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

// Function: sub_0016A498
// Address: 0x16a498 - 0x16a520
void sub_0016A498_0x16a498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A498_0x16a498");
#endif

    switch (ctx->pc) {
        case 0x16a4c4u: goto label_16a4c4;
        case 0x16a4e0u: goto label_16a4e0;
        case 0x16a4fcu: goto label_16a4fc;
        case 0x16a50cu: goto label_16a50c;
        default: break;
    }

    ctx->pc = 0x16a498u;

    // 0x16a498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a49c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a4a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a4a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a4a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a4ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a4b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x16a4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16a4b4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A4B4u;
    {
        const bool branch_taken_0x16a4b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4B4u;
        // 0x16a4b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4b4) {
            ctx->pc = 0x16A4CCu;
            goto label_16a4cc;
        }
    }
    ctx->pc = 0x16A4BCu;
    // 0x16a4bc: 0xc05ad0c  jal         func_16B430
    ctx->pc = 0x16A4BCu;
    SET_GPR_U32(ctx, 31, 0x16A4C4u);
    ctx->pc = 0x16B430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B430u, 0x16A4BCu, 0x16A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4C4u;
label_16a4c4:
    // 0x16a4c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16A4C4u;
    {
        const bool branch_taken_0x16a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4C4u;
        // 0x16a4c8: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4c4) {
            ctx->pc = 0x16A4E4u;
            goto label_16a4e4;
        }
    }
    ctx->pc = 0x16A4CCu;
label_16a4cc:
    // 0x16a4cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a4d0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16A4D0u;
    {
        const bool branch_taken_0x16a4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4D0u;
        // 0x16a4d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4d0) {
            ctx->pc = 0x16A504u;
            goto label_16a504;
        }
    }
    ctx->pc = 0x16A4D8u;
    // 0x16a4d8: 0xc05afe2  jal         func_16BF88
    ctx->pc = 0x16A4D8u;
    SET_GPR_U32(ctx, 31, 0x16A4E0u);
    ctx->pc = 0x16A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4D8u;
    // 0x16a4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF88u, 0x16A4D8u, 0x16A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4E0u;
label_16a4e0:
    // 0x16a4e0: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x16a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_16a4e4:
    // 0x16a4e4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A4E4u;
    {
        const bool branch_taken_0x16a4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a4e4) {
            ctx->pc = 0x16A4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A4E4u;
            // 0x16a4e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A504u;
            goto label_16a504;
        }
    }
    ctx->pc = 0x16A4ECu;
    // 0x16a4ec: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A4ECu;
    {
        const bool branch_taken_0x16a4ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4ECu;
        // 0x16a4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4ec) {
            ctx->pc = 0x16A510u;
            goto label_16a510;
        }
    }
    ctx->pc = 0x16A4F4u;
    // 0x16a4f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16A4F4u;
    SET_GPR_U32(ctx, 31, 0x16A4FCu);
    ctx->pc = 0x16A4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A4F4u;
    // 0x16a4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16A4F4u, 0x16A4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A4FCu;
label_16a4fc:
    // 0x16a4fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A4FCu;
    {
        const bool branch_taken_0x16a4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A4FCu;
        // 0x16a500: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a4fc) {
            ctx->pc = 0x16A510u;
            goto label_16a510;
        }
    }
    ctx->pc = 0x16A504u;
label_16a504:
    // 0x16a504: 0xc05ab50  jal         func_16AD40
    ctx->pc = 0x16A504u;
    SET_GPR_U32(ctx, 31, 0x16A50Cu);
    ctx->pc = 0x16A508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A504u;
    // 0x16a508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AD40u, 0x16A504u, 0x16A50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A50Cu;
label_16a50c:
    // 0x16a50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a510:
    // 0x16a510: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a518: 0x3e00008  jr          $ra
    ctx->pc = 0x16A518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A518u;
        // 0x16a51c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A520u;
}
