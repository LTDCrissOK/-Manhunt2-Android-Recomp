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

// Function: sub_00178510
// Address: 0x178510 - 0x178560
void sub_00178510_0x178510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178510_0x178510");
#endif

    switch (ctx->pc) {
        case 0x178530u: goto label_178530;
        case 0x178544u: goto label_178544;
        default: break;
    }

    ctx->pc = 0x178510u;

    // 0x178510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178518: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17851c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178520: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x178520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x178524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178528: 0xc041e94  jal         func_107A50
    ctx->pc = 0x178528u;
    SET_GPR_U32(ctx, 31, 0x178530u);
    ctx->pc = 0x17852Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178528u;
    // 0x17852c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A50u, 0x178528u, 0x178530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178530u;
label_178530:
    // 0x178530: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x178530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178534: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x178534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x178538: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x178538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17853c: 0xc05e282  jal         func_178A08
    ctx->pc = 0x17853Cu;
    SET_GPR_U32(ctx, 31, 0x178544u);
    ctx->pc = 0x178540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17853Cu;
    // 0x178540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178A08u, 0x17853Cu, 0x178544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178544u;
label_178544:
    // 0x178544: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x178544u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17854c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17854cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178554: 0x3e00008  jr          $ra
    ctx->pc = 0x178554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178554u;
        // 0x178558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17855Cu;
    // 0x17855c: 0x0  nop
    ctx->pc = 0x17855cu;
    // NOP
    ctx->pc = 0x178560u;
}
