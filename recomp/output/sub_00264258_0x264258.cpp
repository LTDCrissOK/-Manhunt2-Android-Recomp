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

// Function: sub_00264258
// Address: 0x264258 - 0x264398
void sub_00264258_0x264258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264258_0x264258");
#endif

    switch (ctx->pc) {
        case 0x264288u: goto label_264288;
        case 0x264298u: goto label_264298;
        case 0x2642b0u: goto label_2642b0;
        case 0x264310u: goto label_264310;
        case 0x264334u: goto label_264334;
        case 0x264348u: goto label_264348;
        case 0x264360u: goto label_264360;
        case 0x264374u: goto label_264374;
        default: break;
    }

    ctx->pc = 0x264258u;

    // 0x264258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x264258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26425c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x264260: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x264260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x264264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x264264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264268: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x264268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x26426c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264270: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x264270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x264274: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x264278: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x26427c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x26427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x264280: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x264280u;
    SET_GPR_U32(ctx, 31, 0x264288u);
    ctx->pc = 0x264284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264280u;
    // 0x264284: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x264280u, 0x264288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264288u;
label_264288:
    // 0x264288: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264288u;
    {
        const bool branch_taken_0x264288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264288) {
            ctx->pc = 0x264298u;
            goto label_264298;
        }
    }
    ctx->pc = 0x264290u;
    // 0x264290: 0xc0d94b6  jal         func_3652D8
    ctx->pc = 0x264290u;
    SET_GPR_U32(ctx, 31, 0x264298u);
    ctx->pc = 0x264294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264290u;
    // 0x264294: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3652D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3652D8u, 0x264290u, 0x264298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264298u;
label_264298:
    // 0x264298: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x264298u;
    {
        const bool branch_taken_0x264298 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x26429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264298u;
        // 0x26429c: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264298) {
            ctx->pc = 0x264300u;
            goto label_264300;
        }
    }
    ctx->pc = 0x2642A0u;
    // 0x2642a0: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2642A0u;
    {
        const bool branch_taken_0x2642a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642a0) {
            ctx->pc = 0x2642F4u;
            goto label_2642f4;
        }
    }
    ctx->pc = 0x2642A8u;
    // 0x2642a8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2642A8u;
    SET_GPR_U32(ctx, 31, 0x2642B0u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2642A8u, 0x2642B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2642B0u;
label_2642b0:
    // 0x2642b0: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2642b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2642b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2642B4u;
    {
        const bool branch_taken_0x2642b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2642b4) {
            ctx->pc = 0x2642F4u;
            goto label_2642f4;
        }
    }
    ctx->pc = 0x2642BCu;
    // 0x2642bc: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x2642bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2642c0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x2642c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x2642c4: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x2642c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x2642c8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x2642c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x2642cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2642CCu;
    {
        const bool branch_taken_0x2642cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2642cc) {
            ctx->pc = 0x2642D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2642CCu;
            // 0x2642d0: 0x8e020274  lw          $v0, 0x274($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2642ECu;
            goto label_2642ec;
        }
    }
    ctx->pc = 0x2642D4u;
    // 0x2642d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2642d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2642d8: 0x8c6510d8  lw          $a1, 0x10D8($v1)
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4312)));
    // 0x2642dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2642dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2642e0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2642E0u;
    {
        const bool branch_taken_0x2642e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2642E0u;
        // 0x2642e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642e0) {
            ctx->pc = 0x2642F4u;
            goto label_2642f4;
        }
    }
    ctx->pc = 0x2642E8u;
    // 0x2642e8: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x2642e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_2642ec:
    // 0x2642ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2642ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2642f0: 0x8c710098  lw          $s1, 0x98($v1)
    ctx->pc = 0x2642f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 152)));
label_2642f4:
    // 0x2642f4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2642F4u;
    {
        const bool branch_taken_0x2642f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642f4) {
            ctx->pc = 0x26432Cu;
            goto label_26432c;
        }
    }
    ctx->pc = 0x2642FCu;
    // 0x2642fc: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_264300:
    // 0x264300: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x264300u;
    {
        const bool branch_taken_0x264300 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x264300) {
            ctx->pc = 0x26432Cu;
            goto label_26432c;
        }
    }
    ctx->pc = 0x264308u;
    // 0x264308: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x264308u;
    SET_GPR_U32(ctx, 31, 0x264310u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x264308u, 0x264310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264310u;
label_264310:
    // 0x264310: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x264310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x264314: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264314u;
    {
        const bool branch_taken_0x264314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264314) {
            ctx->pc = 0x26432Cu;
            goto label_26432c;
        }
    }
    ctx->pc = 0x26431Cu;
    // 0x26431c: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x264320: 0x8c440068  lw          $a0, 0x68($v0)
    ctx->pc = 0x264320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x264324: 0x8c430070  lw          $v1, 0x70($v0)
    ctx->pc = 0x264324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x264328: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x264328u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_26432c:
    // 0x26432c: 0xc098118  jal         func_260460
    ctx->pc = 0x26432Cu;
    SET_GPR_U32(ctx, 31, 0x264334u);
    ctx->pc = 0x264330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26432Cu;
    // 0x264330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260460u, 0x26432Cu, 0x264334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264334u;
label_264334:
    // 0x264334: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x264334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x264338: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264338u;
    {
        const bool branch_taken_0x264338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264338u;
        // 0x26433c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264338) {
            ctx->pc = 0x264360u;
            goto label_264360;
        }
    }
    ctx->pc = 0x264340u;
    // 0x264340: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x264340u;
    SET_GPR_U32(ctx, 31, 0x264348u);
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x264340u, 0x264348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264348u;
label_264348:
    // 0x264348: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x264348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x26434c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26434Cu;
    {
        const bool branch_taken_0x26434c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26434c) {
            ctx->pc = 0x264350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26434Cu;
            // 0x264350: 0x8e04026c  lw          $a0, 0x26C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264364u;
            goto label_264364;
        }
    }
    ctx->pc = 0x264354u;
    // 0x264354: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x264354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x264358: 0xc0d9080  jal         func_364200
    ctx->pc = 0x264358u;
    SET_GPR_U32(ctx, 31, 0x264360u);
    ctx->pc = 0x26435Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264358u;
    // 0x26435c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364200u, 0x264358u, 0x264360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264360u;
label_264360:
    // 0x264360: 0x8e04026c  lw          $a0, 0x26C($s0)
    ctx->pc = 0x264360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_264364:
    // 0x264364: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264364u;
    {
        const bool branch_taken_0x264364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264364u;
        // 0x264368: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264364) {
            ctx->pc = 0x26437Cu;
            goto label_26437c;
        }
    }
    ctx->pc = 0x26436Cu;
    // 0x26436c: 0xc0d6538  jal         func_3594E0
    ctx->pc = 0x26436Cu;
    SET_GPR_U32(ctx, 31, 0x264374u);
    ctx->pc = 0x264370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26436Cu;
    // 0x264370: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3594E0u, 0x26436Cu, 0x264374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264374u;
label_264374:
    // 0x264374: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x264374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x264378: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x264378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26437c:
    // 0x26437c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26437cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264380: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x264380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x264384: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x264384u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264388: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x264388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26438c: 0x3e00008  jr          $ra
    ctx->pc = 0x26438Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26438Cu;
        // 0x264390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26438Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264394u;
    // 0x264394: 0x0  nop
    ctx->pc = 0x264394u;
    // NOP
    ctx->pc = 0x264398u;
}
