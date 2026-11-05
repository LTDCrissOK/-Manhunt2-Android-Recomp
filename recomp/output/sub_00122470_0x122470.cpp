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

// Function: sub_00122470
// Address: 0x122470 - 0x122530
void sub_00122470_0x122470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122470_0x122470");
#endif

    switch (ctx->pc) {
        case 0x1224c0u: goto label_1224c0;
        case 0x1224f4u: goto label_1224f4;
        default: break;
    }

    ctx->pc = 0x122470u;

    // 0x122470: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x122470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x122474: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x122474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x122478: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x122478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x12247c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x12247cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122480: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x122480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x122484: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122488: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x122488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x12248c: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x12248cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122490: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x122490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x122494: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x122494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122498: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x122498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x12249c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12249cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224a0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1224a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1224a4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1224a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224a8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1224a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1224ac: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1224acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1224b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1224b4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x1224b4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224b8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1224B8u;
    SET_GPR_U32(ctx, 31, 0x1224C0u);
    ctx->pc = 0x1224BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224B8u;
    // 0x1224bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1224B8u, 0x1224C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224C0u;
label_1224c0:
    // 0x1224c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1224C0u;
    {
        const bool branch_taken_0x1224c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224C0u;
        // 0x1224c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224c0) {
            ctx->pc = 0x1224FCu;
            goto label_1224fc;
        }
    }
    ctx->pc = 0x1224C8u;
    // 0x1224c8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x1224c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x1224cc: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1224ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1224d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1224d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1224d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224d8: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1224d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224dc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x1224dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224e0: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x1224e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1224e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1224e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1224e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1224ec: 0xc0489ca  jal         func_122728
    ctx->pc = 0x1224ECu;
    SET_GPR_U32(ctx, 31, 0x1224F4u);
    ctx->pc = 0x1224F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1224ECu;
    // 0x1224f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122728u, 0x1224ECu, 0x1224F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1224F4u;
label_1224f4:
    // 0x1224f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1224F4u;
    {
        const bool branch_taken_0x1224f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1224F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1224F4u;
        // 0x1224f8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1224f4) {
            ctx->pc = 0x122504u;
            goto label_122504;
        }
    }
    ctx->pc = 0x1224FCu;
label_1224fc:
    // 0x1224fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1224fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x122500: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x122500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_122504:
    // 0x122504: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x122504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122508: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x122508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12250c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x12250cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122510: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x122510u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122514: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x122514u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x122518: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x122518u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12251c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x12251cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x122520: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x122520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x122524: 0x3e00008  jr          $ra
    ctx->pc = 0x122524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122524u;
        // 0x122528: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12252Cu;
    // 0x12252c: 0x0  nop
    ctx->pc = 0x12252cu;
    // NOP
    ctx->pc = 0x122530u;
}
