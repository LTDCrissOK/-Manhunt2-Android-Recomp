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

// Function: sub_001FB3A8
// Address: 0x1fb3a8 - 0x1fb418
void sub_001FB3A8_0x1fb3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB3A8_0x1fb3a8");
#endif

    switch (ctx->pc) {
        case 0x1fb408u: goto label_1fb408;
        default: break;
    }

    ctx->pc = 0x1fb3a8u;

    // 0x1fb3a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1fb3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1fb3ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb3acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb3b0: 0x90a39320  lbu         $v1, -0x6CE0($a1)
    ctx->pc = 0x1fb3b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9320u));
    // 0x1fb3b4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x1fb3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x1fb3b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb3bc: 0x24c6d050  addiu       $a2, $a2, -0x2FB0
    ctx->pc = 0x1fb3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955088));
    // 0x1fb3c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fb3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fb3c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1fb3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb3c8: 0xa0a39320  sb          $v1, -0x6CE0($a1)
    ctx->pc = 0x1fb3c8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9320u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9320u, _value); } while (0);
    // 0x1fb3cc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fb3d0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x1fb3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x1fb3d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1fb3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb3d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb3dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fb3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fb3e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fb3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fb3e4: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1fb3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1fb3e8: 0x90a29320  lbu         $v0, -0x6CE0($a1)
    ctx->pc = 0x1fb3e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294939424)));
    // 0x1fb3ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fb3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fb3f0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1fb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1fb3f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fb3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fb3f8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1fb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1fb3fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fb400: 0xc07e646  jal         func_1F9918
    ctx->pc = 0x1FB400u;
    SET_GPR_U32(ctx, 31, 0x1FB408u);
    ctx->pc = 0x1FB404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB400u;
    // 0x1fb404: 0x8ce50004  lw          $a1, 0x4($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9918u, 0x1FB400u, 0x1FB408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB408u;
label_1fb408:
    // 0x1fb408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB40Cu;
        // 0x1fb410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB414u;
    // 0x1fb414: 0x0  nop
    ctx->pc = 0x1fb414u;
    // NOP
    ctx->pc = 0x1fb418u;
}
