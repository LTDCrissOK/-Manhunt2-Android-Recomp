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

// Function: sub_003DA908
// Address: 0x3da908 - 0x3da998
void sub_003DA908_0x3da908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA908_0x3da908");
#endif

    switch (ctx->pc) {
        case 0x3da98cu: goto label_3da98c;
        default: break;
    }

    ctx->pc = 0x3da908u;

    // 0x3da908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da90c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3da90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3da910: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3da910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3da914: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3da914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3da918: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3da918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3da91c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA91Cu;
    {
        const bool branch_taken_0x3da91c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA91Cu;
        // 0x3da920: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da91c) {
            ctx->pc = 0x3DA92Cu;
            goto label_3da92c;
        }
    }
    ctx->pc = 0x3DA924u;
    // 0x3da924: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3da924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3da928: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3da928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3da92c:
    // 0x3da92c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3da92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3da930: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA930u;
    {
        const bool branch_taken_0x3da930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3da930) {
            ctx->pc = 0x3DA934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA930u;
            // 0x3da934: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA944u;
            goto label_3da944;
        }
    }
    ctx->pc = 0x3DA938u;
    // 0x3da938: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3da938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3da93c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3da93cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3da940: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3da940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3da944:
    // 0x3da944: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA944u;
    {
        const bool branch_taken_0x3da944 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3da944) {
            ctx->pc = 0x3DA948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA944u;
            // 0x3da948: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA958u;
            goto label_3da958;
        }
    }
    ctx->pc = 0x3DA94Cu;
    // 0x3da94c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3da94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3da950: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3da950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3da954: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3da954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3da958:
    // 0x3da958: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA958u;
    {
        const bool branch_taken_0x3da958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da958) {
            ctx->pc = 0x3DA95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA958u;
            // 0x3da95c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA96Cu;
            goto label_3da96c;
        }
    }
    ctx->pc = 0x3DA960u;
    // 0x3da960: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3da960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3da964: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3da964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3da968: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3da968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3da96c:
    // 0x3da96c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DA96Cu;
    {
        const bool branch_taken_0x3da96c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da96c) {
            ctx->pc = 0x3DA97Cu;
            goto label_3da97c;
        }
    }
    ctx->pc = 0x3DA974u;
    // 0x3da974: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3da974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3da978: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3da978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3da97c:
    // 0x3da97c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DA97Cu;
    {
        const bool branch_taken_0x3da97c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA97Cu;
        // 0x3da980: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da97c) {
            ctx->pc = 0x3DA990u;
            goto label_3da990;
        }
    }
    ctx->pc = 0x3DA984u;
    // 0x3da984: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DA984u;
    SET_GPR_U32(ctx, 31, 0x3DA98Cu);
    ctx->pc = 0x3DA988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA984u;
    // 0x3da988: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DA984u, 0x3DA98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA98Cu;
label_3da98c:
    // 0x3da98c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3da98cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3da990:
    // 0x3da990: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA990u;
        // 0x3da994: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA998u;
}
