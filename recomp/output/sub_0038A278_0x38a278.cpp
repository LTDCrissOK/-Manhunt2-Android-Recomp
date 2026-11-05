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

// Function: sub_0038A278
// Address: 0x38a278 - 0x38a318
void sub_0038A278_0x38a278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038A278_0x38a278");
#endif

    switch (ctx->pc) {
        case 0x38a288u: goto label_38a288;
        case 0x38a2e4u: goto label_38a2e4;
        default: break;
    }

    ctx->pc = 0x38a278u;

    // 0x38a278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a280: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38A280u;
    SET_GPR_U32(ctx, 31, 0x38A288u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38A280u, 0x38A288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A288u;
label_38a288:
    // 0x38a288: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x38a288u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x38a28c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x38a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x38a290: 0x34e7f520  ori         $a3, $a3, 0xF520
    ctx->pc = 0x38a290u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62752);
    // 0x38a294: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x38a294u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x38a298: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38a298u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x38a29c: 0x3508f590  ori         $t0, $t0, 0xF590
    ctx->pc = 0x38a29cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62864);
    // 0x38a2a0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x38a2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x38a2a4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x38a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x38a2a8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38a2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x38a2ac: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x38a2acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x38a2b0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x38a2b0u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x38a2b4: 0x34c6b400  ori         $a2, $a2, 0xB400
    ctx->pc = 0x38a2b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46080);
    // 0x38a2b8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x38a2b8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 0)); // MMIO: 0x1000b000
    // 0x38a2bc: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x38a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x38a2c0: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x38a2c0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 0)); // MMIO: 0x1000b400
    // 0x38a2c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x38a2c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x38a2c8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x38a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x38a2cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x38a2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x38a2d0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x38a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x38a2d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A2D4u;
    {
        const bool branch_taken_0x38a2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2D4u;
        // 0x38a2d8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a2d4) {
            ctx->pc = 0x38A2E8u;
            goto label_38a2e8;
        }
    }
    ctx->pc = 0x38A2DCu;
    // 0x38a2dc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x38A2DCu;
    SET_GPR_U32(ctx, 31, 0x38A2E4u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x38A2DCu, 0x38A2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A2E4u;
label_38a2e4:
    // 0x38a2e4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_38a2e8:
    // 0x38a2e8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38a2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38a2ec: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x38a2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x38a2f0: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x38a2f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x38a2f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x38a2f4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x1000b020
    // 0x38a2f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38a2fc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x38a2fcu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x38a300: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x38a300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x38a304: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x38a304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x38a308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a30c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x38a30cu;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
    // 0x38a310: 0x3e00008  jr          $ra
    ctx->pc = 0x38A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A310u;
        // 0x38a314: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A318u;
}
