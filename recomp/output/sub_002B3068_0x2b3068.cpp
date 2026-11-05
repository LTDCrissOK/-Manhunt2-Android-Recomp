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

// Function: sub_002B3068
// Address: 0x2b3068 - 0x2b3108
void sub_002B3068_0x2b3068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3068_0x2b3068");
#endif

    switch (ctx->pc) {
        case 0x2b3080u: goto label_2b3080;
        case 0x2b30f0u: goto label_2b30f0;
        default: break;
    }

    ctx->pc = 0x2b3068u;

    // 0x2b3068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b306c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b3070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b3070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b3074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b3078: 0xc0eed64  jal         func_3BB590
    ctx->pc = 0x2B3078u;
    SET_GPR_U32(ctx, 31, 0x2B3080u);
    ctx->pc = 0x2B307Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3078u;
    // 0x2b307c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB590u, 0x2B3078u, 0x2B3080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3080u;
label_2b3080:
    // 0x2b3080: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b3080u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3084: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b3084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b3088: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B3088u;
    {
        const bool branch_taken_0x2b3088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3088u;
        // 0x2b308c: 0x28620004  slti        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3088) {
            ctx->pc = 0x2B30D4u;
            goto label_2b30d4;
        }
    }
    ctx->pc = 0x2B3090u;
    // 0x2b3090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B3090u;
    {
        const bool branch_taken_0x2b3090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3090u;
        // 0x2b3094: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3090) {
            ctx->pc = 0x2B30A8u;
            goto label_2b30a8;
        }
    }
    ctx->pc = 0x2B3098u;
    // 0x2b3098: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B3098u;
    {
        const bool branch_taken_0x2b3098 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3098u;
        // 0x2b309c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3098) {
            ctx->pc = 0x2B30CCu;
            goto label_2b30cc;
        }
    }
    ctx->pc = 0x2B30A0u;
    // 0x2b30a0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B30A0u;
    {
        const bool branch_taken_0x2b30a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30A0u;
        // 0x2b30a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30a0) {
            ctx->pc = 0x2B30E4u;
            goto label_2b30e4;
        }
    }
    ctx->pc = 0x2B30A8u;
label_2b30a8:
    // 0x2b30a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b30ac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B30ACu;
    {
        const bool branch_taken_0x2b30ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30ACu;
        // 0x2b30b0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30ac) {
            ctx->pc = 0x2B30C4u;
            goto label_2b30c4;
        }
    }
    ctx->pc = 0x2B30B4u;
    // 0x2b30b4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B30B4u;
    {
        const bool branch_taken_0x2b30b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30B4u;
        // 0x2b30b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30b4) {
            ctx->pc = 0x2B30DCu;
            goto label_2b30dc;
        }
    }
    ctx->pc = 0x2B30BCu;
    // 0x2b30bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2B30BCu;
    {
        const bool branch_taken_0x2b30bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30BCu;
        // 0x2b30c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30bc) {
            ctx->pc = 0x2B30E4u;
            goto label_2b30e4;
        }
    }
    ctx->pc = 0x2B30C4u;
label_2b30c4:
    // 0x2b30c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B30C4u;
    {
        const bool branch_taken_0x2b30c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30C4u;
        // 0x2b30c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30c4) {
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30CCu;
label_2b30cc:
    // 0x2b30cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B30CCu;
    {
        const bool branch_taken_0x2b30cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30CCu;
        // 0x2b30d0: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30cc) {
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30D4u;
label_2b30d4:
    // 0x2b30d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B30D4u;
    {
        const bool branch_taken_0x2b30d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B30D4u;
        // 0x2b30d8: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b30d4) {
            ctx->pc = 0x2B30E0u;
            goto label_2b30e0;
        }
    }
    ctx->pc = 0x2B30DCu;
label_2b30dc:
    // 0x2b30dc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x2b30dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b30e0:
    // 0x2b30e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b30e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b30e4:
    // 0x2b30e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b30e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30e8: 0xc0acbc4  jal         func_2B2F10
    ctx->pc = 0x2B30E8u;
    SET_GPR_U32(ctx, 31, 0x2B30F0u);
    ctx->pc = 0x2B30ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B30E8u;
    // 0x2b30ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2F10u, 0x2B30E8u, 0x2B30F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B30F0u;
label_2b30f0:
    // 0x2b30f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b30f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b30f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b30f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b30f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b30f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b30fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b30fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3100: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3100u;
        // 0x2b3104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3108u;
}
