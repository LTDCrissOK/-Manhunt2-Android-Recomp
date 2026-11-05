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

// Function: sub_0027D3A0
// Address: 0x27d3a0 - 0x27d418
void sub_0027D3A0_0x27d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D3A0_0x27d3a0");
#endif

    switch (ctx->pc) {
        case 0x27d3c0u: goto label_27d3c0;
        case 0x27d3e4u: goto label_27d3e4;
        default: break;
    }

    ctx->pc = 0x27d3a0u;

    // 0x27d3a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27d3a4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x27d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x27d3a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d3ac: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x27d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x27d3b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27d3b4: 0x245003d8  addiu       $s0, $v0, 0x3D8
    ctx->pc = 0x27d3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 984));
    // 0x27d3b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27d3bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27d3bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d3c0:
    // 0x27d3c0: 0x8e02ff30  lw          $v0, -0xD0($s0)
    ctx->pc = 0x27d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967088)));
    // 0x27d3c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27d3c8: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D3C8u;
    {
        const bool branch_taken_0x27d3c8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x27D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3C8u;
        // 0x27d3cc: 0xae02ff30  sw          $v0, -0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294967088), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3c8) {
            ctx->pc = 0x27D3F4u;
            goto label_27d3f4;
        }
    }
    ctx->pc = 0x27D3D0u;
    // 0x27d3d0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27d3d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27D3D4u;
    {
        const bool branch_taken_0x27d3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d3d4) {
            ctx->pc = 0x27D3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D3D4u;
            // 0x27d3d8: 0xae00fec8  sw          $zero, -0x138($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4294966984), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D3E8u;
            goto label_27d3e8;
        }
    }
    ctx->pc = 0x27D3DCu;
    // 0x27d3dc: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x27D3DCu;
    SET_GPR_U32(ctx, 31, 0x27D3E4u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x27D3DCu, 0x27D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D3E4u;
label_27d3e4:
    // 0x27d3e4: 0xae00fec8  sw          $zero, -0x138($s0)
    ctx->pc = 0x27d3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966984), GPR_U32(ctx, 0));
label_27d3e8:
    // 0x27d3e8: 0xae00ff30  sw          $zero, -0xD0($s0)
    ctx->pc = 0x27d3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967088), GPR_U32(ctx, 0));
    // 0x27d3ec: 0xae00ff98  sw          $zero, -0x68($s0)
    ctx->pc = 0x27d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967192), GPR_U32(ctx, 0));
    // 0x27d3f0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27d3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27d3f4:
    // 0x27d3f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27d3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x27d3f8: 0x2a22001a  slti        $v0, $s1, 0x1A
    ctx->pc = 0x27d3f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x27d3fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27D3FCu;
    {
        const bool branch_taken_0x27d3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D3FCu;
        // 0x27d400: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d3fc) {
            ctx->pc = 0x27D3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d3c0;
        }
    }
    ctx->pc = 0x27D404u;
    // 0x27d404: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d404u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d408: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d40c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d410: 0x3e00008  jr          $ra
    ctx->pc = 0x27D410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D410u;
        // 0x27d414: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D418u;
}
