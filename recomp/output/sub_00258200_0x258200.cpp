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

// Function: sub_00258200
// Address: 0x258200 - 0x2582b8
void sub_00258200_0x258200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258200_0x258200");
#endif

    switch (ctx->pc) {
        case 0x258200u: goto label_258200;
        case 0x258204u: goto label_258204;
        case 0x258208u: goto label_258208;
        case 0x25820cu: goto label_25820c;
        case 0x258210u: goto label_258210;
        case 0x258214u: goto label_258214;
        case 0x258218u: goto label_258218;
        case 0x25821cu: goto label_25821c;
        case 0x258220u: goto label_258220;
        case 0x258224u: goto label_258224;
        case 0x258228u: goto label_258228;
        case 0x25822cu: goto label_25822c;
        case 0x258230u: goto label_258230;
        case 0x258234u: goto label_258234;
        case 0x258238u: goto label_258238;
        case 0x25823cu: goto label_25823c;
        case 0x258240u: goto label_258240;
        case 0x258244u: goto label_258244;
        case 0x258248u: goto label_258248;
        case 0x25824cu: goto label_25824c;
        case 0x258250u: goto label_258250;
        case 0x258254u: goto label_258254;
        case 0x258258u: goto label_258258;
        case 0x25825cu: goto label_25825c;
        case 0x258260u: goto label_258260;
        case 0x258264u: goto label_258264;
        case 0x258268u: goto label_258268;
        case 0x25826cu: goto label_25826c;
        case 0x258270u: goto label_258270;
        case 0x258274u: goto label_258274;
        case 0x258278u: goto label_258278;
        case 0x25827cu: goto label_25827c;
        case 0x258280u: goto label_258280;
        case 0x258284u: goto label_258284;
        case 0x258288u: goto label_258288;
        case 0x25828cu: goto label_25828c;
        case 0x258290u: goto label_258290;
        case 0x258294u: goto label_258294;
        case 0x258298u: goto label_258298;
        case 0x25829cu: goto label_25829c;
        case 0x2582a0u: goto label_2582a0;
        case 0x2582a4u: goto label_2582a4;
        case 0x2582a8u: goto label_2582a8;
        case 0x2582acu: goto label_2582ac;
        case 0x2582b0u: goto label_2582b0;
        case 0x2582b4u: goto label_2582b4;
        default: break;
    }

    ctx->pc = 0x258200u;

label_258200:
    // 0x258200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x258200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_258204:
    // 0x258204: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x258204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_258208:
    // 0x258208: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x258208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_25820c:
    // 0x25820c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25820cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258210:
    // 0x258210: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x258210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_258214:
    // 0x258214: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x258214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_258218:
    // 0x258218: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x258218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_25821c:
    // 0x25821c: 0x40f809  jalr        $v0
label_258220:
    if (ctx->pc == 0x258220u) {
        ctx->pc = 0x258224u;
        goto label_258224;
    }
    ctx->pc = 0x25821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258224u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25821Cu, 0x258224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258224u;
label_258224:
    // 0x258224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x258224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258228:
    // 0x258228: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_25822c:
    if (ctx->pc == 0x25822Cu) {
        ctx->pc = 0x25822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258228u;
        // 0x25822c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258230u;
        goto label_258230;
    }
    ctx->pc = 0x258228u;
    {
        const bool branch_taken_0x258228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258228u;
        // 0x25822c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258228) {
            ctx->pc = 0x2582A4u;
            goto label_2582a4;
        }
    }
    ctx->pc = 0x258230u;
label_258230:
    // 0x258230: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x258230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_258234:
    // 0x258234: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x258234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_258238:
    // 0x258238: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_25823c:
    if (ctx->pc == 0x25823Cu) {
        ctx->pc = 0x25823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258238u;
        // 0x25823c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258240u;
        goto label_258240;
    }
    ctx->pc = 0x258238u;
    {
        const bool branch_taken_0x258238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258238u;
        // 0x25823c: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258238) {
            ctx->pc = 0x258264u;
            goto label_258264;
        }
    }
    ctx->pc = 0x258240u;
label_258240:
    // 0x258240: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x258240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_258244:
    // 0x258244: 0x40f809  jalr        $v0
