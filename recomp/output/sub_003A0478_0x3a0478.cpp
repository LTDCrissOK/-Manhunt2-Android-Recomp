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

// Function: sub_003A0478
// Address: 0x3a0478 - 0x3a0590
void sub_003A0478_0x3a0478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0478_0x3a0478");
#endif

    switch (ctx->pc) {
        case 0x3a0500u: goto label_3a0500;
        case 0x3a0530u: goto label_3a0530;
        case 0x3a0538u: goto label_3a0538;
        case 0x3a0548u: goto label_3a0548;
        default: break;
    }

    ctx->pc = 0x3a0478u;

    // 0x3a0478: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a0478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a047c: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x3a047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x3a0480: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0488: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a048c: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x3a048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3a0490: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a0494: 0x44a024  and         $s4, $v0, $a0
    ctx->pc = 0x3a0494u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x3a0498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a049c: 0x2852823  subu        $a1, $s4, $a1
    ctx->pc = 0x3a049cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x3a04a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a04a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a04a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a04a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a04a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a04a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a04ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a04acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a04b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3a04b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3a04b4: 0x8e23026c  lw          $v1, 0x26C($s1)
    ctx->pc = 0x3a04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x3a04b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A04B8u;
    {
        const bool branch_taken_0x3a04b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04B8u;
        // 0x3a04bc: 0xc59823  subu        $s3, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04b8) {
            ctx->pc = 0x3A04C8u;
            goto label_3a04c8;
        }
    }
    ctx->pc = 0x3A04C0u;
    // 0x3a04c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A04C0u;
    {
        const bool branch_taken_0x3a04c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A04C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04C0u;
        // 0x3a04c4: 0x341285c0  ori         $s2, $zero, 0x85C0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04c0) {
            ctx->pc = 0x3A04E8u;
            goto label_3a04e8;
        }
    }
    ctx->pc = 0x3A04C8u;
label_3a04c8:
    // 0x3a04c8: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x3a04c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3a04cc: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x3a04ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3a04d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a04d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3a04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3a04d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3a04d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a04dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3a04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3a04e0: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x3a04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x3a04e4: 0x449024  and         $s2, $v0, $a0
    ctx->pc = 0x3a04e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3a04e8:
    // 0x3a04e8: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a04e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a04ec: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3A04ECu;
    {
        const bool branch_taken_0x3a04ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A04F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A04ECu;
        // 0x3a04f0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a04ec) {
            ctx->pc = 0x3A0564u;
            goto label_3a0564;
        }
    }
    ctx->pc = 0x3A04F4u;
    // 0x3a04f4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3a04f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a04f8: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3a04f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3a04fc: 0x0  nop
    ctx->pc = 0x3a04fcu;
    // NOP
label_3a0500:
    // 0x3a0500: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a0500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0504: 0x2729823  subu        $s3, $s3, $s2
    ctx->pc = 0x3a0504u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x3a0508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a0508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a050c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a050cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0510: 0x52a021  addu        $s4, $v0, $s2
    ctx->pc = 0x3a0510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3a0514: 0x6600014  bltz        $s3, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A0514u;
    {
        const bool branch_taken_0x3a0514 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x3A0518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0514u;
        // 0x3a0518: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0514) {
            ctx->pc = 0x3A0568u;
            goto label_3a0568;
        }
    }
    ctx->pc = 0x3A051Cu;
    // 0x3a051c: 0x8e22026c  lw          $v0, 0x26C($s1)
    ctx->pc = 0x3a051cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 620)));
    // 0x3a0520: 0x54560007  bnel        $v0, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0520u;
    {
        const bool branch_taken_0x3a0520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3a0520) {
            ctx->pc = 0x3A0524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0520u;
            // 0x3a0524: 0x82240002  lb          $a0, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0540u;
            goto label_3a0540;
        }
    }
    ctx->pc = 0x3A0528u;
    // 0x3a0528: 0xc0e6c3a  jal         func_39B0E8
    ctx->pc = 0x3A0528u;
    SET_GPR_U32(ctx, 31, 0x3A0530u);
    ctx->pc = 0x3A052Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0528u;
    // 0x3a052c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B0E8u, 0x3A0528u, 0x3A0530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0530u;
label_3a0530:
    // 0x3a0530: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0530u;
    {
        const bool branch_taken_0x3a0530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0530u;
        // 0x3a0534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0530) {
            ctx->pc = 0x3A0550u;
            goto label_3a0550;
        }
    }
    ctx->pc = 0x3A0538u;
label_3a0538:
    // 0x3a0538: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3A0538u;
    {
        const bool branch_taken_0x3a0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0538u;
        // 0x3a053c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0538) {
            ctx->pc = 0x3A0568u;
            goto label_3a0568;
        }
    }
    ctx->pc = 0x3A0540u;
label_3a0540:
    // 0x3a0540: 0xc0e6b5a  jal         func_39AD68
    ctx->pc = 0x3A0540u;
    SET_GPR_U32(ctx, 31, 0x3A0548u);
    ctx->pc = 0x3A0544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0540u;
    // 0x3a0544: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39AD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39AD68u, 0x3A0540u, 0x3A0548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0548u;
label_3a0548:
    // 0x3a0548: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A0548u;
    {
        const bool branch_taken_0x3a0548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0548u;
        // 0x3a054c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0548) {
            ctx->pc = 0x3A0538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0538;
        }
    }
    ctx->pc = 0x3A0550u;
label_3a0550:
    // 0x3a0550: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a0550u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0554: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3a0554u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3a0558: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x3a0558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a055c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x3A055Cu;
    {
        const bool branch_taken_0x3a055c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A055Cu;
        // 0x3a0560: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a055c) {
            ctx->pc = 0x3A0500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0500;
        }
    }
    ctx->pc = 0x3A0564u;
label_3a0564:
    // 0x3a0564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a0564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0568:
    // 0x3a0568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a056c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a056cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0570: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0574: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a0574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0578: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a0578u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a057c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a057cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a0580: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a0580u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a0584: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a0584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a0588: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0588u;
        // 0x3a058c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0590u;
}
