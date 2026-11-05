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

// Function: sub_00254490
// Address: 0x254490 - 0x2544f8
void sub_00254490_0x254490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254490_0x254490");
#endif

    switch (ctx->pc) {
        case 0x2544bcu: goto label_2544bc;
        case 0x2544d8u: goto label_2544d8;
        case 0x2544e0u: goto label_2544e0;
        default: break;
    }

    ctx->pc = 0x254490u;

    // 0x254490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254498: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25449c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25449cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544a0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2544a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2544a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2544a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2544a8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2544A8u;
    {
        const bool branch_taken_0x2544a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2544a8) {
            ctx->pc = 0x2544ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2544A8u;
            // 0x2544ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2544E4u;
            goto label_2544e4;
        }
    }
    ctx->pc = 0x2544B0u;
    // 0x2544b0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x2544b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2544b4: 0xc0944da  jal         func_251368
    ctx->pc = 0x2544B4u;
    SET_GPR_U32(ctx, 31, 0x2544BCu);
    ctx->pc = 0x2544B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544B4u;
    // 0x2544b8: 0xae021060  sw          $v0, 0x1060($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x2544B4u, 0x2544BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544BCu;
label_2544bc:
    // 0x2544bc: 0x8e030fe8  lw          $v1, 0xFE8($s0)
    ctx->pc = 0x2544bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x2544c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2544c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2544c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2544c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2544c8: 0xac62035c  sw          $v0, 0x35C($v1)
    ctx->pc = 0x2544c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 860), GPR_U32(ctx, 2));
    // 0x2544cc: 0x8e040fe4  lw          $a0, 0xFE4($s0)
    ctx->pc = 0x2544ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    // 0x2544d0: 0xc061b42  jal         func_186D08
    ctx->pc = 0x2544D0u;
    SET_GPR_U32(ctx, 31, 0x2544D8u);
    ctx->pc = 0x2544D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544D0u;
    // 0x2544d4: 0x8e051004  lw          $a1, 0x1004($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186D08u, 0x2544D0u, 0x2544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544D8u;
label_2544d8:
    // 0x2544d8: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x2544D8u;
    SET_GPR_U32(ctx, 31, 0x2544E0u);
    ctx->pc = 0x2544DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2544D8u;
    // 0x2544dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x2544D8u, 0x2544E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2544E0u;
label_2544e0:
    // 0x2544e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2544e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2544e4:
    // 0x2544e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2544e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2544e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2544e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2544ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2544ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2544F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2544ECu;
        // 0x2544f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2544ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2544F4u;
    // 0x2544f4: 0x0  nop
    ctx->pc = 0x2544f4u;
    // NOP
    ctx->pc = 0x2544f8u;
}
