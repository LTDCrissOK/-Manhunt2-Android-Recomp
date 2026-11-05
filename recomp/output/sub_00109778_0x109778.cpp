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

// Function: sub_00109778
// Address: 0x109778 - 0x1097e8
void sub_00109778_0x109778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109778_0x109778");
#endif

    switch (ctx->pc) {
        case 0x109794u: goto label_109794;
        case 0x1097c0u: goto label_1097c0;
        case 0x1097ccu: goto label_1097cc;
        default: break;
    }

    ctx->pc = 0x109778u;

    // 0x109778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10977c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10977cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109780: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109788: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10978c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10978Cu;
    SET_GPR_U32(ctx, 31, 0x109794u);
    ctx->pc = 0x109790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10978Cu;
    // 0x109790: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10978Cu, 0x109794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109794u;
label_109794:
    // 0x109794: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109798: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x109798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10979c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10979cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1097a0: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x1097a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1097a4: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x1097a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x1097a8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1097A8u;
    {
        const bool branch_taken_0x1097a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1097a8) {
            ctx->pc = 0x1097ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1097A8u;
            // 0x1097ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1097D0u;
            goto label_1097d0;
        }
    }
    ctx->pc = 0x1097B0u;
    // 0x1097b0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1097b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1097b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1097b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097b8: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x1097B8u;
    SET_GPR_U32(ctx, 31, 0x1097C0u);
    ctx->pc = 0x1097BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097B8u;
    // 0x1097bc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x1097B8u, 0x1097C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097C0u;
label_1097c0:
    // 0x1097c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1097c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097c4: 0xc0440f0  jal         func_1103C0
    ctx->pc = 0x1097C4u;
    SET_GPR_U32(ctx, 31, 0x1097CCu);
    ctx->pc = 0x1097C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1097C4u;
    // 0x1097c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103C0u, 0x1097C4u, 0x1097CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1097CCu;
label_1097cc:
    // 0x1097cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1097ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1097d0:
    // 0x1097d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1097d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1097d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1097d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1097d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1097d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1097dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1097DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1097E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1097DCu;
        // 0x1097e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1097DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1097E4u;
    // 0x1097e4: 0x0  nop
    ctx->pc = 0x1097e4u;
    // NOP
    ctx->pc = 0x1097e8u;
}
