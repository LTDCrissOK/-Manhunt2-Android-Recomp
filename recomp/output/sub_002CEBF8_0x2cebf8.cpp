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

// Function: sub_002CEBF8
// Address: 0x2cebf8 - 0x2cec68
void sub_002CEBF8_0x2cebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEBF8_0x2cebf8");
#endif

    switch (ctx->pc) {
        case 0x2cec0cu: goto label_2cec0c;
        case 0x2cec54u: goto label_2cec54;
        default: break;
    }

    ctx->pc = 0x2cebf8u;

    // 0x2cebf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cebfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cec00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cec00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cec04: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x2CEC04u;
    SET_GPR_U32(ctx, 31, 0x2CEC0Cu);
    ctx->pc = 0x2CEC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEC04u;
    // 0x2cec08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x2CEC04u, 0x2CEC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC0Cu;
label_2cec0c:
    // 0x2cec0c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2cec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2cec10: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2cec10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2cec14: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x2cec14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x2cec18: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2cec18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2cec1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2cec20: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x2cec20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x2cec24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cec24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cec28: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x2cec28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x2cec2c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2cec2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2cec30: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x2cec30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x2cec34: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cec34u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x2cec38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2cec38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2cec3c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2cec3cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 16)); // MMIO: 0x1000b400
    // 0x2cec40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cec40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2cec44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2cec44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2cec48: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cec48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2cec4c: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x2CEC4Cu;
    SET_GPR_U32(ctx, 31, 0x2CEC54u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x2CEC4Cu, 0x2CEC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEC54u;
label_2cec54:
    // 0x2cec54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cec54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cec58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEC5Cu;
        // 0x2cec60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEC64u;
    // 0x2cec64: 0x0  nop
    ctx->pc = 0x2cec64u;
    // NOP
    ctx->pc = 0x2cec68u;
}
