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

// Function: sub_003D9AF0
// Address: 0x3d9af0 - 0x3d9b48
void sub_003D9AF0_0x3d9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9AF0_0x3d9af0");
#endif

    switch (ctx->pc) {
        case 0x3d9b28u: goto label_3d9b28;
        default: break;
    }

    ctx->pc = 0x3d9af0u;

    // 0x3d9af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d9af4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d9af8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d9af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d9afc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d9afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9b00: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9b00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9b04: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x3d9b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d9b08: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3D9B08u;
    {
        const bool branch_taken_0x3d9b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D9B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B08u;
        // 0x3d9b0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d9b08) {
            ctx->pc = 0x3D9B38u;
            goto label_3d9b38;
        }
    }
    ctx->pc = 0x3D9B10u;
    // 0x3d9b10: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3d9b10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3d9b14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3d9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3d9b18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3d9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3d9b1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9b20: 0xc0f66b2  jal         func_3D9AC8
    ctx->pc = 0x3D9B20u;
    SET_GPR_U32(ctx, 31, 0x3D9B28u);
    ctx->pc = 0x3D9B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D9B20u;
    // 0x3d9b24: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D9AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D9AC8u, 0x3D9B20u, 0x3D9B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D9B28u;
label_3d9b28:
    // 0x3d9b28: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3d9b28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d9b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d9b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d9b30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3d9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3d9b34: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x3d9b34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
label_3d9b38:
    // 0x3d9b38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d9b38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d9b3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d9b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d9b40: 0x3e00008  jr          $ra
    ctx->pc = 0x3D9B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D9B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D9B40u;
        // 0x3d9b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D9B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D9B48u;
}
