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

// Function: sub_0029E0B8
// Address: 0x29e0b8 - 0x29e270
void sub_0029E0B8_0x29e0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E0B8_0x29e0b8");
#endif

    switch (ctx->pc) {
        case 0x29e0f4u: goto label_29e0f4;
        case 0x29e108u: goto label_29e108;
        case 0x29e120u: goto label_29e120;
        case 0x29e130u: goto label_29e130;
        case 0x29e144u: goto label_29e144;
        case 0x29e190u: goto label_29e190;
        case 0x29e1a0u: goto label_29e1a0;
        case 0x29e1b4u: goto label_29e1b4;
        case 0x29e1f0u: goto label_29e1f0;
        case 0x29e200u: goto label_29e200;
        case 0x29e208u: goto label_29e208;
        case 0x29e21cu: goto label_29e21c;
        default: break;
    }

    ctx->pc = 0x29e0b8u;

    // 0x29e0b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29e0bc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29e0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29e0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29e0c4: 0x24a5c3b0  addiu       $a1, $a1, -0x3C50
    ctx->pc = 0x29e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951856));
    // 0x29e0c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29e0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29e0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29e0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29e0d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29e0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29e0d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29e0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29e0dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29e0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29e0e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x29e0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x29e0e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x29e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x29e0e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29e0ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E0ECu;
    SET_GPR_U32(ctx, 31, 0x29E0F4u);
    ctx->pc = 0x29E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E0ECu;
    // 0x29e0f0: 0x26440238  addiu       $a0, $s2, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E0ECu, 0x29E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E0F4u;
label_29e0f4:
    // 0x29e0f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e0f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e0f8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x29E0F8u;
    {
        const bool branch_taken_0x29e0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E0F8u;
        // 0x29e0fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e0f8) {
            ctx->pc = 0x29E1F8u;
            goto label_29e1f8;
        }
    }
    ctx->pc = 0x29E100u;
    // 0x29e100: 0xc0a21a2  jal         func_288688
    ctx->pc = 0x29E100u;
    SET_GPR_U32(ctx, 31, 0x29E108u);
    ctx->pc = 0x288688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288688u, 0x29E100u, 0x29E108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E108u;
label_29e108:
    // 0x29e108: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x29E108u;
    {
        const bool branch_taken_0x29e108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E108u;
        // 0x29e10c: 0x26550014  addiu       $s5, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e108) {
            ctx->pc = 0x29E180u;
            goto label_29e180;
        }
    }
    ctx->pc = 0x29E110u;
    // 0x29e110: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x29e110u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e114: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x29e114u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x29e118: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x29e118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29e11c: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x29e11cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_29e120:
    // 0x29e120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e124: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x29e124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e128: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x29e128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29e12c: 0x0  nop
    ctx->pc = 0x29e12cu;
    // NOP
label_29e130:
    // 0x29e130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29e130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e134: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E134u;
    {
        const bool branch_taken_0x29e134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e134) {
            ctx->pc = 0x29E138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E134u;
            // 0x29e138: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E15Cu;
            goto label_29e15c;
        }
    }
    ctx->pc = 0x29E13Cu;
    // 0x29e13c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E13Cu;
    SET_GPR_U32(ctx, 31, 0x29E144u);
    ctx->pc = 0x29E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E13Cu;
    // 0x29e140: 0x26c5c3c0  addiu       $a1, $s6, -0x3C40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E13Cu, 0x29E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E144u;
label_29e144:
    // 0x29e144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e148: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E148u;
    {
        const bool branch_taken_0x29e148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e148) {
            ctx->pc = 0x29E14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E148u;
            // 0x29e14c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E15Cu;
            goto label_29e15c;
        }
    }
    ctx->pc = 0x29E150u;
    // 0x29e150: 0xae530208  sw          $s3, 0x208($s2)
    ctx->pc = 0x29e150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
    // 0x29e154: 0xae51020c  sw          $s1, 0x20C($s2)
    ctx->pc = 0x29e154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
    // 0x29e158: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e158u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e15c:
    // 0x29e15c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29e15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29e160: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29E160u;
    {
        const bool branch_taken_0x29e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E160u;
        // 0x29e164: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e160) {
            ctx->pc = 0x29E130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e130;
        }
    }
    ctx->pc = 0x29E168u;
    // 0x29e168: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x29e168u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e16c: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29e16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29e170: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29E170u;
    {
        const bool branch_taken_0x29e170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E170u;
        // 0x29e174: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e170) {
            ctx->pc = 0x29E120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e120;
        }
    }
    ctx->pc = 0x29E178u;
    // 0x29e178: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x29E178u;
    {
        const bool branch_taken_0x29e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E178u;
        // 0x29e17c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e178) {
            ctx->pc = 0x29E248u;
            goto label_29e248;
        }
    }
    ctx->pc = 0x29E180u;
label_29e180:
    // 0x29e180: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x29e180u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x29e184: 0x24170014  addiu       $s7, $zero, 0x14
    ctx->pc = 0x29e184u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29e188: 0x2771018  mult        $v0, $s3, $s7
    ctx->pc = 0x29e188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29e18c: 0x0  nop
    ctx->pc = 0x29e18cu;
    // NOP
