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

// Function: sub_001177C0
// Address: 0x1177c0 - 0x1179b8
void sub_001177C0_0x1177c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001177C0_0x1177c0");
#endif

    switch (ctx->pc) {
        case 0x1177e0u: goto label_1177e0;
        case 0x117820u: goto label_117820;
        case 0x117828u: goto label_117828;
        case 0x117970u: goto label_117970;
        case 0x11799cu: goto label_11799c;
        default: break;
    }

    ctx->pc = 0x1177c0u;

    // 0x1177c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1177c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1177c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1177c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1177c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1177c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1177cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1177ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1177d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1177d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1177d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1177d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1177d8: 0xc0c1562  jal         func_305588
    ctx->pc = 0x1177D8u;
    SET_GPR_U32(ctx, 31, 0x1177E0u);
    ctx->pc = 0x1177DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1177D8u;
    // 0x1177dc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305588u, 0x1177D8u, 0x1177E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1177E0u;
label_1177e0:
    // 0x1177e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1177e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1177e4: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1177E4u;
    {
        const bool branch_taken_0x1177e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1177E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1177E4u;
        // 0x1177e8: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1177e4) {
            ctx->pc = 0x11799Cu;
            goto label_11799c;
        }
    }
    ctx->pc = 0x1177ECu;
    // 0x1177ec: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1177ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1177f0: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x1177f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x1177f4: 0x5460006a  bnel        $v1, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1177F4u;
    {
        const bool branch_taken_0x1177f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1177f4) {
            ctx->pc = 0x1177F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1177F4u;
            // 0x1177f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179A0u;
            goto label_1179a0;
        }
    }
    ctx->pc = 0x1177FCu;
    // 0x1177fc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1177fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117800: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x117800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x117804: 0xac530070  sw          $s3, 0x70($v0)
    ctx->pc = 0x117804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 19));
    // 0x117808: 0x24729b10  addiu       $s2, $v1, -0x64F0
    ctx->pc = 0x117808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941456));
    // 0x11780c: 0x9242000c  lbu         $v0, 0xC($s2)
    ctx->pc = 0x11780cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x499B1Cu));
    // 0x117810: 0x54400063  bnel        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x117810u;
    {
        const bool branch_taken_0x117810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117810) {
            ctx->pc = 0x117814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117810u;
            // 0x117814: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179A0u;
            goto label_1179a0;
        }
    }
    ctx->pc = 0x117818u;
    // 0x117818: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x117818u;
    SET_GPR_U32(ctx, 31, 0x117820u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x117818u, 0x117820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117820u;
label_117820:
    // 0x117820: 0xc0821da  jal         func_208768
    ctx->pc = 0x117820u;
    SET_GPR_U32(ctx, 31, 0x117828u);
    ctx->pc = 0x117824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117820u;
    // 0x117824: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208768u, 0x117820u, 0x117828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117828u;
label_117828:
    // 0x117828: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x117828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11782c: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x11782Cu;
    {
        const bool branch_taken_0x11782c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x117830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11782Cu;
        // 0x117830: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11782c) {
            ctx->pc = 0x117894u;
            goto label_117894;
        }
    }
    ctx->pc = 0x117834u;
    // 0x117834: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x117834u;
    {
        const bool branch_taken_0x117834 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117834u;
        // 0x117838: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x117834) {
            ctx->pc = 0x117874u;
            goto label_117874;
        }
    }
    ctx->pc = 0x11783Cu;
    // 0x11783c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11783Cu;
    {
        const bool branch_taken_0x11783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11783c) {
            ctx->pc = 0x117840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11783Cu;
            // 0x117840: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117854u;
            goto label_117854;
        }
    }
    ctx->pc = 0x117844u;
    // 0x117844: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x117844u;
    {
        const bool branch_taken_0x117844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117844u;
        // 0x117848: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117844) {
            ctx->pc = 0x117864u;
            goto label_117864;
        }
    }
    ctx->pc = 0x11784Cu;
    // 0x11784c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11784Cu;
    {
        const bool branch_taken_0x11784c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11784Cu;
        // 0x117850: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11784c) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x117854u;
label_117854:
    // 0x117854: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x117854u;
    {
        const bool branch_taken_0x117854 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117854u;
        // 0x117858: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117854) {
            ctx->pc = 0x117884u;
            goto label_117884;
        }
    }
    ctx->pc = 0x11785Cu;
    // 0x11785c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x11785Cu;
    {
        const bool branch_taken_0x11785c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11785Cu;
        // 0x117860: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11785c) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x117864u;
label_117864:
    // 0x117864: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11786c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x11786Cu;
    {
        const bool branch_taken_0x11786c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11786Cu;
        // 0x117870: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11786c) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x117874u;
label_117874:
    // 0x117874: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117878: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11787c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x11787Cu;
    {
        const bool branch_taken_0x11787c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11787Cu;
        // 0x117880: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11787c) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x117884u;
label_117884:
    // 0x117884: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11788c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11788Cu;
    {
        const bool branch_taken_0x11788c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11788Cu;
        // 0x117890: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11788c) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x117894u;
label_117894:
    // 0x117894: 0x1473001a  bne         $v1, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x117894u;
    {
        const bool branch_taken_0x117894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x117898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117894u;
        // 0x117898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117894) {
            ctx->pc = 0x117900u;
            goto label_117900;
        }
    }
    ctx->pc = 0x11789Cu;
    // 0x11789c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1178a0: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1178A0u;
    {
        const bool branch_taken_0x1178a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1178A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178A0u;
        // 0x1178a4: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178a0) {
            ctx->pc = 0x1178E0u;
            goto label_1178e0;
        }
    }
    ctx->pc = 0x1178A8u;
    // 0x1178a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1178A8u;
    {
        const bool branch_taken_0x1178a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1178a8) {
            ctx->pc = 0x1178ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1178A8u;
            // 0x1178ac: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1178C0u;
            goto label_1178c0;
        }
    }
    ctx->pc = 0x1178B0u;
    // 0x1178b0: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1178B0u;
    {
        const bool branch_taken_0x1178b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x1178B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B0u;
        // 0x1178b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178b0) {
            ctx->pc = 0x1178D0u;
            goto label_1178d0;
        }
    }
    ctx->pc = 0x1178B8u;
    // 0x1178b8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1178B8u;
    {
        const bool branch_taken_0x1178b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178B8u;
        // 0x1178bc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178b8) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x1178C0u;
label_1178c0:
    // 0x1178c0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1178C0u;
    {
        const bool branch_taken_0x1178c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1178C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C0u;
        // 0x1178c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c0) {
            ctx->pc = 0x1178F0u;
            goto label_1178f0;
        }
    }
    ctx->pc = 0x1178C8u;
    // 0x1178c8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1178C8u;
    {
        const bool branch_taken_0x1178c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178C8u;
        // 0x1178cc: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178c8) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x1178D0u;
label_1178d0:
    // 0x1178d0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1178d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1178d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1178d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178d8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1178D8u;
    {
        const bool branch_taken_0x1178d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178D8u;
        // 0x1178dc: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178d8) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x1178E0u;
label_1178e0:
    // 0x1178e0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1178e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1178e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1178e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1178E8u;
    {
        const bool branch_taken_0x1178e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178E8u;
        // 0x1178ec: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178e8) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x1178F0u;
label_1178f0:
    // 0x1178f0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1178f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1178f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1178f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1178f8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1178F8u;
    {
        const bool branch_taken_0x1178f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1178FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1178F8u;
        // 0x1178fc: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1178f8) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x117900u;
label_117900:
    // 0x117900: 0x54620027  bnel        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x117900u;
    {
        const bool branch_taken_0x117900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x117900) {
            ctx->pc = 0x117904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117900u;
            // 0x117904: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1179A0u;
            goto label_1179a0;
        }
    }
    ctx->pc = 0x117908u;
    // 0x117908: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x117908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11790c: 0x1202000f  beq         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11790Cu;
    {
        const bool branch_taken_0x11790c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11790Cu;
        // 0x117910: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11790c) {
            ctx->pc = 0x11794Cu;
            goto label_11794c;
        }
    }
    ctx->pc = 0x117914u;
    // 0x117914: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117914u;
    {
        const bool branch_taken_0x117914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117914) {
            ctx->pc = 0x117918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117914u;
            // 0x117918: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11792Cu;
            goto label_11792c;
        }
    }
    ctx->pc = 0x11791Cu;
    // 0x11791c: 0x12130007  beq         $s0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x11791Cu;
    {
        const bool branch_taken_0x11791c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x117920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11791Cu;
        // 0x117920: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11791c) {
            ctx->pc = 0x11793Cu;
            goto label_11793c;
        }
    }
    ctx->pc = 0x117924u;
    // 0x117924: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x117924u;
    {
        const bool branch_taken_0x117924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117924u;
        // 0x117928: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117924) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x11792Cu;
label_11792c:
    // 0x11792c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x11792Cu;
    {
        const bool branch_taken_0x11792c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x117930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11792Cu;
        // 0x117930: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11792c) {
            ctx->pc = 0x117978u;
            goto label_117978;
        }
    }
    ctx->pc = 0x117934u;
    // 0x117934: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x117934u;
    {
        const bool branch_taken_0x117934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117934u;
        // 0x117938: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117934) {
            ctx->pc = 0x1179A4u;
            goto label_1179a4;
        }
    }
    ctx->pc = 0x11793Cu;
