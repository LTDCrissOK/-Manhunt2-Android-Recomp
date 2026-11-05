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

// Function: sub_001AF898
// Address: 0x1af898 - 0x1af984
void sub_001AF898_0x1af898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF898_0x1af898");
#endif

    switch (ctx->pc) {
        case 0x1af8bcu: goto label_1af8bc;
        case 0x1af8d8u: goto label_1af8d8;
        case 0x1af97cu: goto label_1af97c;
        default: break;
    }

    ctx->pc = 0x1af898u;

    // 0x1af898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af8a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af8a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1af8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1af8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af8b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af8b4: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x1AF8B4u;
    SET_GPR_U32(ctx, 31, 0x1AF8BCu);
    ctx->pc = 0x1AF8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8B4u;
    // 0x1af8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x1AF8B4u, 0x1AF8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8BCu;
label_1af8bc:
    // 0x1af8bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1af8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af8c0: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1af8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x1af8c4: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1af8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1af8c8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AF8C8u;
    {
        const bool branch_taken_0x1af8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8C8u;
        // 0x1af8cc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8c8) {
            ctx->pc = 0x1AF900u;
            goto label_1af900;
        }
    }
    ctx->pc = 0x1AF8D0u;
    // 0x1af8d0: 0xc0987d2  jal         func_261F48
    ctx->pc = 0x1AF8D0u;
    SET_GPR_U32(ctx, 31, 0x1AF8D8u);
    ctx->pc = 0x1AF8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8D0u;
    // 0x1af8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261F48u, 0x1AF8D0u, 0x1AF8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8D8u;
label_1af8d8:
    // 0x1af8d8: 0x3843000e  xori        $v1, $v0, 0xE
    ctx->pc = 0x1af8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x1af8dc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1af8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af8e0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1af8e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1af8e4: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x1af8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x1af8e8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1af8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1af8ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF8ECu;
    {
        const bool branch_taken_0x1af8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8ECu;
        // 0x1af8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8ec) {
            ctx->pc = 0x1AF900u;
            goto label_1af900;
        }
    }
    ctx->pc = 0x1AF8F4u;
    // 0x1af8f4: 0x24c6013d  addiu       $a2, $a2, 0x13D
    ctx->pc = 0x1af8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 317));
    // 0x1af8f8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AF8F8u;
    {
        const bool branch_taken_0x1af8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8F8u;
        // 0x1af8fc: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8f8) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF900u;
label_1af900:
    // 0x1af900: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x1af900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1af904: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1AF904u;
    {
        const bool branch_taken_0x1af904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF904u;
        // 0x1af908: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af904) {
            ctx->pc = 0x1AF984u;
            return;
        }
    }
    ctx->pc = 0x1AF90Cu;
    // 0x1af90c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1af90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1af910: 0x2442aed0  addiu       $v0, $v0, -0x5130
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
    // 0x1af914: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af918: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af91c: 0x800008  jr          $a0
    ctx->pc = 0x1AF91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AF924u: goto label_1af924;
            case 0x1AF934u: goto label_1af934;
            case 0x1AF958u: goto label_1af958;
            case 0x1AF968u: goto label_1af968;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF91Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1AF924u;
label_1af924:
    // 0x1af924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af928: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1af928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1af92c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1AF92Cu;
    {
        const bool branch_taken_0x1af92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF92Cu;
        // 0x1af930: 0x2406013e  addiu       $a2, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af92c) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF934u;
label_1af934:
    // 0x1af934: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1af934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af938: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF938u;
    {
        const bool branch_taken_0x1af938 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF938u;
        // 0x1af93c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af938) {
            ctx->pc = 0x1AF94Cu;
            goto label_1af94c;
        }
    }
    ctx->pc = 0x1AF940u;
    // 0x1af940: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1af940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1af944: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AF944u;
    {
        const bool branch_taken_0x1af944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF944u;
        // 0x1af948: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af944) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF94Cu;
label_1af94c:
    // 0x1af94c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1af94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1af950: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AF950u;
    {
        const bool branch_taken_0x1af950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF950u;
        // 0x1af954: 0x2406013f  addiu       $a2, $zero, 0x13F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 319));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af950) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF958u;
label_1af958:
    // 0x1af958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af95c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1af95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1af960: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF960u;
    {
        const bool branch_taken_0x1af960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF960u;
        // 0x1af964: 0x24060141  addiu       $a2, $zero, 0x141 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 321));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af960) {
            ctx->pc = 0x1AF974u;
            goto label_1af974;
        }
    }
    ctx->pc = 0x1AF968u;
label_1af968:
    // 0x1af968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1af968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af96c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1af96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1af970: 0x24060142  addiu       $a2, $zero, 0x142
    ctx->pc = 0x1af970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 322));
label_1af974:
    // 0x1af974: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF974u;
    SET_GPR_U32(ctx, 31, 0x1AF97Cu);
    ctx->pc = 0x1AF978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF974u;
    // 0x1af978: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF974u, 0x1AF97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF97Cu;
label_1af97c:
    // 0x1af97c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF97Cu;
    {
        const bool branch_taken_0x1af97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF97Cu;
        // 0x1af980: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af97c) {
            ctx->pc = 0x1AF98Cu;
            return;
        }
    }
    ctx->pc = 0x1AF984u;
}
