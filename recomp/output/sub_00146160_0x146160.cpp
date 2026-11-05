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

// Function: sub_00146160
// Address: 0x146160 - 0x1461a8
void sub_00146160_0x146160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146160_0x146160");
#endif

    switch (ctx->pc) {
        case 0x146184u: goto label_146184;
        case 0x146194u: goto label_146194;
        default: break;
    }

    ctx->pc = 0x146160u;

    // 0x146160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146164: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x146164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x146168: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x146168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14616c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14616cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x146170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146174: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x146178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x146178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14617c: 0xc051b3a  jal         func_146CE8
    ctx->pc = 0x14617Cu;
    SET_GPR_U32(ctx, 31, 0x146184u);
    ctx->pc = 0x146180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14617Cu;
    // 0x146180: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146CE8u, 0x14617Cu, 0x146184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146184u;
label_146184:
    // 0x146184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146188: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x146188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14618c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14618Cu;
    SET_GPR_U32(ctx, 31, 0x146194u);
    ctx->pc = 0x146190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14618Cu;
    // 0x146190: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14618Cu, 0x146194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146194u;
label_146194:
    // 0x146194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x146194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x146198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14619c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1461a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1461A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461A0u;
        // 0x1461a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1461A8u;
}
