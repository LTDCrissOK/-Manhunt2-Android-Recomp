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

// Function: sub_0038A318
// Address: 0x38a318 - 0x38a3e0
void sub_0038A318_0x38a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A318_0x38a318");
#endif

    switch (ctx->pc) {
        case 0x38a334u: goto label_38a334;
        case 0x38a348u: goto label_38a348;
        case 0x38a36cu: goto label_38a36c;
        case 0x38a374u: goto label_38a374;
        case 0x38a3c4u: goto label_38a3c4;
        default: break;
    }

    ctx->pc = 0x38a318u;

    // 0x38a318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x38a31c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38a320: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x38a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x38a324: 0x24a59420  addiu       $a1, $a1, -0x6BE0
    ctx->pc = 0x38a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939680));
    // 0x38a328: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x38a32c: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38A32Cu;
    SET_GPR_U32(ctx, 31, 0x38A334u);
    ctx->pc = 0x38A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A32Cu;
    // 0x38a330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38A32Cu, 0x38A334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A334u;
label_38a334:
    // 0x38a334: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38a338: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x38a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x38a33c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38a33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38a340: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38A340u;
    SET_GPR_U32(ctx, 31, 0x38A348u);
    ctx->pc = 0x38A344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A340u;
    // 0x38a344: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38A340u, 0x38A348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A348u;
label_38a348:
    // 0x38a348: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38a348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38a34c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x38a34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x38a350: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x38a350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x38a354: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x38a354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x38a358: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38a358u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5)); // MMIO: 0x10002010
    // 0x38a35c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38a360: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38a360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38a364: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38A364u;
    SET_GPR_U32(ctx, 31, 0x38A36Cu);
    ctx->pc = 0x38A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A364u;
    // 0x38a368: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38A364u, 0x38A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A36Cu;
label_38a36c:
    // 0x38a36c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38A36Cu;
    SET_GPR_U32(ctx, 31, 0x38A374u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38A36Cu, 0x38A374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A374u;
label_38a374:
    // 0x38a374: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38a374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38a378: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x38a378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x38a37c: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x38a37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x38a380: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x38a380u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x38a384: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38a384u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x38a388: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x38a388u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x38a38c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38a38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38a390: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x38a390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x38a394: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x38a394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x38a398: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x38a398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x38a39c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x38a39cu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x38a3a0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x38a3a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x38a3a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38a3a4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x38a3a8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x38a3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x38a3ac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38a3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x38a3b0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x38a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x38a3b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A3B4u;
    {
        const bool branch_taken_0x38a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3B4u;
        // 0x38a3b8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a3b4) {
            ctx->pc = 0x38A3C8u;
            goto label_38a3c8;
        }
    }
    ctx->pc = 0x38A3BCu;
    // 0x38a3bc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x38A3BCu;
    SET_GPR_U32(ctx, 31, 0x38A3C4u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x38A3BCu, 0x38A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A3C4u;
label_38a3c4:
    // 0x38a3c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_38a3c8:
    // 0x38a3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38a3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38a3cc: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x38a3ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x38a3d0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x38a3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38a3d4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38a3d4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x38a3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A3D8u;
        // 0x38a3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A3E0u;
}
