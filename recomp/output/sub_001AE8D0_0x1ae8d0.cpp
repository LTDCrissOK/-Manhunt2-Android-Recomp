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

// Function: sub_001AE8D0
// Address: 0x1ae8d0 - 0x1ae9b0
void sub_001AE8D0_0x1ae8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE8D0_0x1ae8d0");
#endif

    switch (ctx->pc) {
        case 0x1ae8f0u: goto label_1ae8f0;
        case 0x1ae900u: goto label_1ae900;
        case 0x1ae924u: goto label_1ae924;
        case 0x1ae980u: goto label_1ae980;
        case 0x1ae998u: goto label_1ae998;
        default: break;
    }

    ctx->pc = 0x1ae8d0u;

    // 0x1ae8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae8d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae8d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ae8d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae8e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae8e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ae8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ae8e8: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AE8E8u;
    SET_GPR_U32(ctx, 31, 0x1AE8F0u);
    ctx->pc = 0x1AE8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8E8u;
    // 0x1ae8ec: 0x241101ba  addiu       $s1, $zero, 0x1BA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AE8E8u, 0x1AE8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE8F0u;
label_1ae8f0:
    // 0x1ae8f0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ae8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ae8f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae8f8: 0xc08db00  jal         func_236C00
    ctx->pc = 0x1AE8F8u;
    SET_GPR_U32(ctx, 31, 0x1AE900u);
    ctx->pc = 0x1AE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE8F8u;
    // 0x1ae8fc: 0x8c64bd50  lw          $a0, -0x42B0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C00u, 0x1AE8F8u, 0x1AE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE900u;
label_1ae900:
    // 0x1ae900: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ae900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae904: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ae904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae908: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1ae908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1ae90c: 0x12040003  beq         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE90Cu;
    {
        const bool branch_taken_0x1ae90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ae90c) {
            ctx->pc = 0x1AE91Cu;
            goto label_1ae91c;
        }
    }
    ctx->pc = 0x1AE914u;
    // 0x1ae914: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AE914u;
    {
        const bool branch_taken_0x1ae914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE914u;
        // 0x1ae918: 0x261100c4  addiu       $s1, $s0, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae914) {
            ctx->pc = 0x1AE954u;
            goto label_1ae954;
        }
    }
    ctx->pc = 0x1AE91Cu;
label_1ae91c:
    // 0x1ae91c: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE91Cu;
    SET_GPR_U32(ctx, 31, 0x1AE924u);
    ctx->pc = 0x1AE920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE91Cu;
    // 0x1ae920: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE91Cu, 0x1AE924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE924u;
label_1ae924:
    // 0x1ae924: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae924u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae928: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ae928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae92c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE92Cu;
    {
        const bool branch_taken_0x1ae92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE92Cu;
        // 0x1ae930: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae92c) {
            ctx->pc = 0x1AE93Cu;
            goto label_1ae93c;
        }
    }
    ctx->pc = 0x1AE934u;
    // 0x1ae934: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AE934u;
    {
        const bool branch_taken_0x1ae934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE934u;
        // 0x1ae938: 0x241100c9  addiu       $s1, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae934) {
            ctx->pc = 0x1AE954u;
            goto label_1ae954;
        }
    }
    ctx->pc = 0x1AE93Cu;
label_1ae93c:
    // 0x1ae93c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE93Cu;
    {
        const bool branch_taken_0x1ae93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE93Cu;
        // 0x1ae940: 0x28630000  slti        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae93c) {
            ctx->pc = 0x1AE94Cu;
            goto label_1ae94c;
        }
    }
    ctx->pc = 0x1AE944u;
    // 0x1ae944: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE944u;
    {
        const bool branch_taken_0x1ae944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE944u;
        // 0x1ae948: 0x241100cb  addiu       $s1, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae944) {
            ctx->pc = 0x1AE954u;
            goto label_1ae954;
        }
    }
    ctx->pc = 0x1AE94Cu;
label_1ae94c:
    // 0x1ae94c: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x1ae94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1ae950: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1ae950u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1ae954:
    // 0x1ae954: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1ae954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1ae958: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE958u;
    {
        const bool branch_taken_0x1ae958 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE958u;
        // 0x1ae95c: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae958) {
            ctx->pc = 0x1AE974u;
            goto label_1ae974;
        }
    }
    ctx->pc = 0x1AE960u;
    // 0x1ae960: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x1ae960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1ae964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae968: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae96c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE96Cu;
    {
        const bool branch_taken_0x1ae96c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE96Cu;
        // 0x1ae970: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae96c) {
            ctx->pc = 0x1AE988u;
            goto label_1ae988;
        }
    }
    ctx->pc = 0x1AE974u;
label_1ae974:
    // 0x1ae974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ae974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae978: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AE978u;
    SET_GPR_U32(ctx, 31, 0x1AE980u);
    ctx->pc = 0x1AE97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE978u;
    // 0x1ae97c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AE978u, 0x1AE980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE980u;
label_1ae980:
    // 0x1ae980: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE980u;
    {
        const bool branch_taken_0x1ae980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE980u;
        // 0x1ae984: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae980) {
            ctx->pc = 0x1AE99Cu;
            goto label_1ae99c;
        }
    }
    ctx->pc = 0x1AE988u;
label_1ae988:
    // 0x1ae988: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1ae988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae98c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ae98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae990: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE990u;
    SET_GPR_U32(ctx, 31, 0x1AE998u);
    ctx->pc = 0x1AE994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE990u;
    // 0x1ae994: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE990u, 0x1AE998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE998u;
label_1ae998:
    // 0x1ae998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae99c:
    // 0x1ae99c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae99cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae9a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae9a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae9a4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ae9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE9A8u;
        // 0x1ae9ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE9B0u;
}