label_258248:
    if (ctx->pc == 0x258248u) {
        ctx->pc = 0x258248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258244u;
        // 0x258248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25824Cu;
        goto label_25824c;
    }
    ctx->pc = 0x258244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25824Cu);
        ctx->pc = 0x258248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258244u;
        // 0x258248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258244u, 0x25824Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25824Cu;
label_25824c:
    // 0x25824c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x25824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_258250:
    // 0x258250: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x258250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258254:
    // 0x258254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x258254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_258258:
    // 0x258258: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x258258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_25825c:
    // 0x25825c: 0x10000011  b           . + 4 + (0x11 << 2)
label_258260:
    if (ctx->pc == 0x258260u) {
        ctx->pc = 0x258260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25825Cu;
        // 0x258260: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258264u;
        goto label_258264;
    }
    ctx->pc = 0x25825Cu;
    {
        const bool branch_taken_0x25825c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25825Cu;
        // 0x258260: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25825c) {
            ctx->pc = 0x2582A4u;
            goto label_2582a4;
        }
    }
    ctx->pc = 0x258264u;
label_258264:
    // 0x258264: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x258264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_258268:
    // 0x258268: 0x40f809  jalr        $v0
label_25826c:
    if (ctx->pc == 0x25826Cu) {
        ctx->pc = 0x25826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258268u;
        // 0x25826c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258270u;
        goto label_258270;
    }
    ctx->pc = 0x258268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258270u);
        ctx->pc = 0x25826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258268u;
        // 0x25826c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258268u, 0x258270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258270u;
label_258270:
    // 0x258270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x258270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_258274:
    // 0x258274: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x258274u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_258278:
    // 0x258278: 0xc08a1f2  jal         func_2287C8
label_25827c:
    if (ctx->pc == 0x25827Cu) {
        ctx->pc = 0x25827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258278u;
        // 0x25827c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258280u;
        goto label_258280;
    }
    ctx->pc = 0x258278u;
    SET_GPR_U32(ctx, 31, 0x258280u);
    ctx->pc = 0x25827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258278u;
    // 0x25827c: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x258278u, 0x258280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258280u;
label_258280:
    // 0x258280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x258280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_258284:
    // 0x258284: 0xc0f70ce  jal         func_3DC338
label_258288:
    if (ctx->pc == 0x258288u) {
        ctx->pc = 0x258288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258284u;
        // 0x258288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25828Cu;
        goto label_25828c;
    }
    ctx->pc = 0x258284u;
    SET_GPR_U32(ctx, 31, 0x25828Cu);
    ctx->pc = 0x258288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258284u;
    // 0x258288: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x258284u, 0x25828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25828Cu;
label_25828c:
    // 0x25828c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_258290:
    if (ctx->pc == 0x258290u) {
        ctx->pc = 0x258290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25828Cu;
        // 0x258290: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258294u;
        goto label_258294;
    }
    ctx->pc = 0x25828Cu;
    {
        const bool branch_taken_0x25828c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x258290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25828Cu;
        // 0x258290: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25828c) {
            ctx->pc = 0x2582A0u;
            goto label_2582a0;
        }
    }
    ctx->pc = 0x258294u;
label_258294:
    // 0x258294: 0xc0c4900  jal         func_312400
label_258298:
    if (ctx->pc == 0x258298u) {
        ctx->pc = 0x258298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258294u;
        // 0x258298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25829Cu;
        goto label_25829c;
    }
    ctx->pc = 0x258294u;
    SET_GPR_U32(ctx, 31, 0x25829Cu);
    ctx->pc = 0x258298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x258294u;
    // 0x258298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x258294u, 0x25829Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25829Cu;
label_25829c:
    // 0x25829c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x25829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2582a0:
    // 0x2582a0: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x2582a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_2582a4:
    // 0x2582a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2582a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2582a8:
    // 0x2582a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2582a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2582ac:
    // 0x2582ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2582acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2582b0:
    // 0x2582b0: 0x3e00008  jr          $ra
label_2582b4:
    if (ctx->pc == 0x2582B4u) {
        ctx->pc = 0x2582B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B0u;
        // 0x2582b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2582B8u;
        goto label_fallthrough_0x2582b0;
    }
    ctx->pc = 0x2582B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2582B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2582B0u;
        // 0x2582b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2582B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2582b0:
    ctx->pc = 0x2582B8u;
}
