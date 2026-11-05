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

// Function: sub_001CF7B8
// Address: 0x1cf7b8 - 0x1cf948
void sub_001CF7B8_0x1cf7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF7B8_0x1cf7b8");
#endif

    switch (ctx->pc) {
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8fcu: goto label_1cf8fc;
        default: break;
    }

    ctx->pc = 0x1cf7b8u;

    // 0x1cf7b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1cf7bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cf7c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cf7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cf7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf7c8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1cf7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1cf7cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cf7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cf7d8: 0x244214a8  addiu       $v0, $v0, 0x14A8
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5288));
    // 0x1cf7dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1cf7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1cf7e0: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1cf7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cf7e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf7e8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf7f0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1cf7f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1cf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1cf7f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cf7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf7fc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1cf7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1cf800: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1cf800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1cf804: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1cf804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1cf808: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1cf808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x1cf80c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1cf80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1cf810: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1cf810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1cf814: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cf814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cf818: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cf818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cf81c: 0xa600002a  sh          $zero, 0x2A($s0)
    ctx->pc = 0x1cf81cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cf820: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1cf820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1cf824: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1cf824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1cf828: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1cf828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1cf82c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cf82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1cf830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1cf830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1cf834: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1cf838: 0x84430004  lh          $v1, 0x4($v0)
    ctx->pc = 0x1cf838u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1cf83c: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1cf83cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1cf840: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x1CF840u;
    SET_GPR_U32(ctx, 31, 0x1CF848u);
    ctx->pc = 0x1CF844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF840u;
    // 0x1cf844: 0xa6030028  sh          $v1, 0x28($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x1CF840u, 0x1CF848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF848u;
label_1cf848:
    // 0x1cf848: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x1cf848u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cf84c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1CF84Cu;
    {
        const bool branch_taken_0x1cf84c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF84Cu;
        // 0x1cf850: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf84c) {
            ctx->pc = 0x1CF888u;
            goto label_1cf888;
        }
    }
    ctx->pc = 0x1CF854u;
    // 0x1cf854: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf858:
    // 0x1cf858: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1cf858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cf85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf860: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cf864: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1cf864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1cf868: 0xac500098  sw          $s0, 0x98($v0)
    ctx->pc = 0x1cf868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 16));
    // 0x1cf86c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cf86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cf870: 0xc0749fe  jal         func_1D27F8
    ctx->pc = 0x1CF870u;
    SET_GPR_U32(ctx, 31, 0x1CF878u);
    ctx->pc = 0x1CF874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF870u;
    // 0x1cf874: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27F8u, 0x1CF870u, 0x1CF878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF878u;
label_1cf878:
    // 0x1cf878: 0x86020028  lh          $v0, 0x28($s0)
    ctx->pc = 0x1cf878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1cf87c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1cf87cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cf880: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CF880u;
    {
        const bool branch_taken_0x1cf880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF880u;
        // 0x1cf884: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf880) {
            ctx->pc = 0x1CF858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf858;
        }
    }
    ctx->pc = 0x1CF888u;
label_1cf888:
    // 0x1cf888: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cf888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf88c: 0xc074920  jal         func_1D2480
    ctx->pc = 0x1CF88Cu;
    SET_GPR_U32(ctx, 31, 0x1CF894u);
    ctx->pc = 0x1CF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF88Cu;
    // 0x1cf890: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2480u, 0x1CF88Cu, 0x1CF894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF894u;
label_1cf894:
    // 0x1cf894: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1cf898: 0x1840001d  blez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1CF898u;
    {
        const bool branch_taken_0x1cf898 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF898u;
        // 0x1cf89c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf898) {
            ctx->pc = 0x1CF910u;
            goto label_1cf910;
        }
    }
    ctx->pc = 0x1CF8A0u;
    // 0x1cf8a0: 0x241600a0  addiu       $s6, $zero, 0xA0
    ctx->pc = 0x1cf8a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1cf8a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cf8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8a8:
    // 0x1cf8a8: 0xc074958  jal         func_1D2560
    ctx->pc = 0x1CF8A8u;
    SET_GPR_U32(ctx, 31, 0x1CF8B0u);
    ctx->pc = 0x1CF8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8A8u;
    // 0x1cf8ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2560u, 0x1CF8A8u, 0x1CF8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8B0u;
label_1cf8b0:
    // 0x1cf8b0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cf8b8: 0x30453fff  andi        $a1, $v0, 0x3FFF
    ctx->pc = 0x1cf8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1cf8bc: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1cf8c0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1cf8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1cf8c4: 0x50570001  beql        $v0, $s7, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CF8C4u;
    {
        const bool branch_taken_0x1cf8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1cf8c4) {
            ctx->pc = 0x1CF8C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8C4u;
            // 0x1cf8c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF8CCu;
            goto label_1cf8cc;
        }
    }
    ctx->pc = 0x1CF8CCu;
label_1cf8cc:
    // 0x1cf8cc: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1CF8CCu;
    {
        const bool branch_taken_0x1cf8cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1CF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8CCu;
        // 0x1cf8d0: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8cc) {
            ctx->pc = 0x1CF8FCu;
            goto label_1cf8fc;
        }
    }
    ctx->pc = 0x1CF8D4u;
    // 0x1cf8d4: 0x50b1000a  beql        $a1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF8D4u;
    {
        const bool branch_taken_0x1cf8d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x1cf8d4) {
            ctx->pc = 0x1CF8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CF8D4u;
            // 0x1cf8d8: 0x86820008  lh          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF8DCu;
    // 0x1cf8dc: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x1CF8DCu;
    SET_GPR_U32(ctx, 31, 0x1CF8E4u);
    ctx->pc = 0x1CF8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8DCu;
    // 0x1cf8e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x1CF8DCu, 0x1CF8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8E4u;
label_1cf8e4:
    // 0x1cf8e4: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF8E4u;
    {
        const bool branch_taken_0x1cf8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1CF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8E4u;
        // 0x1cf8e8: 0x561018  mult        $v0, $v0, $s6 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8e4) {
            ctx->pc = 0x1CF8FCu;
            goto label_1cf8fc;
        }
    }
    ctx->pc = 0x1CF8ECu;
    // 0x1cf8ec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cf8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1cf8f0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1cf8f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf8f4: 0xc0749fe  jal         func_1D27F8
    ctx->pc = 0x1CF8F4u;
    SET_GPR_U32(ctx, 31, 0x1CF8FCu);
    ctx->pc = 0x1CF8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF8F4u;
    // 0x1cf8f8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D27F8u, 0x1CF8F4u, 0x1CF8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF8FCu;
label_1cf8fc:
    // 0x1cf8fc: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x1cf8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_1cf900:
    // 0x1cf900: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cf900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1cf904: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1cf904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1cf908: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1CF908u;
    {
        const bool branch_taken_0x1cf908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF908u;
        // 0x1cf90c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf908) {
            ctx->pc = 0x1CF8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf8a8;
        }
    }
    ctx->pc = 0x1CF910u;
label_1cf910:
    // 0x1cf910: 0xae14000c  sw          $s4, 0xC($s0)
    ctx->pc = 0x1cf910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    // 0x1cf914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cf914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf91c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf91cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf920: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf920u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf924: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf924u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf928: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cf928u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf92c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1cf92cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cf930: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1cf930u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1cf934: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1cf934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf938: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1cf938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1cf93c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF93Cu;
        // 0x1cf940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF944u;
    // 0x1cf944: 0x0  nop
    ctx->pc = 0x1cf944u;
    // NOP
    ctx->pc = 0x1cf948u;
}
