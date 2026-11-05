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

// Function: sub_0037A3B8
// Address: 0x37a3b8 - 0x37a4a0
void sub_0037A3B8_0x37a3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A3B8_0x37a3b8");
#endif

    switch (ctx->pc) {
        case 0x37a444u: goto label_37a444;
        case 0x37a490u: goto label_37a490;
        default: break;
    }

    ctx->pc = 0x37a3b8u;

    // 0x37a3b8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37a3bc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x37a3c0: 0x3c070038  lui         $a3, 0x38
    ctx->pc = 0x37a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)56 << 16));
    // 0x37a3c4: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37a3c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37a3c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37a3cc: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x37a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x37a3d0: 0x24e7a590  addiu       $a3, $a3, -0x5A70
    ctx->pc = 0x37a3d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944144));
    // 0x37a3d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37a3d8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x37a3d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a3dc: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x37a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x37a3e0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x37a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x37a3e4: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x37a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x37a3e8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x37a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x37a3ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37a3f0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x37a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x37a3f4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x37a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x37a3f8: 0x14c00014  bnez        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x37A3F8u;
    {
        const bool branch_taken_0x37a3f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3F8u;
        // 0x37a3fc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3f8) {
            ctx->pc = 0x37A44Cu;
            goto label_37a44c;
        }
    }
    ctx->pc = 0x37A400u;
    // 0x37a400: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37a404: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37a404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37a408: 0x2442a5c0  addiu       $v0, $v0, -0x5A40
    ctx->pc = 0x37a408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944192));
    // 0x37a40c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37a410: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37a410u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37a414: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37a414u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x37a418: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37a418u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37a41c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x37a41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a420: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37a424: 0x24a5a5c0  addiu       $a1, $a1, -0x5A40
    ctx->pc = 0x37a424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944192));
    // 0x37a428: 0x24c6ab80  addiu       $a2, $a2, -0x5480
    ctx->pc = 0x37a428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945664));
    // 0x37a42c: 0x24e75aa0  addiu       $a3, $a3, 0x5AA0
    ctx->pc = 0x37a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23200));
    // 0x37a430: 0x25085b60  addiu       $t0, $t0, 0x5B60
    ctx->pc = 0x37a430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23392));
    // 0x37a434: 0x2529cda0  addiu       $t1, $t1, -0x3260
    ctx->pc = 0x37a434u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954400));
    // 0x37a438: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x37a438u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a43c: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37A43Cu;
    SET_GPR_U32(ctx, 31, 0x37A444u);
    ctx->pc = 0x37A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A43Cu;
    // 0x37a440: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37A43Cu, 0x37A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A444u;
label_37a444:
    // 0x37a444: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x37A444u;
    {
        const bool branch_taken_0x37a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A444u;
        // 0x37a448: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a444) {
            ctx->pc = 0x37A494u;
            goto label_37a494;
        }
    }
    ctx->pc = 0x37A44Cu;
label_37a44c:
    // 0x37a44c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37a450: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37a450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37a454: 0x2442ab80  addiu       $v0, $v0, -0x5480
    ctx->pc = 0x37a454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945664));
    // 0x37a458: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37a45c: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x37a45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x37a460: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x37a460u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x37a464: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x37a464u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x37a468: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x37a468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a46c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37a470: 0x24a5ab80  addiu       $a1, $a1, -0x5480
    ctx->pc = 0x37a470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945664));
    // 0x37a474: 0x24c6b090  addiu       $a2, $a2, -0x4F70
    ctx->pc = 0x37a474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946960));
    // 0x37a478: 0x24e75aa0  addiu       $a3, $a3, 0x5AA0
    ctx->pc = 0x37a478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23200));
    // 0x37a47c: 0x25085b60  addiu       $t0, $t0, 0x5B60
    ctx->pc = 0x37a47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 23392));
    // 0x37a480: 0x2529cdb0  addiu       $t1, $t1, -0x3250
    ctx->pc = 0x37a480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294954416));
    // 0x37a484: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x37a484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a488: 0xc0dfe98  jal         func_37FA60
    ctx->pc = 0x37A488u;
    SET_GPR_U32(ctx, 31, 0x37A490u);
    ctx->pc = 0x37A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A488u;
    // 0x37a48c: 0x27ab0010  addiu       $t3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA60u, 0x37A488u, 0x37A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A490u;
label_37a490:
    // 0x37a490: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37a490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_37a494:
    // 0x37a494: 0x3e00008  jr          $ra
    ctx->pc = 0x37A494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A494u;
        // 0x37a498: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A49Cu;
    // 0x37a49c: 0x0  nop
    ctx->pc = 0x37a49cu;
    // NOP
    ctx->pc = 0x37a4a0u;
}
