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

// Function: sub_0016E198
// Address: 0x16e198 - 0x16e2c0
void sub_0016E198_0x16e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E198_0x16e198");
#endif

    switch (ctx->pc) {
        case 0x16e198u: goto label_16e198;
        case 0x16e19cu: goto label_16e19c;
        case 0x16e1a0u: goto label_16e1a0;
        case 0x16e1a4u: goto label_16e1a4;
        case 0x16e1a8u: goto label_16e1a8;
        case 0x16e1acu: goto label_16e1ac;
        case 0x16e1b0u: goto label_16e1b0;
        case 0x16e1b4u: goto label_16e1b4;
        case 0x16e1b8u: goto label_16e1b8;
        case 0x16e1bcu: goto label_16e1bc;
        case 0x16e1c0u: goto label_16e1c0;
        case 0x16e1c4u: goto label_16e1c4;
        case 0x16e1c8u: goto label_16e1c8;
        case 0x16e1ccu: goto label_16e1cc;
        case 0x16e1d0u: goto label_16e1d0;
        case 0x16e1d4u: goto label_16e1d4;
        case 0x16e1d8u: goto label_16e1d8;
        case 0x16e1dcu: goto label_16e1dc;
        case 0x16e1e0u: goto label_16e1e0;
        case 0x16e1e4u: goto label_16e1e4;
        case 0x16e1e8u: goto label_16e1e8;
        case 0x16e1ecu: goto label_16e1ec;
        case 0x16e1f0u: goto label_16e1f0;
        case 0x16e1f4u: goto label_16e1f4;
        case 0x16e1f8u: goto label_16e1f8;
        case 0x16e1fcu: goto label_16e1fc;
        case 0x16e200u: goto label_16e200;
        case 0x16e204u: goto label_16e204;
        case 0x16e208u: goto label_16e208;
        case 0x16e20cu: goto label_16e20c;
        case 0x16e210u: goto label_16e210;
        case 0x16e214u: goto label_16e214;
        case 0x16e218u: goto label_16e218;
        case 0x16e21cu: goto label_16e21c;
        case 0x16e220u: goto label_16e220;
        case 0x16e224u: goto label_16e224;
        case 0x16e228u: goto label_16e228;
        case 0x16e22cu: goto label_16e22c;
        case 0x16e230u: goto label_16e230;
        case 0x16e234u: goto label_16e234;
        case 0x16e238u: goto label_16e238;
        case 0x16e23cu: goto label_16e23c;
        case 0x16e240u: goto label_16e240;
        case 0x16e244u: goto label_16e244;
        case 0x16e248u: goto label_16e248;
        case 0x16e24cu: goto label_16e24c;
        case 0x16e250u: goto label_16e250;
        case 0x16e254u: goto label_16e254;
        case 0x16e258u: goto label_16e258;
        case 0x16e25cu: goto label_16e25c;
        case 0x16e260u: goto label_16e260;
        case 0x16e264u: goto label_16e264;
        case 0x16e268u: goto label_16e268;
        case 0x16e26cu: goto label_16e26c;
        case 0x16e270u: goto label_16e270;
        case 0x16e274u: goto label_16e274;
        case 0x16e278u: goto label_16e278;
        case 0x16e27cu: goto label_16e27c;
        case 0x16e280u: goto label_16e280;
        case 0x16e284u: goto label_16e284;
        case 0x16e288u: goto label_16e288;
        case 0x16e28cu: goto label_16e28c;
        case 0x16e290u: goto label_16e290;
        case 0x16e294u: goto label_16e294;
        case 0x16e298u: goto label_16e298;
        case 0x16e29cu: goto label_16e29c;
        case 0x16e2a0u: goto label_16e2a0;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2a8u: goto label_16e2a8;
        case 0x16e2acu: goto label_16e2ac;
        case 0x16e2b0u: goto label_16e2b0;
        case 0x16e2b4u: goto label_16e2b4;
        case 0x16e2b8u: goto label_16e2b8;
        case 0x16e2bcu: goto label_16e2bc;
        default: break;
    }

    ctx->pc = 0x16e198u;

label_16e198:
    // 0x16e198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e19c:
    // 0x16e19c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16e1a0:
    // 0x16e1a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e1a4:
    // 0x16e1a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e1a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e1a8:
    // 0x16e1a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16e1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16e1ac:
    // 0x16e1ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16e1b0:
    // 0x16e1b0: 0xc05a618  jal         func_169860
label_16e1b4:
    if (ctx->pc == 0x16E1B4u) {
        ctx->pc = 0x16E1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1B0u;
        // 0x16e1b4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1B8u;
        goto label_16e1b8;
    }
    ctx->pc = 0x16E1B0u;
    SET_GPR_U32(ctx, 31, 0x16E1B8u);
    ctx->pc = 0x16E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1B0u;
    // 0x16e1b4: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16E1B0u, 0x16E1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1B8u;
