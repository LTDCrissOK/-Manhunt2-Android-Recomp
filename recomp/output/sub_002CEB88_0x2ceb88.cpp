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

// Function: sub_002CEB88
// Address: 0x2ceb88 - 0x2cebf8
void sub_002CEB88_0x2ceb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CEB88_0x2ceb88");
#endif

    switch (ctx->pc) {
        case 0x2ceb9cu: goto label_2ceb9c;
        case 0x2cebe4u: goto label_2cebe4;
        default: break;
    }

    ctx->pc = 0x2ceb88u;

    // 0x2ceb88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ceb88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ceb8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ceb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ceb90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ceb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ceb94: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x2CEB94u;
    SET_GPR_U32(ctx, 31, 0x2CEB9Cu);
    ctx->pc = 0x2CEB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CEB94u;
    // 0x2ceb98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x2CEB94u, 0x2CEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEB9Cu;
label_2ceb9c:
    // 0x2ceb9c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x2ceb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x2ceba0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x2ceba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x2ceba4: 0x34a5f520  ori         $a1, $a1, 0xF520
    ctx->pc = 0x2ceba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)62752);
    // 0x2ceba8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2ceba8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2cebac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cebacu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2cebb0: 0x34c6f590  ori         $a2, $a2, 0xF590
    ctx->pc = 0x2cebb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62864);
    // 0x2cebb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cebb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cebb8: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x2cebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x2cebbc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2cebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2cebc0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x2cebc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x2cebc4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cebc4u;
    runtime->Store32(rdram, ctx, 0x1000F590u, GPR_U32(ctx, 2)); // MMIO: 0x1000f590
    // 0x2cebc8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2cebc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2cebcc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2cebccu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 16)); // MMIO: 0x1000b000
    // 0x2cebd0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2cebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000F520u)); // MMIO: 0x1000f520
    // 0x2cebd4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2cebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2cebd8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2cebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2cebdc: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x2CEBDCu;
    SET_GPR_U32(ctx, 31, 0x2CEBE4u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x2CEBDCu, 0x2CEBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CEBE4u;
label_2cebe4:
    // 0x2cebe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cebe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cebe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cebec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CEBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CEBECu;
        // 0x2cebf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CEBECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CEBF4u;
    // 0x2cebf4: 0x0  nop
    ctx->pc = 0x2cebf4u;
    // NOP
    ctx->pc = 0x2cebf8u;
}
