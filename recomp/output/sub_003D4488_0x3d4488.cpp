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

// Function: sub_003D4488
// Address: 0x3d4488 - 0x3d4520
void sub_003D4488_0x3d4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4488_0x3d4488");
#endif

    switch (ctx->pc) {
        case 0x3d44a0u: goto label_3d44a0;
        case 0x3d44b8u: goto label_3d44b8;
        default: break;
    }

    ctx->pc = 0x3d4488u;

    // 0x3d4488: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3d4488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3d448c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x3d448cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x3d4490: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d4490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4494: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d4494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d4498: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D4498u;
    SET_GPR_U32(ctx, 31, 0x3D44A0u);
    ctx->pc = 0x3D449Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4498u;
    // 0x3d449c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D4498u, 0x3D44A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D44A0u;
label_3d44a0:
    // 0x3d44a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d44a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d44a4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x3d44a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3d44a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D44A8u;
    {
        const bool branch_taken_0x3d44a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44A8u;
        // 0x3d44ac: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44a8) {
            ctx->pc = 0x3D44B8u;
            goto label_3d44b8;
        }
    }
    ctx->pc = 0x3D44B0u;
    // 0x3d44b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D44B0u;
    {
        const bool branch_taken_0x3d44b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44B0u;
        // 0x3d44b4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44b0) {
            ctx->pc = 0x3D44C0u;
            goto label_3d44c0;
        }
    }
    ctx->pc = 0x3D44B8u;
label_3d44b8:
    // 0x3d44b8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3D44B8u;
    {
        const bool branch_taken_0x3d44b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44B8u;
        // 0x3d44bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44b8) {
            ctx->pc = 0x3D4510u;
            goto label_3d4510;
        }
    }
    ctx->pc = 0x3D44C0u;
label_3d44c0:
    // 0x3d44c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D44C0u;
    {
        const bool branch_taken_0x3d44c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44C0u;
        // 0x3d44c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44c0) {
            ctx->pc = 0x3D44D8u;
            goto label_3d44d8;
        }
    }
    ctx->pc = 0x3D44C8u;
    // 0x3d44c8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3D44C8u;
    {
        const bool branch_taken_0x3d44c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3D44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44C8u;
        // 0x3d44cc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44c8) {
            ctx->pc = 0x3D44B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d44b8;
        }
    }
    ctx->pc = 0x3D44D0u;
    // 0x3d44d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D44D0u;
    {
        const bool branch_taken_0x3d44d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D44D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44D0u;
        // 0x3d44d4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44d0) {
            ctx->pc = 0x3D44F0u;
            goto label_3d44f0;
        }
    }
    ctx->pc = 0x3D44D8u;
label_3d44d8:
    // 0x3d44d8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3d44d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d44dc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3d44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3d44e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3d44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3d44e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3d44e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3d44e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3D44E8u;
    {
        const bool branch_taken_0x3d44e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D44E8u;
        // 0x3d44ec: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d44e8) {
            ctx->pc = 0x3D4510u;
            goto label_3d4510;
        }
    }
    ctx->pc = 0x3D44F0u;
label_3d44f0:
    // 0x3d44f0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3d44f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d44f4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3d44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d44f8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x3d44f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x3d44fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d44fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d4500: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d4500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d4504: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d4504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d4508: 0x21823  negu        $v1, $v0
    ctx->pc = 0x3d4508u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3d450c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x3d450cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_3d4510:
    // 0x3d4510: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d4510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d4514: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4514u;
        // 0x3d4518: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D451Cu;
    // 0x3d451c: 0x0  nop
    ctx->pc = 0x3d451cu;
    // NOP
    ctx->pc = 0x3d4520u;
}
