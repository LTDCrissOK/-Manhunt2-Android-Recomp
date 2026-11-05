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

// Function: sub_00177330
// Address: 0x177330 - 0x177388
void sub_00177330_0x177330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177330_0x177330");
#endif

    switch (ctx->pc) {
        case 0x17734cu: goto label_17734c;
        case 0x177358u: goto label_177358;
        case 0x17736cu: goto label_17736c;
        case 0x177374u: goto label_177374;
        default: break;
    }

    ctx->pc = 0x177330u;

    // 0x177330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x177330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x177334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x177338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17733c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17733cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x177340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x177344: 0xc05e014  jal         func_178050
    ctx->pc = 0x177344u;
    SET_GPR_U32(ctx, 31, 0x17734Cu);
    ctx->pc = 0x177348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177344u;
    // 0x177348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178050u, 0x177344u, 0x17734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17734Cu;
label_17734c:
    // 0x17734c: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x17734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x177350: 0xc04f72c  jal         func_13DCB0
    ctx->pc = 0x177350u;
    SET_GPR_U32(ctx, 31, 0x177358u);
    ctx->pc = 0x177354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177350u;
    // 0x177354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DCB0u, 0x177350u, 0x177358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177358u;
label_177358:
    // 0x177358: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x177358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x17735c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x177360: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x177360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x177364: 0xc05e082  jal         func_178208
    ctx->pc = 0x177364u;
    SET_GPR_U32(ctx, 31, 0x17736Cu);
    ctx->pc = 0x177368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177364u;
    // 0x177368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178208u, 0x177364u, 0x17736Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17736Cu;
label_17736c:
    // 0x17736c: 0xc05e158  jal         func_178560
    ctx->pc = 0x17736Cu;
    SET_GPR_U32(ctx, 31, 0x177374u);
    ctx->pc = 0x177370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17736Cu;
    // 0x177370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178560u, 0x17736Cu, 0x177374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177374u;
label_177374:
    // 0x177374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17737c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177380: 0x3e00008  jr          $ra
    ctx->pc = 0x177380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177380u;
        // 0x177384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177388u;
}
