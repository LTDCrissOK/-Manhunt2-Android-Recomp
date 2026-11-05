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

// Function: sub_001AE3D8
// Address: 0x1ae3d8 - 0x1ae4f0
void sub_001AE3D8_0x1ae3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE3D8_0x1ae3d8");
#endif

    switch (ctx->pc) {
        case 0x1ae3fcu: goto label_1ae3fc;
        case 0x1ae418u: goto label_1ae418;
        case 0x1ae448u: goto label_1ae448;
        case 0x1ae4c0u: goto label_1ae4c0;
        case 0x1ae4d0u: goto label_1ae4d0;
        default: break;
    }

    ctx->pc = 0x1ae3d8u;

    // 0x1ae3d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ae3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ae3dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae3e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ae3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ae3e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ae3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae3ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ae3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ae3f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ae3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ae3f4: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE3F4u;
    SET_GPR_U32(ctx, 31, 0x1AE3FCu);
    ctx->pc = 0x1AE3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE3F4u;
    // 0x1ae3f8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE3F4u, 0x1AE3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE3FCu;
label_1ae3fc:
    // 0x1ae3fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ae3fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae400: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae404: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1AE404u;
    {
        const bool branch_taken_0x1ae404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE404u;
        // 0x1ae408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae404) {
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE40Cu;
    // 0x1ae40c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1ae40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1ae410: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AE410u;
    SET_GPR_U32(ctx, 31, 0x1AE418u);
    ctx->pc = 0x1AE414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE410u;
    // 0x1ae414: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AE410u, 0x1AE418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE418u;
label_1ae418:
    // 0x1ae418: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x1ae418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1ae41c: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x1ae41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1ae420: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1ae420u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ae424: 0x26060038  addiu       $a2, $s0, 0x38
    ctx->pc = 0x1ae424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x1ae428: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1ae428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1ae42c: 0x8e250088  lw          $a1, 0x88($s1)
    ctx->pc = 0x1ae42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1ae430: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ae430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae434: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE434u;
    {
        const bool branch_taken_0x1ae434 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE434u;
        // 0x1ae438: 0x72300b  movn        $a2, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae434) {
            ctx->pc = 0x1AE460u;
            goto label_1ae460;
        }
    }
    ctx->pc = 0x1AE43Cu;
    // 0x1ae43c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ae43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ae440: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1AE440u;
    SET_GPR_U32(ctx, 31, 0x1AE448u);
    ctx->pc = 0x1AE444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE440u;
    // 0x1ae444: 0x8e2400a0  lw          $a0, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1AE440u, 0x1AE448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE448u;
label_1ae448:
    // 0x1ae448: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1ae448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1ae44c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ae450: 0x9483002a  lhu         $v1, 0x2A($a0)
    ctx->pc = 0x1ae450u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1ae454: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x1ae454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x1ae458: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1AE458u;
    {
        const bool branch_taken_0x1ae458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE458u;
        // 0x1ae45c: 0xa483002a  sh          $v1, 0x2A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae458) {
            ctx->pc = 0x1AE4D4u;
            goto label_1ae4d4;
        }
    }
    ctx->pc = 0x1AE460u;
label_1ae460:
    // 0x1ae460: 0x24a2ffee  addiu       $v0, $a1, -0x12
    ctx->pc = 0x1ae460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967278));
    // 0x1ae464: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ae464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ae468: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AE468u;
    {
        const bool branch_taken_0x1ae468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE468u;
        // 0x1ae46c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae468) {
            ctx->pc = 0x1AE4ACu;
            goto label_1ae4ac;
        }
    }
    ctx->pc = 0x1AE470u;
    // 0x1ae470: 0x24030155  addiu       $v1, $zero, 0x155
    ctx->pc = 0x1ae470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 341));
    // 0x1ae474: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ae474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ae478: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ae478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ae47c: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE47Cu;
    {
        const bool branch_taken_0x1ae47c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE47Cu;
        // 0x1ae480: 0x2402014c  addiu       $v0, $zero, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae47c) {
            ctx->pc = 0x1AE4B0u;
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE484u;
    // 0x1ae484: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AE484u;
    {
        const bool branch_taken_0x1ae484 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE484u;
        // 0x1ae488: 0x2402015a  addiu       $v0, $zero, 0x15A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae484) {
            ctx->pc = 0x1AE4B0u;
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE48Cu;
    // 0x1ae48c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AE48Cu;
    {
        const bool branch_taken_0x1ae48c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE48Cu;
        // 0x1ae490: 0x2402015b  addiu       $v0, $zero, 0x15B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae48c) {
            ctx->pc = 0x1AE4B0u;
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE494u;
    // 0x1ae494: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE494u;
    {
        const bool branch_taken_0x1ae494 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE494u;
        // 0x1ae498: 0x2402015c  addiu       $v0, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae494) {
            ctx->pc = 0x1AE4B0u;
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE49Cu;
    // 0x1ae49c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE49Cu;
    {
        const bool branch_taken_0x1ae49c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE49Cu;
        // 0x1ae4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae49c) {
            ctx->pc = 0x1AE4B0u;
            goto label_1ae4b0;
        }
    }
    ctx->pc = 0x1AE4A4u;
    // 0x1ae4a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1AE4A4u;
    {
        const bool branch_taken_0x1ae4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4A4u;
        // 0x1ae4a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4a4) {
            ctx->pc = 0x1AE4D8u;
            goto label_1ae4d8;
        }
    }
    ctx->pc = 0x1AE4ACu;
label_1ae4ac:
    // 0x1ae4ac: 0x2cb30002  sltiu       $s3, $a1, 0x2
    ctx->pc = 0x1ae4acu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ae4b0:
    // 0x1ae4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae4b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ae4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ae4b8: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE4B8u;
    SET_GPR_U32(ctx, 31, 0x1AE4C0u);
    ctx->pc = 0x1AE4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4B8u;
    // 0x1ae4bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE4B8u, 0x1AE4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4C0u;
label_1ae4c0:
    // 0x1ae4c0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE4C0u;
    {
        const bool branch_taken_0x1ae4c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4C0u;
        // 0x1ae4c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae4c0) {
            ctx->pc = 0x1AE4D0u;
            goto label_1ae4d0;
        }
    }
    ctx->pc = 0x1AE4C8u;
    // 0x1ae4c8: 0xc06bfc8  jal         func_1AFF20
    ctx->pc = 0x1AE4C8u;
    SET_GPR_U32(ctx, 31, 0x1AE4D0u);
    ctx->pc = 0x1AE4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE4C8u;
    // 0x1ae4cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x1AE4C8u, 0x1AE4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE4D0u;
label_1ae4d0:
    // 0x1ae4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ae4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ae4d4:
    // 0x1ae4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae4d8:
    // 0x1ae4d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae4d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae4dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ae4dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae4e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ae4e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ae4e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ae4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ae4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE4E8u;
        // 0x1ae4ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE4F0u;
}
