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

// Function: sub_0016B368
// Address: 0x16b368 - 0x16b3d8
void sub_0016B368_0x16b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B368_0x16b368");
#endif

    switch (ctx->pc) {
        case 0x16b38cu: goto label_16b38c;
        case 0x16b3a0u: goto label_16b3a0;
        default: break;
    }

    ctx->pc = 0x16b368u;

    // 0x16b368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b36c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16b36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b370: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16b370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16b374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16b374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b378: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x16b378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x16b37c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16B37Cu;
    {
        const bool branch_taken_0x16b37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b37c) {
            ctx->pc = 0x16B398u;
            goto label_16b398;
        }
    }
    ctx->pc = 0x16B384u;
    // 0x16b384: 0xc05ae28  jal         func_16B8A0
    ctx->pc = 0x16B384u;
    SET_GPR_U32(ctx, 31, 0x16B38Cu);
    ctx->pc = 0x16B8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8A0u, 0x16B384u, 0x16B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B38Cu;
label_16b38c:
    // 0x16b38c: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x16b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x16b390: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x16B390u;
    {
        const bool branch_taken_0x16b390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b390) {
            ctx->pc = 0x16B394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B390u;
            // 0x16b394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B3C8u;
            goto label_16b3c8;
        }
    }
    ctx->pc = 0x16B398u;
label_16b398:
    // 0x16b398: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16B398u;
    SET_GPR_U32(ctx, 31, 0x16B3A0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16B398u, 0x16B3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B3A0u;
label_16b3a0:
    // 0x16b3a0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x16b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x16b3a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16b3a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16b3a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16B3A8u;
    {
        const bool branch_taken_0x16b3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b3a8) {
            ctx->pc = 0x16B3ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B3A8u;
            // 0x16b3ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B3B0u;
            goto label_16b3b0;
        }
    }
    ctx->pc = 0x16B3B0u;
label_16b3b0:
    // 0x16b3b0: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x16b3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x16b3b4: 0x2010  mfhi        $a0
    ctx->pc = 0x16b3b4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16b3b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x16b3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b3bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16b3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16b3c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16b3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16b3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16b3c8:
    // 0x16b3c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16b3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16b3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x16B3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B3CCu;
        // 0x16b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B3CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B3D4u;
    // 0x16b3d4: 0x0  nop
    ctx->pc = 0x16b3d4u;
    // NOP
    ctx->pc = 0x16b3d8u;
}