label_16e1b8:
    // 0x16e1b8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_16e1bc:
    if (ctx->pc == 0x16E1BCu) {
        ctx->pc = 0x16E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1B8u;
        // 0x16e1bc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1C0u;
        goto label_16e1c0;
    }
    ctx->pc = 0x16E1B8u;
    {
        const bool branch_taken_0x16e1b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1B8u;
        // 0x16e1bc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1b8) {
            ctx->pc = 0x16E2A0u;
            goto label_16e2a0;
        }
    }
    ctx->pc = 0x16E1C0u;
label_16e1c0:
    // 0x16e1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e1c4:
    // 0x16e1c4: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x16e1c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_16e1c8:
    // 0x16e1c8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16e1cc:
    // 0x16e1cc: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16e1ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16e1d0:
    // 0x16e1d0: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_16e1d4:
    if (ctx->pc == 0x16E1D4u) {
        ctx->pc = 0x16E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D0u;
        // 0x16e1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1D8u;
        goto label_16e1d8;
    }
    ctx->pc = 0x16E1D0u;
    {
        const bool branch_taken_0x16e1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D0u;
        // 0x16e1d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1d0) {
            ctx->pc = 0x16E2A4u;
            goto label_16e2a4;
        }
    }
    ctx->pc = 0x16E1D8u;
label_16e1d8:
    // 0x16e1d8: 0xc043958  jal         func_10E560
label_16e1dc:
    if (ctx->pc == 0x16E1DCu) {
        ctx->pc = 0x16E1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1D8u;
        // 0x16e1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1E0u;
        goto label_16e1e0;
    }
    ctx->pc = 0x16E1D8u;
    SET_GPR_U32(ctx, 31, 0x16E1E0u);
    ctx->pc = 0x16E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1D8u;
    // 0x16e1dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16E1D8u, 0x16E1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1E0u;
label_16e1e0:
    // 0x16e1e0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_16e1e4:
    if (ctx->pc == 0x16E1E4u) {
        ctx->pc = 0x16E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1E0u;
        // 0x16e1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1E8u;
        goto label_16e1e8;
    }
    ctx->pc = 0x16E1E0u;
    {
        const bool branch_taken_0x16e1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1E0u;
        // 0x16e1e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e1e0) {
            ctx->pc = 0x16E2A4u;
            goto label_16e2a4;
        }
    }
    ctx->pc = 0x16E1E8u;
label_16e1e8:
    // 0x16e1e8: 0xc04393c  jal         func_10E4F0
label_16e1ec:
    if (ctx->pc == 0x16E1ECu) {
        ctx->pc = 0x16E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E1E8u;
        // 0x16e1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E1F0u;
        goto label_16e1f0;
    }
    ctx->pc = 0x16E1E8u;
    SET_GPR_U32(ctx, 31, 0x16E1F0u);
    ctx->pc = 0x16E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E1E8u;
    // 0x16e1ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16E1E8u, 0x16E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1F0u;
label_16e1f0:
    // 0x16e1f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e1f4:
    // 0x16e1f4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16e1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16e1f8:
    // 0x16e1f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e1fc:
    // 0x16e1fc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16e200:
    // 0x16e200: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16e200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_16e204:
    // 0x16e204: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_16e208:
    if (ctx->pc == 0x16E208u) {
        ctx->pc = 0x16E208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E204u;
        // 0x16e208: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E20Cu;
        goto label_16e20c;
    }
    ctx->pc = 0x16E204u;
    {
        const bool branch_taken_0x16e204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e204) {
            ctx->pc = 0x16E208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E204u;
            // 0x16e208: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E214u;
            goto label_16e214;
        }
    }
    ctx->pc = 0x16E20Cu;
label_16e20c:
    // 0x16e20c: 0x10000003  b           . + 4 + (0x3 << 2)
label_16e210:
    if (ctx->pc == 0x16E210u) {
        ctx->pc = 0x16E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E20Cu;
        // 0x16e210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E214u;
        goto label_16e214;
    }
    ctx->pc = 0x16E20Cu;
    {
        const bool branch_taken_0x16e20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E20Cu;
        // 0x16e210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e20c) {
            ctx->pc = 0x16E21Cu;
            goto label_16e21c;
        }
    }
    ctx->pc = 0x16E214u;
label_16e214:
    // 0x16e214: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e218:
    // 0x16e218: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x16e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16e21c:
    // 0x16e21c: 0xc040dae  jal         func_1036B8
label_16e220:
    if (ctx->pc == 0x16E220u) {
        ctx->pc = 0x16E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E21Cu;
        // 0x16e220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E224u;
        goto label_16e224;
    }
    ctx->pc = 0x16E21Cu;
    SET_GPR_U32(ctx, 31, 0x16E224u);
    ctx->pc = 0x16E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E21Cu;
    // 0x16e220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036B8u, 0x16E21Cu, 0x16E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E224u;
label_16e224:
    // 0x16e224: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e224u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e228:
    // 0x16e228: 0x5240001e  beql        $s2, $zero, . + 4 + (0x1E << 2)
