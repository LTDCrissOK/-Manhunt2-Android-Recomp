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

// Function: sub_001248B8
// Address: 0x1248b8 - 0x1249a0
void sub_001248B8_0x1248b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001248B8_0x1248b8");
#endif

    switch (ctx->pc) {
        case 0x1248f8u: goto label_1248f8;
        case 0x124908u: goto label_124908;
        case 0x124924u: goto label_124924;
        case 0x124938u: goto label_124938;
        case 0x12494cu: goto label_12494c;
        case 0x124960u: goto label_124960;
        case 0x124970u: goto label_124970;
        default: break;
    }

    ctx->pc = 0x1248b8u;

    // 0x1248b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1248b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1248bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1248bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1248c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1248c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1248c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1248c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1248c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1248cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1248ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1248d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1248d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1248d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1248d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1248dc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1248dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1248e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1248e4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1248e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1248e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1248ec: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1248ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1248f0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1248F0u;
    SET_GPR_U32(ctx, 31, 0x1248F8u);
    ctx->pc = 0x1248F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1248F0u;
    // 0x1248f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1248F0u, 0x1248F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248F8u;
label_1248f8:
    // 0x1248f8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1248F8u;
    {
        const bool branch_taken_0x1248f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1248FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1248F8u;
        // 0x1248fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1248f8) {
            ctx->pc = 0x12497Cu;
            goto label_12497c;
        }
    }
    ctx->pc = 0x124900u;
    // 0x124900: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x124900u;
    SET_GPR_U32(ctx, 31, 0x124908u);
    ctx->pc = 0x124904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124900u;
    // 0x124904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x124900u, 0x124908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124908u;
label_124908:
    // 0x124908: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x124908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12490c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12490cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x124910: 0x12020019  beq         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x124910u;
    {
        const bool branch_taken_0x124910 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x124914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124910u;
        // 0x124914: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124910) {
            ctx->pc = 0x124978u;
            goto label_124978;
        }
    }
    ctx->pc = 0x124918u;
    // 0x124918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12491c: 0xc049a86  jal         func_126A18
    ctx->pc = 0x12491Cu;
    SET_GPR_U32(ctx, 31, 0x124924u);
    ctx->pc = 0x124920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12491Cu;
    // 0x124920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A18u, 0x12491Cu, 0x124924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124924u;
label_124924:
    // 0x124924: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x124924u;
    {
        const bool branch_taken_0x124924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124924u;
        // 0x124928: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124924) {
            ctx->pc = 0x124978u;
            goto label_124978;
        }
    }
    ctx->pc = 0x12492Cu;
    // 0x12492c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12492cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124930: 0xc049a86  jal         func_126A18
    ctx->pc = 0x124930u;
    SET_GPR_U32(ctx, 31, 0x124938u);
    ctx->pc = 0x124934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124930u;
    // 0x124934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A18u, 0x124930u, 0x124938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124938u;
label_124938:
    // 0x124938: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x124938u;
    {
        const bool branch_taken_0x124938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124938u;
        // 0x12493c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124938) {
            ctx->pc = 0x124978u;
            goto label_124978;
        }
    }
    ctx->pc = 0x124940u;
    // 0x124940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124944: 0xc049a86  jal         func_126A18
    ctx->pc = 0x124944u;
    SET_GPR_U32(ctx, 31, 0x12494Cu);
    ctx->pc = 0x124948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124944u;
    // 0x124948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A18u, 0x124944u, 0x12494Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12494Cu;
label_12494c:
    // 0x12494c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12494Cu;
    {
        const bool branch_taken_0x12494c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12494Cu;
        // 0x124950: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12494c) {
            ctx->pc = 0x124978u;
            goto label_124978;
        }
    }
    ctx->pc = 0x124954u;
    // 0x124954: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x124954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124958: 0xc049a86  jal         func_126A18
    ctx->pc = 0x124958u;
    SET_GPR_U32(ctx, 31, 0x124960u);
    ctx->pc = 0x12495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124958u;
    // 0x12495c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126A18u, 0x124958u, 0x124960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124960u;
label_124960:
    // 0x124960: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x124960u;
    {
        const bool branch_taken_0x124960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124960u;
        // 0x124964: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124960) {
            ctx->pc = 0x12497Cu;
            goto label_12497c;
        }
    }
    ctx->pc = 0x124968u;
    // 0x124968: 0xc0430dc  jal         func_10C370
    ctx->pc = 0x124968u;
    SET_GPR_U32(ctx, 31, 0x124970u);
    ctx->pc = 0x12496Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124968u;
    // 0x12496c: 0x8e240078  lw          $a0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C370u, 0x124968u, 0x124970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124970u;
label_124970:
    // 0x124970: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x124970u;
    {
        const bool branch_taken_0x124970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124970u;
        // 0x124974: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124970) {
            ctx->pc = 0x12497Cu;
            goto label_12497c;
        }
    }
    ctx->pc = 0x124978u;
label_124978:
    // 0x124978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12497c:
    // 0x12497c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12497cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124988: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12498c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12498cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124990: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x124990u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124994: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x124994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124998: 0x3e00008  jr          $ra
    ctx->pc = 0x124998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124998u;
        // 0x12499c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1249A0u;
}
