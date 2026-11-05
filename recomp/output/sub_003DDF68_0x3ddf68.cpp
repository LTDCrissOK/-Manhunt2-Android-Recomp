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

// Function: sub_003DDF68
// Address: 0x3ddf68 - 0x3ddff8
void sub_003DDF68_0x3ddf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDF68_0x3ddf68");
#endif

    switch (ctx->pc) {
        case 0x3ddfecu: goto label_3ddfec;
        default: break;
    }

    ctx->pc = 0x3ddf68u;

    // 0x3ddf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ddf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ddf6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ddf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ddf70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ddf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ddf74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3ddf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3ddf78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ddf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ddf7c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDF7Cu;
    {
        const bool branch_taken_0x3ddf7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DDF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDF7Cu;
        // 0x3ddf80: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddf7c) {
            ctx->pc = 0x3DDF8Cu;
            goto label_3ddf8c;
        }
    }
    ctx->pc = 0x3DDF84u;
    // 0x3ddf84: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddf88: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3ddf88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ddf8c:
    // 0x3ddf8c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ddf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ddf90: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDF90u;
    {
        const bool branch_taken_0x3ddf90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddf90) {
            ctx->pc = 0x3DDF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDF90u;
            // 0x3ddf94: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDFA4u;
            goto label_3ddfa4;
        }
    }
    ctx->pc = 0x3DDF98u;
    // 0x3ddf98: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddf9c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3ddf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3ddfa0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ddfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ddfa4:
    // 0x3ddfa4: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDFA4u;
    {
        const bool branch_taken_0x3ddfa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddfa4) {
            ctx->pc = 0x3DDFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDFA4u;
            // 0x3ddfa8: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDFB8u;
            goto label_3ddfb8;
        }
    }
    ctx->pc = 0x3DDFACu;
    // 0x3ddfac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddfb0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ddfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ddfb4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3ddfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ddfb8:
    // 0x3ddfb8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDFB8u;
    {
        const bool branch_taken_0x3ddfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddfb8) {
            ctx->pc = 0x3DDFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDFB8u;
            // 0x3ddfbc: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDFCCu;
            goto label_3ddfcc;
        }
    }
    ctx->pc = 0x3DDFC0u;
    // 0x3ddfc0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3ddfc4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3ddfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3ddfc8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3ddfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ddfcc:
    // 0x3ddfcc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDFCCu;
    {
        const bool branch_taken_0x3ddfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ddfcc) {
            ctx->pc = 0x3DDFDCu;
            goto label_3ddfdc;
        }
    }
    ctx->pc = 0x3DDFD4u;
    // 0x3ddfd4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3ddfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3ddfd8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3ddfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3ddfdc:
    // 0x3ddfdc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDFDCu;
    {
        const bool branch_taken_0x3ddfdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFDCu;
        // 0x3ddfe0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ddfdc) {
            ctx->pc = 0x3DDFF0u;
            goto label_3ddff0;
        }
    }
    ctx->pc = 0x3DDFE4u;
    // 0x3ddfe4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DDFE4u;
    SET_GPR_U32(ctx, 31, 0x3DDFECu);
    ctx->pc = 0x3DDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDFE4u;
    // 0x3ddfe8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DDFE4u, 0x3DDFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDFECu;
label_3ddfec:
    // 0x3ddfec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ddfecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ddff0:
    // 0x3ddff0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDFF0u;
        // 0x3ddff4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDFF8u;
}
