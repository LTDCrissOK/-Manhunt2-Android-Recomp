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

// Function: sub_00382550
// Address: 0x382550 - 0x382d68
void sub_00382550_0x382550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382550_0x382550");
#endif

    switch (ctx->pc) {
        case 0x3825c0u: goto label_3825c0;
        case 0x382644u: goto label_382644;
        case 0x3826c0u: goto label_3826c0;
        case 0x38279cu: goto label_38279c;
        case 0x3827c0u: goto label_3827c0;
        case 0x382848u: goto label_382848;
        case 0x38289cu: goto label_38289c;
        case 0x382930u: goto label_382930;
        case 0x3829b8u: goto label_3829b8;
        case 0x3829d8u: goto label_3829d8;
        case 0x382a34u: goto label_382a34;
        case 0x382b34u: goto label_382b34;
        case 0x382b38u: goto label_382b38;
        case 0x382c00u: goto label_382c00;
        case 0x382d38u: goto label_382d38;
        case 0x382d58u: goto label_382d58;
        default: break;
    }

    ctx->pc = 0x382550u;

    // 0x382550: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x382550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x382554: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x382554u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382558: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x382558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x38255c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x38255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x382560: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x382560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382564: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x382564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x382568: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x382568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38256c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x38256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x382570: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x382570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x382574: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x382574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x382578: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x382578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x38257c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x38257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x382580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x382580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x382584: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382588: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x382588u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x38258c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x38258cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x382590: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x382590u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382594: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382598: 0x8e370004  lw          $s7, 0x4($s1)
    ctx->pc = 0x382598u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38259c: 0xde150020  ld          $s5, 0x20($s0)
    ctx->pc = 0x38259cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3825a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3825A0u;
    {
        const bool branch_taken_0x3825a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3825A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825A0u;
        // 0x3825a4: 0x8e14001c  lw          $s4, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825a0) {
            ctx->pc = 0x3825B4u;
            goto label_3825b4;
        }
    }
    ctx->pc = 0x3825A8u;
    // 0x3825a8: 0x6a1023  subu        $v0, $v1, $t2
    ctx->pc = 0x3825a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3825ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3825ACu;
    {
        const bool branch_taken_0x3825ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3825B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825ACu;
        // 0x3825b0: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825ac) {
            ctx->pc = 0x3825C0u;
            goto label_3825c0;
        }
    }
    ctx->pc = 0x3825B4u;
label_3825b4:
    // 0x3825b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3825b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3825b8: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x3825b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x3825bc: 0x0  nop
    ctx->pc = 0x3825bcu;
    // NOP
label_3825c0:
    // 0x3825c0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3825c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3825c4: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x3825c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3825c8: 0x104001cd  beqz        $v0, . + 4 + (0x1CD << 2)
    ctx->pc = 0x3825C8u;
    {
        const bool branch_taken_0x3825c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3825CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3825C8u;
        // 0x3825cc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3825c8) {
            ctx->pc = 0x382D00u;
            goto label_382d00;
        }
    }
    ctx->pc = 0x3825D0u;
    // 0x3825d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3825d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3825d4: 0x244284c0  addiu       $v0, $v0, -0x7B40
    ctx->pc = 0x3825d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935744));
    // 0x3825d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3825d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3825dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3825dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3825e0: 0x800008  jr          $a0
    ctx->pc = 0x3825E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3825E8u: goto label_3825e8;
            case 0x3826B0u: goto label_3826b0;
            case 0x3827ACu: goto label_3827ac;
            case 0x382834u: goto label_382834;
            case 0x382920u: goto label_382920;
            case 0x382994u: goto label_382994;
            case 0x382ADCu: goto label_382adc;
            case 0x382BD8u: goto label_382bd8;
            case 0x382C40u: goto label_382c40;
            case 0x382C5Cu: goto label_382c5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3825E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3825E8u;
label_3825e8:
    // 0x3825e8: 0x2d220102  sltiu       $v0, $t1, 0x102
    ctx->pc = 0x3825e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
    // 0x3825ec: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3825ECu;
    {
        const bool branch_taken_0x3825ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3825ec) {
            ctx->pc = 0x3825F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3825ECu;
            // 0x3825f0: 0x92620010  lbu         $v0, 0x10($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38269Cu;
            goto label_38269c;
        }
    }
    ctx->pc = 0x3825F4u;
    // 0x3825f4: 0x2ee2000a  sltiu       $v0, $s7, 0xA
    ctx->pc = 0x3825f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3825f8: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3825F8u;
    {
        const bool branch_taken_0x3825f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3825f8) {
            ctx->pc = 0x3825FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3825F8u;
            // 0x3825fc: 0x92620010  lbu         $v0, 0x10($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38269Cu;
            goto label_38269c;
        }
    }
    ctx->pc = 0x382600u;
    // 0x382600: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382600u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382604: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x382604u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382608: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x38260c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x38260cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382610: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382610u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382614: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x382614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382618: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x382618u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38261c: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x38261cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x382620: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x382620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x382624: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x382624u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x382628: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x382628u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x38262c: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x38262cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x382630: 0x92640010  lbu         $a0, 0x10($s3)
    ctx->pc = 0x382630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x382634: 0x92650011  lbu         $a1, 0x11($s3)
    ctx->pc = 0x382634u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x382638: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x382638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x38263c: 0xc0e0b82  jal         func_382E08
    ctx->pc = 0x38263Cu;
    SET_GPR_U32(ctx, 31, 0x382644u);
    ctx->pc = 0x382640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38263Cu;
    // 0x382640: 0x8e670018  lw          $a3, 0x18($s3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382E08u, 0x38263Cu, 0x382644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382644u;
