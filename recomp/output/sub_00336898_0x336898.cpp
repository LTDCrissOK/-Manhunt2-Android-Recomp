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

// Function: sub_00336898
// Address: 0x336898 - 0x3369d0
void sub_00336898_0x336898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336898_0x336898");
#endif

    switch (ctx->pc) {
        case 0x3368d0u: goto label_3368d0;
        case 0x3368e4u: goto label_3368e4;
        case 0x336904u: goto label_336904;
        case 0x336924u: goto label_336924;
        case 0x336974u: goto label_336974;
        case 0x33697cu: goto label_33697c;
        case 0x33698cu: goto label_33698c;
        case 0x336998u: goto label_336998;
        case 0x3369a0u: goto label_3369a0;
        case 0x3369b4u: goto label_3369b4;
        default: break;
    }

    ctx->pc = 0x336898u;

    // 0x336898: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33689c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3368a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3368a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3368a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3368a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3368a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3368ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3368acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368b0: 0x2a020068  slti        $v0, $s0, 0x68
    ctx->pc = 0x3368b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)104) ? 1 : 0);
    // 0x3368b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3368B4u;
    {
        const bool branch_taken_0x3368b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3368B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368B4u;
        // 0x3368b8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368b4) {
            ctx->pc = 0x3368C4u;
            goto label_3368c4;
        }
    }
    ctx->pc = 0x3368BCu;
    // 0x3368bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3368BCu;
    {
        const bool branch_taken_0x3368bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368BCu;
        // 0x3368c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368bc) {
            ctx->pc = 0x3369B8u;
            goto label_3369b8;
        }
    }
    ctx->pc = 0x3368C4u;
label_3368c4:
    // 0x3368c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3368c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368c8: 0xc0cd984  jal         func_336610
    ctx->pc = 0x3368C8u;
    SET_GPR_U32(ctx, 31, 0x3368D0u);
    ctx->pc = 0x3368CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368C8u;
    // 0x3368cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x3368C8u, 0x3368D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368D0u;
label_3368d0:
    // 0x3368d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3368d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368d4: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3368D4u;
    {
        const bool branch_taken_0x3368d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368D4u;
        // 0x3368d8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368d4) {
            ctx->pc = 0x33690Cu;
            goto label_33690c;
        }
    }
    ctx->pc = 0x3368DCu;
    // 0x3368dc: 0xc0cd652  jal         func_335948
    ctx->pc = 0x3368DCu;
    SET_GPR_U32(ctx, 31, 0x3368E4u);
    ctx->pc = 0x3368E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368DCu;
    // 0x3368e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335948u, 0x3368DCu, 0x3368E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368E4u;
label_3368e4:
    // 0x3368e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3368e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3368e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3368e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3368ec: 0x1602000f  bne         $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3368ECu;
    {
        const bool branch_taken_0x3368ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3368F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368ECu;
        // 0x3368f0: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368ec) {
            ctx->pc = 0x33692Cu;
            goto label_33692c;
        }
    }
    ctx->pc = 0x3368F4u;
    // 0x3368f4: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x3368F4u;
    {
        const bool branch_taken_0x3368f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3368f4) {
            ctx->pc = 0x33692Cu;
            goto label_33692c;
        }
    }
    ctx->pc = 0x3368FCu;
    // 0x3368fc: 0xc0cd96e  jal         func_3365B8
    ctx->pc = 0x3368FCu;
    SET_GPR_U32(ctx, 31, 0x336904u);
    ctx->pc = 0x336900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368FCu;
    // 0x336900: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365B8u, 0x3368FCu, 0x336904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336904u;
label_336904:
    // 0x336904: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x336904u;
    {
        const bool branch_taken_0x336904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336904u;
        // 0x336908: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336904) {
            ctx->pc = 0x33692Cu;
            goto label_33692c;
        }
    }
    ctx->pc = 0x33690Cu;
label_33690c:
    // 0x33690c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x336910: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x336910u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482C7Cu));
    // 0x336914: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336914u;
    {
        const bool branch_taken_0x336914 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x336918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336914u;
        // 0x336918: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336914) {
            ctx->pc = 0x33692Cu;
            goto label_33692c;
        }
    }
    ctx->pc = 0x33691Cu;
    // 0x33691c: 0xc0cd652  jal         func_335948
    ctx->pc = 0x33691Cu;
    SET_GPR_U32(ctx, 31, 0x336924u);
    ctx->pc = 0x336920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33691Cu;
    // 0x336920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335948u, 0x33691Cu, 0x336924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336924u;
