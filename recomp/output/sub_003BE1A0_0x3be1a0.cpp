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

// Function: sub_003BE1A0
// Address: 0x3be1a0 - 0x3be218
void sub_003BE1A0_0x3be1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE1A0_0x3be1a0");
#endif

    switch (ctx->pc) {
        case 0x3be1b4u: goto label_3be1b4;
        default: break;
    }

    ctx->pc = 0x3be1a0u;

    // 0x3be1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3be1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3be1a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3be1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3be1a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3be1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3be1ac: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BE1ACu;
    SET_GPR_U32(ctx, 31, 0x3BE1B4u);
    ctx->pc = 0x3BE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE1ACu;
    // 0x3be1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BE1ACu, 0x3BE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE1B4u;
label_3be1b4:
    // 0x3be1b4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3be1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3be1b8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x3be1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x3be1bc: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x3be1bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x3be1c0: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x3be1c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x3be1c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3be1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x3be1c8: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x3be1c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x3be1cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3be1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3be1d0: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x3be1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x3be1d4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x3be1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x3be1d8: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x3be1d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x3be1dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3be1dcu;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 3)); // MMIO: 0x1000f590
    // 0x3be1e0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3be1e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x3be1e4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x3be1e4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x3be1e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3be1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x3be1ec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3be1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3be1f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3be1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x3be1f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE1F4u;
    {
        const bool branch_taken_0x3be1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE1F4u;
        // 0x3be1f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be1f4) {
            ctx->pc = 0x3BE208u;
            goto label_3be208;
        }
    }
    ctx->pc = 0x3BE1FCu;
    // 0x3be1fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3be1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be200: 0x80f401a  j           func_3D0068
    ctx->pc = 0x3BE200u;
    ctx->pc = 0x3BE204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE200u;
    // 0x3be204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0068u;
    sub_003D0068_0x3d0068(rdram, ctx, runtime); return;
    ctx->pc = 0x3BE208u;
label_3be208:
    // 0x3be208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3be208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3be20c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE20Cu;
        // 0x3be210: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE214u;
    // 0x3be214: 0x0  nop
    ctx->pc = 0x3be214u;
    // NOP
    ctx->pc = 0x3be218u;
}
