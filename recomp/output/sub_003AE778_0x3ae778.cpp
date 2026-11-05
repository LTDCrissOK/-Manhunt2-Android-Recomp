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

// Function: sub_003AE778
// Address: 0x3ae778 - 0x3ae838
void sub_003AE778_0x3ae778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AE778_0x3ae778");
#endif

    switch (ctx->pc) {
        case 0x3ae780u: goto label_3ae780;
        case 0x3ae7a8u: goto label_3ae7a8;
        case 0x3ae7e0u: goto label_3ae7e0;
        case 0x3ae818u: goto label_3ae818;
        default: break;
    }

    ctx->pc = 0x3ae778u;

label_3ae778:
    // 0x3ae778: 0x18c00008  blez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AE778u;
    {
        const bool branch_taken_0x3ae778 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x3ae778) {
            ctx->pc = 0x3AE79Cu;
            goto label_3ae79c;
        }
    }
    ctx->pc = 0x3AE780u;
label_3ae780:
    // 0x3ae780: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x3ae780u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ae784: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x3ae784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x3ae788: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x3ae788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x3ae78c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3ae78cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ae790: 0x0  nop
    ctx->pc = 0x3ae790u;
    // NOP
    // 0x3ae794: 0x1cc0fffa  bgtz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3AE794u;
    {
        const bool branch_taken_0x3ae794 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x3AE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AE794u;
        // 0x3ae798: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ae794) {
            ctx->pc = 0x3AE780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ae780;
        }
    }
    ctx->pc = 0x3AE79Cu;
label_3ae79c:
    // 0x3ae79c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AE79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AE79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AE7A4u;
    // 0x3ae7a4: 0x0  nop
    ctx->pc = 0x3ae7a4u;
    // NOP
label_3ae7a8:
    // 0x3ae7a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ae7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ae7ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ae7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ae7b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ae7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae7b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ae7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ae7b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ae7b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae7bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ae7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ae7c0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3ae7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae7c4: 0x122840  sll         $a1, $s2, 1
    ctx->pc = 0x3ae7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3ae7c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ae7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ae7cc: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x3ae7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3ae7d0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3ae7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae7d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ae7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ae7d8: 0xc0eb9de  jal         func_3AE778
    ctx->pc = 0x3AE7D8u;
    SET_GPR_U32(ctx, 31, 0x3AE7E0u);
    ctx->pc = 0x3AE7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE7D8u;
    // 0x3ae7dc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE778u;
    goto label_3ae778;
    ctx->pc = 0x3AE7E0u;
label_3ae7e0:
    // 0x3ae7e0: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x3ae7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3ae7e4: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x3ae7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3ae7e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ae7e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ae7ec: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x3ae7ecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x3ae7f0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3ae7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3ae7f4: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x3ae7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3ae7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ae7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae7fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3ae7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ae800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ae804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ae804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ae808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ae808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ae80c: 0x80eb9de  j           func_3AE778
    ctx->pc = 0x3AE80Cu;
    ctx->pc = 0x3AE810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE80Cu;
    // 0x3ae810: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE778u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3ae778;
    ctx->pc = 0x3AE814u;
    // 0x3ae814: 0x0  nop
    ctx->pc = 0x3ae814u;
    // NOP
label_3ae818:
    // 0x3ae818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ae818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ae81c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3ae81cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3ae820: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ae820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ae824: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3ae824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ae828: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x3ae828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3ae82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ae82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ae830: 0x80eb9de  j           func_3AE778
    ctx->pc = 0x3AE830u;
    ctx->pc = 0x3AE834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AE830u;
    // 0x3ae834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE778u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_3ae778;
    ctx->pc = 0x3AE838u;
}
