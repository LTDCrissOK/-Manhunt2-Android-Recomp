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

// Function: sub_0037D880
// Address: 0x37d880 - 0x37d8e0
void sub_0037D880_0x37d880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D880_0x37d880");
#endif

    switch (ctx->pc) {
        case 0x37d894u: goto label_37d894;
        case 0x37d8b0u: goto label_37d8b0;
        default: break;
    }

    ctx->pc = 0x37d880u;

    // 0x37d880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d888: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x37d888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d88c: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37D88Cu;
    SET_GPR_U32(ctx, 31, 0x37D894u);
    ctx->pc = 0x37D890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D88Cu;
    // 0x37d890: 0x8c840090  lw          $a0, 0x90($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37D88Cu, 0x37D894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37D894u;
label_37d894:
    // 0x37d894: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37d894u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d898: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37d89c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37d89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x37d8a0: 0x1102000c  beq         $t0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x37D8A0u;
    {
        const bool branch_taken_0x37d8a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x37D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8A0u;
        // 0x37d8a4: 0x3c070048  lui         $a3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d8a0) {
            ctx->pc = 0x37D8D4u;
            goto label_37d8d4;
        }
    }
    ctx->pc = 0x37D8A8u;
    // 0x37d8a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x37d8ac: 0x8ce32d5c  lw          $v1, 0x2D5C($a3)
    ctx->pc = 0x37d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11612)));
label_37d8b0:
    // 0x37d8b0: 0x244270d0  addiu       $v0, $v0, 0x70D0
    ctx->pc = 0x37d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28880));
    // 0x37d8b4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37d8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d8b8: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x37d8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37d8bc: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x37d8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37d8c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x37d8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x37d8c4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x37d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x37d8c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37d8cc: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x37d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x37d8d0: 0xace32d5c  sw          $v1, 0x2D5C($a3)
    ctx->pc = 0x37d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11612), GPR_U32(ctx, 3));
label_37d8d4:
    // 0x37d8d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x37D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D8D8u;
        // 0x37d8dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D8E0u;
}
