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

// Function: sub_0016F8A8
// Address: 0x16f8a8 - 0x16f988
void sub_0016F8A8_0x16f8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F8A8_0x16f8a8");
#endif

    switch (ctx->pc) {
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f900u: goto label_16f900;
        case 0x16f920u: goto label_16f920;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f968u: goto label_16f968;
        default: break;
    }

    ctx->pc = 0x16f8a8u;

    // 0x16f8a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f8ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f8b0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16f8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16f8b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16f8b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8bc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16f8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16f8c0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x16f8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16f8c4: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F8C4u;
    SET_GPR_U32(ctx, 31, 0x16F8CCu);
    ctx->pc = 0x16F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8C4u;
    // 0x16f8c8: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F8C4u, 0x16F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8CCu;
label_16f8cc:
    // 0x16f8cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16f8ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8d0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16f8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16f8d4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x16f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16f8d8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16f8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16f8e0: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16f8e4: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16F8E4u;
    SET_GPR_U32(ctx, 31, 0x16F8ECu);
    ctx->pc = 0x16F8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8E4u;
    // 0x16f8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16F8E4u, 0x16F8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F8ECu;
label_16f8ec:
    // 0x16f8ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16f8ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x16f8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x16f8f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8f8: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x16F8F8u;
    SET_GPR_U32(ctx, 31, 0x16F900u);
    ctx->pc = 0x16F8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F8F8u;
    // 0x16f8fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x16F8F8u, 0x16F900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F900u;
label_16f900:
    // 0x16f900: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F900u;
    {
        const bool branch_taken_0x16f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F900u;
        // 0x16f904: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f900) {
            ctx->pc = 0x16F910u;
            goto label_16f910;
        }
    }
    ctx->pc = 0x16F908u;
    // 0x16f908: 0x52420018  beql        $s2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x16F908u;
    {
        const bool branch_taken_0x16f908 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x16f908) {
            ctx->pc = 0x16F90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F908u;
            // 0x16f90c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F96Cu;
            goto label_16f96c;
        }
    }
    ctx->pc = 0x16F910u;
label_16f910:
    // 0x16f910: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x16F910u;
    {
        const bool branch_taken_0x16f910 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F910u;
        // 0x16f914: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f910) {
            ctx->pc = 0x16F944u;
            goto label_16f944;
        }
    }
    ctx->pc = 0x16F918u;
    // 0x16f918: 0xc05beb4  jal         func_16FAD0
    ctx->pc = 0x16F918u;
    SET_GPR_U32(ctx, 31, 0x16F920u);
    ctx->pc = 0x16F91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F918u;
    // 0x16f91c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FAD0u, 0x16F918u, 0x16F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F920u;
label_16f920:
    // 0x16f920: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16F920u;
    {
        const bool branch_taken_0x16f920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F920u;
        // 0x16f924: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f920) {
            ctx->pc = 0x16F96Cu;
            goto label_16f96c;
        }
    }
    ctx->pc = 0x16F928u;
    // 0x16f928: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f92c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f92cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f930: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x16f930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16f934: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x16F934u;
    SET_GPR_U32(ctx, 31, 0x16F93Cu);
    ctx->pc = 0x16F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F934u;
    // 0x16f938: 0x24070039  addiu       $a3, $zero, 0x39 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x16F934u, 0x16F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F93Cu;
label_16f93c:
    // 0x16f93c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16F93Cu;
    {
        const bool branch_taken_0x16f93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F93Cu;
        // 0x16f940: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f93c) {
            ctx->pc = 0x16F96Cu;
            goto label_16f96c;
        }
    }
    ctx->pc = 0x16F944u;
label_16f944:
    // 0x16f944: 0xc05beec  jal         func_16FBB0
    ctx->pc = 0x16F944u;
    SET_GPR_U32(ctx, 31, 0x16F94Cu);
    ctx->pc = 0x16F948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F944u;
    // 0x16f948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FBB0u, 0x16F944u, 0x16F94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F94Cu;
label_16f94c:
    // 0x16f94c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16F94Cu;
    {
        const bool branch_taken_0x16f94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F94Cu;
        // 0x16f950: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f94c) {
            ctx->pc = 0x16F96Cu;
            goto label_16f96c;
        }
    }
    ctx->pc = 0x16F954u;
    // 0x16f954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f958: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16f958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f95c: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x16f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x16f960: 0xc04fb7a  jal         func_13EDE8
    ctx->pc = 0x16F960u;
    SET_GPR_U32(ctx, 31, 0x16F968u);
    ctx->pc = 0x16F964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F960u;
    // 0x16f964: 0x24070038  addiu       $a3, $zero, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDE8u, 0x16F960u, 0x16F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F968u;
label_16f968:
    // 0x16f968: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16f96c:
    // 0x16f96c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16f96cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f970: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16f970u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f974: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16f974u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f978: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x16f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f97c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F97Cu;
        // 0x16f980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F984u;
    // 0x16f984: 0x0  nop
    ctx->pc = 0x16f984u;
    // NOP
    ctx->pc = 0x16f988u;
}
