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

// Function: sub_003C4558
// Address: 0x3c4558 - 0x3c4708
void sub_003C4558_0x3c4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4558_0x3c4558");
#endif

    switch (ctx->pc) {
        case 0x3c45e8u: goto label_3c45e8;
        case 0x3c4678u: goto label_3c4678;
        case 0x3c46e0u: goto label_3c46e0;
        default: break;
    }

    ctx->pc = 0x3c4558u;

    // 0x3c4558: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x3c4558u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3c455c: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c455cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c4560: 0x24430019  addiu       $v1, $v0, 0x19
    ctx->pc = 0x3c4560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25));
    // 0x3c4564: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x3c4564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x3c4568: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x3c4568u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x3c456c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c456cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c4570: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c4570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c4574: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3c4574u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4578: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c4578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c457c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3c457cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3c4580: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3c4580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3c4584: 0x2450000a  addiu       $s0, $v0, 0xA
    ctx->pc = 0x3c4584u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x3c4588: 0x3a3e823  subu        $sp, $sp, $v1
    ctx->pc = 0x3c4588u;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x3c458c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3c458cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4590: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x3c4590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x3c4594: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c4594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4598: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4598u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c459c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C459Cu;
    {
        const bool branch_taken_0x3c459c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C459Cu;
        // 0x3c45a0: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c459c) {
            ctx->pc = 0x3C45B4u;
            goto label_3c45b4;
        }
    }
    ctx->pc = 0x3C45A4u;
    // 0x3c45a4: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3C45A4u;
    {
        const bool branch_taken_0x3c45a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45A4u;
        // 0x3c45a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45a4) {
            ctx->pc = 0x3C46E8u;
            goto label_3c46e8;
        }
    }
    ctx->pc = 0x3C45ACu;
    // 0x3c45ac: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C45ACu;
    {
        const bool branch_taken_0x3c45ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C45B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45ACu;
        // 0x3c45b0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45ac) {
            ctx->pc = 0x3C45BCu;
            goto label_3c45bc;
        }
    }
    ctx->pc = 0x3C45B4u;
label_3c45b4:
    // 0x3c45b4: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x3C45B4u;
    {
        const bool branch_taken_0x3c45b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45B4u;
        // 0x3c45b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45b4) {
            ctx->pc = 0x3C46E8u;
            goto label_3c46e8;
        }
    }
    ctx->pc = 0x3C45BCu;
label_3c45bc:
    // 0x3c45bc: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3c45bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
    // 0x3c45c0: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3c45c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c45c4: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C45C4u;
    {
        const bool branch_taken_0x3c45c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45C4u;
        // 0x3c45c8: 0xafc60004  sw          $a2, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45c4) {
            ctx->pc = 0x3C4644u;
            goto label_3c4644;
        }
    }
    ctx->pc = 0x3C45CCu;
    // 0x3c45cc: 0x240d0045  addiu       $t5, $zero, 0x45
    ctx->pc = 0x3c45ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3c45d0: 0x240c002e  addiu       $t4, $zero, 0x2E
    ctx->pc = 0x3c45d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3c45d4: 0x240b0065  addiu       $t3, $zero, 0x65
    ctx->pc = 0x3c45d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x3c45d8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3c45d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c45dc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x3c45dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c45e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x3c45e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c45e4: 0x0  nop
    ctx->pc = 0x3c45e4u;
    // NOP
label_3c45e8:
    // 0x3c45e8: 0x106d000f  beq         $v1, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x3C45E8u;
    {
        const bool branch_taken_0x3c45e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 13));
        ctx->pc = 0x3C45ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45E8u;
        // 0x3c45ec: 0x28620046  slti        $v0, $v1, 0x46 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45e8) {
            ctx->pc = 0x3C4628u;
            goto label_3c4628;
        }
    }
    ctx->pc = 0x3C45F0u;
    // 0x3c45f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C45F0u;
    {
        const bool branch_taken_0x3c45f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c45f0) {
            ctx->pc = 0x3C4608u;
            goto label_3c4608;
        }
    }
    ctx->pc = 0x3C45F8u;
    // 0x3c45f8: 0x106c0007  beq         $v1, $t4, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C45F8u;
    {
        const bool branch_taken_0x3c45f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x3C45FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C45F8u;
        // 0x3c45fc: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c45f8) {
            ctx->pc = 0x3C4618u;
            goto label_3c4618;
        }
    }
    ctx->pc = 0x3C4600u;
    // 0x3c4600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C4600u;
    {
        const bool branch_taken_0x3c4600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4600u;
        // 0x3c4604: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4600) {
            ctx->pc = 0x3C4630u;
            goto label_3c4630;
        }
    }
    ctx->pc = 0x3C4608u;
label_3c4608:
    // 0x3c4608: 0x506b0008  beql        $v1, $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C4608u;
    {
        const bool branch_taken_0x3c4608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 11));
        if (branch_taken_0x3c4608) {
            ctx->pc = 0x3C460Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4608u;
            // 0x3c460c: 0xafc90000  sw          $t1, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C462Cu;
            goto label_3c462c;
        }
    }
    ctx->pc = 0x3C4610u;
    // 0x3c4610: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4610u;
    {
        const bool branch_taken_0x3c4610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4610u;
        // 0x3c4614: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4610) {
            ctx->pc = 0x3C4630u;
            goto label_3c4630;
        }
    }
    ctx->pc = 0x3C4618u;
