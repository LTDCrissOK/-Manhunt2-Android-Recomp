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

// Function: sub_003A4530
// Address: 0x3a4530 - 0x3a4588
void sub_003A4530_0x3a4530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4530_0x3a4530");
#endif

    switch (ctx->pc) {
        case 0x3a455cu: goto label_3a455c;
        default: break;
    }

    ctx->pc = 0x3a4530u;

    // 0x3a4530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a4534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a4538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a4538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a453c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A453Cu;
    {
        const bool branch_taken_0x3a453c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A453Cu;
        // 0x3a4540: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a453c) {
            ctx->pc = 0x3A4578u;
            goto label_3a4578;
        }
    }
    ctx->pc = 0x3A4544u;
    // 0x3a4544: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3a4544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a4548: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3a4548u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a454c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A454Cu;
    {
        const bool branch_taken_0x3a454c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a454c) {
            ctx->pc = 0x3A4550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A454Cu;
            // 0x3a4550: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A4560u;
            goto label_3a4560;
        }
    }
    ctx->pc = 0x3A4554u;
    // 0x3a4554: 0xc0e9200  jal         func_3A4800
    ctx->pc = 0x3A4554u;
    SET_GPR_U32(ctx, 31, 0x3A455Cu);
    ctx->pc = 0x3A4800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4800u, 0x3A4554u, 0x3A455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A455Cu;
label_3a455c:
    // 0x3a455c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a455cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a4560:
    // 0x3a4560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a4564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a456c: 0x80e90e6  j           func_3A4398
    ctx->pc = 0x3A456Cu;
    ctx->pc = 0x3A4570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A456Cu;
    // 0x3a4570: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4398u;
    sub_003A4398_0x3a4398(rdram, ctx, runtime); return;
    ctx->pc = 0x3A4574u;
    // 0x3a4574: 0x0  nop
    ctx->pc = 0x3a4574u;
    // NOP
label_3a4578:
    // 0x3a4578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a4578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a457c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a457cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a4580: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4580u;
        // 0x3a4584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4588u;
}
