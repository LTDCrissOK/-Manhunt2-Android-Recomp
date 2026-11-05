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

// Function: sub_003D87A0
// Address: 0x3d87a0 - 0x3d8830
void sub_003D87A0_0x3d87a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D87A0_0x3d87a0");
#endif

    switch (ctx->pc) {
        case 0x3d8824u: goto label_3d8824;
        default: break;
    }

    ctx->pc = 0x3d87a0u;

    // 0x3d87a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d87a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d87a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d87a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d87a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d87a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d87ac: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3d87acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3d87b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d87b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d87b4: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D87B4u;
    {
        const bool branch_taken_0x3d87b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D87B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D87B4u;
        // 0x3d87b8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d87b4) {
            ctx->pc = 0x3D87C4u;
            goto label_3d87c4;
        }
    }
    ctx->pc = 0x3D87BCu;
    // 0x3d87bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d87bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d87c0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3d87c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3d87c4:
    // 0x3d87c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3d87c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3d87c8: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D87C8u;
    {
        const bool branch_taken_0x3d87c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d87c8) {
            ctx->pc = 0x3D87CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D87C8u;
            // 0x3d87cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D87DCu;
            goto label_3d87dc;
        }
    }
    ctx->pc = 0x3D87D0u;
    // 0x3d87d0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d87d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d87d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3d87d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3d87d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3d87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3d87dc:
    // 0x3d87dc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D87DCu;
    {
        const bool branch_taken_0x3d87dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d87dc) {
            ctx->pc = 0x3D87E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D87DCu;
            // 0x3d87e0: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D87F0u;
            goto label_3d87f0;
        }
    }
    ctx->pc = 0x3D87E4u;
    // 0x3d87e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d87e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d87e8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3d87e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3d87ec: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3d87ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3d87f0:
    // 0x3d87f0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D87F0u;
    {
        const bool branch_taken_0x3d87f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d87f0) {
            ctx->pc = 0x3D87F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D87F0u;
            // 0x3d87f4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8804u;
            goto label_3d8804;
        }
    }
    ctx->pc = 0x3D87F8u;
    // 0x3d87f8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3d87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3d87fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3d87fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3d8800: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3d8800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3d8804:
    // 0x3d8804: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D8804u;
    {
        const bool branch_taken_0x3d8804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d8804) {
            ctx->pc = 0x3D8814u;
            goto label_3d8814;
        }
    }
    ctx->pc = 0x3D880Cu;
    // 0x3d880c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3d880cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d8810: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3d8810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3d8814:
    // 0x3d8814: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8814u;
    {
        const bool branch_taken_0x3d8814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8814u;
        // 0x3d8818: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8814) {
            ctx->pc = 0x3D8828u;
            goto label_3d8828;
        }
    }
    ctx->pc = 0x3D881Cu;
    // 0x3d881c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3D881Cu;
    SET_GPR_U32(ctx, 31, 0x3D8824u);
    ctx->pc = 0x3D8820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D881Cu;
    // 0x3d8820: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3D881Cu, 0x3D8824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8824u;
label_3d8824:
    // 0x3d8824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d8824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d8828:
    // 0x3d8828: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8828u;
        // 0x3d882c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8830u;
}