label_382644:
    // 0x382644: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382648: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x382648u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38264c: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x38264cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x382650: 0x8e360000  lw          $s6, 0x0($s1)
    ctx->pc = 0x382650u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382654: 0x8e370004  lw          $s7, 0x4($s1)
    ctx->pc = 0x382654u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x382658: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x38265c: 0xde150020  ld          $s5, 0x20($s0)
    ctx->pc = 0x38265cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x382660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382660u;
    {
        const bool branch_taken_0x382660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382660u;
        // 0x382664: 0x8e14001c  lw          $s4, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382660) {
            ctx->pc = 0x382674u;
            goto label_382674;
        }
    }
    ctx->pc = 0x382668u;
    // 0x382668: 0x6a1023  subu        $v0, $v1, $t2
    ctx->pc = 0x382668u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x38266c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38266Cu;
    {
        const bool branch_taken_0x38266c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38266Cu;
        // 0x382670: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38266c) {
            ctx->pc = 0x38267Cu;
            goto label_38267c;
        }
    }
    ctx->pc = 0x382674u;
label_382674:
    // 0x382674: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x382674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382678: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x382678u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_38267c:
    // 0x38267c: 0x11600006  beqz        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x38267Cu;
    {
        const bool branch_taken_0x38267c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x382680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38267Cu;
        // 0x382680: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38267c) {
            ctx->pc = 0x382698u;
            goto label_382698;
        }
    }
    ctx->pc = 0x382684u;
    // 0x382684: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x382684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x382688: 0x39630001  xori        $v1, $t3, 0x1
    ctx->pc = 0x382688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) ^ (uint64_t)(uint16_t)1);
    // 0x38268c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x38268cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x382690: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x382690u;
    {
        const bool branch_taken_0x382690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382690u;
        // 0x382694: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382690) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x382698u;
label_382698:
    // 0x382698: 0x92620010  lbu         $v0, 0x10($s3)
    ctx->pc = 0x382698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 16)));
label_38269c:
    // 0x38269c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38269cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3826a0: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x3826a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3826a4: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x3826a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x3826a8: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x3826a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x3826ac: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3826acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
label_3826b0:
    // 0x3826b0: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x3826b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3826b4: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x3826b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3826b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3826B8u;
    {
        const bool branch_taken_0x3826b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826B8u;
        // 0x3826bc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826b8) {
            ctx->pc = 0x3826ECu;
            goto label_3826ec;
        }
    }
    ctx->pc = 0x3826C0u;
