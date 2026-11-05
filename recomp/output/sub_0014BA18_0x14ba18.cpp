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

// Function: sub_0014BA18
// Address: 0x14ba18 - 0x14ba68
void sub_0014BA18_0x14ba18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014BA18_0x14ba18");
#endif

    switch (ctx->pc) {
        case 0x14ba34u: goto label_14ba34;
        case 0x14ba3cu: goto label_14ba3c;
        case 0x14ba50u: goto label_14ba50;
        default: break;
    }

    ctx->pc = 0x14ba18u;

    // 0x14ba18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ba18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ba1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ba1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ba20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ba20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ba24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ba24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ba28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14ba28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14ba2c: 0xc052f32  jal         func_14BCC8
    ctx->pc = 0x14BA2Cu;
    SET_GPR_U32(ctx, 31, 0x14BA34u);
    ctx->pc = 0x14BA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA2Cu;
    // 0x14ba30: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BCC8u, 0x14BA2Cu, 0x14BA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA34u;
label_14ba34:
    // 0x14ba34: 0xc04d7e2  jal         func_135F88
    ctx->pc = 0x14BA34u;
    SET_GPR_U32(ctx, 31, 0x14BA3Cu);
    ctx->pc = 0x14BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA34u;
    // 0x14ba38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F88u, 0x14BA34u, 0x14BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA3Cu;
label_14ba3c:
    // 0x14ba3c: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x14ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x14ba40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ba44: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x14ba44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x14ba48: 0xc04d89a  jal         func_136268
    ctx->pc = 0x14BA48u;
    SET_GPR_U32(ctx, 31, 0x14BA50u);
    ctx->pc = 0x14BA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14BA48u;
    // 0x14ba4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x14BA48u, 0x14BA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14BA50u;
label_14ba50:
    // 0x14ba50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ba50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ba54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ba54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ba58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ba58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ba5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BA5Cu;
        // 0x14ba60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BA64u;
    // 0x14ba64: 0x0  nop
    ctx->pc = 0x14ba64u;
    // NOP
    ctx->pc = 0x14ba68u;
}
