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

// Function: sub_00254340
// Address: 0x254340 - 0x2543c0
void sub_00254340_0x254340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254340_0x254340");
#endif

    switch (ctx->pc) {
        case 0x254388u: goto label_254388;
        case 0x2543a4u: goto label_2543a4;
        case 0x2543acu: goto label_2543ac;
        default: break;
    }

    ctx->pc = 0x254340u;

    // 0x254340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254344: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254348: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25434c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25434cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254350: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x254350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x254354: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x254354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x254358: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x254358u;
    {
        const bool branch_taken_0x254358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254358u;
        // 0x25435c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254358) {
            ctx->pc = 0x2543B0u;
            goto label_2543b0;
        }
    }
    ctx->pc = 0x254360u;
    // 0x254360: 0x8e031060  lw          $v1, 0x1060($s0)
    ctx->pc = 0x254360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4192)));
    // 0x254364: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x254364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x254368: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x254368u;
    {
        const bool branch_taken_0x254368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254368u;
        // 0x25436c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254368) {
            ctx->pc = 0x254380u;
            goto label_254380;
        }
    }
    ctx->pc = 0x254370u;
    // 0x254370: 0x8e021004  lw          $v0, 0x1004($s0)
    ctx->pc = 0x254370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    // 0x254374: 0x1045000d  beq         $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x254374u;
    {
        const bool branch_taken_0x254374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x254378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254374u;
        // 0x254378: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254374) {
            ctx->pc = 0x2543ACu;
            goto label_2543ac;
        }
    }
    ctx->pc = 0x25437Cu;
    // 0x25437c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_254380:
    // 0x254380: 0xc0944da  jal         func_251368
    ctx->pc = 0x254380u;
    SET_GPR_U32(ctx, 31, 0x254388u);
    ctx->pc = 0x254384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254380u;
    // 0x254384: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x254380u, 0x254388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254388u;
label_254388:
    // 0x254388: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x254388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x25438c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25438cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254390: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x254390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x254394: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x254394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x254398: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x254398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x25439c: 0xc061b16  jal         func_186C58
    ctx->pc = 0x25439Cu;
    SET_GPR_U32(ctx, 31, 0x2543A4u);
    ctx->pc = 0x2543A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25439Cu;
    // 0x2543a0: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186C58u, 0x25439Cu, 0x2543A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543A4u;
label_2543a4:
    // 0x2543a4: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x2543A4u;
    SET_GPR_U32(ctx, 31, 0x2543ACu);
    ctx->pc = 0x2543A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543A4u;
    // 0x2543a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x2543A4u, 0x2543ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2543ACu;
label_2543ac:
    // 0x2543ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2543acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2543b0:
    // 0x2543b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2543b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2543b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2543b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2543b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2543B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2543BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543B8u;
        // 0x2543bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2543B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2543C0u;
}