label_3826c0:
    // 0x3826c0: 0x12e0016d  beqz        $s7, . + 4 + (0x16D << 2)
    ctx->pc = 0x3826C0u;
    {
        const bool branch_taken_0x3826c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3826C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826C0u;
        // 0x3826c4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826c0) {
            ctx->pc = 0x382C78u;
            goto label_382c78;
        }
    }
    ctx->pc = 0x3826C8u;
    // 0x3826c8: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x3826c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3826cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3826ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3826d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3826d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3826d4: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x3826d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x3826d8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x3826d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3826dc: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x3826dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3826e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3826E0u;
    {
        const bool branch_taken_0x3826e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3826E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3826E0u;
        // 0x3826e4: 0x2a3a825  or          $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3826e0) {
            ctx->pc = 0x3826C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3826c0;
        }
    }
    ctx->pc = 0x3826E8u;
    // 0x3826e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3826e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3826ec:
    // 0x3826ec: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x3826ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3826f0: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x3826f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x3826f4: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x3826f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3826f8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3826f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3826fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3826fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382700: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x382700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x382704: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x382704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x382708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x38270c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x38270cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x382710: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x382710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x382714: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x382714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x382718: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x382718u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38271c: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x38271cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x382720: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x382720u;
    {
        const bool branch_taken_0x382720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x382724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382720u;
        // 0x382724: 0x55a816  dsrlv       $s5, $s5, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382720) {
            ctx->pc = 0x38273Cu;
            goto label_38273c;
        }
    }
    ctx->pc = 0x382728u;
    // 0x382728: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x382728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38272c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x38272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x382730: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x382730u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x382734: 0x1000ffa2  b           . + 4 + (-0x5E << 2)
    ctx->pc = 0x382734u;
    {
        const bool branch_taken_0x382734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382734u;
        // 0x382738: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382734) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x38273Cu;
label_38273c:
    // 0x38273c: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x38273cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x382740: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x382740u;
    {
        const bool branch_taken_0x382740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382740u;
        // 0x382744: 0x30c2000f  andi        $v0, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382740) {
            ctx->pc = 0x382760u;
            goto label_382760;
        }
    }
    ctx->pc = 0x382748u;
    // 0x382748: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x382748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38274c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x38274cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x382750: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x382750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x382754: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x382754u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x382758: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x382758u;
    {
        const bool branch_taken_0x382758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382758u;
        // 0x38275c: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382758) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x382760u;
label_382760:
    // 0x382760: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x382760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x382764: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x382764u;
    {
        const bool branch_taken_0x382764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382764u;
        // 0x382768: 0x30c20020  andi        $v0, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x382764) {
            ctx->pc = 0x3828DCu;
            goto label_3828dc;
        }
    }
    ctx->pc = 0x38276Cu;
    // 0x38276c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38276Cu;
    {
        const bool branch_taken_0x38276c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38276Cu;
        // 0x382770: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38276c) {
            ctx->pc = 0x38277Cu;
            goto label_38277c;
        }
    }
    ctx->pc = 0x382774u;
    // 0x382774: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x382774u;
    {
        const bool branch_taken_0x382774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382774u;
        // 0x382778: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382774) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x38277Cu;
label_38277c:
    // 0x38277c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x38277cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x382780: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x382780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x382784: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x382784u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x382788: 0x24428480  addiu       $v0, $v0, -0x7B80
    ctx->pc = 0x382788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935680));
    // 0x38278c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x38278cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x382790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382794: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382794u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382798: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38279c:
    // 0x38279c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x38279cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x3827a0: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x3827a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3827a4: 0x1000015c  b           . + 4 + (0x15C << 2)
    ctx->pc = 0x3827A4u;
    {
        const bool branch_taken_0x3827a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3827A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827A4u;
        // 0x3827a8: 0xae370004  sw          $s7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827a4) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x3827ACu;
label_3827ac:
    // 0x3827ac: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x3827acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3827b0: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x3827b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3827b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3827B4u;
    {
        const bool branch_taken_0x3827b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3827B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827B4u;
        // 0x3827b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827b4) {
            ctx->pc = 0x3827ECu;
            goto label_3827ec;
        }
    }
    ctx->pc = 0x3827BCu;
    // 0x3827bc: 0x0  nop
    ctx->pc = 0x3827bcu;
    // NOP
label_3827c0:
    // 0x3827c0: 0x12e00134  beqz        $s7, . + 4 + (0x134 << 2)
    ctx->pc = 0x3827C0u;
    {
        const bool branch_taken_0x3827c0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x3827C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827C0u;
        // 0x3827c4: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827c0) {
            ctx->pc = 0x382C94u;
            goto label_382c94;
        }
    }
    ctx->pc = 0x3827C8u;
    // 0x3827c8: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x3827c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3827cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3827ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3827d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3827d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3827d4: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x3827d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x3827d8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x3827d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x3827dc: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x3827dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x3827e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3827E0u;
    {
        const bool branch_taken_0x3827e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3827E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3827E0u;
        // 0x3827e4: 0x2a3a825  or          $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3827e0) {
            ctx->pc = 0x3827C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3827c0;
        }
    }
    ctx->pc = 0x3827E8u;
    // 0x3827e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3827ec:
    // 0x3827ec: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x3827ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x3827f0: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x3827f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x3827f4: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x3827f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x3827f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x3827f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x3827fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3827fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x382800: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x382800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x382804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x382804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382808: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x382808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38280c: 0x92630011  lbu         $v1, 0x11($s3)
    ctx->pc = 0x38280cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 17)));
    // 0x382810: 0x288a023  subu        $s4, $s4, $t0
    ctx->pc = 0x382810u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x382814: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x382814u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x382818: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x382818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x38281c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x38281cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x382820: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x382820u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
    // 0x382824: 0xae650004  sw          $a1, 0x4($s3)
    ctx->pc = 0x382824u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
    // 0x382828: 0x115a816  dsrlv       $s5, $s5, $t0
    ctx->pc = 0x382828u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 8) & 0x3F));
    // 0x38282c: 0xae660008  sw          $a2, 0x8($s3)
    ctx->pc = 0x38282cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 6));
    // 0x382830: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x382830u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
label_382834:
    // 0x382834: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x382834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x382838: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x382838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x38283c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38283Cu;
    {
        const bool branch_taken_0x38283c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38283Cu;
        // 0x382840: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38283c) {
            ctx->pc = 0x382874u;
            goto label_382874;
        }
    }
    ctx->pc = 0x382844u;
    // 0x382844: 0x0  nop
    ctx->pc = 0x382844u;
    // NOP