label_11793c:
    // 0x11793c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x11793cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117944: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x117944u;
    {
        const bool branch_taken_0x117944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117944u;
        // 0x117948: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117944) {
            ctx->pc = 0x117958u;
            goto label_117958;
        }
    }
    ctx->pc = 0x11794Cu;
label_11794c:
    // 0x11794c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x11794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x117950: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117954: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x117954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_117958:
    // 0x117958: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x117958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11795c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x11795cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x117960: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x117960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117964: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117968: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x117968u;
    SET_GPR_U32(ctx, 31, 0x117970u);
    ctx->pc = 0x11796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117968u;
    // 0x11796c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x117968u, 0x117970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117970u;
label_117970:
    // 0x117970: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x117970u;
    {
        const bool branch_taken_0x117970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117970u;
        // 0x117974: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117970) {
            ctx->pc = 0x1179A0u;
            goto label_1179a0;
        }
    }
    ctx->pc = 0x117978u;
label_117978:
    // 0x117978: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x117978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x11797c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11797cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117980: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x117980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x117984: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x117984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117988: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x117988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x11798c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x11798cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117990: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117994: 0xc07f5fc  jal         func_1FD7F0
    ctx->pc = 0x117994u;
    SET_GPR_U32(ctx, 31, 0x11799Cu);
    ctx->pc = 0x117998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117994u;
    // 0x117998: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7F0u, 0x117994u, 0x11799Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11799Cu;
label_11799c:
    // 0x11799c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11799cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1179a0:
    // 0x1179a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1179a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1179a4:
    // 0x1179a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1179a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1179a8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1179a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1179ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1179acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1179b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1179B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179B0u;
        // 0x1179b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179B8u;
}
