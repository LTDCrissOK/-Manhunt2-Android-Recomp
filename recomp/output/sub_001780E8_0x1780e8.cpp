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

// Function: sub_001780E8
// Address: 0x1780e8 - 0x178140
void sub_001780E8_0x1780e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001780E8_0x1780e8");
#endif

    switch (ctx->pc) {
        case 0x178114u: goto label_178114;
        case 0x178120u: goto label_178120;
        case 0x17812cu: goto label_17812c;
        default: break;
    }

    ctx->pc = 0x1780e8u;

    // 0x1780e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1780e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1780ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1780ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1780f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1780f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1780f4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1780f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1780f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1780f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1780fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1780fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178100: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178104: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x178104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178108: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x178108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17810c: 0xc05e034  jal         func_1780D0
    ctx->pc = 0x17810Cu;
    SET_GPR_U32(ctx, 31, 0x178114u);
    ctx->pc = 0x178110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17810Cu;
    // 0x178110: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780D0u, 0x17810Cu, 0x178114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178114u;
label_178114:
    // 0x178114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178118: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x178118u;
    SET_GPR_U32(ctx, 31, 0x178120u);
    ctx->pc = 0x17811Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178118u;
    // 0x17811c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x178118u, 0x178120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178120u;
label_178120:
    // 0x178120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178124: 0xc05e2e2  jal         func_178B88
    ctx->pc = 0x178124u;
    SET_GPR_U32(ctx, 31, 0x17812Cu);
    ctx->pc = 0x178128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178124u;
    // 0x178128: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B88u, 0x178124u, 0x17812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17812Cu;
label_17812c:
    // 0x17812c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17812cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178134: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178138: 0x3e00008  jr          $ra
    ctx->pc = 0x178138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178138u;
        // 0x17813c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178140u;
}
