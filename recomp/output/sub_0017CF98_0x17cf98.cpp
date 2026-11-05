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

// Function: sub_0017CF98
// Address: 0x17cf98 - 0x17d018
void sub_0017CF98_0x17cf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CF98_0x17cf98");
#endif

    switch (ctx->pc) {
        case 0x17cfe4u: goto label_17cfe4;
        default: break;
    }

    ctx->pc = 0x17cf98u;

    // 0x17cf98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cf98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cf9c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17cfa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17cfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cfa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17cfa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17cfa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17cfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17cfb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17cfb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17cfb8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17cfb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cfbc: 0x1242000f  beq         $s2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17CFBCu;
    {
        const bool branch_taken_0x17cfbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x17CFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFBCu;
        // 0x17cfc0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfbc) {
            ctx->pc = 0x17CFFCu;
            goto label_17cffc;
        }
    }
    ctx->pc = 0x17CFC4u;
    // 0x17cfc4: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17CFC4u;
    {
        const bool branch_taken_0x17cfc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x17cfc4) {
            ctx->pc = 0x17CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17CFC4u;
            // 0x17cfc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17D000u;
            goto label_17d000;
        }
    }
    ctx->pc = 0x17CFCCu;
    // 0x17cfcc: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x17cfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x17cfd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17CFD0u;
    {
        const bool branch_taken_0x17cfd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CFD0u;
        // 0x17cfd4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17cfd0) {
            ctx->pc = 0x17CFE4u;
            goto label_17cfe4;
        }
    }
    ctx->pc = 0x17CFD8u;
    // 0x17cfd8: 0x8e22a9d4  lw          $v0, -0x562C($s1)
    ctx->pc = 0x17cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945236)));
    // 0x17cfdc: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17CFDCu;
    SET_GPR_U32(ctx, 31, 0x17CFE4u);
    ctx->pc = 0x17CFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17CFDCu;
    // 0x17cfe0: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17CFDCu, 0x17CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17CFE4u;
label_17cfe4:
    // 0x17cfe4: 0x8e22a9d4  lw          $v0, -0x562C($s1)
    ctx->pc = 0x17cfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945236)));
    // 0x17cfe8: 0xae1200a4  sw          $s2, 0xA4($s0)
    ctx->pc = 0x17cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 18));
    // 0x17cfec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x17cfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x17cff0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x17cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
    // 0x17cff4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x17cff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17cff8: 0xfa0100b0  sqc2        $vf1, 0xB0($s0)
    ctx->pc = 0x17cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_17cffc:
    // 0x17cffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17cffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d000:
    // 0x17d000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17d000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17d004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17d004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d008: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17d008u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17d00c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17d00cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d010: 0x3e00008  jr          $ra
    ctx->pc = 0x17D010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D010u;
        // 0x17d014: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D018u;
}
