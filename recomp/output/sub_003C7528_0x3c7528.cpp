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

// Function: sub_003C7528
// Address: 0x3c7528 - 0x3c7630
void sub_003C7528_0x3c7528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7528_0x3c7528");
#endif

    switch (ctx->pc) {
        case 0x3c7560u: goto label_3c7560;
        case 0x3c75ccu: goto label_3c75cc;
        case 0x3c75e8u: goto label_3c75e8;
        case 0x3c75f4u: goto label_3c75f4;
        default: break;
    }

    ctx->pc = 0x3c7528u;

    // 0x3c7528: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c7528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3c752c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3c752cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7530: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c7530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3c7534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3c7534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7538: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c7538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3c753c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c753cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7540: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c7540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3c7544: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3c7544u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7548: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c7548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3c754c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3c754cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7554: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x3c7554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3c7558: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c7558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3c755c: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3c755cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_3c7560:
    // 0x3c7560: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3c7560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c7564: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3c7564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3c7568: 0x132302a  slt         $a2, $t1, $s2
    ctx->pc = 0x3c7568u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3c756c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x3c756cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3c7570: 0x881018  mult        $v0, $a0, $t0
    ctx->pc = 0x3c7570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c7574: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3c7574u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3c7578: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x3c7578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3c757c: 0x532021  addu        $a0, $v0, $s3
    ctx->pc = 0x3c757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3c7580: 0x42c02  srl         $a1, $a0, 16
    ctx->pc = 0x3c7580u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3c7584: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c7584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3c7588: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x3c7588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3c758c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x3c758cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3c7590: 0x39c02  srl         $s3, $v1, 16
    ctx->pc = 0x3c7590u;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3c7594: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3c7594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c7598: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3c7598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3c759c: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3C759Cu;
    {
        const bool branch_taken_0x3c759c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C75A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C759Cu;
        // 0x3c75a0: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c759c) {
            ctx->pc = 0x3C7560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7560;
        }
    }
    ctx->pc = 0x3C75A4u;
    // 0x3c75a4: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C75A4u;
    {
        const bool branch_taken_0x3c75a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75A4u;
        // 0x3c75a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75a4) {
            ctx->pc = 0x3C7610u;
            goto label_3c7610;
        }
    }
    ctx->pc = 0x3C75ACu;
    // 0x3c75ac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c75acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c75b0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3c75b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c75b4: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3C75B4u;
    {
        const bool branch_taken_0x3c75b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C75B4u;
        // 0x3c75b8: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c75b4) {
            ctx->pc = 0x3C75FCu;
            goto label_3c75fc;
        }
    }
    ctx->pc = 0x3C75BCu;
    // 0x3c75bc: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3c75bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c75c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3c75c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c75c4: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C75C4u;
    SET_GPR_U32(ctx, 31, 0x3C75CCu);
    ctx->pc = 0x3C75C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75C4u;
    // 0x3c75c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C75C4u, 0x3C75CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75CCu;
label_3c75cc:
    // 0x3c75cc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x3c75ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c75d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c75d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c75d4: 0x2625000c  addiu       $a1, $s1, 0xC
    ctx->pc = 0x3c75d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3c75d8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x3c75d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3c75dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3c75dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3c75e0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C75E0u;
    SET_GPR_U32(ctx, 31, 0x3C75E8u);
    ctx->pc = 0x3C75E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75E0u;
    // 0x3c75e4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C75E0u, 0x3C75E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75E8u;
label_3c75e8:
    // 0x3c75e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c75e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c75ec: 0xc0f1d3c  jal         func_3C74F0
    ctx->pc = 0x3C75ECu;
    SET_GPR_U32(ctx, 31, 0x3C75F4u);
    ctx->pc = 0x3C75F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C75ECu;
    // 0x3c75f0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C74F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C74F0u, 0x3C75ECu, 0x3C75F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C75F4u;
label_3c75f4:
    // 0x3c75f4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3c75f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c75f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3c75fc:
    // 0x3c75fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3c75fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3c7600: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3c7600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3c7604: 0xac530014  sw          $s3, 0x14($v0)
    ctx->pc = 0x3c7604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 19));
    // 0x3c7608: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x3c7608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x3c760c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c760cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c7610:
    // 0x3c7610: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c7610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7614: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c7614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7618: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c7618u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c761c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c761cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7620: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c7620u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7628: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7628u;
        // 0x3c762c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7630u;
}
