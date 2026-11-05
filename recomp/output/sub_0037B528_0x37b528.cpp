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

// Function: sub_0037B528
// Address: 0x37b528 - 0x37b668
void sub_0037B528_0x37b528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B528_0x37b528");
#endif

    switch (ctx->pc) {
        case 0x37b588u: goto label_37b588;
        case 0x37b5a0u: goto label_37b5a0;
        case 0x37b610u: goto label_37b610;
        default: break;
    }

    ctx->pc = 0x37b528u;

    // 0x37b528: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37b528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37b52c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37b530: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x37b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x37b534: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37b534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b538: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x37b538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b53c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x37b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37b540: 0x2902823  subu        $a1, $s4, $s0
    ctx->pc = 0x37b540u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x37b544: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x37b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x37b548: 0x58ac2  srl         $s1, $a1, 11
    ctx->pc = 0x37b548u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), 11));
    // 0x37b54c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x37b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x37b550: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x37b550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37b554: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x37b554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37b558: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37b558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b55c: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x37b55cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x37b560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37b560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x37b564: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x37b564u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    // 0x37b568: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x37b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x37b56c: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x37b56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37b570: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x37b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x37b574: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x37b574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b578: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x37b578u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b57c: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x37b57cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
    // 0x37b580: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x37B580u;
    SET_GPR_U32(ctx, 31, 0x37B588u);
    ctx->pc = 0x37B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B580u;
    // 0x37b584: 0x42100  sll         $a0, $a0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x37B580u, 0x37B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B588u;
label_37b588:
    // 0x37b588: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37b588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37b58c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x37B58Cu;
    {
        const bool branch_taken_0x37b58c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B58Cu;
        // 0x37b590: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b58c) {
            ctx->pc = 0x37B610u;
            goto label_37b610;
        }
    }
    ctx->pc = 0x37B594u;
    // 0x37b594: 0x3c0c4a00  lui         $t4, 0x4A00
    ctx->pc = 0x37b594u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)18944 << 16));
    // 0x37b598: 0x3c0b3000  lui         $t3, 0x3000
    ctx->pc = 0x37b598u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)12288 << 16));
    // 0x37b59c: 0x0  nop
    ctx->pc = 0x37b59cu;
    // NOP
label_37b5a0:
    // 0x37b5a0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x37b5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b5a4: 0x1301023  subu        $v0, $t1, $s0
    ctx->pc = 0x37b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x37b5a8: 0x2c420801  sltiu       $v0, $v0, 0x801
    ctx->pc = 0x37b5a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
    // 0x37b5ac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37B5ACu;
    {
        const bool branch_taken_0x37b5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37b5ac) {
            ctx->pc = 0x37B5B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B5ACu;
            // 0x37b5b0: 0x26090800  addiu       $t1, $s0, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B5B4u;
            goto label_37b5b4;
        }
    }
    ctx->pc = 0x37B5B4u;
label_37b5b4:
    // 0x37b5b4: 0x1303023  subu        $a2, $t1, $s0
    ctx->pc = 0x37b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x37b5b8: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x37b5b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37b5bc: 0x61102  srl         $v0, $a2, 4
    ctx->pc = 0x37b5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 4));
    // 0x37b5c0: 0x10383c  dsll32      $a3, $s0, 0
    ctx->pc = 0x37b5c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) << (32 + 0));
    // 0x37b5c4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x37b5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x37b5c8: 0x630c2  srl         $a2, $a2, 3
    ctx->pc = 0x37b5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 3));
    // 0x37b5cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37b5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37b5d0: 0xa1900  sll         $v1, $t2, 4
    ctx->pc = 0x37b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x37b5d4: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x37b5d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37b5d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x37b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x37b5dc: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x37b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x37b5e0: 0x26c2825  or          $a1, $s3, $t4
    ctx->pc = 0x37b5e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 12));
    // 0x37b5e4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37b5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x37b5e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37b5ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x37b5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x37b5f0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x37b5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x37b5f4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x37b5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x37b5f8: 0x2669821  addu        $s3, $s3, $a2
    ctx->pc = 0x37b5f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    // 0x37b5fc: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x37b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x37b600: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x37b600u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b604: 0x151102b  sltu        $v0, $t2, $s1
    ctx->pc = 0x37b604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x37b608: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x37B608u;
    {
        const bool branch_taken_0x37b608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B608u;
        // 0x37b60c: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b608) {
            ctx->pc = 0x37B5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b5a0;
        }
    }
    ctx->pc = 0x37B610u;
label_37b610:
    // 0x37b610: 0x16a00004  bnez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x37B610u;
    {
        const bool branch_taken_0x37b610 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B610u;
        // 0x37b614: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b610) {
            ctx->pc = 0x37B624u;
            goto label_37b624;
        }
    }
    ctx->pc = 0x37B618u;
    // 0x37b618: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x37b618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x37b61c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37B61Cu;
    {
        const bool branch_taken_0x37b61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B61Cu;
        // 0x37b620: 0x3c046000  lui         $a0, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b61c) {
            ctx->pc = 0x37B62Cu;
            goto label_37b62c;
        }
    }
    ctx->pc = 0x37B624u;
label_37b624:
    // 0x37b624: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x37b624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x37b628: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x37b628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_37b62c:
    // 0x37b62c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37b630: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x37b630u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x37b634: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x37b634u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x37b638: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x37b638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x37b63c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x37b63cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37b640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37b644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37b648: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x37b648u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b64c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x37b64cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37b650: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x37b650u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b654: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x37b654u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37b658: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x37b658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b65c: 0x3e00008  jr          $ra
    ctx->pc = 0x37B65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B65Cu;
        // 0x37b660: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B664u;
    // 0x37b664: 0x0  nop
    ctx->pc = 0x37b664u;
    // NOP
    ctx->pc = 0x37b668u;
}
