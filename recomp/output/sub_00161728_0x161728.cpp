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

// Function: sub_00161728
// Address: 0x161728 - 0x161790
void sub_00161728_0x161728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161728_0x161728");
#endif

    switch (ctx->pc) {
        case 0x16174cu: goto label_16174c;
        case 0x161754u: goto label_161754;
        case 0x16175cu: goto label_16175c;
        case 0x161764u: goto label_161764;
        case 0x16176cu: goto label_16176c;
        case 0x161774u: goto label_161774;
        case 0x16177cu: goto label_16177c;
        default: break;
    }

    ctx->pc = 0x161728u;

    // 0x161728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16172c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16172cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161730: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x161730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161738: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x161738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x16173c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x16173Cu;
    {
        const bool branch_taken_0x16173c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16173c) {
            ctx->pc = 0x161740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16173Cu;
            // 0x161740: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161780u;
            goto label_161780;
        }
    }
    ctx->pc = 0x161744u;
    // 0x161744: 0xc0586c0  jal         func_161B00
    ctx->pc = 0x161744u;
    SET_GPR_U32(ctx, 31, 0x16174Cu);
    ctx->pc = 0x161B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161B00u, 0x161744u, 0x16174Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16174Cu;
label_16174c:
    // 0x16174c: 0xc0586e6  jal         func_161B98
    ctx->pc = 0x16174Cu;
    SET_GPR_U32(ctx, 31, 0x161754u);
    ctx->pc = 0x161750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16174Cu;
    // 0x161750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161B98u, 0x16174Cu, 0x161754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161754u;
label_161754:
    // 0x161754: 0xc05872a  jal         func_161CA8
    ctx->pc = 0x161754u;
    SET_GPR_U32(ctx, 31, 0x16175Cu);
    ctx->pc = 0x161758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161754u;
    // 0x161758: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161CA8u, 0x161754u, 0x16175Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16175Cu;
label_16175c:
    // 0x16175c: 0xc058756  jal         func_161D58
    ctx->pc = 0x16175Cu;
    SET_GPR_U32(ctx, 31, 0x161764u);
    ctx->pc = 0x161760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16175Cu;
    // 0x161760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x161D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161D58u, 0x16175Cu, 0x161764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161764u;
label_161764:
    // 0x161764: 0xc04f04c  jal         func_13C130
    ctx->pc = 0x161764u;
    SET_GPR_U32(ctx, 31, 0x16176Cu);
    ctx->pc = 0x161768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161764u;
    // 0x161768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C130u, 0x161764u, 0x16176Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16176Cu;
label_16176c:
    // 0x16176c: 0xc04f06e  jal         func_13C1B8
    ctx->pc = 0x16176Cu;
    SET_GPR_U32(ctx, 31, 0x161774u);
    ctx->pc = 0x161770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16176Cu;
    // 0x161770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C1B8u, 0x16176Cu, 0x161774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161774u;
label_161774:
    // 0x161774: 0xc058dda  jal         func_163768
    ctx->pc = 0x161774u;
    SET_GPR_U32(ctx, 31, 0x16177Cu);
    ctx->pc = 0x161778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161774u;
    // 0x161778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163768u, 0x161774u, 0x16177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16177Cu;
label_16177c:
    // 0x16177c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16177cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161780:
    // 0x161780: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161784: 0x3e00008  jr          $ra
    ctx->pc = 0x161784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161784u;
        // 0x161788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16178Cu;
    // 0x16178c: 0x0  nop
    ctx->pc = 0x16178cu;
    // NOP
    ctx->pc = 0x161790u;
}
