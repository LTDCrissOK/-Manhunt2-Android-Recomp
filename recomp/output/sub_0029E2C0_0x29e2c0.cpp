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

// Function: sub_0029E2C0
// Address: 0x29e2c0 - 0x29e430
void sub_0029E2C0_0x29e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E2C0_0x29e2c0");
#endif

    switch (ctx->pc) {
        case 0x29e2fcu: goto label_29e2fc;
        case 0x29e310u: goto label_29e310;
        case 0x29e328u: goto label_29e328;
        case 0x29e338u: goto label_29e338;
        case 0x29e34cu: goto label_29e34c;
        case 0x29e398u: goto label_29e398;
        case 0x29e3a8u: goto label_29e3a8;
        case 0x29e3bcu: goto label_29e3bc;
        case 0x29e400u: goto label_29e400;
        default: break;
    }

    ctx->pc = 0x29e2c0u;

    // 0x29e2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29e2c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29e2c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29e2cc: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50
    ctx->pc = 0x29e2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    // 0x29e2d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e2d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e2d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29e2dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29e2e0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29e2e4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29e2e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29e2ec: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29e2f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29e2f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E2F4u;
    SET_GPR_U32(ctx, 31, 0x29E2FCu);
    ctx->pc = 0x29E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E2F4u;
    // 0x29e2f8: 0x26440238  addiu       $a0, $s2, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E2F4u, 0x29E2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E2FCu;
label_29e2fc:
    // 0x29e2fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e300: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x29E300u;
    {
        const bool branch_taken_0x29e300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E300u;
        // 0x29e304: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e300) {
            ctx->pc = 0x29E404u;
            goto label_29e404;
        }
    }
    ctx->pc = 0x29E308u;
    // 0x29e308: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x29E308u;
    SET_GPR_U32(ctx, 31, 0x29E310u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x29E308u, 0x29E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E310u;
label_29e310:
    // 0x29e310: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29E310u;
    {
        const bool branch_taken_0x29e310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E310u;
        // 0x29e314: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e310) {
            ctx->pc = 0x29E388u;
            goto label_29e388;
        }
    }
    ctx->pc = 0x29E318u;
    // 0x29e318: 0x26550014  addiu       $s5, $s2, 0x14
    ctx->pc = 0x29e318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x29e31c: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x29e31cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x29e320: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x29e320u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29e324: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x29e324u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29e328:
    // 0x29e328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e32c: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x29e32cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e330: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x29e330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29e334: 0x0  nop
    ctx->pc = 0x29e334u;
    // NOP
label_29e338:
    // 0x29e338: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29e338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e33c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E33Cu;
    {
        const bool branch_taken_0x29e33c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e33c) {
            ctx->pc = 0x29E340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E33Cu;
            // 0x29e340: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E364u;
            goto label_29e364;
        }
    }
    ctx->pc = 0x29E344u;
    // 0x29e344: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E344u;
    SET_GPR_U32(ctx, 31, 0x29E34Cu);
    ctx->pc = 0x29E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E344u;
    // 0x29e348: 0x26c5c3c0  addiu       $a1, $s6, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E344u, 0x29E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E34Cu;
label_29e34c:
    // 0x29e34c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e350: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E350u;
    {
        const bool branch_taken_0x29e350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e350) {
            ctx->pc = 0x29E354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E350u;
            // 0x29e354: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E364u;
            goto label_29e364;
        }
    }
    ctx->pc = 0x29E358u;
    // 0x29e358: 0xae530208  sw          $s3, 0x208($s2)
    ctx->pc = 0x29e358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
    // 0x29e35c: 0xae51020c  sw          $s1, 0x20C($s2)
    ctx->pc = 0x29e35cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
    // 0x29e360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e364:
    // 0x29e364: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29e364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29e368: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29E368u;
    {
        const bool branch_taken_0x29e368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E368u;
        // 0x29e36c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e368) {
            ctx->pc = 0x29E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e338;
        }
    }
    ctx->pc = 0x29E370u;
    // 0x29e370: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x29e370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e374: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29e374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29e378: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29E378u;
    {
        const bool branch_taken_0x29e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E378u;
        // 0x29e37c: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e378) {
            ctx->pc = 0x29E328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e328;
        }
    }
    ctx->pc = 0x29E380u;
    // 0x29e380: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x29E380u;
    {
        const bool branch_taken_0x29e380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E380u;
        // 0x29e384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e380) {
            ctx->pc = 0x29E3F4u;
            goto label_29e3f4;
        }
    }
    ctx->pc = 0x29E388u;
