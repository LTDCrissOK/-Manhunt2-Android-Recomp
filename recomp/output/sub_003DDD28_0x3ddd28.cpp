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

// Function: sub_003DDD28
// Address: 0x3ddd28 - 0x3dddb8
void sub_003DDD28_0x3ddd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDD28_0x3ddd28");
#endif

    switch (ctx->pc) {
        case 0x3dddacu: goto label_3dddac;
        default: break;
    }

    ctx->pc = 0x3ddd28u;

    // 0x3ddd28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ddd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ddd2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ddd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ddd30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddd34: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ddd34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ddd38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ddd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ddd3c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDD3Cu;
    {
        const bool branch_taken_0x3ddd3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD3Cu;
        // 0x3ddd40: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd3c) {
            ctx->pc = 0x3DDD4Cu;
            goto label_3ddd4c;
        }
    }
    ctx->pc = 0x3DDD44u;
    // 0x3ddd44: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddd48: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ddd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ddd4c:
    // 0x3ddd4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ddd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ddd50: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDD50u;
    {
        const bool branch_taken_0x3ddd50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddd50) {
            ctx->pc = 0x3DDD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDD50u;
            // 0x3ddd54: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDD64u;
            goto label_3ddd64;
        }
    }
    ctx->pc = 0x3DDD58u;
    // 0x3ddd58: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddd5c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ddd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ddd60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ddd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ddd64:
    // 0x3ddd64: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDD64u;
    {
        const bool branch_taken_0x3ddd64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddd64) {
            ctx->pc = 0x3DDD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDD64u;
            // 0x3ddd68: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDD78u;
            goto label_3ddd78;
        }
    }
    ctx->pc = 0x3DDD6Cu;
    // 0x3ddd6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddd70: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ddd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ddd74: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ddd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ddd78:
    // 0x3ddd78: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDD78u;
    {
        const bool branch_taken_0x3ddd78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddd78) {
            ctx->pc = 0x3DDD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDD78u;
            // 0x3ddd7c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDD8Cu;
            goto label_3ddd8c;
        }
    }
    ctx->pc = 0x3DDD80u;
    // 0x3ddd80: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddd84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ddd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ddd88: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ddd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ddd8c:
    // 0x3ddd8c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDD8Cu;
    {
        const bool branch_taken_0x3ddd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddd8c) {
            ctx->pc = 0x3DDD9Cu;
            goto label_3ddd9c;
        }
    }
    ctx->pc = 0x3DDD94u;
    // 0x3ddd94: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddd98: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ddd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ddd9c:
    // 0x3ddd9c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDD9Cu;
    {
        const bool branch_taken_0x3ddd9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDD9Cu;
        // 0x3ddda0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddd9c) {
            ctx->pc = 0x3DDDB0u;
            goto label_3dddb0;
        }
    }
    ctx->pc = 0x3DDDA4u;
    // 0x3ddda4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DDDA4u;
    SET_GPR_U32(ctx, 31, 0x3DDDACu);
    ctx->pc = 0x3DDDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDDA4u;
    // 0x3ddda8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DDDA4u, 0x3DDDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDDACu;
label_3dddac:
    // 0x3dddac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dddb0:
    // 0x3dddb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDDB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDB0u;
        // 0x3dddb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDDB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDDB8u;
}
