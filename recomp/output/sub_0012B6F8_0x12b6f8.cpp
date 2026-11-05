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

// Function: sub_0012B6F8
// Address: 0x12b6f8 - 0x12b750
void sub_0012B6F8_0x12b6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B6F8_0x12b6f8");
#endif

    switch (ctx->pc) {
        case 0x12b71cu: goto label_12b71c;
        case 0x12b738u: goto label_12b738;
        default: break;
    }

    ctx->pc = 0x12b6f8u;

    // 0x12b6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b708: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12b708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12b70c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12b70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b710: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12b710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12b714: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B714u;
    SET_GPR_U32(ctx, 31, 0x12B71Cu);
    ctx->pc = 0x12B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B714u;
    // 0x12b718: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B714u, 0x12B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B71Cu;
label_12b71c:
    // 0x12b71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b724: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b72c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12b72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12b730: 0xc04b010  jal         func_12C040
    ctx->pc = 0x12B730u;
    SET_GPR_U32(ctx, 31, 0x12B738u);
    ctx->pc = 0x12B734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B730u;
    // 0x12b734: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C040u, 0x12B730u, 0x12B738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B738u;
label_12b738:
    // 0x12b738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b73c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b73cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b740: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12b740u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b744: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12b744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12b748: 0x3e00008  jr          $ra
    ctx->pc = 0x12B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B748u;
        // 0x12b74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B750u;
}
