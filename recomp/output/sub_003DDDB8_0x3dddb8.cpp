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

// Function: sub_003DDDB8
// Address: 0x3dddb8 - 0x3dde48
void sub_003DDDB8_0x3dddb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DDDB8_0x3dddb8");
#endif

    switch (ctx->pc) {
        case 0x3dde3cu: goto label_3dde3c;
        default: break;
    }

    ctx->pc = 0x3dddb8u;

    // 0x3dddb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dddb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dddbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dddbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dddc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3dddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3dddc4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3dddc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3dddc8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3dddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3dddcc: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDDCCu;
    {
        const bool branch_taken_0x3dddcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3DDDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDDCCu;
        // 0x3dddd0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dddcc) {
            ctx->pc = 0x3DDDDCu;
            goto label_3ddddc;
        }
    }
    ctx->pc = 0x3DDDD4u;
    // 0x3dddd4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dddd8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3dddd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3ddddc:
    // 0x3ddddc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3ddddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ddde0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDDE0u;
    {
        const bool branch_taken_0x3ddde0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ddde0) {
            ctx->pc = 0x3DDDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDDE0u;
            // 0x3ddde4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDDF4u;
            goto label_3dddf4;
        }
    }
    ctx->pc = 0x3DDDE8u;
    // 0x3ddde8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3ddde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dddec: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3dddecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3dddf0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3dddf4:
    // 0x3dddf4: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDDF4u;
    {
        const bool branch_taken_0x3dddf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dddf4) {
            ctx->pc = 0x3DDDF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDDF4u;
            // 0x3dddf8: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDE08u;
            goto label_3dde08;
        }
    }
    ctx->pc = 0x3DDDFCu;
    // 0x3dddfc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dde00: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3dde00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3dde04: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3dde04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3dde08:
    // 0x3dde08: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDE08u;
    {
        const bool branch_taken_0x3dde08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dde08) {
            ctx->pc = 0x3DDE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DDE08u;
            // 0x3dde0c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DDE1Cu;
            goto label_3dde1c;
        }
    }
    ctx->pc = 0x3DDE10u;
    // 0x3dde10: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3dde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3dde14: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3dde14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3dde18: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3dde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3dde1c:
    // 0x3dde1c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DDE1Cu;
    {
        const bool branch_taken_0x3dde1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dde1c) {
            ctx->pc = 0x3DDE2Cu;
            goto label_3dde2c;
        }
    }
    ctx->pc = 0x3DDE24u;
    // 0x3dde24: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3dde24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3dde28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3dde28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3dde2c:
    // 0x3dde2c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DDE2Cu;
    {
        const bool branch_taken_0x3dde2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DDE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE2Cu;
        // 0x3dde30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dde2c) {
            ctx->pc = 0x3DDE40u;
            goto label_3dde40;
        }
    }
    ctx->pc = 0x3DDE34u;
    // 0x3dde34: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DDE34u;
    SET_GPR_U32(ctx, 31, 0x3DDE3Cu);
    ctx->pc = 0x3DDE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DDE34u;
    // 0x3dde38: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DDE34u, 0x3DDE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DDE3Cu;
label_3dde3c:
    // 0x3dde3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dde3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3dde40:
    // 0x3dde40: 0x3e00008  jr          $ra
    ctx->pc = 0x3DDE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DDE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DDE40u;
        // 0x3dde44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DDE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DDE48u;
}
