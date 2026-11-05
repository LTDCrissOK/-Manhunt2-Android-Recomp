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

// Function: sub_003974C0
// Address: 0x3974c0 - 0x397590
void sub_003974C0_0x3974c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003974C0_0x3974c0");
#endif

    switch (ctx->pc) {
        case 0x397510u: goto label_397510;
        case 0x397520u: goto label_397520;
        case 0x397528u: goto label_397528;
        case 0x397530u: goto label_397530;
        default: break;
    }

    ctx->pc = 0x3974c0u;

    // 0x3974c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3974c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3974c4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3974c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3974c8: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x3974c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x3974cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3974ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3974d0: 0x26c319a0  addiu       $v1, $s6, 0x19A0
    ctx->pc = 0x3974d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6560));
    // 0x3974d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3974d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3974d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3974d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3974dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3974dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3974e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3974e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3974e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3974e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3974e8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3974e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3974ec: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x3974ecu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x4019A0u));
    // 0x3974f0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3974F0u;
    {
        const bool branch_taken_0x3974f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3974F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3974F0u;
        // 0x3974f4: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3974f0) {
            ctx->pc = 0x397548u;
            goto label_397548;
        }
    }
    ctx->pc = 0x3974F8u;
    // 0x3974f8: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x3974f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x3974fc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3974fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397500: 0x26b21998  addiu       $s2, $s5, 0x1998
    ctx->pc = 0x397500u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x397504: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x397504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397508: 0x26901960  addiu       $s0, $s4, 0x1960
    ctx->pc = 0x397508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 6496));
    // 0x39750c: 0x0  nop
    ctx->pc = 0x39750cu;
    // NOP
label_397510:
    // 0x397510: 0xfe510000  sd          $s1, 0x0($s2)
    ctx->pc = 0x397510u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 17));
    // 0x397514: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x397514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x397518: 0xc0f260c  jal         func_3C9830
    ctx->pc = 0x397518u;
    SET_GPR_U32(ctx, 31, 0x397520u);
    ctx->pc = 0x39751Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397518u;
    // 0x39751c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9830u, 0x397518u, 0x397520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397520u;
label_397520:
    // 0x397520: 0xc0f2634  jal         func_3C98D0
    ctx->pc = 0x397520u;
    SET_GPR_U32(ctx, 31, 0x397528u);
    ctx->pc = 0x397524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397520u;
    // 0x397524: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C98D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C98D0u, 0x397520u, 0x397528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397528u;
label_397528:
    // 0x397528: 0xc0e5b88  jal         func_396E20
    ctx->pc = 0x397528u;
    SET_GPR_U32(ctx, 31, 0x397530u);
    ctx->pc = 0x39752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397528u;
    // 0x39752c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396E20u, 0x397528u, 0x397530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397530u;
label_397530:
    // 0x397530: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x397530u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x397534: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x397534u;
    {
        const bool branch_taken_0x397534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x397538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397534u;
        // 0x397538: 0x26c219a0  addiu       $v0, $s6, 0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397534) {
            ctx->pc = 0x397510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397510;
        }
    }
    ctx->pc = 0x39753Cu;
    // 0x39753c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39753Cu;
    {
        const bool branch_taken_0x39753c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39753Cu;
        // 0x397540: 0xdfb60030  ld          $s6, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39753c) {
            ctx->pc = 0x397554u;
            goto label_397554;
        }
    }
    ctx->pc = 0x397544u;
    // 0x397544: 0x0  nop
    ctx->pc = 0x397544u;
    // NOP
label_397548:
    // 0x397548: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x397548u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x39754c: 0x26c219a0  addiu       $v0, $s6, 0x19A0
    ctx->pc = 0x39754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6560));
    // 0x397550: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x397550u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_397554:
    // 0x397554: 0x26a31998  addiu       $v1, $s5, 0x1998
    ctx->pc = 0x397554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6552));
    // 0x397558: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x397558u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39755c: 0x26841960  addiu       $a0, $s4, 0x1960
    ctx->pc = 0x39755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 6496));
    // 0x397560: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x397560u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x397564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x397564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x397568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x397568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39756c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39756cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x397570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x397570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x397574: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x397574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x397578: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x397578u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x39757c: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x39757cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x397580: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x397580u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x397584: 0x3e00008  jr          $ra
    ctx->pc = 0x397584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397584u;
        // 0x397588: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39758Cu;
    // 0x39758c: 0x0  nop
    ctx->pc = 0x39758cu;
    // NOP
    ctx->pc = 0x397590u;
}
