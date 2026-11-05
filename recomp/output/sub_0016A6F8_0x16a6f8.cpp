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

// Function: sub_0016A6F8
// Address: 0x16a6f8 - 0x16a768
void sub_0016A6F8_0x16a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A6F8_0x16a6f8");
#endif

    switch (ctx->pc) {
        case 0x16a720u: goto label_16a720;
        case 0x16a738u: goto label_16a738;
        case 0x16a744u: goto label_16a744;
        case 0x16a750u: goto label_16a750;
        default: break;
    }

    ctx->pc = 0x16a6f8u;

    // 0x16a6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a70c: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x16a710: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A710u;
    {
        const bool branch_taken_0x16a710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A710u;
        // 0x16a714: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a710) {
            ctx->pc = 0x16A750u;
            goto label_16a750;
        }
    }
    ctx->pc = 0x16A718u;
    // 0x16a718: 0xc05adc6  jal         func_16B718
    ctx->pc = 0x16A718u;
    SET_GPR_U32(ctx, 31, 0x16A720u);
    ctx->pc = 0x16B718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B718u, 0x16A718u, 0x16A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A720u;
label_16a720:
    // 0x16a720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a724: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a728: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A728u;
    {
        const bool branch_taken_0x16a728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a728) {
            ctx->pc = 0x16A72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A728u;
            // 0x16a72c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A754u;
            goto label_16a754;
        }
    }
    ctx->pc = 0x16A730u;
    // 0x16a730: 0xc05adda  jal         func_16B768
    ctx->pc = 0x16A730u;
    SET_GPR_U32(ctx, 31, 0x16A738u);
    ctx->pc = 0x16A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A730u;
    // 0x16a734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B768u, 0x16A730u, 0x16A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A738u;
label_16a738:
    // 0x16a738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a73c: 0xc05adfc  jal         func_16B7F0
    ctx->pc = 0x16A73Cu;
    SET_GPR_U32(ctx, 31, 0x16A744u);
    ctx->pc = 0x16A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A73Cu;
    // 0x16a740: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B7F0u, 0x16A73Cu, 0x16A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A744u;
label_16a744:
    // 0x16a744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a748: 0xc05ae3e  jal         func_16B8F8
    ctx->pc = 0x16A748u;
    SET_GPR_U32(ctx, 31, 0x16A750u);
    ctx->pc = 0x16A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A748u;
    // 0x16a74c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B8F8u, 0x16A748u, 0x16A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A750u;
label_16a750:
    // 0x16a750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a754:
    // 0x16a754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A75Cu;
        // 0x16a760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A764u;
    // 0x16a764: 0x0  nop
    ctx->pc = 0x16a764u;
    // NOP
    ctx->pc = 0x16a768u;
}
