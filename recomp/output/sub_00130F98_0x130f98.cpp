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

// Function: sub_00130F98
// Address: 0x130f98 - 0x131018
void sub_00130F98_0x130f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130F98_0x130f98");
#endif

    switch (ctx->pc) {
        case 0x130fe8u: goto label_130fe8;
        case 0x130ff8u: goto label_130ff8;
        default: break;
    }

    ctx->pc = 0x130f98u;

    // 0x130f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x130f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x130f9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x130f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x130fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x130fa4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x130fa8: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130fac: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x130FACu;
    {
        const bool branch_taken_0x130fac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FACu;
        // 0x130fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fac) {
            ctx->pc = 0x131008u;
            goto label_131008;
        }
    }
    ctx->pc = 0x130FB4u;
    // 0x130fb4: 0x2ca20013  sltiu       $v0, $a1, 0x13
    ctx->pc = 0x130fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x130fb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130FB8u;
    {
        const bool branch_taken_0x130fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FB8u;
        // 0x130fbc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fb8) {
            ctx->pc = 0x130FE0u;
            goto label_130fe0;
        }
    }
    ctx->pc = 0x130FC0u;
    // 0x130fc0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x130fc4: 0x2442de30  addiu       $v0, $v0, -0x21D0
    ctx->pc = 0x130fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958640));
    // 0x130fc8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130fcc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x130fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x130fd0: 0x800008  jr          $a0
    ctx->pc = 0x130FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130FD8u: goto label_130fd8;
            case 0x130FE0u: goto label_130fe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130FD0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x130FD8u;
label_130fd8:
    // 0x130fd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x130FD8u;
    {
        const bool branch_taken_0x130fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FD8u;
        // 0x130fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130fd8) {
            ctx->pc = 0x131008u;
            goto label_131008;
        }
    }
    ctx->pc = 0x130FE0u;
label_130fe0:
    // 0x130fe0: 0xc043920  jal         func_10E480
    ctx->pc = 0x130FE0u;
    SET_GPR_U32(ctx, 31, 0x130FE8u);
    ctx->pc = 0x130FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FE0u;
    // 0x130fe4: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130FE0u, 0x130FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FE8u;
label_130fe8:
    // 0x130fe8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x130FE8u;
    {
        const bool branch_taken_0x130fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130fe8) {
            ctx->pc = 0x130FECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x130FE8u;
            // 0x130fec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131008u;
            goto label_131008;
        }
    }
    ctx->pc = 0x130FF0u;
    // 0x130ff0: 0xc095216  jal         func_254858
    ctx->pc = 0x130FF0u;
    SET_GPR_U32(ctx, 31, 0x130FF8u);
    ctx->pc = 0x130FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FF0u;
    // 0x130ff4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x130FF0u, 0x130FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FF8u;
label_130ff8:
    // 0x130ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ffc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x130FFCu;
    {
        const bool branch_taken_0x130ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x131000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FFCu;
        // 0x131000: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ffc) {
            ctx->pc = 0x131008u;
            goto label_131008;
        }
    }
    ctx->pc = 0x131004u;
    // 0x131004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_131008:
    // 0x131008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13100c: 0x3e00008  jr          $ra
    ctx->pc = 0x13100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13100Cu;
        // 0x131010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131014u;
    // 0x131014: 0x0  nop
    ctx->pc = 0x131014u;
    // NOP
    ctx->pc = 0x131018u;
}
