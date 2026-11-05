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

// Function: sub_001481F0
// Address: 0x1481f0 - 0x148328
void sub_001481F0_0x1481f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001481F0_0x1481f0");
#endif

    switch (ctx->pc) {
        case 0x148218u: goto label_148218;
        case 0x148230u: goto label_148230;
        case 0x14824cu: goto label_14824c;
        case 0x148258u: goto label_148258;
        case 0x148268u: goto label_148268;
        case 0x148294u: goto label_148294;
        case 0x1482b8u: goto label_1482b8;
        case 0x1482ccu: goto label_1482cc;
        case 0x1482d8u: goto label_1482d8;
        case 0x148308u: goto label_148308;
        default: break;
    }

    ctx->pc = 0x1481f0u;

    // 0x1481f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1481f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1481f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1481f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1481f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1481f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1481fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1481fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148200: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x148200u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148208: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x148208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14820c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14820cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x148210: 0xc05238e  jal         func_148E38
    ctx->pc = 0x148210u;
    SET_GPR_U32(ctx, 31, 0x148218u);
    ctx->pc = 0x148214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148210u;
    // 0x148214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148210u, 0x148218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148218u;
label_148218:
    // 0x148218: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x148218u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14821c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14821Cu;
    {
        const bool branch_taken_0x14821c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x148220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14821Cu;
        // 0x148220: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14821c) {
            ctx->pc = 0x14823Cu;
            goto label_14823c;
        }
    }
    ctx->pc = 0x148224u;
    // 0x148224: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148228: 0xc05238e  jal         func_148E38
    ctx->pc = 0x148228u;
    SET_GPR_U32(ctx, 31, 0x148230u);
    ctx->pc = 0x14822Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148228u;
    // 0x14822c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E38u, 0x148228u, 0x148230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148230u;
label_148230:
    // 0x148230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148234: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148234u;
    {
        const bool branch_taken_0x148234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x148238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148234u;
        // 0x148238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148234) {
            ctx->pc = 0x148244u;
            goto label_148244;
        }
    }
    ctx->pc = 0x14823Cu;
label_14823c:
    // 0x14823c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x14823cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_148244:
    // 0x148244: 0xc0523de  jal         func_148F78
    ctx->pc = 0x148244u;
    SET_GPR_U32(ctx, 31, 0x14824Cu);
    ctx->pc = 0x148248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148244u;
    // 0x148248: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F78u, 0x148244u, 0x14824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14824Cu;
label_14824c:
    // 0x14824c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14824cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148250: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x148250u;
    SET_GPR_U32(ctx, 31, 0x148258u);
    ctx->pc = 0x148254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148250u;
    // 0x148254: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x148250u, 0x148258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148258u;
label_148258:
    // 0x148258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x148258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14825c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148260: 0xc04d88a  jal         func_136228
    ctx->pc = 0x148260u;
    SET_GPR_U32(ctx, 31, 0x148268u);
    ctx->pc = 0x148264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148260u;
    // 0x148264: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x148260u, 0x148268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148268u;
label_148268:
    // 0x148268: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x148268u;
    {
        const bool branch_taken_0x148268 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148268u;
        // 0x14826c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148268) {
            ctx->pc = 0x148278u;
            goto label_148278;
        }
    }
    ctx->pc = 0x148270u;
    // 0x148270: 0xae220704  sw          $v0, 0x704($s1)
    ctx->pc = 0x148270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1796), GPR_U32(ctx, 2));
    // 0x148274: 0xae220700  sw          $v0, 0x700($s1)
    ctx->pc = 0x148274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1792), GPR_U32(ctx, 2));
label_148278:
    // 0x148278: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x148278u;
    {
        const bool branch_taken_0x148278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148278u;
        // 0x14827c: 0x129880  sll         $s3, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148278) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x148280u;
    // 0x148280: 0x8e2204d0  lw          $v0, 0x4D0($s1)
    ctx->pc = 0x148280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1232)));
    // 0x148284: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x148284u;
    {
        const bool branch_taken_0x148284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148284u;
        // 0x148288: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148284) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x14828Cu;
    // 0x14828c: 0xc0524a0  jal         func_149280
    ctx->pc = 0x14828Cu;
    SET_GPR_U32(ctx, 31, 0x148294u);
    ctx->pc = 0x148290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14828Cu;
    // 0x148290: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149280u, 0x14828Cu, 0x148294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148294u;
label_148294:
    // 0x148294: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x148294u;
    {
        const bool branch_taken_0x148294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148294u;
        // 0x148298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148294) {
            ctx->pc = 0x1482D8u;
            goto label_1482d8;
        }
    }
    ctx->pc = 0x14829Cu;
    // 0x14829c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1482a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1482a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1482a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1482a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482a8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1482a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1482ac: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1482b0: 0xc04dcba  jal         func_1372E8
    ctx->pc = 0x1482B0u;
    SET_GPR_U32(ctx, 31, 0x1482B8u);
    ctx->pc = 0x1482B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482B0u;
    // 0x1482b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1372E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1372E8u, 0x1482B0u, 0x1482B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482B8u;
label_1482b8:
    // 0x1482b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1482b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1482bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482c0: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x1482c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1482c4: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x1482C4u;
    SET_GPR_U32(ctx, 31, 0x1482CCu);
    ctx->pc = 0x1482C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482C4u;
    // 0x1482c8: 0x24070035  addiu       $a3, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137030u, 0x1482C4u, 0x1482CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482CCu;
label_1482cc:
    // 0x1482cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1482ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1482d0: 0xc05249a  jal         func_149268
    ctx->pc = 0x1482D0u;
    SET_GPR_U32(ctx, 31, 0x1482D8u);
    ctx->pc = 0x1482D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1482D0u;
    // 0x1482d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149268u, 0x1482D0u, 0x1482D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482D8u;
label_1482d8:
    // 0x1482d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1482d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1482dc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1482dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1482e0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1482e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1482e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1482e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1482e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1482e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1482ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1482f0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1482f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1482f4: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x1482f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1482F8u;
    {
        const bool branch_taken_0x1482f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1482FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1482F8u;
        // 0x1482fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1482f8) {
            ctx->pc = 0x14830Cu;
            goto label_14830c;
        }
    }
    ctx->pc = 0x148300u;
    // 0x148300: 0xc0454a8  jal         func_1152A0
    ctx->pc = 0x148300u;
    SET_GPR_U32(ctx, 31, 0x148308u);
    ctx->pc = 0x148304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148300u;
    // 0x148304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1152A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1152A0u, 0x148300u, 0x148308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148308u;
label_148308:
    // 0x148308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14830c:
    // 0x14830c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14830cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x148310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148314: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x148314u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148318: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x148318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14831c: 0x3e00008  jr          $ra
    ctx->pc = 0x14831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14831Cu;
        // 0x148320: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148324u;
    // 0x148324: 0x0  nop
    ctx->pc = 0x148324u;
    // NOP
    ctx->pc = 0x148328u;
}