label_336924:
    // 0x336924: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x336924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336928: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x336928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_33692c:
    // 0x33692c: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33692Cu;
    {
        const bool branch_taken_0x33692c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x336930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33692Cu;
        // 0x336930: 0x2a020043  slti        $v0, $s0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33692c) {
            ctx->pc = 0x3369A8u;
            goto label_3369a8;
        }
    }
    ctx->pc = 0x336934u;
    // 0x336934: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336934u;
    {
        const bool branch_taken_0x336934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336934u;
        // 0x336938: 0x2402003a  addiu       $v0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336934) {
            ctx->pc = 0x33694Cu;
            goto label_33694c;
        }
    }
    ctx->pc = 0x33693Cu;
    // 0x33693c: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33693Cu;
    {
        const bool branch_taken_0x33693c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x336940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33693Cu;
        // 0x336940: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33693c) {
            ctx->pc = 0x336984u;
            goto label_336984;
        }
    }
    ctx->pc = 0x336944u;
    // 0x336944: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x336944u;
    {
        const bool branch_taken_0x336944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336944u;
        // 0x336948: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336944) {
            ctx->pc = 0x3369BCu;
            goto label_3369bc;
        }
    }
    ctx->pc = 0x33694Cu;
label_33694c:
    // 0x33694c: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x33694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x336950: 0x16020019  bne         $s0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x336950u;
    {
        const bool branch_taken_0x336950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x336954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336950u;
        // 0x336954: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336950) {
            ctx->pc = 0x3369B8u;
            goto label_3369b8;
        }
    }
    ctx->pc = 0x336958u;
    // 0x336958: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x336958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x33695c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x33695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x336960: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x336960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x336964: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x336964u;
    {
        const bool branch_taken_0x336964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336964u;
        // 0x336968: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336964) {
            ctx->pc = 0x3369B8u;
            goto label_3369b8;
        }
    }
    ctx->pc = 0x33696Cu;
    // 0x33696c: 0xc0c13ea  jal         func_304FA8
    ctx->pc = 0x33696Cu;
    SET_GPR_U32(ctx, 31, 0x336974u);
    ctx->pc = 0x304FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304FA8u, 0x33696Cu, 0x336974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336974u;
label_336974:
    // 0x336974: 0xc0c13ae  jal         func_304EB8
    ctx->pc = 0x336974u;
    SET_GPR_U32(ctx, 31, 0x33697Cu);
    ctx->pc = 0x336978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336974u;
    // 0x336978: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304EB8u, 0x336974u, 0x33697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33697Cu;
label_33697c:
    // 0x33697c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33697Cu;
    {
        const bool branch_taken_0x33697c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33697Cu;
        // 0x336980: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33697c) {
            ctx->pc = 0x3369B8u;
            goto label_3369b8;
        }
    }
    ctx->pc = 0x336984u;
label_336984:
    // 0x336984: 0xc0c13d0  jal         func_304F40
    ctx->pc = 0x336984u;
    SET_GPR_U32(ctx, 31, 0x33698Cu);
    ctx->pc = 0x304F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304F40u, 0x336984u, 0x33698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33698Cu;
label_33698c:
    // 0x33698c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x336990: 0xc0be5e2  jal         func_2F9788
    ctx->pc = 0x336990u;
    SET_GPR_U32(ctx, 31, 0x336998u);
    ctx->pc = 0x336994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336990u;
    // 0x336994: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x336990u, 0x336998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336998u;
label_336998:
    // 0x336998: 0xc0c13ae  jal         func_304EB8
    ctx->pc = 0x336998u;
    SET_GPR_U32(ctx, 31, 0x3369A0u);
    ctx->pc = 0x33699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336998u;
    // 0x33699c: 0x24440001  addiu       $a0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304EB8u, 0x336998u, 0x3369A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369A0u;
label_3369a0:
    // 0x3369a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3369A0u;
    {
        const bool branch_taken_0x3369a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369A0u;
        // 0x3369a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369a0) {
            ctx->pc = 0x3369B8u;
            goto label_3369b8;
        }
    }
    ctx->pc = 0x3369A8u;
label_3369a8:
    // 0x3369a8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x3369a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x3369ac: 0xc0c129e  jal         func_304A78
    ctx->pc = 0x3369ACu;
    SET_GPR_U32(ctx, 31, 0x3369B4u);
    ctx->pc = 0x3369B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369ACu;
    // 0x3369b0: 0x24846600  addiu       $a0, $a0, 0x6600 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A78u, 0x3369ACu, 0x3369B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369B4u;
label_3369b4:
    // 0x3369b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3369b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3369b8:
    // 0x3369b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3369b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3369bc:
    // 0x3369bc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3369bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3369c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3369c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3369c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3369c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3369c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3369C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3369CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369C8u;
        // 0x3369cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3369C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3369D0u;
}