label_382848:
    // 0x382848: 0x12e00119  beqz        $s7, . + 4 + (0x119 << 2)
    ctx->pc = 0x382848u;
    {
        const bool branch_taken_0x382848 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x38284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382848u;
        // 0x38284c: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382848) {
            ctx->pc = 0x382CB0u;
            goto label_382cb0;
        }
    }
    ctx->pc = 0x382850u;
    // 0x382850: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x382850u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x382854: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x382854u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382858: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x382858u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x38285c: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x38285cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x382860: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x382860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x382864: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x382864u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x382868: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x382868u;
    {
        const bool branch_taken_0x382868 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38286Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382868u;
        // 0x38286c: 0x2a3a825  or          $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382868) {
            ctx->pc = 0x382848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382848;
        }
    }
    ctx->pc = 0x382870u;
    // 0x382870: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x382870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_382874:
    // 0x382874: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x382874u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x382878: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x382878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x38287c: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x38287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x382880: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x382880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x382884: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x382884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382888: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x382888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x38288c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382890: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x382890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x382894: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x382894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x382898: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x382898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_38289c:
    // 0x38289c: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x38289cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x3828a0: 0x90660000  lbu         $a2, 0x0($v1)
    ctx->pc = 0x3828a0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3828a4: 0x284a023  subu        $s4, $s4, $a0
    ctx->pc = 0x3828a4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x3828a8: 0x30c20010  andi        $v0, $a2, 0x10
    ctx->pc = 0x3828a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x3828ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3828ACu;
    {
        const bool branch_taken_0x3828ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828ACu;
        // 0x3828b0: 0x95a816  dsrlv       $s5, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 4) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828ac) {
            ctx->pc = 0x3828D0u;
            goto label_3828d0;
        }
    }
    ctx->pc = 0x3828B4u;
    // 0x3828b4: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x3828b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x3828b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3828b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3828bc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3828bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3828c0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x3828c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3828c4: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3828c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x3828c8: 0x1000ff3d  b           . + 4 + (-0xC3 << 2)
    ctx->pc = 0x3828C8u;
    {
        const bool branch_taken_0x3828c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828C8u;
        // 0x3828cc: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828c8) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x3828D0u;
label_3828d0:
    // 0x3828d0: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x3828d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x3828d4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3828D4u;
    {
        const bool branch_taken_0x3828d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3828d4) {
            ctx->pc = 0x3828D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3828D4u;
            // 0x3828d8: 0x24030009  addiu       $v1, $zero, 0x9 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3828F4u;
            goto label_3828f4;
        }
    }
    ctx->pc = 0x3828DCu;
label_3828dc:
    // 0x3828dc: 0xae66000c  sw          $a2, 0xC($s3)
    ctx->pc = 0x3828dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
    // 0x3828e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3828e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3828e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3828e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3828e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3828e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3828ec: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x3828ECu;
    {
        const bool branch_taken_0x3828ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3828F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3828ECu;
        // 0x3828f0: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3828ec) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x3828F4u;
label_3828f4:
    // 0x3828f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3828f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3828f8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3828f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x3828fc: 0x244284a0  addiu       $v0, $v0, -0x7B60
    ctx->pc = 0x3828fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935712));
    // 0x382900: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x382900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x382904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382908: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382908u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x38290c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x38290cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382910: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382914: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x382914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x382918: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x382918u;
    {
        const bool branch_taken_0x382918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382918u;
        // 0x38291c: 0xae370004  sw          $s7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382918) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382920u;
label_382920:
    // 0x382920: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x382920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x382924: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x382924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x382928: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x382928u;
    {
        const bool branch_taken_0x382928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382928u;
        // 0x38292c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382928) {
            ctx->pc = 0x38295Cu;
            goto label_38295c;
        }
    }
    ctx->pc = 0x382930u;
label_382930:
    // 0x382930: 0x12e000e6  beqz        $s7, . + 4 + (0xE6 << 2)
    ctx->pc = 0x382930u;
    {
        const bool branch_taken_0x382930 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x382934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382930u;
        // 0x382934: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382930) {
            ctx->pc = 0x382CCCu;
            goto label_382ccc;
        }
    }
    ctx->pc = 0x382938u;
    // 0x382938: 0x92c30000  lbu         $v1, 0x0($s6)
    ctx->pc = 0x382938u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x38293c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x38293cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382940: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x382940u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x382944: 0x2831814  dsllv       $v1, $v1, $s4
    ctx->pc = 0x382944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 20) & 0x3F));
    // 0x382948: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x382948u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x38294c: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x38294cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x382950: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x382950u;
    {
        const bool branch_taken_0x382950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382950u;
        // 0x382954: 0x2a3a825  or          $s5, $s5, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382950) {
            ctx->pc = 0x382930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382930;
        }
    }
    ctx->pc = 0x382958u;
    // 0x382958: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x382958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_38295c:
    // 0x38295c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x38295cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x382960: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x382960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x382964: 0x15283c  dsll32      $a1, $s5, 0
    ctx->pc = 0x382964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) << (32 + 0));
    // 0x382968: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x382968u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x38296c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38296cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x382970: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x382970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x382974: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x382974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x382978: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x382978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38297c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x38297cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x382980: 0x288a023  subu        $s4, $s4, $t0
    ctx->pc = 0x382980u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 8)));
    // 0x382984: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x382984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x382988: 0x115a816  dsrlv       $s5, $s5, $t0
    ctx->pc = 0x382988u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> (GPR_U32(ctx, 8) & 0x3F));
    // 0x38298c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x38298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x382990: 0xae64000c  sw          $a0, 0xC($s3)
    ctx->pc = 0x382990u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 4));
