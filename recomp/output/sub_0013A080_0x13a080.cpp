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

// Function: sub_0013A080
// Address: 0x13a080 - 0x13a0d8
void sub_0013A080_0x13a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A080_0x13a080");
#endif

    switch (ctx->pc) {
        case 0x13a0acu: goto label_13a0ac;
        case 0x13a0bcu: goto label_13a0bc;
        default: break;
    }

    ctx->pc = 0x13a080u;

    // 0x13a080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13a084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13a08c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a08cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a090: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13a090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13a094: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x13a094u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a098: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13a098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a09c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13a09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13a0a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0a4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x13A0A4u;
    SET_GPR_U32(ctx, 31, 0x13A0ACu);
    ctx->pc = 0x13A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0A4u;
    // 0x13a0a8: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x13A0A4u, 0x13A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0ACu;
label_13a0ac:
    // 0x13a0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13a0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13a0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0b4: 0xc04d88a  jal         func_136228
    ctx->pc = 0x13A0B4u;
    SET_GPR_U32(ctx, 31, 0x13A0BCu);
    ctx->pc = 0x13A0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A0B4u;
    // 0x13a0b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x13A0B4u, 0x13A0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0BCu;
label_13a0bc:
    // 0x13a0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a0c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13a0c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13a0c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13a0c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a0c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13a0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13a0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x13A0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0CCu;
        // 0x13a0d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A0D4u;
    // 0x13a0d4: 0x0  nop
    ctx->pc = 0x13a0d4u;
    // NOP
    ctx->pc = 0x13a0d8u;
}