label_29e388:
    // 0x29e388: 0x26550014  addiu       $s5, $s2, 0x14
    ctx->pc = 0x29e388u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x29e38c: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x29e38cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x29e390: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x29e390u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29e394: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x29e394u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29e398:
    // 0x29e398: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e39c: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x29e39cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e3a0: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x29e3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29e3a4: 0x0  nop
    ctx->pc = 0x29e3a4u;
    // NOP
label_29e3a8:
    // 0x29e3a8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29e3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e3ac: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E3ACu;
    {
        const bool branch_taken_0x29e3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e3ac) {
            ctx->pc = 0x29E3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E3ACu;
            // 0x29e3b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E3D4u;
            goto label_29e3d4;
        }
    }
    ctx->pc = 0x29E3B4u;
    // 0x29e3b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E3B4u;
    SET_GPR_U32(ctx, 31, 0x29E3BCu);
    ctx->pc = 0x29E3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3B4u;
    // 0x29e3b8: 0x26c5c3e0  addiu       $a1, $s6, -0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E3B4u, 0x29E3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E3BCu;
label_29e3bc:
    // 0x29e3bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e3c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E3C0u;
    {
        const bool branch_taken_0x29e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e3c0) {
            ctx->pc = 0x29E3C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E3C0u;
            // 0x29e3c4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E3D4u;
            goto label_29e3d4;
        }
    }
    ctx->pc = 0x29E3C8u;
    // 0x29e3c8: 0xae530208  sw          $s3, 0x208($s2)
    ctx->pc = 0x29e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
    // 0x29e3cc: 0xae51020c  sw          $s1, 0x20C($s2)
    ctx->pc = 0x29e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
    // 0x29e3d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e3d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e3d4:
    // 0x29e3d4: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29e3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29e3d8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29E3D8u;
    {
        const bool branch_taken_0x29e3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3D8u;
        // 0x29e3dc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3d8) {
            ctx->pc = 0x29E3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e3a8;
        }
    }
    ctx->pc = 0x29E3E0u;
    // 0x29e3e0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x29e3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e3e4: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29e3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29e3e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29E3E8u;
    {
        const bool branch_taken_0x29e3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E3E8u;
        // 0x29e3ec: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3e8) {
            ctx->pc = 0x29E398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e398;
        }
    }
    ctx->pc = 0x29E3F0u;
    // 0x29e3f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e3f4:
    // 0x29e3f4: 0x8c850208  lw          $a1, 0x208($a0)
    ctx->pc = 0x29e3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
    // 0x29e3f8: 0xc0a7c20  jal         func_29F080
    ctx->pc = 0x29E3F8u;
    SET_GPR_U32(ctx, 31, 0x29E400u);
    ctx->pc = 0x29E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E3F8u;
    // 0x29e3fc: 0x8c86020c  lw          $a2, 0x20C($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F080u, 0x29E3F8u, 0x29E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E400u;
label_29e400:
    // 0x29e400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e404:
    // 0x29e404: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e404u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e408: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e40c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e40cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e410: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e414: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e414u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29e418: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e418u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e41c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29e41cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e420: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e424: 0x3e00008  jr          $ra
    ctx->pc = 0x29E424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E424u;
        // 0x29e428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E42Cu;
    // 0x29e42c: 0x0  nop
    ctx->pc = 0x29e42cu;
    // NOP
    ctx->pc = 0x29e430u;
}
