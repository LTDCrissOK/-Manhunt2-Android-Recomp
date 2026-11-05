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

// Function: sub_0019C1C0
// Address: 0x19c1c0 - 0x19c298
void sub_0019C1C0_0x19c1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C1C0_0x19c1c0");
#endif

    switch (ctx->pc) {
        case 0x19c1c0u: goto label_19c1c0;
        case 0x19c1c4u: goto label_19c1c4;
        case 0x19c1c8u: goto label_19c1c8;
        case 0x19c1ccu: goto label_19c1cc;
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        case 0x19c278u: goto label_19c278;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c280u: goto label_19c280;
        case 0x19c284u: goto label_19c284;
        case 0x19c288u: goto label_19c288;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c290u: goto label_19c290;
        case 0x19c294u: goto label_19c294;
        default: break;
    }

    ctx->pc = 0x19c1c0u;

label_19c1c0:
    // 0x19c1c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19c1c4:
    // 0x19c1c4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x19c1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_19c1c8:
    // 0x19c1c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19c1cc:
    // 0x19c1cc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x19c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_19c1d0:
    // 0x19c1d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c1d4:
    // 0x19c1d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19c1d8:
    // 0x19c1d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19c1dc:
    // 0x19c1dc: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19c1e0:
    // 0x19c1e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c1e4:
    // 0x19c1e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c1e8:
    // 0x19c1e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c1ec:
    // 0x19c1ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c1f0:
    // 0x19c1f0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c1f4:
    // 0x19c1f4: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19c1f8:
    // 0x19c1f8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x19c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_19c1fc:
    // 0x19c1fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c200:
    // 0x19c200: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x19c200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
label_19c204:
    // 0x19c204: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19c204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19c208:
    // 0x19c208: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19c20c:
    if (ctx->pc == 0x19C20Cu) {
        ctx->pc = 0x19C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C208u;
        // 0x19c20c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C210u;
        goto label_19c210;
    }
    ctx->pc = 0x19C208u;
    {
        const bool branch_taken_0x19c208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c208) {
            ctx->pc = 0x19C20Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C208u;
            // 0x19c20c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C224u;
            goto label_19c224;
        }
    }
    ctx->pc = 0x19C210u;
label_19c210:
    // 0x19c210: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c214:
    // 0x19c214: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c218:
    // 0x19c218: 0x40f809  jalr        $v0
label_19c21c:
    if (ctx->pc == 0x19C21Cu) {
        ctx->pc = 0x19C220u;
        goto label_19c220;
    }
    ctx->pc = 0x19C218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C220u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C218u, 0x19C220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C220u;
label_19c220:
    // 0x19c220: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19c220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19c224:
    // 0x19c224: 0xc061a16  jal         func_186858
label_19c228:
    if (ctx->pc == 0x19C228u) {
        ctx->pc = 0x19C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C224u;
        // 0x19c228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C22Cu;
        goto label_19c22c;
    }
    ctx->pc = 0x19C224u;
    SET_GPR_U32(ctx, 31, 0x19C22Cu);
    ctx->pc = 0x19C228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C224u;
    // 0x19c228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C224u, 0x19C22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C22Cu;
label_19c22c:
    // 0x19c22c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c230:
    // 0x19c230: 0xc06ee66  jal         func_1BB998
label_19c234:
    if (ctx->pc == 0x19C234u) {
        ctx->pc = 0x19C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C230u;
        // 0x19c234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C238u;
        goto label_19c238;
    }
    ctx->pc = 0x19C230u;
    SET_GPR_U32(ctx, 31, 0x19C238u);
    ctx->pc = 0x19C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C230u;
    // 0x19c234: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x19C230u, 0x19C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C238u;
label_19c238:
    // 0x19c238: 0xc061a16  jal         func_186858
label_19c23c:
    if (ctx->pc == 0x19C23Cu) {
        ctx->pc = 0x19C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C238u;
        // 0x19c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C240u;
        goto label_19c240;
    }
    ctx->pc = 0x19C238u;
    SET_GPR_U32(ctx, 31, 0x19C240u);
    ctx->pc = 0x19C23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C238u;
    // 0x19c23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C238u, 0x19C240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C240u;
label_19c240:
    // 0x19c240: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19c244:
    // 0x19c244: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c248:
    // 0x19c248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c24c:
    // 0x19c24c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19c24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19c250:
    // 0x19c250: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19c250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19c254:
    // 0x19c254: 0xc06faee  jal         func_1BEBB8
label_19c258:
    if (ctx->pc == 0x19C258u) {
        ctx->pc = 0x19C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C254u;
        // 0x19c258: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C25Cu;
        goto label_19c25c;
    }
    ctx->pc = 0x19C254u;
    SET_GPR_U32(ctx, 31, 0x19C25Cu);
    ctx->pc = 0x19C258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C254u;
    // 0x19c258: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x19C254u, 0x19C25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C25Cu;
label_19c25c:
    // 0x19c25c: 0xc061a12  jal         func_186848
label_19c260:
    if (ctx->pc == 0x19C260u) {
        ctx->pc = 0x19C260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C25Cu;
        // 0x19c260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C264u;
        goto label_19c264;
    }
    ctx->pc = 0x19C25Cu;
    SET_GPR_U32(ctx, 31, 0x19C264u);
    ctx->pc = 0x19C260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C25Cu;
    // 0x19c260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19C25Cu, 0x19C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C264u;
label_19c264:
    // 0x19c264: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_19c268:
    // 0x19c268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19c268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c26c:
    // 0x19c26c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c270:
    // 0x19c270: 0xc07072c  jal         func_1C1CB0
label_19c274:
    if (ctx->pc == 0x19C274u) {
        ctx->pc = 0x19C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C270u;
        // 0x19c274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C278u;
        goto label_19c278;
    }
    ctx->pc = 0x19C270u;
    SET_GPR_U32(ctx, 31, 0x19C278u);
    ctx->pc = 0x19C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C270u;
    // 0x19c274: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1CB0u, 0x19C270u, 0x19C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C278u;
label_19c278:
    // 0x19c278: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19c27c:
    // 0x19c27c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19c27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c280:
    // 0x19c280: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_19c284:
    // 0x19c284: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x19c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19c288:
    // 0x19c288: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19c28c:
    // 0x19c28c: 0x3e00008  jr          $ra
label_19c290:
    if (ctx->pc == 0x19C290u) {
        ctx->pc = 0x19C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C28Cu;
        // 0x19c290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C294u;
        goto label_19c294;
    }
    ctx->pc = 0x19C28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C28Cu;
        // 0x19c290: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C294u;
label_19c294:
    // 0x19c294: 0x0  nop
    ctx->pc = 0x19c294u;
    // NOP
    ctx->pc = 0x19c298u;
}