label_382994:
    // 0x382994: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x382994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x382998: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x382998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x38299c: 0x1429023  subu        $s2, $t2, $v0
    ctx->pc = 0x38299cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3829a0: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x3829a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3829a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3829A4u;
    {
        const bool branch_taken_0x3829a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3829A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3829A4u;
        // 0x3829a8: 0x8e660004  lw          $a2, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3829a4) {
            ctx->pc = 0x3829D0u;
            goto label_3829d0;
        }
    }
    ctx->pc = 0x3829ACu;
    // 0x3829ac: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x3829acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3829b0: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x3829b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3829b4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3829b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3829b8:
    // 0x3829b8: 0x244182b  sltu        $v1, $s2, $a0
    ctx->pc = 0x3829b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3829bc: 0x0  nop
    ctx->pc = 0x3829bcu;
    // NOP
    // 0x3829c0: 0x0  nop
    ctx->pc = 0x3829c0u;
    // NOP
    // 0x3829c4: 0x0  nop
    ctx->pc = 0x3829c4u;
    // NOP
    // 0x3829c8: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3829C8u;
    {
        const bool branch_taken_0x3829c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3829c8) {
            ctx->pc = 0x3829CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3829C8u;
            // 0x3829cc: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3829B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3829b8;
        }
    }
    ctx->pc = 0x3829D0u;
label_3829d0:
    // 0x3829d0: 0x50c0fefb  beql        $a2, $zero, . + 4 + (-0x105 << 2)
    ctx->pc = 0x3829D0u;
    {
        const bool branch_taken_0x3829d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3829d0) {
            ctx->pc = 0x3829D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3829D0u;
            // 0x3829d4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x3829D8u;
label_3829d8:
    // 0x3829d8: 0x55200032  bnel        $t1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x3829D8u;
    {
        const bool branch_taken_0x3829d8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x3829d8) {
            ctx->pc = 0x3829DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3829D8u;
            // 0x3829dc: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382AA4u;
            goto label_382aa4;
        }
    }
    ctx->pc = 0x3829E0u;
    // 0x3829e0: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x3829e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3829e4: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x3829E4u;
    {
        const bool branch_taken_0x3829e4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x3829e4) {
            ctx->pc = 0x382A18u;
            goto label_382a18;
        }
    }
    ctx->pc = 0x3829ECu;
    // 0x3829ec: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3829ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x3829f0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x3829f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x3829f4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3829F4u;
    {
        const bool branch_taken_0x3829f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3829f4) {
            ctx->pc = 0x382A18u;
            goto label_382a18;
        }
    }
    ctx->pc = 0x3829FCu;
    // 0x3829fc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3829fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a00: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382A04u;
    {
        const bool branch_taken_0x382a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A04u;
        // 0x382a08: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a04) {
            ctx->pc = 0x382A14u;
            goto label_382a14;
        }
    }
    ctx->pc = 0x382A0Cu;
    // 0x382a0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382A0Cu;
    {
        const bool branch_taken_0x382a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A0Cu;
        // 0x382a10: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a0c) {
            ctx->pc = 0x382A18u;
            goto label_382a18;
        }
    }
    ctx->pc = 0x382A14u;
label_382a14:
    // 0x382a14: 0x8a4823  subu        $t1, $a0, $t2
    ctx->pc = 0x382a14u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_382a18:
    // 0x382a18: 0x55200022  bnel        $t1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x382A18u;
    {
        const bool branch_taken_0x382a18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x382a18) {
            ctx->pc = 0x382A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382A18u;
            // 0x382a1c: 0x92420000  lbu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382AA4u;
            goto label_382aa4;
        }
    }
    ctx->pc = 0x382A20u;
    // 0x382a20: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x382a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x382a24: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x382a24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a2c: 0xc0e0ede  jal         func_383B78
    ctx->pc = 0x382A2Cu;
    SET_GPR_U32(ctx, 31, 0x382A34u);
    ctx->pc = 0x382A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382A2Cu;
    // 0x382a30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382A2Cu, 0x382A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382A34u;
