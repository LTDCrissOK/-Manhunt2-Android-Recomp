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

// Function: sub_003EF530
// Address: 0x3ef530 - 0x3ef5f0
void sub_003EF530_0x3ef530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF530_0x3ef530");
#endif

    switch (ctx->pc) {
        case 0x3ef5b4u: goto label_3ef5b4;
        default: break;
    }

    ctx->pc = 0x3ef530u;

    // 0x3ef530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef538: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef53c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef540: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef544: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF544u;
    {
        const bool branch_taken_0x3ef544 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF544u;
        // 0x3ef548: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef544) {
            ctx->pc = 0x3EF554u;
            goto label_3ef554;
        }
    }
    ctx->pc = 0x3EF54Cu;
    // 0x3ef54c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef550: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef554:
    // 0x3ef554: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef558: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF558u;
    {
        const bool branch_taken_0x3ef558 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef558) {
            ctx->pc = 0x3EF55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF558u;
            // 0x3ef55c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF56Cu;
            goto label_3ef56c;
        }
    }
    ctx->pc = 0x3EF560u;
    // 0x3ef560: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef564: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef564u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef568: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef56c:
    // 0x3ef56c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF56Cu;
    {
        const bool branch_taken_0x3ef56c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef56c) {
            ctx->pc = 0x3EF570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF56Cu;
            // 0x3ef570: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF580u;
            goto label_3ef580;
        }
    }
    ctx->pc = 0x3EF574u;
    // 0x3ef574: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef578: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef57c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef580:
    // 0x3ef580: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF580u;
    {
        const bool branch_taken_0x3ef580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef580) {
            ctx->pc = 0x3EF584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF580u;
            // 0x3ef584: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF594u;
            goto label_3ef594;
        }
    }
    ctx->pc = 0x3EF588u;
    // 0x3ef588: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef58c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef58cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef590: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef594:
    // 0x3ef594: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF594u;
    {
        const bool branch_taken_0x3ef594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef594) {
            ctx->pc = 0x3EF5A4u;
            goto label_3ef5a4;
        }
    }
    ctx->pc = 0x3EF59Cu;
    // 0x3ef59c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef5a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef5a4:
    // 0x3ef5a4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF5A4u;
    {
        const bool branch_taken_0x3ef5a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5A4u;
        // 0x3ef5a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef5a4) {
            ctx->pc = 0x3EF5B8u;
            goto label_3ef5b8;
        }
    }
    ctx->pc = 0x3EF5ACu;
    // 0x3ef5ac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF5ACu;
    SET_GPR_U32(ctx, 31, 0x3EF5B4u);
    ctx->pc = 0x3EF5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF5ACu;
    // 0x3ef5b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF5ACu, 0x3EF5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF5B4u;
label_3ef5b4:
    // 0x3ef5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef5b8:
    // 0x3ef5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF5B8u;
        // 0x3ef5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF5C0u;
    // 0x3ef5c0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x3ef5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x3ef5c4: 0x0  nop
    ctx->pc = 0x3ef5c4u;
    // NOP
    // 0x3ef5c8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3ef5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ef5cc: 0x0  nop
    ctx->pc = 0x3ef5ccu;
    // NOP
    // 0x3ef5d0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3ef5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3ef5d4: 0x0  nop
    ctx->pc = 0x3ef5d4u;
    // NOP
    // 0x3ef5d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ef5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ef5dc: 0x0  nop
    ctx->pc = 0x3ef5dcu;
    // NOP
    // 0x3ef5e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ef5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ef5e4: 0x0  nop
    ctx->pc = 0x3ef5e4u;
    // NOP
    // 0x3ef5e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3ef5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3ef5ec: 0x0  nop
    ctx->pc = 0x3ef5ecu;
    // NOP
    ctx->pc = 0x3ef5f0u;
}
