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

// Function: sub_002BA6D8
// Address: 0x2ba6d8 - 0x2ba7d8
void sub_002BA6D8_0x2ba6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA6D8_0x2ba6d8");
#endif

    switch (ctx->pc) {
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba7acu: goto label_2ba7ac;
        default: break;
    }

    ctx->pc = 0x2ba6d8u;

label_2ba6d8:
    // 0x2ba6d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ba6d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ba6dc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ba6e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ba6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ba6e4: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2ba6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2ba6e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ba6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2ba6ec: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x2ba6ecu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2ba6f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ba6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ba6f4: 0x8ac03  sra         $s5, $t0, 16
    ctx->pc = 0x2ba6f4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 8), 16));
    // 0x2ba6f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ba6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ba6fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ba6fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba700: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ba700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2ba704: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2ba704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ba708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ba70c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ba70cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba710: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ba710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ba714: 0x2b3102a  slt         $v0, $s5, $s3
    ctx->pc = 0x2ba714u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2ba718: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BA718u;
    {
        const bool branch_taken_0x2ba718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA718u;
        // 0x2ba71c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba718) {
            ctx->pc = 0x2BA784u;
            goto label_2ba784;
        }
    }
    ctx->pc = 0x2BA720u;
    // 0x2ba720: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x2ba724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ba724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba728: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2ba728u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2ba72c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ba730: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2ba730u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2ba734: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2ba734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ba738: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2ba738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ba73c: 0x2838821  addu        $s1, $s4, $v1
    ctx->pc = 0x2ba73cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2ba740: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x2BA740u;
    SET_GPR_U32(ctx, 31, 0x2BA748u);
    ctx->pc = 0x2BA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA740u;
    // 0x2ba744: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2BA740u, 0x2BA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA748u;
label_2ba748:
    // 0x2ba748: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA748u;
    {
        const bool branch_taken_0x2ba748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba748) {
            ctx->pc = 0x2BA758u;
            goto label_2ba758;
        }
    }
    ctx->pc = 0x2BA750u;
    // 0x2ba750: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BA750u;
    {
        const bool branch_taken_0x2ba750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA750u;
        // 0x2ba754: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba750) {
            ctx->pc = 0x2BA7ACu;
            goto label_2ba7ac;
        }
    }
    ctx->pc = 0x2BA758u;
label_2ba758:
    // 0x2ba758: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BA758u;
    {
        const bool branch_taken_0x2ba758 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2BA75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA758u;
        // 0x2ba75c: 0x2608ffff  addiu       $t0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba758) {
            ctx->pc = 0x2BA77Cu;
            goto label_2ba77c;
        }
    }
    ctx->pc = 0x2BA760u;
    // 0x2ba760: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ba760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba764: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x2ba764u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2ba768: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ba768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba76c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ba76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba770: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ba770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba774: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2BA774u;
    {
        const bool branch_taken_0x2ba774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA774u;
        // 0x2ba778: 0x84403  sra         $t0, $t0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba774) {
            ctx->pc = 0x2BA7A4u;
            goto label_2ba7a4;
        }
    }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA77Cu;
    {
        const bool branch_taken_0x2ba77c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2BA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA77Cu;
        // 0x2ba780: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba77c) {
            ctx->pc = 0x2BA78Cu;
            goto label_2ba78c;
        }
    }
    ctx->pc = 0x2BA784u;
label_2ba784:
    // 0x2ba784: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2BA784u;
    {
        const bool branch_taken_0x2ba784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA784u;
        // 0x2ba788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba784) {
            ctx->pc = 0x2BA7ACu;
            goto label_2ba7ac;
        }
    }
    ctx->pc = 0x2BA78Cu;
label_2ba78c:
    // 0x2ba78c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2ba78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba790: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2ba790u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x2ba794: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ba794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba798: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2ba798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba79c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2ba79cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2ba7a0: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2ba7a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7a4:
    // 0x2ba7a4: 0xc0ae9b6  jal         func_2BA6D8
    ctx->pc = 0x2BA7A4u;
    SET_GPR_U32(ctx, 31, 0x2BA7ACu);
    ctx->pc = 0x2BA6D8u;
    goto label_2ba6d8;
    ctx->pc = 0x2BA7ACu;
label_2ba7ac:
    // 0x2ba7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ba7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba7b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ba7b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ba7b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba7b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ba7b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ba7bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ba7bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba7c0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ba7c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ba7c4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ba7c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ba7c8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2ba7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2ba7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7CCu;
        // 0x2ba7d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA7D4u;
    // 0x2ba7d4: 0x0  nop
    ctx->pc = 0x2ba7d4u;
    // NOP
    ctx->pc = 0x2ba7d8u;
}