label_16e22c:
    if (ctx->pc == 0x16E22Cu) {
        ctx->pc = 0x16E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E228u;
        // 0x16e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E230u;
        goto label_16e230;
    }
    ctx->pc = 0x16E228u;
    {
        const bool branch_taken_0x16e228 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e228) {
            ctx->pc = 0x16E22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E228u;
            // 0x16e22c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E2A4u;
            goto label_16e2a4;
        }
    }
    ctx->pc = 0x16E230u;
label_16e230:
    // 0x16e230: 0xc04f9a4  jal         func_13E690
label_16e234:
    if (ctx->pc == 0x16E234u) {
        ctx->pc = 0x16E234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E230u;
        // 0x16e234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E238u;
        goto label_16e238;
    }
    ctx->pc = 0x16E230u;
    SET_GPR_U32(ctx, 31, 0x16E238u);
    ctx->pc = 0x16E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E230u;
    // 0x16e234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16E230u, 0x16E238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E238u;
label_16e238:
    // 0x16e238: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x16e238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16e23c:
    // 0x16e23c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e240:
    // 0x16e240: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x16e240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_16e244:
    // 0x16e244: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16e248:
    // 0x16e248: 0xc04f8fc  jal         func_13E3F0
label_16e24c:
    if (ctx->pc == 0x16E24Cu) {
        ctx->pc = 0x16E24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E248u;
        // 0x16e24c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E250u;
        goto label_16e250;
    }
    ctx->pc = 0x16E248u;
    SET_GPR_U32(ctx, 31, 0x16E250u);
    ctx->pc = 0x16E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E248u;
    // 0x16e24c: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E248u, 0x16E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E250u;
label_16e250:
    // 0x16e250: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e254:
    // 0x16e254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e258:
    // 0x16e258: 0xc045fea  jal         func_117FA8
label_16e25c:
    if (ctx->pc == 0x16E25Cu) {
        ctx->pc = 0x16E25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E258u;
        // 0x16e25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E260u;
        goto label_16e260;
    }
    ctx->pc = 0x16E258u;
    SET_GPR_U32(ctx, 31, 0x16E260u);
    ctx->pc = 0x16E25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E258u;
    // 0x16e25c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16E258u, 0x16E260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E260u;
label_16e260:
    // 0x16e260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e264:
    // 0x16e264: 0xc046104  jal         func_118410
label_16e268:
    if (ctx->pc == 0x16E268u) {
        ctx->pc = 0x16E268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E264u;
        // 0x16e268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E26Cu;
        goto label_16e26c;
    }
    ctx->pc = 0x16E264u;
    SET_GPR_U32(ctx, 31, 0x16E26Cu);
    ctx->pc = 0x16E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E264u;
    // 0x16e268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16E264u, 0x16E26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E26Cu;
label_16e26c:
    // 0x16e26c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16e270:
    // 0x16e270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e274:
    // 0x16e274: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_16e278:
    // 0x16e278: 0xc046190  jal         func_118640
label_16e27c:
    if (ctx->pc == 0x16E27Cu) {
        ctx->pc = 0x16E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E278u;
        // 0x16e27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E280u;
        goto label_16e280;
    }
    ctx->pc = 0x16E278u;
    SET_GPR_U32(ctx, 31, 0x16E280u);
    ctx->pc = 0x16E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E278u;
    // 0x16e27c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x16E278u, 0x16E280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E280u;
label_16e280:
    // 0x16e280: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16e280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_16e284:
    // 0x16e284: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e288:
    // 0x16e288: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e28c:
    // 0x16e28c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e290:
    // 0x16e290: 0x40f809  jalr        $v0
label_16e294:
    if (ctx->pc == 0x16E294u) {
        ctx->pc = 0x16E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E290u;
        // 0x16e294: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E298u;
        goto label_16e298;
    }
    ctx->pc = 0x16E290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E298u);
        ctx->pc = 0x16E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E290u;
        // 0x16e294: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E290u, 0x16E298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E298u;
label_16e298:
    // 0x16e298: 0x10000002  b           . + 4 + (0x2 << 2)
label_16e29c:
    if (ctx->pc == 0x16E29Cu) {
        ctx->pc = 0x16E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E298u;
        // 0x16e29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2A0u;
        goto label_16e2a0;
    }
    ctx->pc = 0x16E298u;
    {
        const bool branch_taken_0x16e298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E298u;
        // 0x16e29c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e298) {
            ctx->pc = 0x16E2A4u;
            goto label_16e2a4;
        }
    }
    ctx->pc = 0x16E2A0u;
label_16e2a0:
    // 0x16e2a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16e2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e2a4:
    // 0x16e2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e2a8:
    // 0x16e2a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e2ac:
    // 0x16e2ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16e2acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e2b0:
    // 0x16e2b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16e2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16e2b4:
    // 0x16e2b4: 0x3e00008  jr          $ra
label_16e2b8:
    if (ctx->pc == 0x16E2B8u) {
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E2BCu;
        goto label_16e2bc;
    }
    ctx->pc = 0x16E2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E2B4u;
        // 0x16e2b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E2BCu;
label_16e2bc:
    // 0x16e2bc: 0x0  nop
    ctx->pc = 0x16e2bcu;
    // NOP
    ctx->pc = 0x16e2c0u;
}
