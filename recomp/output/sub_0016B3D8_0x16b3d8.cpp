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

// Function: sub_0016B3D8
// Address: 0x16b3d8 - 0x16b430
void sub_0016B3D8_0x16b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B3D8_0x16b3d8");
#endif

    switch (ctx->pc) {
        case 0x16b40cu: goto label_16b40c;
        default: break;
    }

    ctx->pc = 0x16b3d8u;

    // 0x16b3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b3e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b3e8: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x16b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x16b3ec: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B3ECu;
    {
        const bool branch_taken_0x16b3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b3ec) {
            ctx->pc = 0x16B3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3ECu;
            // 0x16b3f0: 0x8e0201a4  lw          $v0, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B3FCu;
            goto label_16b3fc;
        }
    }
    ctx->pc = 0x16B3F4u;
    // 0x16b3f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16B3F4u;
    {
        const bool branch_taken_0x16b3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3F4u;
        // 0x16b3f8: 0x8e020068  lw          $v0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b3f4) {
            ctx->pc = 0x16B420u;
            goto label_16b420;
        }
    }
    ctx->pc = 0x16B3FCu;
label_16b3fc:
    // 0x16b3fc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B3FCu;
    {
        const bool branch_taken_0x16b3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16b3fc) {
            ctx->pc = 0x16B400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3FCu;
            // 0x16b400: 0x8e0301a4  lw          $v1, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B410u;
            goto label_16b410;
        }
    }
    ctx->pc = 0x16B404u;
    // 0x16b404: 0xc05b05a  jal         func_16C168
    ctx->pc = 0x16B404u;
    SET_GPR_U32(ctx, 31, 0x16B40Cu);
    ctx->pc = 0x16B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B404u;
    // 0x16b408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C168u, 0x16B404u, 0x16B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B40Cu;
label_16b40c:
    // 0x16b40c: 0x8e0301a4  lw          $v1, 0x1A4($s0)
    ctx->pc = 0x16b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
label_16b410:
    // 0x16b410: 0x8e020198  lw          $v0, 0x198($s0)
    ctx->pc = 0x16b410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x16b414: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16b414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16b418: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16b418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16b41c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_16b420:
    // 0x16b420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b428: 0x3e00008  jr          $ra
    ctx->pc = 0x16B428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B428u;
        // 0x16b42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B430u;
}
