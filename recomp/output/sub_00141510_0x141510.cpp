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

// Function: sub_00141510
// Address: 0x141510 - 0x141598
void sub_00141510_0x141510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141510_0x141510");
#endif

    switch (ctx->pc) {
        case 0x141544u: goto label_141544;
        case 0x141560u: goto label_141560;
        case 0x141584u: goto label_141584;
        default: break;
    }

    ctx->pc = 0x141510u;

    // 0x141510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x141514: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x141514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x141518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14151c: 0x244207c8  addiu       $v0, $v0, 0x7C8
    ctx->pc = 0x14151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1992));
    // 0x141520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141524: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x141528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14152c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x14152cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x141530: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x141530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x141534: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x141534u;
    {
        const bool branch_taken_0x141534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141534u;
        // 0x141538: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141534) {
            ctx->pc = 0x141544u;
            goto label_141544;
        }
    }
    ctx->pc = 0x14153Cu;
    // 0x14153c: 0xc05057a  jal         func_1415E8
    ctx->pc = 0x14153Cu;
    SET_GPR_U32(ctx, 31, 0x141544u);
    ctx->pc = 0x1415E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1415E8u, 0x14153Cu, 0x141544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141544u;
label_141544:
    // 0x141544: 0x26030b10  addiu       $v1, $s0, 0xB10
    ctx->pc = 0x141544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2832));
    // 0x141548: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x141548u;
    {
        const bool branch_taken_0x141548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141548u;
        // 0x14154c: 0x26020bd0  addiu       $v0, $s0, 0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141548) {
            ctx->pc = 0x141578u;
            goto label_141578;
        }
    }
    ctx->pc = 0x141550u;
    // 0x141550: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x141550u;
    {
        const bool branch_taken_0x141550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x141554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141550u;
        // 0x141554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141550) {
            ctx->pc = 0x14157Cu;
            goto label_14157c;
        }
    }
    ctx->pc = 0x141558u;
    // 0x141558: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x141558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x14155c: 0x0  nop
    ctx->pc = 0x14155cu;
    // NOP
label_141560:
    // 0x141560: 0x0  nop
    ctx->pc = 0x141560u;
    // NOP
    // 0x141564: 0x0  nop
    ctx->pc = 0x141564u;
    // NOP
    // 0x141568: 0x0  nop
    ctx->pc = 0x141568u;
    // NOP
    // 0x14156c: 0x0  nop
    ctx->pc = 0x14156cu;
    // NOP
    // 0x141570: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x141570u;
    {
        const bool branch_taken_0x141570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x141574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141570u;
        // 0x141574: 0x2442fff4  addiu       $v0, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141570) {
            ctx->pc = 0x141560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_141560;
        }
    }
    ctx->pc = 0x141578u;
label_141578:
    // 0x141578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14157c:
    // 0x14157c: 0xc04e4c4  jal         func_139310
    ctx->pc = 0x14157Cu;
    SET_GPR_U32(ctx, 31, 0x141584u);
    ctx->pc = 0x141580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14157Cu;
    // 0x141580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139310u, 0x14157Cu, 0x141584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141584u;
label_141584:
    // 0x141584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x141588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14158c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14158cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x141590: 0x3e00008  jr          $ra
    ctx->pc = 0x141590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141590u;
        // 0x141594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141598u;
}