label_382a34:
    // 0x382a34: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382a38: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x382a38u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a3c: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x382a3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x382a40: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382a44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382A44u;
    {
        const bool branch_taken_0x382a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A44u;
        // 0x382a48: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a44) {
            ctx->pc = 0x382A58u;
            goto label_382a58;
        }
    }
    ctx->pc = 0x382A4Cu;
    // 0x382a4c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x382a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382a50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x382A50u;
    {
        const bool branch_taken_0x382a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A50u;
        // 0x382a54: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a50) {
            ctx->pc = 0x382A64u;
            goto label_382a64;
        }
    }
    ctx->pc = 0x382A58u;
label_382a58:
    // 0x382a58: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x382a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x382a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a60: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x382a60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_382a64:
    // 0x382a64: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x382A64u;
    {
        const bool branch_taken_0x382a64 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x382a64) {
            ctx->pc = 0x382A98u;
            goto label_382a98;
        }
    }
    ctx->pc = 0x382A6Cu;
    // 0x382a6c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382a70: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x382a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x382a74: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382A74u;
    {
        const bool branch_taken_0x382a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382a74) {
            ctx->pc = 0x382A98u;
            goto label_382a98;
        }
    }
    ctx->pc = 0x382A7Cu;
    // 0x382a7c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x382a7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382a80: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382a80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382a84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382A84u;
    {
        const bool branch_taken_0x382a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A84u;
        // 0x382a88: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a84) {
            ctx->pc = 0x382A94u;
            goto label_382a94;
        }
    }
    ctx->pc = 0x382A8Cu;
    // 0x382a8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382A8Cu;
    {
        const bool branch_taken_0x382a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382A8Cu;
        // 0x382a90: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382a8c) {
            ctx->pc = 0x382A98u;
            goto label_382a98;
        }
    }
    ctx->pc = 0x382A94u;
label_382a94:
    // 0x382a94: 0x8a4823  subu        $t1, $a0, $t2
    ctx->pc = 0x382a94u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_382a98:
    // 0x382a98: 0x51200093  beql        $t1, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x382A98u;
    {
        const bool branch_taken_0x382a98 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x382a98) {
            ctx->pc = 0x382A9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382A98u;
            // 0x382a9c: 0xfe150020  sd          $s5, 0x20($s0) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382CE8u;
            goto label_382ce8;
        }
    }
    ctx->pc = 0x382AA0u;
    // 0x382aa0: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x382aa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_382aa4:
    // 0x382aa4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x382aa4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382aa8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x382aa8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x382aac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x382aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x382ab0: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x382ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x382ab4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x382ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382ab8: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x382AB8u;
    {
        const bool branch_taken_0x382ab8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x382ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AB8u;
        // 0x382abc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ab8) {
            ctx->pc = 0x382AC4u;
            goto label_382ac4;
        }
    }
    ctx->pc = 0x382AC0u;
    // 0x382ac0: 0x8e12002c  lw          $s2, 0x2C($s0)
    ctx->pc = 0x382ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_382ac4:
    // 0x382ac4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x382ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x382ac8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x382ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x382acc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x382ACCu;
    {
        const bool branch_taken_0x382acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382ACCu;
        // 0x382ad0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382acc) {
            ctx->pc = 0x3829D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3829d8;
        }
    }
    ctx->pc = 0x382AD4u;
    // 0x382ad4: 0x1000feba  b           . + 4 + (-0x146 << 2)
    ctx->pc = 0x382AD4u;
    {
        const bool branch_taken_0x382ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382AD4u;
        // 0x382ad8: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ad4) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x382ADCu;
label_382adc:
    // 0x382adc: 0x55200038  bnel        $t1, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x382ADCu;
    {
        const bool branch_taken_0x382adc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x382adc) {
            ctx->pc = 0x382AE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382ADCu;
            // 0x382ae0: 0x92620008  lbu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382BC0u;
            goto label_382bc0;
        }
    }
    ctx->pc = 0x382AE4u;
    // 0x382ae4: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x382ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382ae8: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x382AE8u;
    {
        const bool branch_taken_0x382ae8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x382ae8) {
            ctx->pc = 0x382B1Cu;
            goto label_382b1c;
        }
    }
    ctx->pc = 0x382AF0u;
    // 0x382af0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382af4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x382af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x382af8: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382AF8u;
    {
        const bool branch_taken_0x382af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382af8) {
            ctx->pc = 0x382B1Cu;
            goto label_382b1c;
        }
    }
    ctx->pc = 0x382B00u;
    // 0x382b00: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x382b00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b04: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382b04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382b08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382B08u;
    {
        const bool branch_taken_0x382b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B08u;
        // 0x382b0c: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b08) {
            ctx->pc = 0x382B18u;
            goto label_382b18;
        }
    }
    ctx->pc = 0x382B10u;
    // 0x382b10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382B10u;
    {
        const bool branch_taken_0x382b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B10u;
        // 0x382b14: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b10) {
            ctx->pc = 0x382B1Cu;
            goto label_382b1c;
        }
    }
    ctx->pc = 0x382B18u;