label_29e190:
    // 0x29e190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e194: 0x26740001  addiu       $s4, $s3, 0x1
    ctx->pc = 0x29e194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e198: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x29e198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x29e19c: 0x0  nop
    ctx->pc = 0x29e19cu;
    // NOP
label_29e1a0:
    // 0x29e1a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e1a4: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29E1A4u;
    {
        const bool branch_taken_0x29e1a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1a4) {
            ctx->pc = 0x29E1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E1A4u;
            // 0x29e1a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1CCu;
            goto label_29e1cc;
        }
    }
    ctx->pc = 0x29E1ACu;
    // 0x29e1ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29E1ACu;
    SET_GPR_U32(ctx, 31, 0x29E1B4u);
    ctx->pc = 0x29E1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E1ACu;
    // 0x29e1b0: 0x26c5c3e0  addiu       $a1, $s6, -0x3C20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294951904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29E1ACu, 0x29E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E1B4u;
label_29e1b4:
    // 0x29e1b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29e1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29e1b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E1B8u;
    {
        const bool branch_taken_0x29e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e1b8) {
            ctx->pc = 0x29E1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E1B8u;
            // 0x29e1bc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1CCu;
            goto label_29e1cc;
        }
    }
    ctx->pc = 0x29E1C0u;
    // 0x29e1c0: 0xae530208  sw          $s3, 0x208($s2)
    ctx->pc = 0x29e1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
    // 0x29e1c4: 0xae51020c  sw          $s1, 0x20C($s2)
    ctx->pc = 0x29e1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
    // 0x29e1c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e1cc:
    // 0x29e1cc: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29e1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29e1d0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x29E1D0u;
    {
        const bool branch_taken_0x29e1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1D0u;
        // 0x29e1d4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1d0) {
            ctx->pc = 0x29E1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e1a0;
        }
    }
    ctx->pc = 0x29E1D8u;
    // 0x29e1d8: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x29e1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e1dc: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29e1dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29e1e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29E1E0u;
    {
        const bool branch_taken_0x29e1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1E0u;
        // 0x29e1e4: 0x2771018  mult        $v0, $s3, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1e0) {
            ctx->pc = 0x29E190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e190;
        }
    }
    ctx->pc = 0x29E1E8u;
    // 0x29e1e8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x29E1E8u;
    {
        const bool branch_taken_0x29e1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1E8u;
        // 0x29e1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1e8) {
            ctx->pc = 0x29E248u;
            goto label_29e248;
        }
    }
    ctx->pc = 0x29E1F0u;
label_29e1f0:
    // 0x29e1f0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29E1F0u;
    {
        const bool branch_taken_0x29e1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E1F0u;
        // 0x29e1f4: 0xae530208  sw          $s3, 0x208($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 520), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e1f0) {
            ctx->pc = 0x29E244u;
            goto label_29e244;
        }
    }
    ctx->pc = 0x29E1F8u;
label_29e1f8:
    // 0x29e1f8: 0x26550014  addiu       $s5, $s2, 0x14
    ctx->pc = 0x29e1f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x29e1fc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x29e1fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e200:
    // 0x29e200: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29e200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e204: 0x2958021  addu        $s0, $s4, $s5
    ctx->pc = 0x29e204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_29e208:
    // 0x29e208: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x29e208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29e20c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29E20Cu;
    {
        const bool branch_taken_0x29e20c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e20c) {
            ctx->pc = 0x29E210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E20Cu;
            // 0x29e210: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E228u;
            goto label_29e228;
        }
    }
    ctx->pc = 0x29E214u;
    // 0x29e214: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29E214u;
    SET_GPR_U32(ctx, 31, 0x29E21Cu);
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29E214u, 0x29E21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29E21Cu;
label_29e21c:
    // 0x29e21c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x29E21Cu;
    {
        const bool branch_taken_0x29e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e21c) {
            ctx->pc = 0x29E220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E21Cu;
            // 0x29e220: 0xae51020c  sw          $s1, 0x20C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 524), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e1f0;
        }
    }
    ctx->pc = 0x29E224u;
    // 0x29e224: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e228:
    // 0x29e228: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x29e228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29e22c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29E22Cu;
    {
        const bool branch_taken_0x29e22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E22Cu;
        // 0x29e230: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e22c) {
            ctx->pc = 0x29E208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e208;
        }
    }
    ctx->pc = 0x29E234u;
    // 0x29e234: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29e234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x29e238: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x29e238u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x29e23c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x29E23Cu;
    {
        const bool branch_taken_0x29e23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E23Cu;
        // 0x29e240: 0x26940014  addiu       $s4, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e23c) {
            ctx->pc = 0x29E200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e200;
        }
    }
    ctx->pc = 0x29E244u;
label_29e244:
    // 0x29e244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e248:
    // 0x29e248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29e248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29e24c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29e24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29e250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29e254: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29e254u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e258: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29e258u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29e25c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x29e25cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e260: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x29e260u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29e264: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e268: 0x3e00008  jr          $ra
    ctx->pc = 0x29E268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E268u;
        // 0x29e26c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E270u;
}
