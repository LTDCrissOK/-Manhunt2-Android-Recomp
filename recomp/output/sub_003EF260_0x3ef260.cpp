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

// Function: sub_003EF260
// Address: 0x3ef260 - 0x3ef2f0
void sub_003EF260_0x3ef260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EF260_0x3ef260");
#endif

    switch (ctx->pc) {
        case 0x3ef2e4u: goto label_3ef2e4;
        default: break;
    }

    ctx->pc = 0x3ef260u;

    // 0x3ef260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ef260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ef264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ef264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ef268: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ef268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ef26c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ef26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ef270: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ef270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ef274: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF274u;
    {
        const bool branch_taken_0x3ef274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3EF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF274u;
        // 0x3ef278: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef274) {
            ctx->pc = 0x3EF284u;
            goto label_3ef284;
        }
    }
    ctx->pc = 0x3EF27Cu;
    // 0x3ef27c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef280: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ef280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ef284:
    // 0x3ef284: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ef284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ef288: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF288u;
    {
        const bool branch_taken_0x3ef288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef288) {
            ctx->pc = 0x3EF28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF288u;
            // 0x3ef28c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF29Cu;
            goto label_3ef29c;
        }
    }
    ctx->pc = 0x3EF290u;
    // 0x3ef290: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef294: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ef294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ef298: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ef298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ef29c:
    // 0x3ef29c: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF29Cu;
    {
        const bool branch_taken_0x3ef29c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ef29c) {
            ctx->pc = 0x3EF2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF29Cu;
            // 0x3ef2a0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF2B0u;
            goto label_3ef2b0;
        }
    }
    ctx->pc = 0x3EF2A4u;
    // 0x3ef2a4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef2a8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ef2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ef2ac: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ef2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ef2b0:
    // 0x3ef2b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF2B0u;
    {
        const bool branch_taken_0x3ef2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef2b0) {
            ctx->pc = 0x3EF2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EF2B0u;
            // 0x3ef2b4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EF2C4u;
            goto label_3ef2c4;
        }
    }
    ctx->pc = 0x3EF2B8u;
    // 0x3ef2b8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ef2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ef2bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ef2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ef2c0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ef2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ef2c4:
    // 0x3ef2c4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3EF2C4u;
    {
        const bool branch_taken_0x3ef2c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ef2c4) {
            ctx->pc = 0x3EF2D4u;
            goto label_3ef2d4;
        }
    }
    ctx->pc = 0x3EF2CCu;
    // 0x3ef2cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ef2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ef2d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ef2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ef2d4:
    // 0x3ef2d4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3EF2D4u;
    {
        const bool branch_taken_0x3ef2d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2D4u;
        // 0x3ef2d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ef2d4) {
            ctx->pc = 0x3EF2E8u;
            goto label_3ef2e8;
        }
    }
    ctx->pc = 0x3EF2DCu;
    // 0x3ef2dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3EF2DCu;
    SET_GPR_U32(ctx, 31, 0x3EF2E4u);
    ctx->pc = 0x3EF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EF2DCu;
    // 0x3ef2e0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EF2DCu, 0x3EF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EF2E4u;
label_3ef2e4:
    // 0x3ef2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ef2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ef2e8:
    // 0x3ef2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EF2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EF2E8u;
        // 0x3ef2ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EF2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EF2F0u;
}