label_382b18:
    // 0x382b18: 0x8a4823  subu        $t1, $a0, $t2
    ctx->pc = 0x382b18u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_382b1c:
    // 0x382b1c: 0x55200028  bnel        $t1, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x382B1Cu;
    {
        const bool branch_taken_0x382b1c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x382b1c) {
            ctx->pc = 0x382B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382B1Cu;
            // 0x382b20: 0x92620008  lbu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382BC0u;
            goto label_382bc0;
        }
    }
    ctx->pc = 0x382B24u;
    // 0x382b24: 0xae0a0038  sw          $t2, 0x38($s0)
    ctx->pc = 0x382b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    // 0x382b28: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x382b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b30: 0xc0e0ede  jal         func_383B78
label_382b34:
    if (ctx->pc == 0x382B34u) {
        ctx->pc = 0x382B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B30u;
        // 0x382b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x382B38u;
        goto label_382b38;
    }
    ctx->pc = 0x382B30u;
    SET_GPR_U32(ctx, 31, 0x382B38u);
    ctx->pc = 0x382B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382B30u;
    // 0x382b34: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382B30u, 0x382B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382B38u;
label_382b38:
    // 0x382b38: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382b3c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x382b3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b40: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x382b40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x382b44: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382b48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382B48u;
    {
        const bool branch_taken_0x382b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B48u;
        // 0x382b4c: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b48) {
            ctx->pc = 0x382B5Cu;
            goto label_382b5c;
        }
    }
    ctx->pc = 0x382B50u;
    // 0x382b50: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x382b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382b54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x382B54u;
    {
        const bool branch_taken_0x382b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B54u;
        // 0x382b58: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b54) {
            ctx->pc = 0x382B68u;
            goto label_382b68;
        }
    }
    ctx->pc = 0x382B5Cu;
label_382b5c:
    // 0x382b5c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x382b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x382b60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x382b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b64: 0x4a4823  subu        $t1, $v0, $t2
    ctx->pc = 0x382b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_382b68:
    // 0x382b68: 0x1544000c  bne         $t2, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x382B68u;
    {
        const bool branch_taken_0x382b68 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 4));
        if (branch_taken_0x382b68) {
            ctx->pc = 0x382B9Cu;
            goto label_382b9c;
        }
    }
    ctx->pc = 0x382B70u;
    // 0x382b70: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382b74: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x382b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x382b78: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382B78u;
    {
        const bool branch_taken_0x382b78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x382b78) {
            ctx->pc = 0x382B9Cu;
            goto label_382b9c;
        }
    }
    ctx->pc = 0x382B80u;
    // 0x382b80: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x382b80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382b84: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x382b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x382b88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x382B88u;
    {
        const bool branch_taken_0x382b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B88u;
        // 0x382b8c: 0x6a1023  subu        $v0, $v1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b88) {
            ctx->pc = 0x382B98u;
            goto label_382b98;
        }
    }
    ctx->pc = 0x382B90u;
    // 0x382b90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x382B90u;
    {
        const bool branch_taken_0x382b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382B90u;
        // 0x382b94: 0x2449ffff  addiu       $t1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382b90) {
            ctx->pc = 0x382B9Cu;
            goto label_382b9c;
        }
    }
    ctx->pc = 0x382B98u;
label_382b98:
    // 0x382b98: 0x8a4823  subu        $t1, $a0, $t2
    ctx->pc = 0x382b98u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_382b9c:
    // 0x382b9c: 0x55200008  bnel        $t1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x382B9Cu;
    {
        const bool branch_taken_0x382b9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x382b9c) {
            ctx->pc = 0x382BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382B9Cu;
            // 0x382ba0: 0x92620008  lbu         $v0, 0x8($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382BC0u;
            goto label_382bc0;
        }
    }
    ctx->pc = 0x382BA4u;
    // 0x382ba4: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bac: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382bb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bb4: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382bb8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x382BB8u;
    {
        const bool branch_taken_0x382bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BB8u;
        // 0x382bbc: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bb8) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382BC0u;
label_382bc0:
    // 0x382bc0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x382bc0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bc4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x382bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x382bc8: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x382bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x382bcc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x382bccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x382bd0: 0x1000fe7b  b           . + 4 + (-0x185 << 2)
    ctx->pc = 0x382BD0u;
    {
        const bool branch_taken_0x382bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BD0u;
        // 0x382bd4: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bd0) {
            ctx->pc = 0x3825C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3825c0;
        }
    }
    ctx->pc = 0x382BD8u;
