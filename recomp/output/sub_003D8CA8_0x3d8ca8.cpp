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

// Function: sub_003D8CA8
// Address: 0x3d8ca8 - 0x3d8d20
void sub_003D8CA8_0x3d8ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8CA8_0x3d8ca8");
#endif

    switch (ctx->pc) {
        case 0x3d8cd8u: goto label_3d8cd8;
        default: break;
    }

    ctx->pc = 0x3d8ca8u;

    // 0x3d8ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d8ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d8cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d8cb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3d8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3d8cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d8cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8cb8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3d8cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3d8cbc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D8CBCu;
    {
        const bool branch_taken_0x3d8cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d8cbc) {
            ctx->pc = 0x3D8CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8CBCu;
            // 0x3d8cc0: 0x96030010  lhu         $v1, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8CE0u;
            goto label_3d8ce0;
        }
    }
    ctx->pc = 0x3D8CC4u;
    // 0x3d8cc4: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x3d8cc4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3d8cc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d8cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d8ccc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3d8cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3d8cd0: 0xc0f6300  jal         func_3D8C00
    ctx->pc = 0x3D8CD0u;
    SET_GPR_U32(ctx, 31, 0x3D8CD8u);
    ctx->pc = 0x3D8CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8CD0u;
    // 0x3d8cd4: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8C00u, 0x3D8CD0u, 0x3D8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8CD8u;
label_3d8cd8:
    // 0x3d8cd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D8CD8u;
    {
        const bool branch_taken_0x3d8cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CD8u;
        // 0x3d8cdc: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8cd8) {
            ctx->pc = 0x3D8D08u;
            goto label_3d8d08;
        }
    }
    ctx->pc = 0x3D8CE0u;
label_3d8ce0:
    // 0x3d8ce0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3d8ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d8ce4: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D8CE4u;
    {
        const bool branch_taken_0x3d8ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3D8CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8CE4u;
        // 0x3d8ce8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d8ce4) {
            ctx->pc = 0x3D8D04u;
            goto label_3d8d04;
        }
    }
    ctx->pc = 0x3D8CECu;
    // 0x3d8cec: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x3d8cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x3d8cf0: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x3d8cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3d8cf4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D8CF4u;
    {
        const bool branch_taken_0x3d8cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d8cf4) {
            ctx->pc = 0x3D8CF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D8CF4u;
            // 0x3d8cf8: 0x96020010  lhu         $v0, 0x10($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D8D08u;
            goto label_3d8d08;
        }
    }
    ctx->pc = 0x3D8CFCu;
    // 0x3d8cfc: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x3d8cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x3d8d00: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x3d8d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_3d8d04:
    // 0x3d8d04: 0x96020010  lhu         $v0, 0x10($s0)
    ctx->pc = 0x3d8d04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_3d8d08:
    // 0x3d8d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3d8d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d8d0c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3d8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d8d10: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3d8d10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x3d8d14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d8d14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d8d18: 0x3e00008  jr          $ra
    ctx->pc = 0x3D8D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D8D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8D18u;
        // 0x3d8d1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D8D20u;
}
