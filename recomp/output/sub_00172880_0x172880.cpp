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

// Function: sub_00172880
// Address: 0x172880 - 0x172988
void sub_00172880_0x172880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172880_0x172880");
#endif

    switch (ctx->pc) {
        case 0x1728ecu: goto label_1728ec;
        case 0x172904u: goto label_172904;
        case 0x172924u: goto label_172924;
        case 0x172948u: goto label_172948;
        case 0x172960u: goto label_172960;
        default: break;
    }

    ctx->pc = 0x172880u;

    // 0x172880: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x172880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x172884: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x172884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172888: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x172888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17288c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17288cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x172890: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x172890u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x172894: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x172894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x172898: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17289c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17289cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1728a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1728a4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1728a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1728a8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1728a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1728ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1728acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1728b0: 0x2463021  addu        $a2, $s2, $a2
    ctx->pc = 0x1728b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1728b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1728b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1728b8: 0x8cd300e0  lw          $s3, 0xE0($a2)
    ctx->pc = 0x1728b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 224)));
    // 0x1728bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1728bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1728c0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1728c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1728c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1728c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1728c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1728C8u;
    {
        const bool branch_taken_0x1728c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1728CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1728C8u;
        // 0x1728cc: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1728c8) {
            ctx->pc = 0x172938u;
            goto label_172938;
        }
    }
    ctx->pc = 0x1728D0u;
    // 0x1728d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1728d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1728d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1728d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1728d8: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x1728d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1728dc: 0x56000017  bnel        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1728DCu;
    {
        const bool branch_taken_0x1728dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1728dc) {
            ctx->pc = 0x1728E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1728DCu;
            // 0x1728e0: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17293Cu;
            goto label_17293c;
        }
    }
    ctx->pc = 0x1728E4u;
    // 0x1728e4: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x1728E4u;
    SET_GPR_U32(ctx, 31, 0x1728ECu);
    ctx->pc = 0x1728E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728E4u;
    // 0x1728e8: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x1728E4u, 0x1728ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1728ECu;
label_1728ec:
    // 0x1728ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1728ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1728f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1728f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1728f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1728f8: 0x24559a08  addiu       $s5, $v0, -0x65F8
    ctx->pc = 0x1728f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1728fc: 0xc0478c8  jal         func_11E320
    ctx->pc = 0x1728FCu;
    SET_GPR_U32(ctx, 31, 0x172904u);
    ctx->pc = 0x172900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1728FCu;
    // 0x172900: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E320u, 0x1728FCu, 0x172904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172904u;
label_172904:
    // 0x172904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x172904u;
    {
        const bool branch_taken_0x172904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172904u;
        // 0x172908: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172904) {
            ctx->pc = 0x172928u;
            goto label_172928;
        }
    }
    ctx->pc = 0x17290Cu;
    // 0x17290c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x172910: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x172910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x172914: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x172914u;
    {
        const bool branch_taken_0x172914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172914) {
            ctx->pc = 0x172928u;
            goto label_172928;
        }
    }
    ctx->pc = 0x17291Cu;
    // 0x17291c: 0xc043ef4  jal         func_10FBD0
    ctx->pc = 0x17291Cu;
    SET_GPR_U32(ctx, 31, 0x172924u);
    ctx->pc = 0x10FBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBD0u, 0x17291Cu, 0x172924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172924u;
label_172924:
    // 0x172924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x172924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_172928:
    // 0x172928: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x172928u;
    {
        const bool branch_taken_0x172928 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x172928) {
            ctx->pc = 0x17292Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172928u;
            // 0x17292c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17293Cu;
            goto label_17293c;
        }
    }
    ctx->pc = 0x172930u;
    // 0x172930: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x172930u;
    {
        const bool branch_taken_0x172930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172930u;
        // 0x172934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172930) {
            ctx->pc = 0x172964u;
            goto label_172964;
        }
    }
    ctx->pc = 0x172938u;
label_172938:
    // 0x172938: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x172938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_17293c:
    // 0x17293c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17293cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172940: 0xc05caaa  jal         func_172AA8
    ctx->pc = 0x172940u;
    SET_GPR_U32(ctx, 31, 0x172948u);
    ctx->pc = 0x172944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172940u;
    // 0x172944: 0x8e860004  lw          $a2, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172AA8u, 0x172940u, 0x172948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172948u;
label_172948:
    // 0x172948: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x172948u;
    {
        const bool branch_taken_0x172948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172948) {
            ctx->pc = 0x17294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172948u;
            // 0x17294c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172964u;
            goto label_172964;
        }
    }
    ctx->pc = 0x172950u;
    // 0x172950: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x172950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x172954: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172958: 0xc05caaa  jal         func_172AA8
    ctx->pc = 0x172958u;
    SET_GPR_U32(ctx, 31, 0x172960u);
    ctx->pc = 0x17295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172958u;
    // 0x17295c: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172AA8u, 0x172958u, 0x172960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172960u;
label_172960:
    // 0x172960: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x172960u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_172964:
    // 0x172964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172968: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17296c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17296cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x172970: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172970u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172974: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x172974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172978: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x172978u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17297c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17297cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172980: 0x3e00008  jr          $ra
    ctx->pc = 0x172980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172980u;
        // 0x172984: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172988u;
}
