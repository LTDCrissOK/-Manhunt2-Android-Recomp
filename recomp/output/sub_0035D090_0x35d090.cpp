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

// Function: sub_0035D090
// Address: 0x35d090 - 0x35d0f0
void sub_0035D090_0x35d090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D090_0x35d090");
#endif

    switch (ctx->pc) {
        case 0x35d0c4u: goto label_35d0c4;
        case 0x35d0d4u: goto label_35d0d4;
        default: break;
    }

    ctx->pc = 0x35d090u;

    // 0x35d090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d094: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x35d094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x35d098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d09c: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x35d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
    // 0x35d0a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d0a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d0a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35d0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35d0ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x35d0acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0b0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x35d0b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35d0b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0b8: 0xa6000006  sh          $zero, 0x6($s0)
    ctx->pc = 0x35d0b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x35d0bc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x35D0BCu;
    SET_GPR_U32(ctx, 31, 0x35D0C4u);
    ctx->pc = 0x35D0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0BCu;
    // 0x35d0c0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x35D0BCu, 0x35D0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0C4u;
label_35d0c4:
    // 0x35d0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0cc: 0xc0d743c  jal         func_35D0F0
    ctx->pc = 0x35D0CCu;
    SET_GPR_U32(ctx, 31, 0x35D0D4u);
    ctx->pc = 0x35D0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D0CCu;
    // 0x35d0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0F0u, 0x35D0CCu, 0x35D0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D0D4u;
label_35d0d4:
    // 0x35d0d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d0d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d0d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d0e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x35D0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D0E4u;
        // 0x35d0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D0ECu;
    // 0x35d0ec: 0x0  nop
    ctx->pc = 0x35d0ecu;
    // NOP
    ctx->pc = 0x35d0f0u;
}
