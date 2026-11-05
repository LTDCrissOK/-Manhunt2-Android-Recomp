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

// Function: sub_001DD8B0
// Address: 0x1dd8b0 - 0x1dd9b8
void sub_001DD8B0_0x1dd8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD8B0_0x1dd8b0");
#endif

    switch (ctx->pc) {
        case 0x1dd900u: goto label_1dd900;
        case 0x1dd930u: goto label_1dd930;
        case 0x1dd954u: goto label_1dd954;
        case 0x1dd964u: goto label_1dd964;
        case 0x1dd978u: goto label_1dd978;
        case 0x1dd990u: goto label_1dd990;
        default: break;
    }

    ctx->pc = 0x1dd8b0u;

    // 0x1dd8b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dd8b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd8b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd8bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dd8bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd8c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd8c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dd8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dd8cc: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1dd8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1dd8d0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1dd8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd8d4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x1dd8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1dd8d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1dd8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd8dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD8DCu;
    {
        const bool branch_taken_0x1dd8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8DCu;
        // 0x1dd8e0: 0x8cb2000c  lw          $s2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8dc) {
            ctx->pc = 0x1DD8F4u;
            goto label_1dd8f4;
        }
    }
    ctx->pc = 0x1DD8E4u;
    // 0x1dd8e4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x1DD8E4u;
    {
        const bool branch_taken_0x1dd8e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8E4u;
        // 0x1dd8e8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd8e4) {
            ctx->pc = 0x1DD988u;
            goto label_1dd988;
        }
    }
    ctx->pc = 0x1DD8ECu;
    // 0x1dd8ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1DD8ECu;
    {
        const bool branch_taken_0x1dd8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd8ec) {
            ctx->pc = 0x1DD95Cu;
            goto label_1dd95c;
        }
    }
    ctx->pc = 0x1DD8F4u;
label_1dd8f4:
    // 0x1dd8f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1dd8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd8f8: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD8F8u;
    SET_GPR_U32(ctx, 31, 0x1DD900u);
    ctx->pc = 0x1DD8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD8F8u;
    // 0x1dd8fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD8F8u, 0x1DD900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD900u;
label_1dd900:
    // 0x1dd900: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1DD900u;
    {
        const bool branch_taken_0x1dd900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD900u;
        // 0x1dd904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd900) {
            ctx->pc = 0x1DD9A0u;
            goto label_1dd9a0;
        }
    }
    ctx->pc = 0x1DD908u;
    // 0x1dd908: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1dd908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1dd90c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dd90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1dd910: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD910u;
    {
        const bool branch_taken_0x1dd910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD910u;
        // 0x1dd914: 0x8e0300c4  lw          $v1, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd910) {
            ctx->pc = 0x1DD938u;
            goto label_1dd938;
        }
    }
    ctx->pc = 0x1DD918u;
    // 0x1dd918: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1dd918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1dd91c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1dd91cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1dd920: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD920u;
    {
        const bool branch_taken_0x1dd920 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD920u;
        // 0x1dd924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd920) {
            ctx->pc = 0x1DD938u;
            goto label_1dd938;
        }
    }
    ctx->pc = 0x1DD928u;
    // 0x1dd928: 0xc077460  jal         func_1DD180
    ctx->pc = 0x1DD928u;
    SET_GPR_U32(ctx, 31, 0x1DD930u);
    ctx->pc = 0x1DD92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD928u;
    // 0x1dd92c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD180u, 0x1DD928u, 0x1DD930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD930u;
label_1dd930:
    // 0x1dd930: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DD930u;
    {
        const bool branch_taken_0x1dd930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd930) {
            ctx->pc = 0x1DD978u;
            goto label_1dd978;
        }
    }
    ctx->pc = 0x1DD938u;
label_1dd938:
    // 0x1dd938: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x1dd938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x1dd93c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd940: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1dd940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd944: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1dd944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dd948: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x1dd948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1dd94c: 0xc077460  jal         func_1DD180
    ctx->pc = 0x1DD94Cu;
    SET_GPR_U32(ctx, 31, 0x1DD954u);
    ctx->pc = 0x1DD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD94Cu;
    // 0x1dd950: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD180u, 0x1DD94Cu, 0x1DD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD954u;
label_1dd954:
    // 0x1dd954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD954u;
    {
        const bool branch_taken_0x1dd954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dd954) {
            ctx->pc = 0x1DD978u;
            goto label_1dd978;
        }
    }
    ctx->pc = 0x1DD95Cu;
label_1dd95c:
    // 0x1dd95c: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD95Cu;
    SET_GPR_U32(ctx, 31, 0x1DD964u);
    ctx->pc = 0x1DD960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD95Cu;
    // 0x1dd960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD95Cu, 0x1DD964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD964u;
label_1dd964:
    // 0x1dd964: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DD964u;
    {
        const bool branch_taken_0x1dd964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD964u;
        // 0x1dd968: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd964) {
            ctx->pc = 0x1DD9A0u;
            goto label_1dd9a0;
        }
    }
    ctx->pc = 0x1DD96Cu;
    // 0x1dd96c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dd96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd970: 0xc077440  jal         func_1DD100
    ctx->pc = 0x1DD970u;
    SET_GPR_U32(ctx, 31, 0x1DD978u);
    ctx->pc = 0x1DD974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD970u;
    // 0x1dd974: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD100u, 0x1DD970u, 0x1DD978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD978u;
label_1dd978:
    // 0x1dd978: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD978u;
    {
        const bool branch_taken_0x1dd978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD978u;
        // 0x1dd97c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd978) {
            ctx->pc = 0x1DD99Cu;
            goto label_1dd99c;
        }
    }
    ctx->pc = 0x1DD980u;
    // 0x1dd980: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1DD980u;
    {
        const bool branch_taken_0x1dd980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD980u;
        // 0x1dd984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd980) {
            ctx->pc = 0x1DD9A4u;
            goto label_1dd9a4;
        }
    }
    ctx->pc = 0x1DD988u;
label_1dd988:
    // 0x1dd988: 0xc078668  jal         func_1E19A0
    ctx->pc = 0x1DD988u;
    SET_GPR_U32(ctx, 31, 0x1DD990u);
    ctx->pc = 0x1DD98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD988u;
    // 0x1dd98c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x1DD988u, 0x1DD990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD990u;
label_1dd990:
    // 0x1dd990: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dd990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd994: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DD994u;
    {
        const bool branch_taken_0x1dd994 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD994u;
        // 0x1dd998: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd994) {
            ctx->pc = 0x1DD9A0u;
            goto label_1dd9a0;
        }
    }
    ctx->pc = 0x1DD99Cu;
label_1dd99c:
    // 0x1dd99c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dd99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dd9a0:
    // 0x1dd9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd9a4:
    // 0x1dd9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd9a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd9a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd9ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dd9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD9B0u;
        // 0x1dd9b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9B8u;
}
