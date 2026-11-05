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

// Function: sub_0012E8E8
// Address: 0x12e8e8 - 0x12ea10
void sub_0012E8E8_0x12e8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E8E8_0x12e8e8");
#endif

    switch (ctx->pc) {
        case 0x12e924u: goto label_12e924;
        case 0x12e93cu: goto label_12e93c;
        case 0x12e950u: goto label_12e950;
        case 0x12e958u: goto label_12e958;
        case 0x12e968u: goto label_12e968;
        case 0x12e980u: goto label_12e980;
        case 0x12e9acu: goto label_12e9ac;
        case 0x12e9c0u: goto label_12e9c0;
        case 0x12e9ccu: goto label_12e9cc;
        case 0x12e9e0u: goto label_12e9e0;
        default: break;
    }

    ctx->pc = 0x12e8e8u;

    // 0x12e8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12e8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12e8ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12e8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12e8f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12e8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12e8f4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12e8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e8f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e8fc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12e8fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e904: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12e904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e908: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e90c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x12e90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x12e910: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x12e910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x12e914: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x12e914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x12e918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12e918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12e91c: 0xc04566a  jal         func_1159A8
    ctx->pc = 0x12E91Cu;
    SET_GPR_U32(ctx, 31, 0x12E924u);
    ctx->pc = 0x12E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E91Cu;
    // 0x12e920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A8u, 0x12E91Cu, 0x12E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E924u;
label_12e924:
    // 0x12e924: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x12E924u;
    {
        const bool branch_taken_0x12e924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E924u;
        // 0x12e928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e924) {
            ctx->pc = 0x12E9E0u;
            goto label_12e9e0;
        }
    }
    ctx->pc = 0x12E92Cu;
    // 0x12e92c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12e930: 0x248499f0  addiu       $a0, $a0, -0x6610
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941168));
    // 0x12e934: 0xc046f02  jal         func_11BC08
    ctx->pc = 0x12E934u;
    SET_GPR_U32(ctx, 31, 0x12E93Cu);
    ctx->pc = 0x12E938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E934u;
    // 0x12e938: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BC08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BC08u, 0x12E934u, 0x12E93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E93Cu;
label_12e93c:
    // 0x12e93c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12e93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e940: 0x52400028  beql        $s2, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x12E940u;
    {
        const bool branch_taken_0x12e940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e940) {
            ctx->pc = 0x12E944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E940u;
            // 0x12e944: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E9E4u;
            goto label_12e9e4;
        }
    }
    ctx->pc = 0x12E948u;
    // 0x12e948: 0xc0421d8  jal         func_108760
    ctx->pc = 0x12E948u;
    SET_GPR_U32(ctx, 31, 0x12E950u);
    ctx->pc = 0x12E94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E948u;
    // 0x12e94c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108760u, 0x12E948u, 0x12E950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E950u;
label_12e950:
    // 0x12e950: 0xc045530  jal         func_1154C0
    ctx->pc = 0x12E950u;
    SET_GPR_U32(ctx, 31, 0x12E958u);
    ctx->pc = 0x12E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E950u;
    // 0x12e954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154C0u, 0x12E950u, 0x12E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E958u;
label_12e958:
    // 0x12e958: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x12e958u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e95c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e960: 0xc0421e2  jal         func_108788
    ctx->pc = 0x12E960u;
    SET_GPR_U32(ctx, 31, 0x12E968u);
    ctx->pc = 0x12E964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E960u;
    // 0x12e964: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108788u, 0x12E960u, 0x12E968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e96c: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x12E96Cu;
    {
        const bool branch_taken_0x12e96c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E96Cu;
        // 0x12e970: 0x2417000e  addiu       $s7, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e96c) {
            ctx->pc = 0x12E9D8u;
            goto label_12e9d8;
        }
    }
    ctx->pc = 0x12E974u;
    // 0x12e974: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x12e974u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x12e978: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12e978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12e97c: 0x0  nop
    ctx->pc = 0x12e97cu;
    // NOP
label_12e980:
    // 0x12e980: 0x10570005  beq         $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E980u;
    {
        const bool branch_taken_0x12e980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x12E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E980u;
        // 0x12e984: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e980) {
            ctx->pc = 0x12E998u;
            goto label_12e998;
        }
    }
    ctx->pc = 0x12E988u;
    // 0x12e988: 0x50560005  beql        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x12E988u;
    {
        const bool branch_taken_0x12e988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x12e988) {
            ctx->pc = 0x12E98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E988u;
            // 0x12e98c: 0x24110002  addiu       $s1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E9A0u;
            goto label_12e9a0;
        }
    }
    ctx->pc = 0x12E990u;
    // 0x12e990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12E990u;
    {
        const bool branch_taken_0x12e990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E990u;
        // 0x12e994: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e990) {
            ctx->pc = 0x12E9B0u;
            goto label_12e9b0;
        }
    }
    ctx->pc = 0x12E998u;
label_12e998:
    // 0x12e998: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12E998u;
    {
        const bool branch_taken_0x12e998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E998u;
        // 0x12e99c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e998) {
            ctx->pc = 0x12E9ACu;
            goto label_12e9ac;
        }
    }
    ctx->pc = 0x12E9A0u;
label_12e9a0:
    // 0x12e9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12e9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9a4: 0xc046180  jal         func_118600
    ctx->pc = 0x12E9A4u;
    SET_GPR_U32(ctx, 31, 0x12E9ACu);
    ctx->pc = 0x12E9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9A4u;
    // 0x12e9a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118600u, 0x12E9A4u, 0x12E9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9ACu;
label_12e9ac:
    // 0x12e9ac: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x12e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_12e9b0:
    // 0x12e9b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9b4: 0x8e850014  lw          $a1, 0x14($s4)
    ctx->pc = 0x12e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x12e9b8: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E9B8u;
    SET_GPR_U32(ctx, 31, 0x12E9C0u);
    ctx->pc = 0x12E9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9B8u;
    // 0x12e9bc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E9B8u, 0x12E9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9C0u;
label_12e9c0:
    // 0x12e9c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c4: 0xc0421e2  jal         func_108788
    ctx->pc = 0x12E9C4u;
    SET_GPR_U32(ctx, 31, 0x12E9CCu);
    ctx->pc = 0x12E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9C4u;
    // 0x12e9c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108788u, 0x12E9C4u, 0x12E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9CCu;
label_12e9cc:
    // 0x12e9cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9d0: 0x5600ffeb  bnel        $s0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x12E9D0u;
    {
        const bool branch_taken_0x12e9d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x12e9d0) {
            ctx->pc = 0x12E9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E9D0u;
            // 0x12e9d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e980;
        }
    }
    ctx->pc = 0x12E9D8u;
label_12e9d8:
    // 0x12e9d8: 0xc0421e0  jal         func_108780
    ctx->pc = 0x12E9D8u;
    SET_GPR_U32(ctx, 31, 0x12E9E0u);
    ctx->pc = 0x12E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E9D8u;
    // 0x12e9dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108780u, 0x12E9D8u, 0x12E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E9E0u;
label_12e9e0:
    // 0x12e9e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12e9e4:
    // 0x12e9e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e9e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e9e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e9e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e9ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12e9ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e9f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12e9f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e9f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x12e9f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12e9f8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x12e9f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e9fc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x12e9fcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12ea00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ea04: 0x3e00008  jr          $ra
    ctx->pc = 0x12EA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EA04u;
        // 0x12ea08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12EA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12EA0Cu;
    // 0x12ea0c: 0x0  nop
    ctx->pc = 0x12ea0cu;
    // NOP
    ctx->pc = 0x12ea10u;
}
