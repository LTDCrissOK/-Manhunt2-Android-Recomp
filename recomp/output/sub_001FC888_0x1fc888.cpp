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

// Function: sub_001FC888
// Address: 0x1fc888 - 0x1fc960
void sub_001FC888_0x1fc888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC888_0x1fc888");
#endif

    switch (ctx->pc) {
        case 0x1fc8c0u: goto label_1fc8c0;
        case 0x1fc924u: goto label_1fc924;
        default: break;
    }

    ctx->pc = 0x1fc888u;

    // 0x1fc888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fc888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fc88c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fc88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fc890: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fc890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fc894: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1fc894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc898: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fc898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fc89c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fc8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fc8a4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fc8a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fc8ac: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1fc8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fc8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fc8b4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0xc07f21a  jal         func_1FC868
    ctx->pc = 0x1FC8B8u;
    SET_GPR_U32(ctx, 31, 0x1FC8C0u);
    ctx->pc = 0x1FC8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8B8u;
    // 0x1fc8bc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC868u, 0x1FC8B8u, 0x1FC8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8C0u;
label_1fc8c0:
    // 0x1fc8c0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FC8C0u;
    {
        const bool branch_taken_0x1fc8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8C0u;
        // 0x1fc8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8c0) {
            ctx->pc = 0x1FC940u;
            goto label_1fc940;
        }
    }
    ctx->pc = 0x1FC8C8u;
    // 0x1fc8c8: 0x5280001e  beql        $s4, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FC8C8u;
    {
        const bool branch_taken_0x1fc8c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8c8) {
            ctx->pc = 0x1FC8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC8C8u;
            // 0x1fc8cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC944u;
            goto label_1fc944;
        }
    }
    ctx->pc = 0x1FC8D0u;
    // 0x1fc8d0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1fc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1fc8d4: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x1fc8d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x1fc8d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC8D8u;
    {
        const bool branch_taken_0x1fc8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8D8u;
        // 0x1fc8dc: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8d8) {
            ctx->pc = 0x1FC93Cu;
            goto label_1fc93c;
        }
    }
    ctx->pc = 0x1FC8E0u;
    // 0x1fc8e0: 0x101827  nor         $v1, $zero, $s0
    ctx->pc = 0x1fc8e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 16)));
    // 0x1fc8e4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1fc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1fc8e8: 0x2c420101  sltiu       $v0, $v0, 0x101
    ctx->pc = 0x1fc8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)257) ? 1 : 0);
    // 0x1fc8ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC8ECu;
    {
        const bool branch_taken_0x1fc8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8ECu;
        // 0x1fc8f0: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8ec) {
            ctx->pc = 0x1FC93Cu;
            goto label_1fc93c;
        }
    }
    ctx->pc = 0x1FC8F4u;
    // 0x1fc8f4: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x1fc8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
    // 0x1fc8f8: 0x111027  nor         $v0, $zero, $s1
    ctx->pc = 0x1fc8f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
    // 0x1fc8fc: 0x2408000a  addiu       $t0, $zero, 0xA
    ctx->pc = 0x1fc8fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fc900: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fc900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc904: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1fc904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fc908: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fc908u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc90c: 0x222400b  movn        $t0, $s1, $v0
    ctx->pc = 0x1fc90cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 17));
    // 0x1fc910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1fc910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc914: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x1fc914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x1fc918: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc91c: 0xc07f258  jal         func_1FC960
    ctx->pc = 0x1FC91Cu;
    SET_GPR_U32(ctx, 31, 0x1FC924u);
    ctx->pc = 0x1FC920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC91Cu;
    // 0x1fc920: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC960u, 0x1FC91Cu, 0x1FC924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC924u;
label_1fc924:
    // 0x1fc924: 0x340395c0  ori         $v1, $zero, 0x95C0
    ctx->pc = 0x1fc924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38336);
    // 0x1fc928: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x1fc928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1fc92c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1fc92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1fc930: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fc930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fc934: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC934u;
    {
        const bool branch_taken_0x1fc934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC934u;
        // 0x1fc938: 0xac740000  sw          $s4, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc934) {
            ctx->pc = 0x1FC940u;
            goto label_1fc940;
        }
    }
    ctx->pc = 0x1FC93Cu;
label_1fc93c:
    // 0x1fc93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fc93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fc940:
    // 0x1fc940: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fc940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fc944:
    // 0x1fc944: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fc944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fc948: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fc948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc94c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fc94cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fc950: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fc950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fc954: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fc954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fc958: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC958u;
        // 0x1fc95c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC960u;
}