label_3c4618:
    // 0x3c4618: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4618u;
    {
        const bool branch_taken_0x3c4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C461Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4618u;
        // 0x3c461c: 0xafc40004  sw          $a0, 0x4($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4618) {
            ctx->pc = 0x3C462Cu;
            goto label_3c462c;
        }
    }
    ctx->pc = 0x3C4620u;
    // 0x3c4620: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3C4620u;
    {
        const bool branch_taken_0x3c4620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4620u;
        // 0x3c4624: 0xafca0000  sw          $t2, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4620) {
            ctx->pc = 0x3C462Cu;
            goto label_3c462c;
        }
    }
    ctx->pc = 0x3C4628u;
label_3c4628:
    // 0x3c4628: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x3c4628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
label_3c462c:
    // 0x3c462c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c4630:
    // 0x3c4630: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x3c4630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c4634: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4634u;
    {
        const bool branch_taken_0x3c4634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4634u;
        // 0x3c4638: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4634) {
            ctx->pc = 0x3C4644u;
            goto label_3c4644;
        }
    }
    ctx->pc = 0x3C463Cu;
    // 0x3c463c: 0x5449ffea  bnel        $v0, $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3C463Cu;
    {
        const bool branch_taken_0x3c463c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x3c463c) {
            ctx->pc = 0x3C4640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C463Cu;
            // 0x3c4640: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C45E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c45e8;
        }
    }
    ctx->pc = 0x3C4644u;
label_3c4644:
    // 0x3c4644: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x3c4644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3c4648: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c4648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3c464c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C464Cu;
    {
        const bool branch_taken_0x3c464c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C4650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C464Cu;
        // 0x3c4650: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c464c) {
            ctx->pc = 0x3C465Cu;
            goto label_3c465c;
        }
    }
    ctx->pc = 0x3C4654u;
    // 0x3c4654: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3C4654u;
    {
        const bool branch_taken_0x3c4654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4654u;
        // 0x3c4658: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4654) {
            ctx->pc = 0x3C46E8u;
            goto label_3c46e8;
        }
    }
    ctx->pc = 0x3C465Cu;
label_3c465c:
    // 0x3c465c: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3c465cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c4660: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C4660u;
    {
        const bool branch_taken_0x3c4660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4660u;
        // 0x3c4664: 0x8fc90004  lw          $t1, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4660) {
            ctx->pc = 0x3C46C4u;
            goto label_3c46c4;
        }
    }
    ctx->pc = 0x3C4668u;
    // 0x3c4668: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3c4668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c466c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3c466cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4670: 0x240a002c  addiu       $t2, $zero, 0x2C
    ctx->pc = 0x3c4670u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3c4674: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c4674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c4678:
    // 0x3c4678: 0x124182b  sltu        $v1, $t1, $a0
    ctx->pc = 0x3c4678u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c467c: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3c467cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c4680: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3C4680u;
    {
        const bool branch_taken_0x3c4680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4680u;
        // 0x3c4684: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4680) {
            ctx->pc = 0x3C46B4u;
            goto label_3c46b4;
        }
    }
    ctx->pc = 0x3C4688u;
    // 0x3c4688: 0x106001a  div         $zero, $t0, $a2
    ctx->pc = 0x3c4688u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3c468c: 0x50cb0001  beql        $a2, $t3, . + 4 + (0x1 << 2)
    ctx->pc = 0x3C468Cu;
    {
        const bool branch_taken_0x3c468c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 11));
        if (branch_taken_0x3c468c) {
            ctx->pc = 0x3C4690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C468Cu;
            // 0x3c4690: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4694u;
            goto label_3c4694;
        }
    }
    ctx->pc = 0x3C4694u;
label_3c4694:
    // 0x3c4694: 0x1010  mfhi        $v0
    ctx->pc = 0x3c4694u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3c4698: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C4698u;
    {
        const bool branch_taken_0x3c4698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c4698) {
            ctx->pc = 0x3C469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C4698u;
            // 0x3c469c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C46B4u;
            goto label_3c46b4;
        }
    }
    ctx->pc = 0x3C46A0u;
    // 0x3c46a0: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C46A0u;
    {
        const bool branch_taken_0x3c46a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C46A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C46A0u;
        // 0x3c46a4: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c46a0) {
            ctx->pc = 0x3C46B4u;
            goto label_3c46b4;
        }
    }
    ctx->pc = 0x3C46A8u;
    // 0x3c46a8: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x3c46a8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x3c46ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c46acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3c46b0: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c46b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_3c46b4:
    // 0x3c46b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3c46b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3c46b8: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x3c46b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3c46bc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C46BCu;
    {
        const bool branch_taken_0x3c46bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c46bc) {
            ctx->pc = 0x3C46C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C46BCu;
            // 0x3c46c0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C4678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4678;
        }
    }
    ctx->pc = 0x3C46C4u;
label_3c46c4:
    // 0x3c46c4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c46c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3c46c8: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x3c46c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x3c46cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x3c46ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c46d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c46d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c46d4: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x3c46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c46d8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x3C46D8u;
    SET_GPR_U32(ctx, 31, 0x3C46E0u);
    ctx->pc = 0x3C46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C46D8u;
    // 0x3c46dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x3C46D8u, 0x3C46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C46E0u;
label_3c46e0:
    // 0x3c46e0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x3c46e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x3c46e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c46e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c46e8:
    // 0x3c46e8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3c46e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c46ec: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c46ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c46f0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c46f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c46f4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c46f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c46f8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x3c46f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c46fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3c46fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c4700: 0x3e00008  jr          $ra
    ctx->pc = 0x3C4700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C4704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4700u;
        // 0x3c4704: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C4700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C4708u;
}
