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

// Function: sub_003E1828
// Address: 0x3e1828 - 0x3e18b8
void sub_003E1828_0x3e1828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1828_0x3e1828");
#endif

    switch (ctx->pc) {
        case 0x3e18acu: goto label_3e18ac;
        default: break;
    }

    ctx->pc = 0x3e1828u;

    // 0x3e1828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e182c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e1830: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e1834: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3e1834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e1838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3e1838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3e183c: 0x14a30003  bne         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E183Cu;
    {
        const bool branch_taken_0x3e183c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E1840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E183Cu;
        // 0x3e1840: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e183c) {
            ctx->pc = 0x3E184Cu;
            goto label_3e184c;
        }
    }
    ctx->pc = 0x3E1844u;
    // 0x3e1844: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3e1844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3e1848: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3e1848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_3e184c:
    // 0x3e184c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3e184cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e1850: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1850u;
    {
        const bool branch_taken_0x3e1850 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1850) {
            ctx->pc = 0x3E1854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1850u;
            // 0x3e1854: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1864u;
            goto label_3e1864;
        }
    }
    ctx->pc = 0x3E1858u;
    // 0x3e1858: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3e1858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3e185c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3e185cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x3e1860: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3e1864:
    // 0x3e1864: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1864u;
    {
        const bool branch_taken_0x3e1864 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3e1864) {
            ctx->pc = 0x3E1868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1864u;
            // 0x3e1868: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E1878u;
            goto label_3e1878;
        }
    }
    ctx->pc = 0x3E186Cu;
    // 0x3e186c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e1870: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e1870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e1874: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3e1874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3e1878:
    // 0x3e1878: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1878u;
    {
        const bool branch_taken_0x3e1878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e1878) {
            ctx->pc = 0x3E187Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E1878u;
            // 0x3e187c: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E188Cu;
            goto label_3e188c;
        }
    }
    ctx->pc = 0x3E1880u;
    // 0x3e1880: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3e1880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3e1884: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3e1884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x3e1888: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x3e1888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3e188c:
    // 0x3e188c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E188Cu;
    {
        const bool branch_taken_0x3e188c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e188c) {
            ctx->pc = 0x3E189Cu;
            goto label_3e189c;
        }
    }
    ctx->pc = 0x3E1894u;
    // 0x3e1894: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3e1894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3e1898: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3e1898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_3e189c:
    // 0x3e189c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E189Cu;
    {
        const bool branch_taken_0x3e189c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E18A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E189Cu;
        // 0x3e18a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e189c) {
            ctx->pc = 0x3E18B0u;
            goto label_3e18b0;
        }
    }
    ctx->pc = 0x3E18A4u;
    // 0x3e18a4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E18A4u;
    SET_GPR_U32(ctx, 31, 0x3E18ACu);
    ctx->pc = 0x3E18A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E18A4u;
    // 0x3e18a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E18A4u, 0x3E18ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E18ACu;
label_3e18ac:
    // 0x3e18ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e18acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e18b0:
    // 0x3e18b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E18B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E18B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E18B0u;
        // 0x3e18b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E18B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E18B8u;
}