label_382bd8:
    // 0x382bd8: 0x2e820008  sltiu       $v0, $s4, 0x8
    ctx->pc = 0x382bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x382bdc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x382BDCu;
    {
        const bool branch_taken_0x382bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382BDCu;
        // 0x382be0: 0xae0a0038  sw          $t2, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382bdc) {
            ctx->pc = 0x382BF0u;
            goto label_382bf0;
        }
    }
    ctx->pc = 0x382BE4u;
    // 0x382be4: 0x2694fff8  addiu       $s4, $s4, -0x8
    ctx->pc = 0x382be4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967288));
    // 0x382be8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x382be8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x382bec: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x382becu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_382bf0:
    // 0x382bf0: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x382bf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382bf8: 0xc0e0ede  jal         func_383B78
    ctx->pc = 0x382BF8u;
    SET_GPR_U32(ctx, 31, 0x382C00u);
    ctx->pc = 0x382BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382BF8u;
    // 0x382bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382BF8u, 0x382C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382C00u;
label_382c00:
    // 0x382c00: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x382c00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c04: 0x8e0a0038  lw          $t2, 0x38($s0)
    ctx->pc = 0x382c04u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x382c08: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x382c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382c0c: 0x142102b  sltu        $v0, $t2, $v0
    ctx->pc = 0x382c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x382c10: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x382c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x382c14: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x382c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x382c18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x382C18u;
    {
        const bool branch_taken_0x382c18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x382C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C18u;
        // 0x382c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c18) {
            ctx->pc = 0x382C38u;
            goto label_382c38;
        }
    }
    ctx->pc = 0x382C20u;
    // 0x382c20: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382c20u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382c24: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382c28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c2c: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382c30: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x382C30u;
    {
        const bool branch_taken_0x382c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C30u;
        // 0x382c34: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c30) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382C38u;
label_382c38:
    // 0x382c38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x382c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x382c3c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x382c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_382c40:
    // 0x382c40: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382c40u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c48: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382c4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c50: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382c54: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x382C54u;
    {
        const bool branch_taken_0x382c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C54u;
        // 0x382c58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c54) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382C5Cu;
label_382c5c:
    // 0x382c5c: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c64: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c6c: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382c70: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x382C70u;
    {
        const bool branch_taken_0x382c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C70u;
        // 0x382c74: 0x2406fffd  addiu       $a2, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c70) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382C78u;
label_382c78:
    // 0x382c78: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382c78u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c80: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382c84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c88: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x382c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x382c8c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x382C8Cu;
    {
        const bool branch_taken_0x382c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382C8Cu;
        // 0x382c90: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382c8c) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382C94u;
label_382c94:
    // 0x382c94: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382c94u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382c9c: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382ca0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ca4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x382ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x382ca8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x382CA8u;
    {
        const bool branch_taken_0x382ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CA8u;
        // 0x382cac: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ca8) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382CB0u;
label_382cb0:
    // 0x382cb0: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cb8: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382cbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cc0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x382cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x382cc4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x382CC4u;
    {
        const bool branch_taken_0x382cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CC4u;
        // 0x382cc8: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382cc4) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382CCCu;
label_382ccc:
    // 0x382ccc: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382cccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cd4: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382cd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cdc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x382cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x382ce0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x382CE0u;
    {
        const bool branch_taken_0x382ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CE0u;
        // 0x382ce4: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ce0) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382CE8u;
label_382ce8:
    // 0x382ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cec: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382cecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382cf0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382cf4: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382cf8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x382CF8u;
    {
        const bool branch_taken_0x382cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382CF8u;
        // 0x382cfc: 0x160302d  daddu       $a2, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382cf8) {
            ctx->pc = 0x382D18u;
            goto label_382d18;
        }
    }
    ctx->pc = 0x382D00u;
label_382d00:
    // 0x382d00: 0xfe150020  sd          $s5, 0x20($s0)
    ctx->pc = 0x382d00u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 21));
    // 0x382d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x382d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d08: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x382d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x382d0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x382d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382d10: 0xae370004  sw          $s7, 0x4($s1)
    ctx->pc = 0x382d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
    // 0x382d14: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x382d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_382d18:
    // 0x382d18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x382d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x382d1c: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x382d1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x382d20: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x382d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x382d24: 0xae360000  sw          $s6, 0x0($s1)
    ctx->pc = 0x382d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 22));
    // 0x382d28: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x382d28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x382d2c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x382d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x382d30: 0xc0e0ede  jal         func_383B78
    ctx->pc = 0x382D30u;
    SET_GPR_U32(ctx, 31, 0x382D38u);
    ctx->pc = 0x382D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x382D30u;
    // 0x382d34: 0xae0a0038  sw          $t2, 0x38($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383B78u, 0x382D30u, 0x382D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x382D38u;
label_382d38:
    // 0x382d38: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x382d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x382d3c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x382d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x382d40: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x382d40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x382d44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x382d44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x382d48: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x382d48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x382d4c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x382d4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x382d50: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x382d50u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x382d54: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x382d54u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_382d58:
    // 0x382d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x382d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x382d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x382D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x382D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382D5Cu;
        // 0x382d60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x382D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x382D64u;
    // 0x382d64: 0x0  nop
    ctx->pc = 0x382d64u;
    // NOP
    ctx->pc = 0x382d68u;
}
