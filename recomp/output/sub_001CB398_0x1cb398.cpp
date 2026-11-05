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

// Function: sub_001CB398
// Address: 0x1cb398 - 0x1cb418
void sub_001CB398_0x1cb398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB398_0x1cb398");
#endif

    switch (ctx->pc) {
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f4u: goto label_1cb3f4;
        default: break;
    }

    ctx->pc = 0x1cb398u;

    // 0x1cb398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb39c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cb39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cb3a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb3a4: 0x24420328  addiu       $v0, $v0, 0x328
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x1cb3a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb3ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb3acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb3b4: 0x26110018  addiu       $s1, $s0, 0x18
    ctx->pc = 0x1cb3b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1cb3b8: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1cb3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1cb3bc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1cb3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1cb3c0: 0x24630338  addiu       $v1, $v1, 0x338
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 824));
    // 0x1cb3c4: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x1cb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1cb3c8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x1cb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x1cb3cc: 0xc072666  jal         func_1C9998
    ctx->pc = 0x1CB3CCu;
    SET_GPR_U32(ctx, 31, 0x1CB3D4u);
    ctx->pc = 0x1CB3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3CCu;
    // 0x1cb3d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x1CB3CCu, 0x1CB3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3D4u;
label_1cb3d4:
    // 0x1cb3d4: 0xc072812  jal         func_1CA048
    ctx->pc = 0x1CB3D4u;
    SET_GPR_U32(ctx, 31, 0x1CB3DCu);
    ctx->pc = 0x1CB3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3D4u;
    // 0x1cb3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x1CB3D4u, 0x1CB3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3DCu;
label_1cb3dc:
    // 0x1cb3dc: 0xc0729ca  jal         func_1CA728
    ctx->pc = 0x1CB3DCu;
    SET_GPR_U32(ctx, 31, 0x1CB3E4u);
    ctx->pc = 0x1CB3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3DCu;
    // 0x1cb3e0: 0x2604004c  addiu       $a0, $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA728u, 0x1CB3DCu, 0x1CB3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3E4u;
label_1cb3e4:
    // 0x1cb3e4: 0xc0729ea  jal         func_1CA7A8
    ctx->pc = 0x1CB3E4u;
    SET_GPR_U32(ctx, 31, 0x1CB3ECu);
    ctx->pc = 0x1CB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3E4u;
    // 0x1cb3e8: 0x26040110  addiu       $a0, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7A8u, 0x1CB3E4u, 0x1CB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3ECu;
label_1cb3ec:
    // 0x1cb3ec: 0xc072d2a  jal         func_1CB4A8
    ctx->pc = 0x1CB3ECu;
    SET_GPR_U32(ctx, 31, 0x1CB3F4u);
    ctx->pc = 0x1CB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3ECu;
    // 0x1cb3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB4A8u, 0x1CB3ECu, 0x1CB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3F4u;
label_1cb3f4:
    // 0x1cb3f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cb3f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb3f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb3fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb404: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB404u;
        // 0x1cb408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB40Cu;
    // 0x1cb40c: 0x0  nop
    ctx->pc = 0x1cb40cu;
    // NOP
    // 0x1cb410: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1cb410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cb414: 0x0  nop
    ctx->pc = 0x1cb414u;
    // NOP
    ctx->pc = 0x1cb418u;
}
